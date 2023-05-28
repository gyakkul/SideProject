// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/Character.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBasedMovementInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterServerMovePackedBits();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepRootMotionMontage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventMovementModeChangedSignature_Parms
		{
			ACharacter* Character;
			TEnumAsByte<EMovementMode> PrevMovementMode;
			uint8 PreviousCustomMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousCustomMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventMovementModeChangedSignature_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::NewProp_PrevMovementMode = { "PrevMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventMovementModeChangedSignature_Parms, PrevMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) }; // 1544502984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::NewProp_PreviousCustomMode = { "PreviousCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventMovementModeChangedSignature_Parms, PreviousCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::NewProp_PrevMovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::NewProp_PreviousCustomMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "MovementModeChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::_Script_Engine_eventMovementModeChangedSignature_Parms), Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMovementModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedSignature, ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	struct _Script_Engine_eventMovementModeChangedSignature_Parms
	{
		ACharacter* Character;
		TEnumAsByte<EMovementMode> PrevMovementMode;
		uint8 PreviousCustomMode;
	};
	_Script_Engine_eventMovementModeChangedSignature_Parms Parms;
	Parms.Character=Character;
	Parms.PrevMovementMode=PrevMovementMode;
	Parms.PreviousCustomMode=PreviousCustomMode;
	MovementModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventCharacterMovementUpdatedSignature_Parms
		{
			float DeltaSeconds;
			FVector OldLocation;
			FVector OldVelocity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventCharacterMovementUpdatedSignature_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::NewProp_OldLocation = { "OldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventCharacterMovementUpdatedSignature_Parms, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::NewProp_OldVelocity = { "OldVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventCharacterMovementUpdatedSignature_Parms, OldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::NewProp_OldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::NewProp_OldVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "CharacterMovementUpdatedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::_Script_Engine_eventCharacterMovementUpdatedSignature_Parms), Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCharacterMovementUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterMovementUpdatedSignature, float DeltaSeconds, FVector OldLocation, FVector OldVelocity)
{
	struct _Script_Engine_eventCharacterMovementUpdatedSignature_Parms
	{
		float DeltaSeconds;
		FVector OldLocation;
		FVector OldVelocity;
	};
	_Script_Engine_eventCharacterMovementUpdatedSignature_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	Parms.OldLocation=OldLocation;
	Parms.OldVelocity=OldVelocity;
	CharacterMovementUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "CharacterReachedApexSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCharacterReachedApexSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterReachedApexSignature)
{
	CharacterReachedApexSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventLandedSignature_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventLandedSignature_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "LandedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::_Script_Engine_eventLandedSignature_Parms), Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLandedSignature_DelegateWrapper(const FMulticastScriptDelegate& LandedSignature, FHitResult const& Hit)
{
	struct _Script_Engine_eventLandedSignature_Parms
	{
		FHitResult Hit;
	};
	_Script_Engine_eventLandedSignature_Parms Parms;
	Parms.Hit=Hit;
	LandedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepRootMotionMontage;
class UScriptStruct* FRepRootMotionMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepRootMotionMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepRootMotionMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepRootMotionMontage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RepRootMotionMontage"));
	}
	return Z_Registration_Info_UScriptStruct_RepRootMotionMontage.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRepRootMotionMontage>()
{
	return FRepRootMotionMontage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBaseBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MovementBaseBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRelativePosition_MetaData[];
#endif
		static void NewProp_bRelativePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelativePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRelativeRotation_MetaData[];
#endif
		static void NewProp_bRelativeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthoritativeRootMotion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuthoritativeRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Replicated data when playing a root motion montage. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Replicated data when playing a root motion montage." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepRootMotionMontage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Comment", "/** Whether this has useful/active data. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Whether this has useful/active data." },
	};
#endif
	void Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FRepRootMotionMontage*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRepRootMotionMontage), &Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Comment", "/** AnimMontage providing Root Motion */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "AnimMontage providing Root Motion" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Track position of Montage */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Track position of Montage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/** Location */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, Location), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Location_MetaData)) }; // 255231453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBase_MetaData[] = {
		{ "Comment", "/** Movement Relative to Base */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Movement Relative to Base" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBaseBoneName_MetaData[] = {
		{ "Comment", "/** Bone on the MovementBase, if a skeletal mesh. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Bone on the MovementBase, if a skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBaseBoneName = { "MovementBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, MovementBaseBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBaseBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBaseBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativePosition_MetaData[] = {
		{ "Comment", "/** Additional replicated flag, if MovementBase can't be resolved on the client. So we don't use wrong data. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Additional replicated flag, if MovementBase can't be resolved on the client. So we don't use wrong data." },
	};
#endif
	void Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativePosition_SetBit(void* Obj)
	{
		((FRepRootMotionMontage*)Obj)->bRelativePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativePosition = { "bRelativePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRepRootMotionMontage), &Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativePosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativeRotation_MetaData[] = {
		{ "Comment", "/** Whether rotation is relative or absolute. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Whether rotation is relative or absolute." },
	};
#endif
	void Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativeRotation_SetBit(void* Obj)
	{
		((FRepRootMotionMontage*)Obj)->bRelativeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativeRotation = { "bRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRepRootMotionMontage), &Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativeRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AuthoritativeRootMotion_MetaData[] = {
		{ "Comment", "/** State of Root Motion Sources on Authority */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "State of Root Motion Sources on Authority" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AuthoritativeRootMotion = { "AuthoritativeRootMotion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, AuthoritativeRootMotion), Z_Construct_UScriptStruct_FRootMotionSourceGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AuthoritativeRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AuthoritativeRootMotion_MetaData)) }; // 4172579480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Comment", "/** Acceleration */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Acceleration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, Acceleration), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Acceleration_MetaData)) }; // 3369118706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Comment", "/** Velocity */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Velocity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, LinearVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_LinearVelocity_MetaData)) }; // 3369118706
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_MovementBaseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_bRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_AuthoritativeRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewProp_LinearVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RepRootMotionMontage",
		sizeof(FRepRootMotionMontage),
		alignof(FRepRootMotionMontage),
		Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepRootMotionMontage()
	{
		if (!Z_Registration_Info_UScriptStruct_RepRootMotionMontage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepRootMotionMontage.InnerSingleton, Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RepRootMotionMontage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimulatedRootMotionReplicatedMove;
class UScriptStruct* FSimulatedRootMotionReplicatedMove::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimulatedRootMotionReplicatedMove.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimulatedRootMotionReplicatedMove.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SimulatedRootMotionReplicatedMove"));
	}
	return Z_Registration_Info_UScriptStruct_SimulatedRootMotionReplicatedMove.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSimulatedRootMotionReplicatedMove>()
{
	return FSimulatedRootMotionReplicatedMove::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulatedRootMotionReplicatedMove>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** Local time when move was received on client and saved. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Local time when move was received on client and saved." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulatedRootMotionReplicatedMove, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_RootMotion_MetaData[] = {
		{ "Comment", "/** Root Motion information */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Root Motion information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_RootMotion = { "RootMotion", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulatedRootMotionReplicatedMove, RootMotion), Z_Construct_UScriptStruct_FRepRootMotionMontage, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_RootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_RootMotion_MetaData)) }; // 1080538919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewProp_RootMotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SimulatedRootMotionReplicatedMove",
		sizeof(FSimulatedRootMotionReplicatedMove),
		alignof(FSimulatedRootMotionReplicatedMove),
		Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove()
	{
		if (!Z_Registration_Info_UScriptStruct_SimulatedRootMotionReplicatedMove.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimulatedRootMotionReplicatedMove.InnerSingleton, Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimulatedRootMotionReplicatedMove.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BasedMovementInfo;
class UScriptStruct* FBasedMovementInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BasedMovementInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BasedMovementInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasedMovementInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BasedMovementInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BasedMovementInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBasedMovementInfo>()
{
	return FBasedMovementInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBasedMovementInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseID_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_BaseID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServerHasBaseComponent_MetaData[];
#endif
		static void NewProp_bServerHasBaseComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerHasBaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRelativeRotation_MetaData[];
#endif
		static void NewProp_bRelativeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServerHasVelocity_MetaData[];
#endif
		static void NewProp_bServerHasVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerHasVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct to hold information about the \"base\" object the character is standing on. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Struct to hold information about the \"base\" object the character is standing on." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasedMovementInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BaseID_MetaData[] = {
		{ "Comment", "/** Unique (within a reasonable timespan) ID of the base component. Can be used to detect changes in the base when the pointer can't replicate, eg during fast shared replication. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Unique (within a reasonable timespan) ID of the base component. Can be used to detect changes in the base when the pointer can't replicate, eg during fast shared replication." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BaseID = { "BaseID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasedMovementInfo, BaseID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BaseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BaseID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_MovementBase_MetaData[] = {
		{ "Comment", "/** Component we are based on */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Component we are based on" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasedMovementInfo, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_MovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_MovementBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BoneName_MetaData[] = {
		{ "Comment", "/** Bone name on component, for skeletal meshes. NAME_None if not a skeletal mesh or if bone is invalid. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Bone name on component, for skeletal meshes. NAME_None if not a skeletal mesh or if bone is invalid." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasedMovementInfo, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/** Location relative to MovementBase. Only valid if HasRelativeLocation() is true. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Location relative to MovementBase. Only valid if HasRelativeLocation() is true." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasedMovementInfo, Location), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Location_MetaData)) }; // 255231453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation: relative to MovementBase if HasRelativeRotation() is true, absolute otherwise. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Rotation: relative to MovementBase if HasRelativeRotation() is true, absolute otherwise." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasedMovementInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasBaseComponent_MetaData[] = {
		{ "Comment", "/** Whether the server says that there is a base. On clients, the component may not have resolved yet. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Whether the server says that there is a base. On clients, the component may not have resolved yet." },
	};
#endif
	void Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasBaseComponent_SetBit(void* Obj)
	{
		((FBasedMovementInfo*)Obj)->bServerHasBaseComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasBaseComponent = { "bServerHasBaseComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBasedMovementInfo), &Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasBaseComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasBaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasBaseComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bRelativeRotation_MetaData[] = {
		{ "Comment", "/** Whether rotation is relative to the base or absolute. It can only be relative if location is also relative. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Whether rotation is relative to the base or absolute. It can only be relative if location is also relative." },
	};
#endif
	void Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bRelativeRotation_SetBit(void* Obj)
	{
		((FBasedMovementInfo*)Obj)->bRelativeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bRelativeRotation = { "bRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBasedMovementInfo), &Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bRelativeRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bRelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bRelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasVelocity_MetaData[] = {
		{ "Comment", "/** Whether there is a velocity on the server. Used for forcing replication when velocity goes to zero. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Whether there is a velocity on the server. Used for forcing replication when velocity goes to zero." },
	};
#endif
	void Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasVelocity_SetBit(void* Obj)
	{
		((FBasedMovementInfo*)Obj)->bServerHasVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasVelocity = { "bServerHasVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBasedMovementInfo), &Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BaseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_MovementBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasBaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewProp_bServerHasVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BasedMovementInfo",
		sizeof(FBasedMovementInfo),
		alignof(FBasedMovementInfo),
		Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasedMovementInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BasedMovementInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BasedMovementInfo.InnerSingleton, Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BasedMovementInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(ACharacter::execGetAnimRootMotionTranslationScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimRootMotionTranslationScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execIsPlayingNetworkedRootMotionMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingNetworkedRootMotionMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execHasAnyRootMotion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyRootMotion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execIsPlayingRootMotion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingRootMotion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execOnRep_RootMotion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RootMotion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execRootMotionDebugClientPrintOnScreen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RootMotionDebugClientPrintOnScreen_Implementation(Z_Param_InString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientCheatGhost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCheatGhost_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientCheatFly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCheatFly_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientCheatWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCheatWalk_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execCanCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execUnCrouch)
	{
		P_GET_UBOOL(Z_Param_bClientSimulation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnCrouch(Z_Param_bClientSimulation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execCrouch)
	{
		P_GET_UBOOL(Z_Param_bClientSimulation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Crouch(Z_Param_bClientSimulation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execOnWalkingOffLedge)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorImpactNormal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorContactNormal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWalkingOffLedge_Implementation(Z_Param_Out_PreviousFloorImpactNormal,Z_Param_Out_PreviousFloorContactNormal,Z_Param_Out_PreviousLocation,Z_Param_TimeDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execOnJumped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJumped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execLaunchCharacter)
	{
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity);
		P_GET_UBOOL(Z_Param_bXYOverride);
		P_GET_UBOOL(Z_Param_bZOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LaunchCharacter(Z_Param_LaunchVelocity,Z_Param_bXYOverride,Z_Param_bZOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execGetCurrentMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execStopAnimMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnimMontage(Z_Param_AnimMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execPlayAnimMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PlayAnimMontage(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execIsJumpProvidingForce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsJumpProvidingForce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execCanJumpInternal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanJumpInternal_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execCanJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execStopJumping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJumping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execOnRep_IsCrouched)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsCrouched();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execGetBaseRotationOffsetRotator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetBaseRotationOffsetRotator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execGetBaseTranslationOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBaseTranslationOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execOnRep_ReplayLastTransformUpdateTimeStamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplayLastTransformUpdateTimeStamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execOnRep_ReplicatedBasedMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedBasedMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execCacheInitialMeshOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_MeshRelativeLocation);
		P_GET_STRUCT(FRotator,Z_Param_MeshRelativeRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CacheInitialMeshOffset(Z_Param_MeshRelativeLocation,Z_Param_MeshRelativeRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientAdjustRootMotionSourcePosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FRootMotionSourceGroup,Z_Param_ServerRootMotion);
		P_GET_UBOOL(Z_Param_bHasAnimRootMotion);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerMontageTrackPosition);
		P_GET_STRUCT(FVector,Z_Param_ServerLoc);
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerVelZ);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_ServerBoneName);
		P_GET_UBOOL(Z_Param_bHasBase);
		P_GET_UBOOL(Z_Param_bBaseRelativePosition);
		P_GET_PROPERTY(FByteProperty,Z_Param_ServerMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAdjustRootMotionSourcePosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerRootMotion,Z_Param_bHasAnimRootMotion,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientAdjustRootMotionPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerMontageTrackPosition);
		P_GET_STRUCT(FVector,Z_Param_ServerLoc);
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerVelZ);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_ServerBoneName);
		P_GET_UBOOL(Z_Param_bHasBase);
		P_GET_UBOOL(Z_Param_bBaseRelativePosition);
		P_GET_PROPERTY(FByteProperty,Z_Param_ServerMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAdjustRootMotionPosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientVeryShortAdjustPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector,Z_Param_NewLoc);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewBaseBoneName);
		P_GET_UBOOL(Z_Param_bHasBase);
		P_GET_UBOOL(Z_Param_bBaseRelativePosition);
		P_GET_PROPERTY(FByteProperty,Z_Param_ServerMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientAdjustPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector,Z_Param_NewLoc);
		P_GET_STRUCT(FVector,Z_Param_NewVel);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewBaseBoneName);
		P_GET_UBOOL(Z_Param_bHasBase);
		P_GET_UBOOL(Z_Param_bBaseRelativePosition);
		P_GET_PROPERTY(FByteProperty,Z_Param_ServerMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientAckGoodMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAckGoodMove_Implementation(Z_Param_TimeStamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execServerMoveOld)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldTimeStamp);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel);
		P_GET_PROPERTY(FByteProperty,Z_Param_OldMoveFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveOld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags))
		{
			RPC_ValidateFailed(TEXT("ServerMoveOld_Validate"));
			return;
		}
		P_THIS->ServerMoveOld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execServerMoveDualHybridRootMotion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp0);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0);
		P_GET_PROPERTY(FByteProperty,Z_Param_PendingFlags);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClientBaseBoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode))
		{
			RPC_ValidateFailed(TEXT("ServerMoveDualHybridRootMotion_Validate"));
			return;
		}
		P_THIS->ServerMoveDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execServerMoveDualNoBase)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp0);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0);
		P_GET_PROPERTY(FByteProperty,Z_Param_PendingFlags);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveDualNoBase_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode))
		{
			RPC_ValidateFailed(TEXT("ServerMoveDualNoBase_Validate"));
			return;
		}
		P_THIS->ServerMoveDualNoBase_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execServerMoveDual)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp0);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0);
		P_GET_PROPERTY(FByteProperty,Z_Param_PendingFlags);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClientBaseBoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode))
		{
			RPC_ValidateFailed(TEXT("ServerMoveDual_Validate"));
			return;
		}
		P_THIS->ServerMoveDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execServerMoveNoBase)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_CompressedMoveFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMoveNoBase_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode))
		{
			RPC_ValidateFailed(TEXT("ServerMoveNoBase_Validate"));
			return;
		}
		P_THIS->ServerMoveNoBase_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execServerMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel);
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc);
		P_GET_PROPERTY(FByteProperty,Z_Param_CompressedMoveFlags);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientRoll);
		P_GET_PROPERTY(FUInt32Property,Z_Param_View);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClientBaseBoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_ClientMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMove_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode))
		{
			RPC_ValidateFailed(TEXT("ServerMove_Validate"));
			return;
		}
		P_THIS->ServerMove_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execClientMoveResponsePacked)
	{
		P_GET_STRUCT(FCharacterMoveResponsePackedBits,Z_Param_PackedBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientMoveResponsePacked_Validate(Z_Param_PackedBits))
		{
			RPC_ValidateFailed(TEXT("ClientMoveResponsePacked_Validate"));
			return;
		}
		P_THIS->ClientMoveResponsePacked_Implementation(Z_Param_PackedBits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter::execServerMovePacked)
	{
		P_GET_STRUCT(FCharacterServerMovePackedBits,Z_Param_PackedBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMovePacked_Validate(Z_Param_PackedBits))
		{
			RPC_ValidateFailed(TEXT("ServerMovePacked_Validate"));
			return;
		}
		P_THIS->ServerMovePacked_Implementation(Z_Param_PackedBits);
		P_NATIVE_END;
	}
	struct Character_eventCanJumpInternal_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Character_eventCanJumpInternal_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct Character_eventClientAckGoodMove_Parms
	{
		float TimeStamp;
	};
	struct Character_eventClientAdjustPosition_Parms
	{
		float TimeStamp;
		FVector NewLoc;
		FVector NewVel;
		UPrimitiveComponent* NewBase;
		FName NewBaseBoneName;
		bool bHasBase;
		bool bBaseRelativePosition;
		uint8 ServerMovementMode;
	};
	struct Character_eventClientAdjustRootMotionPosition_Parms
	{
		float TimeStamp;
		float ServerMontageTrackPosition;
		FVector ServerLoc;
		FVector_NetQuantizeNormal ServerRotation;
		float ServerVelZ;
		UPrimitiveComponent* ServerBase;
		FName ServerBoneName;
		bool bHasBase;
		bool bBaseRelativePosition;
		uint8 ServerMovementMode;
	};
	struct Character_eventClientAdjustRootMotionSourcePosition_Parms
	{
		float TimeStamp;
		FRootMotionSourceGroup ServerRootMotion;
		bool bHasAnimRootMotion;
		float ServerMontageTrackPosition;
		FVector ServerLoc;
		FVector_NetQuantizeNormal ServerRotation;
		float ServerVelZ;
		UPrimitiveComponent* ServerBase;
		FName ServerBoneName;
		bool bHasBase;
		bool bBaseRelativePosition;
		uint8 ServerMovementMode;
	};
	struct Character_eventClientMoveResponsePacked_Parms
	{
		FCharacterMoveResponsePackedBits PackedBits;
	};
	struct Character_eventClientVeryShortAdjustPosition_Parms
	{
		float TimeStamp;
		FVector NewLoc;
		UPrimitiveComponent* NewBase;
		FName NewBaseBoneName;
		bool bHasBase;
		bool bBaseRelativePosition;
		uint8 ServerMovementMode;
	};
	struct Character_eventK2_OnEndCrouch_Parms
	{
		float HalfHeightAdjust;
		float ScaledHalfHeightAdjust;
	};
	struct Character_eventK2_OnMovementModeChanged_Parms
	{
		TEnumAsByte<EMovementMode> PrevMovementMode;
		TEnumAsByte<EMovementMode> NewMovementMode;
		uint8 PrevCustomMode;
		uint8 NewCustomMode;
	};
	struct Character_eventK2_OnStartCrouch_Parms
	{
		float HalfHeightAdjust;
		float ScaledHalfHeightAdjust;
	};
	struct Character_eventK2_UpdateCustomMovement_Parms
	{
		float DeltaTime;
	};
	struct Character_eventOnLanded_Parms
	{
		FHitResult Hit;
	};
	struct Character_eventOnLaunched_Parms
	{
		FVector LaunchVelocity;
		bool bXYOverride;
		bool bZOverride;
	};
	struct Character_eventOnWalkingOffLedge_Parms
	{
		FVector PreviousFloorImpactNormal;
		FVector PreviousFloorContactNormal;
		FVector PreviousLocation;
		float TimeDelta;
	};
	struct Character_eventRootMotionDebugClientPrintOnScreen_Parms
	{
		FString InString;
	};
	struct Character_eventServerMove_Parms
	{
		float TimeStamp;
		FVector_NetQuantize10 InAccel;
		FVector_NetQuantize100 ClientLoc;
		uint8 CompressedMoveFlags;
		uint8 ClientRoll;
		uint32 View;
		UPrimitiveComponent* ClientMovementBase;
		FName ClientBaseBoneName;
		uint8 ClientMovementMode;
	};
	struct Character_eventServerMoveDual_Parms
	{
		float TimeStamp0;
		FVector_NetQuantize10 InAccel0;
		uint8 PendingFlags;
		uint32 View0;
		float TimeStamp;
		FVector_NetQuantize10 InAccel;
		FVector_NetQuantize100 ClientLoc;
		uint8 NewFlags;
		uint8 ClientRoll;
		uint32 View;
		UPrimitiveComponent* ClientMovementBase;
		FName ClientBaseBoneName;
		uint8 ClientMovementMode;
	};
	struct Character_eventServerMoveDualHybridRootMotion_Parms
	{
		float TimeStamp0;
		FVector_NetQuantize10 InAccel0;
		uint8 PendingFlags;
		uint32 View0;
		float TimeStamp;
		FVector_NetQuantize10 InAccel;
		FVector_NetQuantize100 ClientLoc;
		uint8 NewFlags;
		uint8 ClientRoll;
		uint32 View;
		UPrimitiveComponent* ClientMovementBase;
		FName ClientBaseBoneName;
		uint8 ClientMovementMode;
	};
	struct Character_eventServerMoveDualNoBase_Parms
	{
		float TimeStamp0;
		FVector_NetQuantize10 InAccel0;
		uint8 PendingFlags;
		uint32 View0;
		float TimeStamp;
		FVector_NetQuantize10 InAccel;
		FVector_NetQuantize100 ClientLoc;
		uint8 NewFlags;
		uint8 ClientRoll;
		uint32 View;
		uint8 ClientMovementMode;
	};
	struct Character_eventServerMoveNoBase_Parms
	{
		float TimeStamp;
		FVector_NetQuantize10 InAccel;
		FVector_NetQuantize100 ClientLoc;
		uint8 CompressedMoveFlags;
		uint8 ClientRoll;
		uint32 View;
		uint8 ClientMovementMode;
	};
	struct Character_eventServerMoveOld_Parms
	{
		float OldTimeStamp;
		FVector_NetQuantize10 OldAccel;
		uint8 OldMoveFlags;
	};
	struct Character_eventServerMovePacked_Parms
	{
		FCharacterServerMovePackedBits PackedBits;
	};
	static FName NAME_ACharacter_CanJumpInternal = FName(TEXT("CanJumpInternal"));
	bool ACharacter::CanJumpInternal() const
	{
		Character_eventCanJumpInternal_Parms Parms;
		const_cast<ACharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACharacter_CanJumpInternal),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACharacter_ClientAckGoodMove = FName(TEXT("ClientAckGoodMove"));
	void ACharacter::ClientAckGoodMove(float TimeStamp)
	{
		Character_eventClientAckGoodMove_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientAckGoodMove),&Parms);
	}
	static FName NAME_ACharacter_ClientAdjustPosition = FName(TEXT("ClientAdjustPosition"));
	void ACharacter::ClientAdjustPosition(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		Character_eventClientAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewVel=NewVel;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientAdjustPosition),&Parms);
	}
	static FName NAME_ACharacter_ClientAdjustRootMotionPosition = FName(TEXT("ClientAdjustRootMotionPosition"));
	void ACharacter::ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		Character_eventClientAdjustRootMotionPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.ServerMontageTrackPosition=ServerMontageTrackPosition;
		Parms.ServerLoc=ServerLoc;
		Parms.ServerRotation=ServerRotation;
		Parms.ServerVelZ=ServerVelZ;
		Parms.ServerBase=ServerBase;
		Parms.ServerBoneName=ServerBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientAdjustRootMotionPosition),&Parms);
	}
	static FName NAME_ACharacter_ClientAdjustRootMotionSourcePosition = FName(TEXT("ClientAdjustRootMotionSourcePosition"));
	void ACharacter::ClientAdjustRootMotionSourcePosition(float TimeStamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		Character_eventClientAdjustRootMotionSourcePosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.ServerRootMotion=ServerRootMotion;
		Parms.bHasAnimRootMotion=bHasAnimRootMotion ? true : false;
		Parms.ServerMontageTrackPosition=ServerMontageTrackPosition;
		Parms.ServerLoc=ServerLoc;
		Parms.ServerRotation=ServerRotation;
		Parms.ServerVelZ=ServerVelZ;
		Parms.ServerBase=ServerBase;
		Parms.ServerBoneName=ServerBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientAdjustRootMotionSourcePosition),&Parms);
	}
	static FName NAME_ACharacter_ClientCheatFly = FName(TEXT("ClientCheatFly"));
	void ACharacter::ClientCheatFly()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientCheatFly),NULL);
	}
	static FName NAME_ACharacter_ClientCheatGhost = FName(TEXT("ClientCheatGhost"));
	void ACharacter::ClientCheatGhost()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientCheatGhost),NULL);
	}
	static FName NAME_ACharacter_ClientCheatWalk = FName(TEXT("ClientCheatWalk"));
	void ACharacter::ClientCheatWalk()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientCheatWalk),NULL);
	}
	static FName NAME_ACharacter_ClientMoveResponsePacked = FName(TEXT("ClientMoveResponsePacked"));
	void ACharacter::ClientMoveResponsePacked(FCharacterMoveResponsePackedBits const& PackedBits)
	{
		Character_eventClientMoveResponsePacked_Parms Parms;
		Parms.PackedBits=PackedBits;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientMoveResponsePacked),&Parms);
	}
	static FName NAME_ACharacter_ClientVeryShortAdjustPosition = FName(TEXT("ClientVeryShortAdjustPosition"));
	void ACharacter::ClientVeryShortAdjustPosition(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		Character_eventClientVeryShortAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientVeryShortAdjustPosition),&Parms);
	}
	static FName NAME_ACharacter_K2_OnEndCrouch = FName(TEXT("K2_OnEndCrouch"));
	void ACharacter::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		Character_eventK2_OnEndCrouch_Parms Parms;
		Parms.HalfHeightAdjust=HalfHeightAdjust;
		Parms.ScaledHalfHeightAdjust=ScaledHalfHeightAdjust;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_K2_OnEndCrouch),&Parms);
	}
	static FName NAME_ACharacter_K2_OnMovementModeChanged = FName(TEXT("K2_OnMovementModeChanged"));
	void ACharacter::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode)
	{
		Character_eventK2_OnMovementModeChanged_Parms Parms;
		Parms.PrevMovementMode=PrevMovementMode;
		Parms.NewMovementMode=NewMovementMode;
		Parms.PrevCustomMode=PrevCustomMode;
		Parms.NewCustomMode=NewCustomMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_K2_OnMovementModeChanged),&Parms);
	}
	static FName NAME_ACharacter_K2_OnStartCrouch = FName(TEXT("K2_OnStartCrouch"));
	void ACharacter::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		Character_eventK2_OnStartCrouch_Parms Parms;
		Parms.HalfHeightAdjust=HalfHeightAdjust;
		Parms.ScaledHalfHeightAdjust=ScaledHalfHeightAdjust;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_K2_OnStartCrouch),&Parms);
	}
	static FName NAME_ACharacter_K2_UpdateCustomMovement = FName(TEXT("K2_UpdateCustomMovement"));
	void ACharacter::K2_UpdateCustomMovement(float DeltaTime)
	{
		Character_eventK2_UpdateCustomMovement_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_K2_UpdateCustomMovement),&Parms);
	}
	static FName NAME_ACharacter_OnJumped = FName(TEXT("OnJumped"));
	void ACharacter::OnJumped()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_OnJumped),NULL);
	}
	static FName NAME_ACharacter_OnLanded = FName(TEXT("OnLanded"));
	void ACharacter::OnLanded(FHitResult const& Hit)
	{
		Character_eventOnLanded_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_OnLanded),&Parms);
	}
	static FName NAME_ACharacter_OnLaunched = FName(TEXT("OnLaunched"));
	void ACharacter::OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride)
	{
		Character_eventOnLaunched_Parms Parms;
		Parms.LaunchVelocity=LaunchVelocity;
		Parms.bXYOverride=bXYOverride ? true : false;
		Parms.bZOverride=bZOverride ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_OnLaunched),&Parms);
	}
	static FName NAME_ACharacter_OnWalkingOffLedge = FName(TEXT("OnWalkingOffLedge"));
	void ACharacter::OnWalkingOffLedge(FVector const& PreviousFloorImpactNormal, FVector const& PreviousFloorContactNormal, FVector const& PreviousLocation, float TimeDelta)
	{
		Character_eventOnWalkingOffLedge_Parms Parms;
		Parms.PreviousFloorImpactNormal=PreviousFloorImpactNormal;
		Parms.PreviousFloorContactNormal=PreviousFloorContactNormal;
		Parms.PreviousLocation=PreviousLocation;
		Parms.TimeDelta=TimeDelta;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_OnWalkingOffLedge),&Parms);
	}
	static FName NAME_ACharacter_RootMotionDebugClientPrintOnScreen = FName(TEXT("RootMotionDebugClientPrintOnScreen"));
	void ACharacter::RootMotionDebugClientPrintOnScreen(const FString& InString)
	{
		Character_eventRootMotionDebugClientPrintOnScreen_Parms Parms;
		Parms.InString=InString;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_RootMotionDebugClientPrintOnScreen),&Parms);
	}
	static FName NAME_ACharacter_ServerMove = FName(TEXT("ServerMove"));
	void ACharacter::ServerMove(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		Character_eventServerMove_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ServerMove),&Parms);
	}
	static FName NAME_ACharacter_ServerMoveDual = FName(TEXT("ServerMoveDual"));
	void ACharacter::ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		Character_eventServerMoveDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ServerMoveDual),&Parms);
	}
	static FName NAME_ACharacter_ServerMoveDualHybridRootMotion = FName(TEXT("ServerMoveDualHybridRootMotion"));
	void ACharacter::ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		Character_eventServerMoveDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ServerMoveDualHybridRootMotion),&Parms);
	}
	static FName NAME_ACharacter_ServerMoveDualNoBase = FName(TEXT("ServerMoveDualNoBase"));
	void ACharacter::ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode)
	{
		Character_eventServerMoveDualNoBase_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ServerMoveDualNoBase),&Parms);
	}
	static FName NAME_ACharacter_ServerMoveNoBase = FName(TEXT("ServerMoveNoBase"));
	void ACharacter::ServerMoveNoBase(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode)
	{
		Character_eventServerMoveNoBase_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ServerMoveNoBase),&Parms);
	}
	static FName NAME_ACharacter_ServerMoveOld = FName(TEXT("ServerMoveOld"));
	void ACharacter::ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags)
	{
		Character_eventServerMoveOld_Parms Parms;
		Parms.OldTimeStamp=OldTimeStamp;
		Parms.OldAccel=OldAccel;
		Parms.OldMoveFlags=OldMoveFlags;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ServerMoveOld),&Parms);
	}
	static FName NAME_ACharacter_ServerMovePacked = FName(TEXT("ServerMovePacked"));
	void ACharacter::ServerMovePacked(FCharacterServerMovePackedBits const& PackedBits)
	{
		Character_eventServerMovePacked_Parms Parms;
		Parms.PackedBits=PackedBits;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ServerMovePacked),&Parms);
	}
	void ACharacter::StaticRegisterNativesACharacter()
	{
		UClass* Class = ACharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CacheInitialMeshOffset", &ACharacter::execCacheInitialMeshOffset },
			{ "CanCrouch", &ACharacter::execCanCrouch },
			{ "CanJump", &ACharacter::execCanJump },
			{ "CanJumpInternal", &ACharacter::execCanJumpInternal },
			{ "ClientAckGoodMove", &ACharacter::execClientAckGoodMove },
			{ "ClientAdjustPosition", &ACharacter::execClientAdjustPosition },
			{ "ClientAdjustRootMotionPosition", &ACharacter::execClientAdjustRootMotionPosition },
			{ "ClientAdjustRootMotionSourcePosition", &ACharacter::execClientAdjustRootMotionSourcePosition },
			{ "ClientCheatFly", &ACharacter::execClientCheatFly },
			{ "ClientCheatGhost", &ACharacter::execClientCheatGhost },
			{ "ClientCheatWalk", &ACharacter::execClientCheatWalk },
			{ "ClientMoveResponsePacked", &ACharacter::execClientMoveResponsePacked },
			{ "ClientVeryShortAdjustPosition", &ACharacter::execClientVeryShortAdjustPosition },
			{ "Crouch", &ACharacter::execCrouch },
			{ "GetAnimRootMotionTranslationScale", &ACharacter::execGetAnimRootMotionTranslationScale },
			{ "GetBaseRotationOffsetRotator", &ACharacter::execGetBaseRotationOffsetRotator },
			{ "GetBaseTranslationOffset", &ACharacter::execGetBaseTranslationOffset },
			{ "GetCurrentMontage", &ACharacter::execGetCurrentMontage },
			{ "HasAnyRootMotion", &ACharacter::execHasAnyRootMotion },
			{ "IsJumpProvidingForce", &ACharacter::execIsJumpProvidingForce },
			{ "IsPlayingNetworkedRootMotionMontage", &ACharacter::execIsPlayingNetworkedRootMotionMontage },
			{ "IsPlayingRootMotion", &ACharacter::execIsPlayingRootMotion },
			{ "Jump", &ACharacter::execJump },
			{ "LaunchCharacter", &ACharacter::execLaunchCharacter },
			{ "OnJumped", &ACharacter::execOnJumped },
			{ "OnRep_IsCrouched", &ACharacter::execOnRep_IsCrouched },
			{ "OnRep_ReplayLastTransformUpdateTimeStamp", &ACharacter::execOnRep_ReplayLastTransformUpdateTimeStamp },
			{ "OnRep_ReplicatedBasedMovement", &ACharacter::execOnRep_ReplicatedBasedMovement },
			{ "OnRep_RootMotion", &ACharacter::execOnRep_RootMotion },
			{ "OnWalkingOffLedge", &ACharacter::execOnWalkingOffLedge },
			{ "PlayAnimMontage", &ACharacter::execPlayAnimMontage },
			{ "RootMotionDebugClientPrintOnScreen", &ACharacter::execRootMotionDebugClientPrintOnScreen },
			{ "ServerMove", &ACharacter::execServerMove },
			{ "ServerMoveDual", &ACharacter::execServerMoveDual },
			{ "ServerMoveDualHybridRootMotion", &ACharacter::execServerMoveDualHybridRootMotion },
			{ "ServerMoveDualNoBase", &ACharacter::execServerMoveDualNoBase },
			{ "ServerMoveNoBase", &ACharacter::execServerMoveNoBase },
			{ "ServerMoveOld", &ACharacter::execServerMoveOld },
			{ "ServerMovePacked", &ACharacter::execServerMovePacked },
			{ "StopAnimMontage", &ACharacter::execStopAnimMontage },
			{ "StopJumping", &ACharacter::execStopJumping },
			{ "UnCrouch", &ACharacter::execUnCrouch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics
	{
		struct Character_eventCacheInitialMeshOffset_Parms
		{
			FVector MeshRelativeLocation;
			FRotator MeshRelativeRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRelativeLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRelativeRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::NewProp_MeshRelativeLocation = { "MeshRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventCacheInitialMeshOffset_Parms, MeshRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::NewProp_MeshRelativeRotation = { "MeshRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventCacheInitialMeshOffset_Parms, MeshRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::NewProp_MeshRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::NewProp_MeshRelativeRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Cache mesh offset from capsule. This is used as the target for network smoothing interpolation, when the mesh is offset with lagged smoothing.\n\x09 * This is automatically called during initialization; call this at runtime if you intend to change the default mesh offset from the capsule.\n\x09 * @see GetBaseTranslationOffset(), GetBaseRotationOffset()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Cache mesh offset from capsule. This is used as the target for network smoothing interpolation, when the mesh is offset with lagged smoothing.\nThis is automatically called during initialization; call this at runtime if you intend to change the default mesh offset from the capsule.\n@see GetBaseTranslationOffset(), GetBaseRotationOffset()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "CacheInitialMeshOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::Character_eventCacheInitialMeshOffset_Parms), Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_CanCrouch_Statics
	{
		struct Character_eventCanCrouch_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_CanCrouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Character_eventCanCrouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_CanCrouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventCanCrouch_Parms), &Z_Construct_UFunction_ACharacter_CanCrouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_CanCrouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_CanCrouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_CanCrouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** @return true if this character is currently able to crouch (and is not currently crouched) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "@return true if this character is currently able to crouch (and is not currently crouched)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_CanCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "CanCrouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_CanCrouch_Statics::Character_eventCanCrouch_Parms), Z_Construct_UFunction_ACharacter_CanCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_CanCrouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_CanCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_CanCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_CanCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_CanCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_CanJump_Statics
	{
		struct Character_eventCanJump_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_CanJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Character_eventCanJump_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_CanJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventCanJump_Parms), &Z_Construct_UFunction_ACharacter_CanJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_CanJump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_CanJump_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_CanJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Check if the character can jump in the current state.\n\x09 *\n\x09 * The default implementation may be overridden or extended by implementing the custom CanJump event in Blueprints. \n\x09 * \n\x09 * @Return Whether the character can jump in the current state. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Check if the character can jump in the current state.\n\nThe default implementation may be overridden or extended by implementing the custom CanJump event in Blueprints.\n\n@Return Whether the character can jump in the current state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_CanJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "CanJump", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_CanJump_Statics::Character_eventCanJump_Parms), Z_Construct_UFunction_ACharacter_CanJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_CanJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_CanJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_CanJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_CanJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_CanJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Character_eventCanJumpInternal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventCanJumpInternal_Parms), &Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Customizable event to check if the character can jump in the current state.\n\x09 * Default implementation returns true if the character is on the ground and not crouching,\n\x09 * has a valid CharacterMovementComponent and CanEverJump() returns true.\n\x09 * Default implementation also allows for 'hold to jump higher' functionality: \n\x09 * As well as returning true when on the ground, it also returns true when GetMaxJumpTime is more\n\x09 * than zero and IsJumping returns true.\n\x09 * \n\x09 *\n\x09 * @Return Whether the character can jump in the current state. \n\x09 */" },
		{ "DisplayName", "CanJump" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Customizable event to check if the character can jump in the current state.\nDefault implementation returns true if the character is on the ground and not crouching,\nhas a valid CharacterMovementComponent and CanEverJump() returns true.\nDefault implementation also allows for 'hold to jump higher' functionality:\nAs well as returning true when on the ground, it also returns true when GetMaxJumpTime is more\nthan zero and IsJumping returns true.\n\n\n@Return Whether the character can jump in the current state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "CanJumpInternal", nullptr, nullptr, sizeof(Character_eventCanJumpInternal_Parms), Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_CanJumpInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_CanJumpInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAckGoodMove_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientAckGoodMove", nullptr, nullptr, sizeof(Character_eventClientAckGoodMove_Parms), Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientAckGoodMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientAckGoodMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLoc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewBaseBoneName;
		static void NewProp_bHasBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBase;
		static void NewProp_bBaseRelativePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewLoc = { "NewLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustPosition_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewVel = { "NewVel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustPosition_Parms, NewVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewBase = { "NewBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustPosition_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewBaseBoneName = { "NewBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustPosition_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((Character_eventClientAdjustPosition_Parms*)Obj)->bHasBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_bHasBase = { "bHasBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientAdjustPosition_Parms), &Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((Character_eventClientAdjustPosition_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition = { "bBaseRelativePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientAdjustPosition_Parms), &Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_ServerMovementMode = { "ServerMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_NewBaseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_bHasBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::NewProp_ServerMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientAdjustPosition", nullptr, nullptr, sizeof(Character_eventClientAdjustPosition_Parms), Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientAdjustPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientAdjustPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerMontageTrackPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerLoc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerVelZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ServerBoneName;
		static void NewProp_bHasBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBase;
		static void NewProp_bBaseRelativePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerMontageTrackPosition = { "ServerMontageTrackPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionPosition_Parms, ServerMontageTrackPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerLoc = { "ServerLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionPosition_Parms, ServerLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerRotation = { "ServerRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionPosition_Parms, ServerRotation), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) }; // 903499713
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerVelZ = { "ServerVelZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionPosition_Parms, ServerVelZ), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerBase = { "ServerBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionPosition_Parms, ServerBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerBoneName = { "ServerBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionPosition_Parms, ServerBoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((Character_eventClientAdjustRootMotionPosition_Parms*)Obj)->bHasBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_bHasBase = { "bHasBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientAdjustRootMotionPosition_Parms), &Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((Character_eventClientAdjustRootMotionPosition_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_bBaseRelativePosition = { "bBaseRelativePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientAdjustRootMotionPosition_Parms), &Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerMovementMode = { "ServerMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerMontageTrackPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerVelZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_bHasBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_bBaseRelativePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::NewProp_ServerMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientAdjustRootMotionPosition", nullptr, nullptr, sizeof(Character_eventClientAdjustRootMotionPosition_Parms), Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerRootMotion;
		static void NewProp_bHasAnimRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAnimRootMotion;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerMontageTrackPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerLoc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerVelZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ServerBoneName;
		static void NewProp_bHasBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBase;
		static void NewProp_bBaseRelativePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerRootMotion = { "ServerRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, ServerRootMotion), Z_Construct_UScriptStruct_FRootMotionSourceGroup, METADATA_PARAMS(nullptr, 0) }; // 4172579480
	void Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bHasAnimRootMotion_SetBit(void* Obj)
	{
		((Character_eventClientAdjustRootMotionSourcePosition_Parms*)Obj)->bHasAnimRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bHasAnimRootMotion = { "bHasAnimRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientAdjustRootMotionSourcePosition_Parms), &Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bHasAnimRootMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerMontageTrackPosition = { "ServerMontageTrackPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, ServerMontageTrackPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerLoc = { "ServerLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, ServerLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerRotation = { "ServerRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, ServerRotation), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) }; // 903499713
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerVelZ = { "ServerVelZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, ServerVelZ), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerBase = { "ServerBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, ServerBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerBoneName = { "ServerBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, ServerBoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((Character_eventClientAdjustRootMotionSourcePosition_Parms*)Obj)->bHasBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bHasBase = { "bHasBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientAdjustRootMotionSourcePosition_Parms), &Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((Character_eventClientAdjustRootMotionSourcePosition_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bBaseRelativePosition = { "bBaseRelativePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientAdjustRootMotionSourcePosition_Parms), &Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerMovementMode = { "ServerMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientAdjustRootMotionSourcePosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bHasAnimRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerMontageTrackPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerVelZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bHasBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_bBaseRelativePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::NewProp_ServerMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientAdjustRootMotionSourcePosition", nullptr, nullptr, sizeof(Character_eventClientAdjustRootMotionSourcePosition_Parms), Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientCheatFly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientCheatFly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientCheatFly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientCheatFly", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientCheatFly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientCheatFly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientCheatFly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientCheatFly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientCheatGhost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientCheatGhost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientCheatGhost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientCheatGhost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientCheatGhost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientCheatGhost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientCheatGhost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientCheatGhost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientCheatWalk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientCheatWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientCheatWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientCheatWalk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientCheatWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientCheatWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientCheatWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientCheatWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedBits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackedBits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::NewProp_PackedBits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::NewProp_PackedBits = { "PackedBits", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientMoveResponsePacked_Parms, PackedBits), Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::NewProp_PackedBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::NewProp_PackedBits_MetaData)) }; // 3734216073
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::NewProp_PackedBits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Client RPC that passes through to CharacterMovement (avoids RPC overhead for components).\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Client RPC that passes through to CharacterMovement (avoids RPC overhead for components)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientMoveResponsePacked", nullptr, nullptr, sizeof(Character_eventClientMoveResponsePacked_Parms), Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewBaseBoneName;
		static void NewProp_bHasBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBase;
		static void NewProp_bBaseRelativePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientVeryShortAdjustPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewLoc = { "NewLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientVeryShortAdjustPosition_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase = { "NewBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientVeryShortAdjustPosition_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewBaseBoneName = { "NewBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientVeryShortAdjustPosition_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((Character_eventClientVeryShortAdjustPosition_Parms*)Obj)->bHasBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase = { "bHasBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientVeryShortAdjustPosition_Parms), &Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((Character_eventClientVeryShortAdjustPosition_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition = { "bBaseRelativePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventClientVeryShortAdjustPosition_Parms), &Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_ServerMovementMode = { "ServerMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventClientVeryShortAdjustPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_NewBaseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::NewProp_ServerMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Bandwidth saving version, when velocity is zeroed */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Bandwidth saving version, when velocity is zeroed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ClientVeryShortAdjustPosition", nullptr, nullptr, sizeof(Character_eventClientVeryShortAdjustPosition_Parms), Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Crouch_Statics
	{
		struct Character_eventCrouch_Parms
		{
			bool bClientSimulation;
		};
		static void NewProp_bClientSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientSimulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_Crouch_Statics::NewProp_bClientSimulation_SetBit(void* Obj)
	{
		((Character_eventCrouch_Parms*)Obj)->bClientSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_Crouch_Statics::NewProp_bClientSimulation = { "bClientSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventCrouch_Parms), &Z_Construct_UFunction_ACharacter_Crouch_Statics::NewProp_bClientSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Crouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Crouch_Statics::NewProp_bClientSimulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Crouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Request the character to start crouching. The request is processed on the next update of the CharacterMovementComponent.\n\x09 * @see OnStartCrouch\n\x09 * @see IsCrouched\n\x09 * @see CharacterMovement->WantsToCrouch\n\x09 */" },
		{ "CPP_Default_bClientSimulation", "false" },
		{ "HidePin", "bClientSimulation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Request the character to start crouching. The request is processed on the next update of the CharacterMovementComponent.\n@see OnStartCrouch\n@see IsCrouched\n@see CharacterMovement->WantsToCrouch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Crouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "Crouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_Crouch_Statics::Character_eventCrouch_Parms), Z_Construct_UFunction_ACharacter_Crouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Crouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Crouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Crouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Crouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Crouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics
	{
		struct Character_eventGetAnimRootMotionTranslationScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventGetAnimRootMotionTranslationScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns current value of AnimRootMotionScale */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Returns current value of AnimRootMotionScale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "GetAnimRootMotionTranslationScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::Character_eventGetAnimRootMotionTranslationScale_Parms), Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics
	{
		struct Character_eventGetBaseRotationOffsetRotator_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventGetBaseRotationOffsetRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Get the saved rotation offset of mesh. This is how much extra rotation is applied from the capsule rotation. */" },
		{ "DisplayName", "Get Base Rotation Offset" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ScriptName", "GetBaseRotationOffset" },
		{ "ToolTip", "Get the saved rotation offset of mesh. This is how much extra rotation is applied from the capsule rotation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "GetBaseRotationOffsetRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::Character_eventGetBaseRotationOffsetRotator_Parms), Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics
	{
		struct Character_eventGetBaseTranslationOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventGetBaseTranslationOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Get the saved translation offset of mesh. This is how much extra offset is applied from the center of the capsule. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Get the saved translation offset of mesh. This is how much extra offset is applied from the center of the capsule." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "GetBaseTranslationOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::Character_eventGetBaseTranslationOffset_Parms), Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics
	{
		struct Character_eventGetCurrentMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventGetCurrentMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Return current playing Montage **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Return current playing Montage *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "GetCurrentMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::Character_eventGetCurrentMontage_Parms), Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_GetCurrentMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_GetCurrentMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics
	{
		struct Character_eventHasAnyRootMotion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Character_eventHasAnyRootMotion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventHasAnyRootMotion_Parms), &Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** True if we are playing root motion from any source right now (anim root motion, root motion source) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "True if we are playing root motion from any source right now (anim root motion, root motion source)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "HasAnyRootMotion", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::Character_eventHasAnyRootMotion_Parms), Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_HasAnyRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_HasAnyRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics
	{
		struct Character_eventIsJumpProvidingForce_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Character_eventIsJumpProvidingForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventIsJumpProvidingForce_Parms), &Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * True if jump is actively providing a force, such as when the jump key is held and the time it has been held is less than JumpMaxHoldTime.\n\x09 * @see CharacterMovement->IsFalling\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "True if jump is actively providing a force, such as when the jump key is held and the time it has been held is less than JumpMaxHoldTime.\n@see CharacterMovement->IsFalling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "IsJumpProvidingForce", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::Character_eventIsJumpProvidingForce_Parms), Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_IsJumpProvidingForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_IsJumpProvidingForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics
	{
		struct Character_eventIsPlayingNetworkedRootMotionMontage_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Character_eventIsPlayingNetworkedRootMotionMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventIsPlayingNetworkedRootMotionMontage_Parms), &Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * True if we are playing Root Motion right now, through a Montage with RootMotionMode == ERootMotionMode::RootMotionFromMontagesOnly.\n\x09 * This means code path for networked root motion is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "True if we are playing Root Motion right now, through a Montage with RootMotionMode == ERootMotionMode::RootMotionFromMontagesOnly.\nThis means code path for networked root motion is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "IsPlayingNetworkedRootMotionMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::Character_eventIsPlayingNetworkedRootMotionMontage_Parms), Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics
	{
		struct Character_eventIsPlayingRootMotion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Character_eventIsPlayingRootMotion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventIsPlayingRootMotion_Parms), &Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** True if we are playing Anim root motion right now */" },
		{ "DisplayName", "Is Playing Anim Root Motion" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "True if we are playing Anim root motion right now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "IsPlayingRootMotion", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::Character_eventIsPlayingRootMotion_Parms), Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_IsPlayingRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_IsPlayingRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Jump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Jump_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** \n\x09 * Make the character jump on the next update.\x09 \n\x09 * If you want your character to jump according to the time that the jump key is held,\n\x09 * then you can set JumpMaxHoldTime to some non-zero value. Make sure in this case to\n\x09 * call StopJumping() when you want the jump's z-velocity to stop being applied (such \n\x09 * as on a button up event), otherwise the character will carry on receiving the \n\x09 * velocity until JumpKeyHoldTime reaches JumpMaxHoldTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Make the character jump on the next update.\nIf you want your character to jump according to the time that the jump key is held,\nthen you can set JumpMaxHoldTime to some non-zero value. Make sure in this case to\ncall StopJumping() when you want the jump's z-velocity to stop being applied (such\nas on a button up event), otherwise the character will carry on receiving the\nvelocity until JumpKeyHoldTime reaches JumpMaxHoldTime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "Jump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Jump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeightAdjust;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaledHalfHeightAdjust;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::NewProp_HalfHeightAdjust = { "HalfHeightAdjust", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_OnEndCrouch_Parms, HalfHeightAdjust), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::NewProp_ScaledHalfHeightAdjust = { "ScaledHalfHeightAdjust", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_OnEndCrouch_Parms, ScaledHalfHeightAdjust), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::NewProp_HalfHeightAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::NewProp_ScaledHalfHeightAdjust,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Event when Character stops crouching.\n\x09 * @param\x09HalfHeightAdjust\x09\x09""difference between default collision half-height, and actual crouched capsule half-height.\n\x09 * @param\x09ScaledHalfHeightAdjust\x09""difference after component scale is taken in to account.\n\x09 */" },
		{ "DisplayName", "OnEndCrouch" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ScriptName", "OnEndCrouch" },
		{ "ToolTip", "Event when Character stops crouching.\n@param       HalfHeightAdjust                difference between default collision half-height, and actual crouched capsule half-height.\n@param       ScaledHalfHeightAdjust  difference after component scale is taken in to account." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "K2_OnEndCrouch", nullptr, nullptr, sizeof(Character_eventK2_OnEndCrouch_Parms), Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_K2_OnEndCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_K2_OnEndCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevCustomMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewCustomMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::NewProp_PrevMovementMode = { "PrevMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_OnMovementModeChanged_Parms, PrevMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) }; // 1544502984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_OnMovementModeChanged_Parms, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) }; // 1544502984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::NewProp_PrevCustomMode = { "PrevCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_OnMovementModeChanged_Parms, PrevCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::NewProp_NewCustomMode = { "NewCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_OnMovementModeChanged_Parms, NewCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::NewProp_PrevMovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::NewProp_NewMovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::NewProp_PrevCustomMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::NewProp_NewCustomMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called from CharacterMovementComponent to notify the character that the movement mode has changed.\n\x09 * @param\x09PrevMovementMode\x09Movement mode before the change\n\x09 * @param\x09NewMovementMode\x09\x09New movement mode\n\x09 * @param\x09PrevCustomMode\x09\x09""Custom mode before the change (applicable if PrevMovementMode is Custom)\n\x09 * @param\x09NewCustomMode\x09\x09New custom mode (applicable if NewMovementMode is Custom)\n\x09 */" },
		{ "DisplayName", "OnMovementModeChanged" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ScriptName", "OnMovementModeChanged" },
		{ "ToolTip", "Called from CharacterMovementComponent to notify the character that the movement mode has changed.\n@param       PrevMovementMode        Movement mode before the change\n@param       NewMovementMode         New movement mode\n@param       PrevCustomMode          Custom mode before the change (applicable if PrevMovementMode is Custom)\n@param       NewCustomMode           New custom mode (applicable if NewMovementMode is Custom)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "K2_OnMovementModeChanged", nullptr, nullptr, sizeof(Character_eventK2_OnMovementModeChanged_Parms), Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeightAdjust;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaledHalfHeightAdjust;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::NewProp_HalfHeightAdjust = { "HalfHeightAdjust", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_OnStartCrouch_Parms, HalfHeightAdjust), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::NewProp_ScaledHalfHeightAdjust = { "ScaledHalfHeightAdjust", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_OnStartCrouch_Parms, ScaledHalfHeightAdjust), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::NewProp_HalfHeightAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::NewProp_ScaledHalfHeightAdjust,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event when Character crouches.\n\x09 * @param\x09HalfHeightAdjust\x09\x09""difference between default collision half-height, and actual crouched capsule half-height.\n\x09 * @param\x09ScaledHalfHeightAdjust\x09""difference after component scale is taken in to account.\n\x09 */" },
		{ "DisplayName", "OnStartCrouch" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ScriptName", "OnStartCrouch" },
		{ "ToolTip", "Event when Character crouches.\n@param       HalfHeightAdjust                difference between default collision half-height, and actual crouched capsule half-height.\n@param       ScaledHalfHeightAdjust  difference after component scale is taken in to account." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "K2_OnStartCrouch", nullptr, nullptr, sizeof(Character_eventK2_OnStartCrouch_Parms), Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_K2_OnStartCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_K2_OnStartCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventK2_UpdateCustomMovement_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for implementing custom character movement mode. Called by CharacterMovement if MovementMode is set to Custom.\n\x09 * @note C++ code should override UCharacterMovementComponent::PhysCustom() instead.\n\x09 * @see UCharacterMovementComponent::PhysCustom()\n\x09 */" },
		{ "DisplayName", "UpdateCustomMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ScriptName", "UpdateCustomMovement" },
		{ "ToolTip", "Event for implementing custom character movement mode. Called by CharacterMovement if MovementMode is set to Custom.\n@note C++ code should override UCharacterMovementComponent::PhysCustom() instead.\n@see UCharacterMovementComponent::PhysCustom()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "K2_UpdateCustomMovement", nullptr, nullptr, sizeof(Character_eventK2_UpdateCustomMovement_Parms), Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics
	{
		struct Character_eventLaunchCharacter_Parms
		{
			FVector LaunchVelocity;
			bool bXYOverride;
			bool bZOverride;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
		static void NewProp_bXYOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bXYOverride;
		static void NewProp_bZOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventLaunchCharacter_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_bXYOverride_SetBit(void* Obj)
	{
		((Character_eventLaunchCharacter_Parms*)Obj)->bXYOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_bXYOverride = { "bXYOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventLaunchCharacter_Parms), &Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_bXYOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_bZOverride_SetBit(void* Obj)
	{
		((Character_eventLaunchCharacter_Parms*)Obj)->bZOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_bZOverride = { "bZOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventLaunchCharacter_Parms), &Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_bZOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_LaunchVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_bXYOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::NewProp_bZOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Set a pending launch velocity on the Character. This velocity will be processed on the next CharacterMovementComponent tick,\n\x09 * and will set it to the \"falling\" state. Triggers the OnLaunched event.\n\x09 * @PARAM LaunchVelocity is the velocity to impart to the Character\n\x09 * @PARAM bXYOverride if true replace the XY part of the Character's velocity instead of adding to it.\n\x09 * @PARAM bZOverride if true replace the Z component of the Character's velocity instead of adding to it.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Set a pending launch velocity on the Character. This velocity will be processed on the next CharacterMovementComponent tick,\nand will set it to the \"falling\" state. Triggers the OnLaunched event.\n@PARAM LaunchVelocity is the velocity to impart to the Character\n@PARAM bXYOverride if true replace the XY part of the Character's velocity instead of adding to it.\n@PARAM bZOverride if true replace the Z component of the Character's velocity instead of adding to it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "LaunchCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::Character_eventLaunchCharacter_Parms), Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_LaunchCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_LaunchCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_OnJumped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnJumped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Event fired when the character has just started jumping */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Event fired when the character has just started jumping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_OnJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "OnJumped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnJumped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnJumped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_OnJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_OnJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_OnLanded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnLanded_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_OnLanded_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventOnLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnLanded_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnLanded_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_OnLanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_OnLanded_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnLanded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called upon landing when falling, to perform actions based on the Hit result.\n\x09 * Note that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.\n\x09 * Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).\n\x09 *\n\x09 * @param Hit Result describing the landing that resulted in a valid landing spot.\n\x09 * @see OnMovementModeChanged()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Called upon landing when falling, to perform actions based on the Hit result.\nNote that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.\nConsider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).\n\n@param Hit Result describing the landing that resulted in a valid landing spot.\n@see OnMovementModeChanged()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_OnLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "OnLanded", nullptr, nullptr, sizeof(Character_eventOnLanded_Parms), Z_Construct_UFunction_ACharacter_OnLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_OnLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_OnLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_OnLaunched_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
		static void NewProp_bXYOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bXYOverride;
		static void NewProp_bZOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventOnLaunched_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_bXYOverride_SetBit(void* Obj)
	{
		((Character_eventOnLaunched_Parms*)Obj)->bXYOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_bXYOverride = { "bXYOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventOnLaunched_Parms), &Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_bXYOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_bZOverride_SetBit(void* Obj)
	{
		((Character_eventOnLaunched_Parms*)Obj)->bZOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_bZOverride = { "bZOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventOnLaunched_Parms), &Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_bZOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_OnLaunched_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_LaunchVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_bXYOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_OnLaunched_Statics::NewProp_bZOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnLaunched_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Let blueprint know that we were launched */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Let blueprint know that we were launched" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_OnLaunched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "OnLaunched", nullptr, nullptr, sizeof(Character_eventOnLaunched_Parms), Z_Construct_UFunction_ACharacter_OnLaunched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnLaunched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnLaunched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnLaunched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_OnLaunched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_OnLaunched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_OnRep_IsCrouched_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnRep_IsCrouched_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle Crouching replicated from server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Handle Crouching replicated from server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_OnRep_IsCrouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "OnRep_IsCrouched", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnRep_IsCrouched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnRep_IsCrouched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_OnRep_IsCrouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_OnRep_IsCrouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "OnRep_ReplayLastTransformUpdateTimeStamp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Rep notify for ReplicatedBasedMovement */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Rep notify for ReplicatedBasedMovement" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "OnRep_ReplicatedBasedMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_OnRep_RootMotion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnRep_RootMotion_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handles replicated root motion properties on simulated proxies and position correction. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Handles replicated root motion properties on simulated proxies and position correction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_OnRep_RootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "OnRep_RootMotion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnRep_RootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnRep_RootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_OnRep_RootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_OnRep_RootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousFloorImpactNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousFloorImpactNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousFloorContactNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousFloorContactNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorImpactNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorImpactNormal = { "PreviousFloorImpactNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventOnWalkingOffLedge_Parms, PreviousFloorImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorImpactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorImpactNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorContactNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorContactNormal = { "PreviousFloorContactNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventOnWalkingOffLedge_Parms, PreviousFloorContactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorContactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorContactNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousLocation = { "PreviousLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventOnWalkingOffLedge_Parms, PreviousLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousLocation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_TimeDelta = { "TimeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventOnWalkingOffLedge_Parms, TimeDelta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorImpactNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousFloorContactNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_PreviousLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::NewProp_TimeDelta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Event fired when the Character is walking off a surface and is about to fall because CharacterMovement->CurrentFloor became unwalkable.\n\x09 * If CharacterMovement->MovementMode does not change during this event then the character will automatically start falling afterwards.\n\x09 * @note Z velocity is zero during walking movement, and will be here as well. Another velocity can be computed here if desired and will be used when starting to fall.\n\x09 *\n\x09 * @param  PreviousFloorImpactNormal Normal of the previous walkable floor.\n\x09 * @param  PreviousFloorContactNormal Normal of the contact with the previous walkable floor.\n\x09 * @param  PreviousLocation\x09Previous character location before movement off the ledge.\n\x09 * @param  TimeTick\x09Time delta of movement update resulting in moving off the ledge.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Event fired when the Character is walking off a surface and is about to fall because CharacterMovement->CurrentFloor became unwalkable.\nIf CharacterMovement->MovementMode does not change during this event then the character will automatically start falling afterwards.\n@note Z velocity is zero during walking movement, and will be here as well. Another velocity can be computed here if desired and will be used when starting to fall.\n\n@param  PreviousFloorImpactNormal Normal of the previous walkable floor.\n@param  PreviousFloorContactNormal Normal of the contact with the previous walkable floor.\n@param  PreviousLocation     Previous character location before movement off the ledge.\n@param  TimeTick     Time delta of movement update resulting in moving off the ledge." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "OnWalkingOffLedge", nullptr, nullptr, sizeof(Character_eventOnWalkingOffLedge_Parms), Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_OnWalkingOffLedge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_OnWalkingOffLedge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics
	{
		struct Character_eventPlayAnimMontage_Parms
		{
			UAnimMontage* AnimMontage;
			float InPlayRate;
			FName StartSectionName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSectionName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventPlayAnimMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventPlayAnimMontage_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::NewProp_StartSectionName = { "StartSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventPlayAnimMontage_Parms, StartSectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventPlayAnimMontage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::NewProp_StartSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Play Animation Montage on the character mesh. Returns the length of the animation montage in seconds, or 0.f if failed to play. **/" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_StartSectionName", "None" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Play Animation Montage on the character mesh. Returns the length of the animation montage in seconds, or 0.f if failed to play. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "PlayAnimMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::Character_eventPlayAnimMontage_Parms), Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_PlayAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_PlayAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventRootMotionDebugClientPrintOnScreen_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::NewProp_InString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "RootMotionDebugClientPrintOnScreen", nullptr, nullptr, sizeof(Character_eventRootMotionDebugClientPrintOnScreen_Parms), Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ServerMove_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_View;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) }; // 255231453
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_CompressedMoveFlags = { "CompressedMoveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, View), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientMovementBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMove_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ServerMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_InAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_CompressedMoveFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientMovementBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientBaseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMove_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ServerMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ServerMove", nullptr, nullptr, sizeof(Character_eventServerMove_Parms), Z_Construct_UFunction_ACharacter_ServerMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ServerMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ServerMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_View;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_TimeStamp0 = { "TimeStamp0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_InAccel0 = { "InAccel0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_PendingFlags = { "PendingFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_View0 = { "View0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) }; // 255231453
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_NewFlags = { "NewFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, View), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientMovementBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDual_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_TimeStamp0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_InAccel0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_PendingFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_View0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_InAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_NewFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientMovementBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientBaseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ServerMoveDual", nullptr, nullptr, sizeof(Character_eventServerMoveDual_Parms), Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ServerMoveDual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ServerMoveDual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_View;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_TimeStamp0 = { "TimeStamp0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_InAccel0 = { "InAccel0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_PendingFlags = { "PendingFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_View0 = { "View0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) }; // 255231453
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_NewFlags = { "NewFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, View), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualHybridRootMotion_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_TimeStamp0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_InAccel0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_PendingFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_View0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_InAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_NewFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientMovementBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientBaseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ServerMoveDualHybridRootMotion", nullptr, nullptr, sizeof(Character_eventServerMoveDualHybridRootMotion_Parms), Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAccel0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PendingFlags;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_View0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_View;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_TimeStamp0 = { "TimeStamp0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_InAccel0 = { "InAccel0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_PendingFlags = { "PendingFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_View0 = { "View0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, View0), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) }; // 255231453
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_NewFlags = { "NewFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, View), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveDualNoBase_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_TimeStamp0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_InAccel0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_PendingFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_View0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_InAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_ClientLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_NewFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_ClientRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ServerMoveDualNoBase", nullptr, nullptr, sizeof(Character_eventServerMoveDualNoBase_Parms), Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAccel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientLoc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_View;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveNoBase_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_InAccel = { "InAccel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveNoBase_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_ClientLoc = { "ClientLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveNoBase_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) }; // 255231453
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_CompressedMoveFlags = { "CompressedMoveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveNoBase_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveNoBase_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveNoBase_Parms, View), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_ClientMovementMode = { "ClientMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveNoBase_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_InAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_ClientLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_CompressedMoveFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_ClientRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::NewProp_ClientMovementMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ServerMoveNoBase", nullptr, nullptr, sizeof(Character_eventServerMoveNoBase_Parms), Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ServerMoveNoBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ServerMoveNoBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldTimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAccel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OldMoveFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::NewProp_OldTimeStamp = { "OldTimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveOld_Parms, OldTimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::NewProp_OldAccel = { "OldAccel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveOld_Parms, OldAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) }; // 3369118706
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::NewProp_OldMoveFlags = { "OldMoveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMoveOld_Parms, OldMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::NewProp_OldTimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::NewProp_OldAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::NewProp_OldMoveFlags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ServerMoveOld", nullptr, nullptr, sizeof(Character_eventServerMoveOld_Parms), Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ServerMoveOld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ServerMoveOld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedBits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackedBits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::NewProp_PackedBits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::NewProp_PackedBits = { "PackedBits", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventServerMovePacked_Parms, PackedBits), Z_Construct_UScriptStruct_FCharacterServerMovePackedBits, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::NewProp_PackedBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::NewProp_PackedBits_MetaData)) }; // 1667373874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::NewProp_PackedBits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Server RPC that passes through to CharacterMovement (avoids RPC overhead for components).\n// The base RPC function (eg 'ServerMove') is auto-generated for clients to trigger the call to the server function,\n// eventually going to the _Implementation function (which we just pass to the CharacterMovementComponent).\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Server RPC that passes through to CharacterMovement (avoids RPC overhead for components).\nThe base RPC function (eg 'ServerMove') is auto-generated for clients to trigger the call to the server function,\neventually going to the _Implementation function (which we just pass to the CharacterMovementComponent)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "ServerMovePacked", nullptr, nullptr, sizeof(Character_eventServerMovePacked_Parms), Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_ServerMovePacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_ServerMovePacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics
	{
		struct Character_eventStopAnimMontage_Parms
		{
			UAnimMontage* AnimMontage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Character_eventStopAnimMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::NewProp_AnimMontage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Stop Animation Montage. If nullptr, it will stop what's currently active. The Blend Out Time is taken from the montage asset that is being stopped. **/" },
		{ "CPP_Default_AnimMontage", "None" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Stop Animation Montage. If nullptr, it will stop what's currently active. The Blend Out Time is taken from the montage asset that is being stopped. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "StopAnimMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::Character_eventStopAnimMontage_Parms), Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_StopAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_StopAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_StopJumping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_StopJumping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** \n\x09 * Stop the character from jumping on the next update. \n\x09 * Call this from an input event (such as a button 'up' event) to cease applying\n\x09 * jump Z-velocity. If this is not called, then jump z-velocity will be applied\n\x09 * until JumpMaxHoldTime is reached.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Stop the character from jumping on the next update.\nCall this from an input event (such as a button 'up' event) to cease applying\njump Z-velocity. If this is not called, then jump z-velocity will be applied\nuntil JumpMaxHoldTime is reached." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_StopJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "StopJumping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_StopJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_StopJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_StopJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_StopJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_UnCrouch_Statics
	{
		struct Character_eventUnCrouch_Parms
		{
			bool bClientSimulation;
		};
		static void NewProp_bClientSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientSimulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_UnCrouch_Statics::NewProp_bClientSimulation_SetBit(void* Obj)
	{
		((Character_eventUnCrouch_Parms*)Obj)->bClientSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_UnCrouch_Statics::NewProp_bClientSimulation = { "bClientSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Character_eventUnCrouch_Parms), &Z_Construct_UFunction_ACharacter_UnCrouch_Statics::NewProp_bClientSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_UnCrouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_UnCrouch_Statics::NewProp_bClientSimulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_UnCrouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Request the character to stop crouching. The request is processed on the next update of the CharacterMovementComponent.\n\x09 * @see OnEndCrouch\n\x09 * @see IsCrouched\n\x09 * @see CharacterMovement->WantsToCrouch\n\x09 */" },
		{ "CPP_Default_bClientSimulation", "false" },
		{ "HidePin", "bClientSimulation" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Request the character to stop crouching. The request is processed on the next update of the CharacterMovementComponent.\n@see OnEndCrouch\n@see IsCrouched\n@see CharacterMovement->WantsToCrouch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_UnCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, nullptr, "UnCrouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacter_UnCrouch_Statics::Character_eventUnCrouch_Parms), Z_Construct_UFunction_ACharacter_UnCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_UnCrouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_UnCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_UnCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_UnCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacter_UnCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacter);
	UClass* Z_Construct_UClass_ACharacter_NoRegister()
	{
		return ACharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapsuleComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasedMovement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasedMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedBasedMovement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedBasedMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTranslationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTranslationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedServerLastTransformUpdateTimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplicatedServerLastTransformUpdateTimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplayLastTransformUpdateTimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplayLastTransformUpdateTimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMovementMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicatedMovementMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBaseReplication_MetaData[];
#endif
		static void NewProp_bInBaseReplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBaseReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedEyeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchedEyeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[];
#endif
		static void NewProp_bIsCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProxyIsJumpForceApplied_MetaData[];
#endif
		static void NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProxyIsJumpForceApplied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPressedJump_MetaData[];
#endif
		static void NewProp_bPressedJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressedJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientUpdating_MetaData[];
#endif
		static void NewProp_bClientUpdating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientUpdating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientWasFalling_MetaData[];
#endif
		static void NewProp_bClientWasFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientWasFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientResimulateRootMotion_MetaData[];
#endif
		static void NewProp_bClientResimulateRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientResimulateRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientResimulateRootMotionSources_MetaData[];
#endif
		static void NewProp_bClientResimulateRootMotionSources_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientResimulateRootMotionSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimGravityDisabled_MetaData[];
#endif
		static void NewProp_bSimGravityDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimGravityDisabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientCheckEncroachmentOnNetUpdate_MetaData[];
#endif
		static void NewProp_bClientCheckEncroachmentOnNetUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientCheckEncroachmentOnNetUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServerMoveIgnoreRootMotion_MetaData[];
#endif
		static void NewProp_bServerMoveIgnoreRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerMoveIgnoreRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasJumping_MetaData[];
#endif
		static void NewProp_bWasJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpKeyHoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpKeyHoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpForceTimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForceTimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyJumpForceStartedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProxyJumpForceStartedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpMaxHoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpMaxHoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JumpMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpCurrentCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JumpCurrentCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpCurrentCountPreJump_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JumpCurrentCountPreJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReachedJumpApex_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReachedJumpApex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LandedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementModeChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MovementModeChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterMovementUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterMovementUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedRootMotion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientRootMotionParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientRootMotionParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionRepMoves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionRepMoves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootMotionRepMoves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepRootMotion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RepRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset, "CacheInitialMeshOffset" }, // 2082249863
		{ &Z_Construct_UFunction_ACharacter_CanCrouch, "CanCrouch" }, // 1403343794
		{ &Z_Construct_UFunction_ACharacter_CanJump, "CanJump" }, // 989940143
		{ &Z_Construct_UFunction_ACharacter_CanJumpInternal, "CanJumpInternal" }, // 509077355
		{ &Z_Construct_UFunction_ACharacter_ClientAckGoodMove, "ClientAckGoodMove" }, // 448311459
		{ &Z_Construct_UFunction_ACharacter_ClientAdjustPosition, "ClientAdjustPosition" }, // 2553166606
		{ &Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionPosition, "ClientAdjustRootMotionPosition" }, // 1206619194
		{ &Z_Construct_UFunction_ACharacter_ClientAdjustRootMotionSourcePosition, "ClientAdjustRootMotionSourcePosition" }, // 3742294987
		{ &Z_Construct_UFunction_ACharacter_ClientCheatFly, "ClientCheatFly" }, // 949899782
		{ &Z_Construct_UFunction_ACharacter_ClientCheatGhost, "ClientCheatGhost" }, // 1983180634
		{ &Z_Construct_UFunction_ACharacter_ClientCheatWalk, "ClientCheatWalk" }, // 4290553837
		{ &Z_Construct_UFunction_ACharacter_ClientMoveResponsePacked, "ClientMoveResponsePacked" }, // 3638814280
		{ &Z_Construct_UFunction_ACharacter_ClientVeryShortAdjustPosition, "ClientVeryShortAdjustPosition" }, // 341512458
		{ &Z_Construct_UFunction_ACharacter_Crouch, "Crouch" }, // 700272140
		{ &Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale, "GetAnimRootMotionTranslationScale" }, // 2708179027
		{ &Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator, "GetBaseRotationOffsetRotator" }, // 715717400
		{ &Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset, "GetBaseTranslationOffset" }, // 1009632312
		{ &Z_Construct_UFunction_ACharacter_GetCurrentMontage, "GetCurrentMontage" }, // 1546476847
		{ &Z_Construct_UFunction_ACharacter_HasAnyRootMotion, "HasAnyRootMotion" }, // 2833858016
		{ &Z_Construct_UFunction_ACharacter_IsJumpProvidingForce, "IsJumpProvidingForce" }, // 1354014127
		{ &Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage, "IsPlayingNetworkedRootMotionMontage" }, // 1621140031
		{ &Z_Construct_UFunction_ACharacter_IsPlayingRootMotion, "IsPlayingRootMotion" }, // 4276396209
		{ &Z_Construct_UFunction_ACharacter_Jump, "Jump" }, // 2621732335
		{ &Z_Construct_UFunction_ACharacter_K2_OnEndCrouch, "K2_OnEndCrouch" }, // 409246664
		{ &Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged, "K2_OnMovementModeChanged" }, // 686587723
		{ &Z_Construct_UFunction_ACharacter_K2_OnStartCrouch, "K2_OnStartCrouch" }, // 1061397633
		{ &Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement, "K2_UpdateCustomMovement" }, // 1001906383
		{ &Z_Construct_UFunction_ACharacter_LaunchCharacter, "LaunchCharacter" }, // 3452985436
		{ &Z_Construct_UFunction_ACharacter_OnJumped, "OnJumped" }, // 3518914689
		{ &Z_Construct_UFunction_ACharacter_OnLanded, "OnLanded" }, // 2583324577
		{ &Z_Construct_UFunction_ACharacter_OnLaunched, "OnLaunched" }, // 3430320345
		{ &Z_Construct_UFunction_ACharacter_OnRep_IsCrouched, "OnRep_IsCrouched" }, // 760667973
		{ &Z_Construct_UFunction_ACharacter_OnRep_ReplayLastTransformUpdateTimeStamp, "OnRep_ReplayLastTransformUpdateTimeStamp" }, // 987309715
		{ &Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement, "OnRep_ReplicatedBasedMovement" }, // 585953007
		{ &Z_Construct_UFunction_ACharacter_OnRep_RootMotion, "OnRep_RootMotion" }, // 3787477398
		{ &Z_Construct_UFunction_ACharacter_OnWalkingOffLedge, "OnWalkingOffLedge" }, // 1209478631
		{ &Z_Construct_UFunction_ACharacter_PlayAnimMontage, "PlayAnimMontage" }, // 3342605851
		{ &Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen, "RootMotionDebugClientPrintOnScreen" }, // 3711583206
		{ &Z_Construct_UFunction_ACharacter_ServerMove, "ServerMove" }, // 1731565775
		{ &Z_Construct_UFunction_ACharacter_ServerMoveDual, "ServerMoveDual" }, // 2467626570
		{ &Z_Construct_UFunction_ACharacter_ServerMoveDualHybridRootMotion, "ServerMoveDualHybridRootMotion" }, // 1406697803
		{ &Z_Construct_UFunction_ACharacter_ServerMoveDualNoBase, "ServerMoveDualNoBase" }, // 1329764756
		{ &Z_Construct_UFunction_ACharacter_ServerMoveNoBase, "ServerMoveNoBase" }, // 2517428355
		{ &Z_Construct_UFunction_ACharacter_ServerMoveOld, "ServerMoveOld" }, // 2640481576
		{ &Z_Construct_UFunction_ACharacter_ServerMovePacked, "ServerMovePacked" }, // 2809775326
		{ &Z_Construct_UFunction_ACharacter_StopAnimMontage, "StopAnimMontage" }, // 204438904
		{ &Z_Construct_UFunction_ACharacter_StopJumping, "StopJumping" }, // 1229135822
		{ &Z_Construct_UFunction_ACharacter_UnCrouch, "UnCrouch" }, // 2576116325
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Characters are Pawns that have a mesh, collision, and built-in movement logic.\n * They are responsible for all physical interaction between the player or AI and the world, and also implement basic networking and input models.\n * They are designed for a vertically-oriented player representation that can walk, jump, fly, and swim through the world using CharacterMovementComponent.\n *\n * @see APawn, UCharacterMovementComponent\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/Character.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A character is a type of Pawn that includes the ability to walk around." },
		{ "ToolTip", "Characters are Pawns that have a mesh, collision, and built-in movement logic.\nThey are responsible for all physical interaction between the player or AI and the world, and also implement basic networking and input models.\nThey are designed for a vertically-oriented player representation that can walk, jump, fly, and swim through the world using CharacterMovementComponent.\n\n@see APawn, UCharacterMovementComponent\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The main skeletal mesh associated with this Character (optional sub-object). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_CharacterMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** Movement component used for movement logic in various movement modes (walking, falling, etc), containing relevant settings and functions to control movement. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Movement component used for movement logic in various movement modes (walking, falling, etc), containing relevant settings and functions to control movement." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_CharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_CharacterMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The CapsuleComponent being used for movement collision (by CharacterMovement). Always treated as being vertically aligned in simple collision check functions. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "The CapsuleComponent being used for movement collision (by CharacterMovement). Always treated as being vertically aligned in simple collision check functions." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** Component shown in the editor only to indicate character facing */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Component shown in the editor only to indicate character facing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_BasedMovement_MetaData[] = {
		{ "Comment", "/** Info about our current movement base (object we are standing on). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Info about our current movement base (object we are standing on)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_BasedMovement = { "BasedMovement", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, BasedMovement), Z_Construct_UScriptStruct_FBasedMovementInfo, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_BasedMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_BasedMovement_MetaData)) }; // 1841132005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedBasedMovement_MetaData[] = {
		{ "Comment", "/** Replicated version of relative movement. Read-only on simulated proxies! */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Replicated version of relative movement. Read-only on simulated proxies!" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedBasedMovement = { "ReplicatedBasedMovement", "OnRep_ReplicatedBasedMovement", (EPropertyFlags)0x0020088100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, ReplicatedBasedMovement), Z_Construct_UScriptStruct_FBasedMovementInfo, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedBasedMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedBasedMovement_MetaData)) }; // 1841132005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to root motion translation on this Character */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Scale to apply to root motion translation on this Character" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, AnimRootMotionTranslationScale), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_AnimRootMotionTranslationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_AnimRootMotionTranslationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_BaseTranslationOffset_MetaData[] = {
		{ "Comment", "/** Saved translation offset of mesh. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Saved translation offset of mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_BaseTranslationOffset = { "BaseTranslationOffset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, BaseTranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_BaseTranslationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_BaseTranslationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_BaseRotationOffset_MetaData[] = {
		{ "Comment", "/** Saved rotation offset of mesh. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Saved rotation offset of mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_BaseRotationOffset = { "BaseRotationOffset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, BaseRotationOffset), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_BaseRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_BaseRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedServerLastTransformUpdateTimeStamp_MetaData[] = {
		{ "Comment", "/** CharacterMovement ServerLastTransformUpdateTimeStamp value, replicated to simulated proxies. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "CharacterMovement ServerLastTransformUpdateTimeStamp value, replicated to simulated proxies." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedServerLastTransformUpdateTimeStamp = { "ReplicatedServerLastTransformUpdateTimeStamp", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, ReplicatedServerLastTransformUpdateTimeStamp), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedServerLastTransformUpdateTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedServerLastTransformUpdateTimeStamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_ReplayLastTransformUpdateTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_ReplayLastTransformUpdateTimeStamp = { "ReplayLastTransformUpdateTimeStamp", "OnRep_ReplayLastTransformUpdateTimeStamp", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, ReplayLastTransformUpdateTimeStamp), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_ReplayLastTransformUpdateTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_ReplayLastTransformUpdateTimeStamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedMovementMode_MetaData[] = {
		{ "Comment", "/** CharacterMovement MovementMode (and custom mode) replicated for simulated proxies. Use CharacterMovementComponent::UnpackNetworkMovementMode() to translate it. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "CharacterMovement MovementMode (and custom mode) replicated for simulated proxies. Use CharacterMovementComponent::UnpackNetworkMovementMode() to translate it." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedMovementMode = { "ReplicatedMovementMode", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, ReplicatedMovementMode), nullptr, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedMovementMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bInBaseReplication_MetaData[] = {
		{ "Comment", "/** Flag that we are receiving replication of the based movement. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Flag that we are receiving replication of the based movement." },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bInBaseReplication_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bInBaseReplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bInBaseReplication = { "bInBaseReplication", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bInBaseReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bInBaseReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bInBaseReplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_CrouchedEyeHeight_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Default crouched eye height */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Default crouched eye height" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_CrouchedEyeHeight = { "CrouchedEyeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, CrouchedEyeHeight), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_CrouchedEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_CrouchedEyeHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bIsCrouched_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Set by character movement to specify that this Character is currently crouched. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Set by character movement to specify that this Character is currently crouched." },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bIsCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bIsCrouched = { "bIsCrouched", "OnRep_IsCrouched", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bIsCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bIsCrouched_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bProxyIsJumpForceApplied_MetaData[] = {
		{ "Comment", "/** Set to indicate that this Character is currently under the force of a jump (if JumpMaxHoldTime is non-zero). IsJumpProvidingForce() handles this as well. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Set to indicate that this Character is currently under the force of a jump (if JumpMaxHoldTime is non-zero). IsJumpProvidingForce() handles this as well." },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bProxyIsJumpForceApplied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bProxyIsJumpForceApplied = { "bProxyIsJumpForceApplied", nullptr, (EPropertyFlags)0x0010000000002020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bProxyIsJumpForceApplied_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bProxyIsJumpForceApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bProxyIsJumpForceApplied_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bPressedJump_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** When true, player wants to jump */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "When true, player wants to jump" },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bPressedJump_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bPressedJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bPressedJump = { "bPressedJump", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bPressedJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bPressedJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bPressedJump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bClientUpdating_MetaData[] = {
		{ "Comment", "/** When true, applying updates to network client (replaying saved moves for a locally controlled character) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "When true, applying updates to network client (replaying saved moves for a locally controlled character)" },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bClientUpdating_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bClientUpdating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bClientUpdating = { "bClientUpdating", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bClientUpdating_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientUpdating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientUpdating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bClientWasFalling_MetaData[] = {
		{ "Comment", "/** True if Pawn was initially falling when started to replay network moves. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "True if Pawn was initially falling when started to replay network moves." },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bClientWasFalling_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bClientWasFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bClientWasFalling = { "bClientWasFalling", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bClientWasFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientWasFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientWasFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotion_MetaData[] = {
		{ "Comment", "/** If server disagrees with root motion track position, client has to resimulate root motion from last AckedMove. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "If server disagrees with root motion track position, client has to resimulate root motion from last AckedMove." },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotion_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bClientResimulateRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotion = { "bClientResimulateRootMotion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotionSources_MetaData[] = {
		{ "Comment", "/** If server disagrees with root motion state, client has to resimulate root motion from last AckedMove. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "If server disagrees with root motion state, client has to resimulate root motion from last AckedMove." },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotionSources_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bClientResimulateRootMotionSources = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotionSources = { "bClientResimulateRootMotionSources", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotionSources_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotionSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotionSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bSimGravityDisabled_MetaData[] = {
		{ "Comment", "/** Disable simulated gravity (set when character encroaches geometry on client, to keep it from falling through floors) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Disable simulated gravity (set when character encroaches geometry on client, to keep it from falling through floors)" },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bSimGravityDisabled_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bSimGravityDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bSimGravityDisabled = { "bSimGravityDisabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bSimGravityDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bSimGravityDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bSimGravityDisabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bClientCheckEncroachmentOnNetUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bClientCheckEncroachmentOnNetUpdate_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bClientCheckEncroachmentOnNetUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bClientCheckEncroachmentOnNetUpdate = { "bClientCheckEncroachmentOnNetUpdate", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bClientCheckEncroachmentOnNetUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientCheckEncroachmentOnNetUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bClientCheckEncroachmentOnNetUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bServerMoveIgnoreRootMotion_MetaData[] = {
		{ "Comment", "/** Disable root motion on the server. When receiving a DualServerMove, where the first move is not root motion and the second is. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Disable root motion on the server. When receiving a DualServerMove, where the first move is not root motion and the second is." },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bServerMoveIgnoreRootMotion_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bServerMoveIgnoreRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bServerMoveIgnoreRootMotion = { "bServerMoveIgnoreRootMotion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bServerMoveIgnoreRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bServerMoveIgnoreRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bServerMoveIgnoreRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_bWasJumping_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Tracks whether or not the character was already jumping last frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Tracks whether or not the character was already jumping last frame." },
	};
#endif
	void Z_Construct_UClass_ACharacter_Statics::NewProp_bWasJumping_SetBit(void* Obj)
	{
		((ACharacter*)Obj)->bWasJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_bWasJumping = { "bWasJumping", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACharacter), &Z_Construct_UClass_ACharacter_Statics::NewProp_bWasJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_bWasJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_bWasJumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_JumpKeyHoldTime_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** \n\x09 * Jump key Held Time.\n\x09 * This is the time that the player has held the jump key, in seconds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Jump key Held Time.\nThis is the time that the player has held the jump key, in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_JumpKeyHoldTime = { "JumpKeyHoldTime", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, JumpKeyHoldTime), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpKeyHoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpKeyHoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_JumpForceTimeRemaining_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Amount of jump force time remaining, if JumpMaxHoldTime > 0. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Amount of jump force time remaining, if JumpMaxHoldTime > 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_JumpForceTimeRemaining = { "JumpForceTimeRemaining", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, JumpForceTimeRemaining), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpForceTimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpForceTimeRemaining_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_ProxyJumpForceStartedTime_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Track last time a jump force started for a proxy. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Track last time a jump force started for a proxy." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_ProxyJumpForceStartedTime = { "ProxyJumpForceStartedTime", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, ProxyJumpForceStartedTime), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_ProxyJumpForceStartedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_ProxyJumpForceStartedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxHoldTime_MetaData[] = {
		{ "Category", "Character" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** \n\x09 * The max time the jump key can be held.\n\x09 * Note that if StopJumping() is not called before the max jump hold time is reached,\n\x09 * then the character will carry on receiving vertical velocity. Therefore it is usually \n\x09 * best to call StopJumping() when jump input has ceased (such as a button up event).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "The max time the jump key can be held.\nNote that if StopJumping() is not called before the max jump hold time is reached,\nthen the character will carry on receiving vertical velocity. Therefore it is usually\nbest to call StopJumping() when jump input has ceased (such as a button up event)." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxHoldTime = { "JumpMaxHoldTime", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, JumpMaxHoldTime), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxHoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxHoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxCount_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n     * The max number of jumps the character can perform.\n     * Note that if JumpMaxHoldTime is non zero and StopJumping is not called, the player\n     * may be able to perform and unlimited number of jumps. Therefore it is usually\n     * best to call StopJumping() when jump input has ceased (such as a button up event).\n     */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "The max number of jumps the character can perform.\nNote that if JumpMaxHoldTime is non zero and StopJumping is not called, the player\nmay be able to perform and unlimited number of jumps. Therefore it is usually\nbest to call StopJumping() when jump input has ceased (such as a button up event)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxCount = { "JumpMaxCount", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, JumpMaxCount), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCount_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n     * Tracks the current number of jumps performed.\n     * This is incremented in CheckJumpInput, used in CanJump_Implementation, and reset in OnMovementModeChanged.\n     * When providing overrides for these methods, it's recommended to either manually\n     * increment / reset this value, or call the Super:: method.\n     */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Tracks the current number of jumps performed.\nThis is incremented in CheckJumpInput, used in CanJump_Implementation, and reset in OnMovementModeChanged.\nWhen providing overrides for these methods, it's recommended to either manually\nincrement / reset this value, or call the Super:: method." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCount = { "JumpCurrentCount", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, JumpCurrentCount), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCountPreJump_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Represents the current number of jumps performed before CheckJumpInput modifies JumpCurrentCount.\n\x09 * This is set in CheckJumpInput and is used in SetMoveFor and PrepMoveFor instead of JumpCurrentCount\n\x09 * since CheckJumpInput can modify JumpCurrentCount.\n\x09 * When providing overrides for these methods, it's recommended to either manually\n\x09 * set this value, or call the Super:: method.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Represents the current number of jumps performed before CheckJumpInput modifies JumpCurrentCount.\nThis is set in CheckJumpInput and is used in SetMoveFor and PrepMoveFor instead of JumpCurrentCount\nsince CheckJumpInput can modify JumpCurrentCount.\nWhen providing overrides for these methods, it's recommended to either manually\nset this value, or call the Super:: method." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCountPreJump = { "JumpCurrentCountPreJump", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, JumpCurrentCountPreJump), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCountPreJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCountPreJump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_OnReachedJumpApex_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Broadcast when Character's jump reaches its apex. Needs CharacterMovement->bNotifyApex = true */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Broadcast when Character's jump reaches its apex. Needs CharacterMovement->bNotifyApex = true" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_OnReachedJumpApex = { "OnReachedJumpApex", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, OnReachedJumpApex), Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_OnReachedJumpApex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_OnReachedJumpApex_MetaData)) }; // 4115536723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_LandedDelegate_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Called upon landing when falling, to perform actions based on the Hit result.\n\x09 * Note that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.\n\x09 * Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).\n\x09 *\n\x09 * @param Hit Result describing the landing that resulted in a valid landing spot.\n\x09 * @see OnMovementModeChanged()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Called upon landing when falling, to perform actions based on the Hit result.\nNote that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.\nConsider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).\n\n@param Hit Result describing the landing that resulted in a valid landing spot.\n@see OnMovementModeChanged()" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_LandedDelegate = { "LandedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, LandedDelegate), Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_LandedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_LandedDelegate_MetaData)) }; // 2104382263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_MovementModeChangedDelegate_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Multicast delegate for MovementMode changing. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Multicast delegate for MovementMode changing." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_MovementModeChangedDelegate = { "MovementModeChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, MovementModeChangedDelegate), Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_MovementModeChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_MovementModeChangedDelegate_MetaData)) }; // 2979844023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_OnCharacterMovementUpdated_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Event triggered at the end of a CharacterMovementComponent movement update.\n\x09 * This is the preferred event to use rather than the Tick event when performing custom updates to CharacterMovement properties based on the current state.\n\x09 * This is mainly due to the nature of network updates, where client corrections in position from the server can cause multiple iterations of a movement update,\n\x09 * which allows this event to update as well, while a Tick event would not.\n\x09 *\n\x09 * @param\x09""DeltaSeconds\x09\x09""Delta time in seconds for this update\n\x09 * @param\x09InitialLocation\x09\x09Location at the start of the update. May be different than the current location if movement occurred.\n\x09 * @param\x09InitialVelocity\x09\x09Velocity at the start of the update. May be different than the current velocity.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Event triggered at the end of a CharacterMovementComponent movement update.\nThis is the preferred event to use rather than the Tick event when performing custom updates to CharacterMovement properties based on the current state.\nThis is mainly due to the nature of network updates, where client corrections in position from the server can cause multiple iterations of a movement update,\nwhich allows this event to update as well, while a Tick event would not.\n\n@param       DeltaSeconds            Delta time in seconds for this update\n@param       InitialLocation         Location at the start of the update. May be different than the current location if movement occurred.\n@param       InitialVelocity         Velocity at the start of the update. May be different than the current velocity." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_OnCharacterMovementUpdated = { "OnCharacterMovementUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, OnCharacterMovementUpdated), Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_OnCharacterMovementUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_OnCharacterMovementUpdated_MetaData)) }; // 2996267963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_SavedRootMotion_MetaData[] = {
		{ "Comment", "/** \n\x09 * For LocallyControlled Autonomous clients. \n\x09 * During a PerformMovement() after root motion is prepared, we save it off into this and\n\x09 * then record it into our SavedMoves.\n\x09 * During SavedMove playback we use it as our \"Previous Move\" SavedRootMotion which includes\n\x09 * last received root motion from the Server\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "For LocallyControlled Autonomous clients.\nDuring a PerformMovement() after root motion is prepared, we save it off into this and\nthen record it into our SavedMoves.\nDuring SavedMove playback we use it as our \"Previous Move\" SavedRootMotion which includes\nlast received root motion from the Server" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_SavedRootMotion = { "SavedRootMotion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, SavedRootMotion), Z_Construct_UScriptStruct_FRootMotionSourceGroup, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_SavedRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_SavedRootMotion_MetaData)) }; // 4172579480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_ClientRootMotionParams_MetaData[] = {
		{ "Comment", "/** For LocallyControlled Autonomous clients. Saved root motion data to be used by SavedMoves. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "For LocallyControlled Autonomous clients. Saved root motion data to be used by SavedMoves." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_ClientRootMotionParams = { "ClientRootMotionParams", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, ClientRootMotionParams), Z_Construct_UScriptStruct_FRootMotionMovementParams, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_ClientRootMotionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_ClientRootMotionParams_MetaData)) }; // 3125160171
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_RootMotionRepMoves_Inner = { "RootMotionRepMoves", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove, METADATA_PARAMS(nullptr, 0) }; // 798726833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_RootMotionRepMoves_MetaData[] = {
		{ "Comment", "/** Array of previously received root motion moves from the server. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Array of previously received root motion moves from the server." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_RootMotionRepMoves = { "RootMotionRepMoves", nullptr, (EPropertyFlags)0x0010008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, RootMotionRepMoves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_RootMotionRepMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_RootMotionRepMoves_MetaData)) }; // 798726833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Statics::NewProp_RepRootMotion_MetaData[] = {
		{ "Comment", "/** Replicated Root Motion montage */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
		{ "ToolTip", "Replicated Root Motion montage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Statics::NewProp_RepRootMotion = { "RepRootMotion", "OnRep_RootMotion", (EPropertyFlags)0x0010008100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacter, RepRootMotion), Z_Construct_UScriptStruct_FRepRootMotionMontage, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::NewProp_RepRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::NewProp_RepRootMotion_MetaData)) }; // 1080538919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_CharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_CapsuleComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_BasedMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedBasedMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_BaseTranslationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_BaseRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedServerLastTransformUpdateTimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_ReplayLastTransformUpdateTimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_ReplicatedMovementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bInBaseReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_CrouchedEyeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bIsCrouched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bProxyIsJumpForceApplied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bPressedJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bClientUpdating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bClientWasFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bClientResimulateRootMotionSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bSimGravityDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bClientCheckEncroachmentOnNetUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bServerMoveIgnoreRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_bWasJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_JumpKeyHoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_JumpForceTimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_ProxyJumpForceStartedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxHoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_JumpMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_JumpCurrentCountPreJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_OnReachedJumpApex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_LandedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_MovementModeChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_OnCharacterMovementUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_SavedRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_ClientRootMotionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_RootMotionRepMoves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_RootMotionRepMoves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Statics::NewProp_RepRootMotion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_Statics::ClassParams = {
		&ACharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacter()
	{
		if (!Z_Registration_Info_UClass_ACharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacter.OuterSingleton, Z_Construct_UClass_ACharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ACharacter>()
	{
		return ACharacter::StaticClass();
	}

	void ACharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedBasedMovement(TEXT("ReplicatedBasedMovement"));
		static const FName Name_AnimRootMotionTranslationScale(TEXT("AnimRootMotionTranslationScale"));
		static const FName Name_ReplicatedServerLastTransformUpdateTimeStamp(TEXT("ReplicatedServerLastTransformUpdateTimeStamp"));
		static const FName Name_ReplayLastTransformUpdateTimeStamp(TEXT("ReplayLastTransformUpdateTimeStamp"));
		static const FName Name_ReplicatedMovementMode(TEXT("ReplicatedMovementMode"));
		static const FName Name_bIsCrouched(TEXT("bIsCrouched"));
		static const FName Name_bProxyIsJumpForceApplied(TEXT("bProxyIsJumpForceApplied"));
		static const FName Name_JumpMaxHoldTime(TEXT("JumpMaxHoldTime"));
		static const FName Name_JumpMaxCount(TEXT("JumpMaxCount"));
		static const FName Name_RepRootMotion(TEXT("RepRootMotion"));

		const bool bIsValid = true
			&& Name_ReplicatedBasedMovement == ClassReps[(int32)ENetFields_Private::ReplicatedBasedMovement].Property->GetFName()
			&& Name_AnimRootMotionTranslationScale == ClassReps[(int32)ENetFields_Private::AnimRootMotionTranslationScale].Property->GetFName()
			&& Name_ReplicatedServerLastTransformUpdateTimeStamp == ClassReps[(int32)ENetFields_Private::ReplicatedServerLastTransformUpdateTimeStamp].Property->GetFName()
			&& Name_ReplayLastTransformUpdateTimeStamp == ClassReps[(int32)ENetFields_Private::ReplayLastTransformUpdateTimeStamp].Property->GetFName()
			&& Name_ReplicatedMovementMode == ClassReps[(int32)ENetFields_Private::ReplicatedMovementMode].Property->GetFName()
			&& Name_bIsCrouched == ClassReps[(int32)ENetFields_Private::bIsCrouched].Property->GetFName()
			&& Name_bProxyIsJumpForceApplied == ClassReps[(int32)ENetFields_Private::bProxyIsJumpForceApplied].Property->GetFName()
			&& Name_JumpMaxHoldTime == ClassReps[(int32)ENetFields_Private::JumpMaxHoldTime].Property->GetFName()
			&& Name_JumpMaxCount == ClassReps[(int32)ENetFields_Private::JumpMaxCount].Property->GetFName()
			&& Name_RepRootMotion == ClassReps[(int32)ENetFields_Private::RepRootMotion].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter);
	ACharacter::~ACharacter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_Statics::ScriptStructInfo[] = {
		{ FRepRootMotionMontage::StaticStruct, Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics::NewStructOps, TEXT("RepRootMotionMontage"), &Z_Registration_Info_UScriptStruct_RepRootMotionMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepRootMotionMontage), 1080538919U) },
		{ FSimulatedRootMotionReplicatedMove::StaticStruct, Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics::NewStructOps, TEXT("SimulatedRootMotionReplicatedMove"), &Z_Registration_Info_UScriptStruct_SimulatedRootMotionReplicatedMove, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimulatedRootMotionReplicatedMove), 798726833U) },
		{ FBasedMovementInfo::StaticStruct, Z_Construct_UScriptStruct_FBasedMovementInfo_Statics::NewStructOps, TEXT("BasedMovementInfo"), &Z_Registration_Info_UScriptStruct_BasedMovementInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasedMovementInfo), 1841132005U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacter, ACharacter::StaticClass, TEXT("ACharacter"), &Z_Registration_Info_UClass_ACharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacter), 1734481906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_669094128(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
