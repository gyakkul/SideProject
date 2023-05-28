// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "../../Source/Runtime/Engine/Public/AlphaBlend.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
#include "../../Source/Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimCurveType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontagePlayReturnType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETeleportType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionRequestQueueMode();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FA2CSPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FA2Pose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlendArgs();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMontageBlendSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontagePlayReturnType;
	static UEnum* EMontagePlayReturnType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontagePlayReturnType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMontagePlayReturnType"));
		}
		return Z_Registration_Info_UEnum_EMontagePlayReturnType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMontagePlayReturnType>()
	{
		return EMontagePlayReturnType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::Enumerators[] = {
		{ "EMontagePlayReturnType::MontageLength", (int64)EMontagePlayReturnType::MontageLength },
		{ "EMontagePlayReturnType::Duration", (int64)EMontagePlayReturnType::Duration },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::Enum_MetaDataParams[] = {
		{ "Duration.Comment", "//Return value is the play duration of the montage (length / play rate, in seconds)\n" },
		{ "Duration.Name", "EMontagePlayReturnType::Duration" },
		{ "Duration.ToolTip", "Return value is the play duration of the montage (length / play rate, in seconds)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "MontageLength.Comment", "//Return value is the length of the montage (in seconds)\n" },
		{ "MontageLength.Name", "EMontagePlayReturnType::MontageLength" },
		{ "MontageLength.ToolTip", "Return value is the length of the montage (in seconds)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMontagePlayReturnType",
		"EMontagePlayReturnType",
		Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMontagePlayReturnType()
	{
		if (!Z_Registration_Info_UEnum_EMontagePlayReturnType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontagePlayReturnType.InnerSingleton, Z_Construct_UEnum_Engine_EMontagePlayReturnType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMontagePlayReturnType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnMontageStartedMCDelegate_Parms
		{
			UAnimMontage* Montage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnMontageStartedMCDelegate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Delegate for when Montage is started\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate for when Montage is started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnMontageStartedMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::_Script_Engine_eventOnMontageStartedMCDelegate_Parms), Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMontageStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageStartedMCDelegate, UAnimMontage* Montage)
{
	struct _Script_Engine_eventOnMontageStartedMCDelegate_Parms
	{
		UAnimMontage* Montage;
	};
	_Script_Engine_eventOnMontageStartedMCDelegate_Parms Parms;
	Parms.Montage=Montage;
	OnMontageStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnMontageEndedMCDelegate_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnMontageEndedMCDelegate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((_Script_Engine_eventOnMontageEndedMCDelegate_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Engine_eventOnMontageEndedMCDelegate_Parms), &Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Delegate for when Montage is completed, whether interrupted or finished\n* Weight of this montage is 0.f, so it stops contributing to output pose\n*\n* bInterrupted = true if it was not property finished\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate for when Montage is completed, whether interrupted or finished\nWeight of this montage is 0.f, so it stops contributing to output pose\n\nbInterrupted = true if it was not property finished" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnMontageEndedMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::_Script_Engine_eventOnMontageEndedMCDelegate_Parms), Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMontageEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageEndedMCDelegate, UAnimMontage* Montage, bool bInterrupted)
{
	struct _Script_Engine_eventOnMontageEndedMCDelegate_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
	_Script_Engine_eventOnMontageEndedMCDelegate_Parms Parms;
	Parms.Montage=Montage;
	Parms.bInterrupted=bInterrupted ? true : false;
	OnMontageEndedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for when all montage instances have ended. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate for when all montage instances have ended." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAllMontageInstancesEndedMCDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAllMontageInstancesEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAllMontageInstancesEndedMCDelegate)
{
	OnAllMontageInstancesEndedMCDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms), &Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Delegate for when Montage started to blend out, whether interrupted or finished\n* DesiredWeight of this montage becomes 0.f, but this still contributes to the output pose\n*\n* bInterrupted = true if it was not property finished\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate for when Montage started to blend out, whether interrupted or finished\nDesiredWeight of this montage becomes 0.f, but this still contributes to the output pose\n\nbInterrupted = true if it was not property finished" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnMontageBlendingOutStartedMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms), Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMontageBlendingOutStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageBlendingOutStartedMCDelegate, UAnimMontage* Montage, bool bInterrupted)
{
	struct _Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
	_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms Parms;
	Parms.Montage=Montage;
	Parms.bInterrupted=bInterrupted ? true : false;
	OnMontageBlendingOutStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointPayload;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload_MetaData)) }; // 3465490004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::NewProp_BranchingPointPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called by 'PlayMontageNotify' and 'PlayMontageNotifyWindow' **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Delegate called by 'PlayMontageNotify' and 'PlayMontageNotifyWindow' *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PlayMontageAnimNotifyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms), Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_PlayMontageAnimNotifyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayMontageAnimNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayMontageAnimNotifyDelegate, FName NotifyName, FBranchingPointNotifyPayload const& BranchingPointPayload)
{
	struct _Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointPayload;
	};
	_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms Parms;
	Parms.NotifyName=NotifyName;
	Parms.BranchingPointPayload=BranchingPointPayload;
	PlayMontageAnimNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_A2Pose;
class UScriptStruct* FA2Pose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_A2Pose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_A2Pose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FA2Pose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("A2Pose"));
	}
	return Z_Registration_Info_UScriptStruct_A2Pose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FA2Pose>()
{
	return FA2Pose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FA2Pose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FA2Pose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FA2Pose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FA2Pose>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FA2Pose, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FA2Pose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FA2Pose_Statics::NewProp_Bones,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FA2Pose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"A2Pose",
		sizeof(FA2Pose),
		alignof(FA2Pose),
		Z_Construct_UScriptStruct_FA2Pose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2Pose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FA2Pose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2Pose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FA2Pose()
	{
		if (!Z_Registration_Info_UScriptStruct_A2Pose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_A2Pose.InnerSingleton, Z_Construct_UScriptStruct_FA2Pose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_A2Pose.InnerSingleton;
	}

static_assert(std::is_polymorphic<FA2CSPose>() == std::is_polymorphic<FA2Pose>(), "USTRUCT FA2CSPose cannot be polymorphic unless super FA2Pose is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_A2CSPose;
class UScriptStruct* FA2CSPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_A2CSPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_A2CSPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FA2CSPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("A2CSPose"));
	}
	return Z_Registration_Info_UScriptStruct_A2CSPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FA2CSPose>()
{
	return FA2CSPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FA2CSPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentSpaceFlags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSpaceFlags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentSpaceFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FA2CSPose_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component space poses. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Component space poses." },
	};
#endif
	void* Z_Construct_UScriptStruct_FA2CSPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FA2CSPose>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_Inner = { "ComponentSpaceFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_MetaData[] = {
		{ "Comment", "/** Once evaluated to be mesh space, this flag will be set. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Once evaluated to be mesh space, this flag will be set." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags = { "ComponentSpaceFlags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FA2CSPose, ComponentSpaceFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FA2CSPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FA2CSPose_Statics::NewProp_ComponentSpaceFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FA2CSPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FA2Pose,
		&NewStructOps,
		"A2CSPose",
		sizeof(FA2CSPose),
		alignof(FA2CSPose),
		Z_Construct_UScriptStruct_FA2CSPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2CSPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FA2CSPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FA2CSPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FA2CSPose()
	{
		if (!Z_Registration_Info_UScriptStruct_A2CSPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_A2CSPose.InnerSingleton, Z_Construct_UScriptStruct_FA2CSPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_A2CSPose.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetDeltaSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDeltaSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execResetDynamics)
	{
		P_GET_ENUM(ETeleportType,Z_Param_InTeleportType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDynamics(ETeleportType(Z_Param_InTeleportType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execQueryAndMarkTransitionEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueryAndMarkTransitionEvent(Z_Param_MachineIndex,Z_Param_TransitionIndex,Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execQueryTransitionEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueryTransitionEvent(Z_Param_MachineIndex,Z_Param_TransitionIndex,Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execClearAllTransitionEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllTransitionEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execClearTransitionEvents)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTransitionEvents(Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execRequestTransitionEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_RequestTimeout);
		P_GET_ENUM(ETransitionRequestQueueMode,Z_Param_QueueMode);
		P_GET_ENUM(ETransitionRequestOverwriteMode,Z_Param_OverwriteMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestTransitionEvent(Z_Param_EventName,Z_Param_RequestTimeout,ETransitionRequestQueueMode(Z_Param_QueueMode),ETransitionRequestOverwriteMode(Z_Param_OverwriteMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetSyncGroupPosition)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSyncGroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMarkerSyncAnimPosition*)Z_Param__Result=P_THIS->GetSyncGroupPosition(Z_Param_InSyncGroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execIsSyncGroupBetweenMarkers)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSyncGroupName);
		P_GET_PROPERTY(FNameProperty,Z_Param_PreviousMarker);
		P_GET_PROPERTY(FNameProperty,Z_Param_NextMarker);
		P_GET_UBOOL(Z_Param_bRespectMarkerOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSyncGroupBetweenMarkers(Z_Param_InSyncGroupName,Z_Param_PreviousMarker,Z_Param_NextMarker,Z_Param_bRespectMarkerOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execHasMarkerBeenHitThisFrame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SyncGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_MarkerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMarkerBeenHitThisFrame(Z_Param_SyncGroup,Z_Param_MarkerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetTimeToClosestMarker)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SyncGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_MarkerName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMarkerTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTimeToClosestMarker(Z_Param_SyncGroup,Z_Param_MarkerName,Z_Param_Out_OutMarkerTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execUnlockAIResources)
	{
		P_GET_UBOOL(Z_Param_bUnlockMovement);
		P_GET_UBOOL(Z_Param_UnlockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockAIResources(Z_Param_bUnlockMovement,Z_Param_UnlockAILogic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execLockAIResources)
	{
		P_GET_UBOOL(Z_Param_bLockMovement);
		P_GET_UBOOL(Z_Param_LockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockAIResources(Z_Param_bLockMovement,Z_Param_LockAILogic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execCalculateDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_BaseRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateDirection(Z_Param_Out_Velocity,Z_Param_Out_BaseRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execClearMorphTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMorphTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetMorphTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MorphTargetName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetCurrentStateName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentStateName(Z_Param_MachineIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetAllCurveNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllCurveNames(Z_Param_Out_OutNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetActiveCurveNames)
	{
		P_GET_ENUM(EAnimCurveType,Z_Param_CurveType);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveCurveNames(EAnimCurveType(Z_Param_CurveType),Z_Param_Out_OutNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetCurveValueWithDefault)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurveValueWithDefault(Z_Param_CurveName,Z_Param_DefaultValue,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetCurveValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurveValue(Z_Param_CurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyNameTriggeredInAnyState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyNameTriggeredInAnyState(Z_Param_NotifyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyTriggeredInAnyState)
	{
		P_GET_OBJECT(UClass,Z_Param_AnimNotifyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyTriggeredInAnyState(Z_Param_AnimNotifyType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyNameTriggeredInStateMachine)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyNameTriggeredInStateMachine(Z_Param_MachineIndex,Z_Param_NotifyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyTriggeredInStateMachine)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_OBJECT(UClass,Z_Param_AnimNotifyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyTriggeredInStateMachine(Z_Param_MachineIndex,Z_Param_AnimNotifyType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyNameTriggeredInSourceState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyNameTriggeredInSourceState(Z_Param_MachineIndex,Z_Param_StateIndex,Z_Param_NotifyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyTriggeredInSourceState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_GET_OBJECT(UClass,Z_Param_AnimNotifyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyTriggeredInSourceState(Z_Param_MachineIndex,Z_Param_StateIndex,Z_Param_AnimNotifyType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyStateActiveInSourceState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_GET_OBJECT(UClass,Z_Param_AnimNotifyStateType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyStateActiveInSourceState(Z_Param_MachineIndex,Z_Param_StateIndex,Z_Param_AnimNotifyStateType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyStateActiveInStateMachine)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_OBJECT(UClass,Z_Param_AnimNotifyStateType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyStateActiveInStateMachine(Z_Param_MachineIndex,Z_Param_AnimNotifyStateType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execWasAnimNotifyStateActiveInAnyState)
	{
		P_GET_OBJECT(UClass,Z_Param_AnimNotifyStateType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasAnimNotifyStateActiveInAnyState(Z_Param_AnimNotifyStateType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimTimeFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeFraction(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTime(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimLength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimLength(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimTimeRemainingFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeRemainingFraction(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetRelevantAnimTimeRemaining)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRelevantAnimTimeRemaining(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceTransitionTimeElapsedFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionTimeElapsedFraction(Z_Param_MachineIndex,Z_Param_TransitionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceTransitionTimeElapsed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionTimeElapsed(Z_Param_MachineIndex,Z_Param_TransitionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceTransitionCrossfadeDuration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceTransitionCrossfadeDuration(Z_Param_MachineIndex,Z_Param_TransitionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceCurrentStateElapsedTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceCurrentStateElapsedTime(Z_Param_MachineIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceStateWeight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceStateWeight(Z_Param_MachineIndex,Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceMachineWeight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceMachineWeight(Z_Param_MachineIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerTimeFromEndFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFromEndFraction(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerTimeFromEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFromEnd(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerTimeFraction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTimeFraction(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerTime(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetInstanceAssetPlayerLength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInstanceAssetPlayerLength(Z_Param_AssetPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetRootMotionMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootMotionMode(ERootMotionMode::Type(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execRequestSlotGroupInertialization)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSlotGroupName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_OBJECT(UBlendProfile,Z_Param_BlendProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSlotGroupInertialization(Z_Param_InSlotGroupName,Z_Param_Duration,Z_Param_BlendProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimLayerInstanceByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimLayerInstanceByClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimLayerInstanceByGroupAndClass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InGroup);
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimLayerInstanceByGroupAndClass(Z_Param_InGroup,Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimLayerInstancesByGroup)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InGroup);
		P_GET_TARRAY_REF(UAnimInstance*,Z_Param_Out_OutLinkedInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLinkedAnimLayerInstancesByGroup(Z_Param_InGroup,Z_Param_Out_OutLinkedInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimLayerInstanceByGroup)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimLayerInstanceByGroup(Z_Param_InGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execUnlinkAnimClassLayers)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkAnimClassLayers(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execLinkAnimClassLayers)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkAnimClassLayers(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execLinkAnimGraphByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkAnimGraphByTag(Z_Param_InTag,Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimGraphInstancesByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_GET_TARRAY_REF(UAnimInstance*,Z_Param_Out_OutLinkedInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLinkedAnimGraphInstancesByTag(Z_Param_InTag,Z_Param_Out_OutLinkedInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetLinkedAnimGraphInstanceByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimGraphInstanceByTag(Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetCurrentActiveMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentActiveMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execIsAnyMontagePlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnyMontagePlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontageSync_StopFollowing)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageFollower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MontageSync_StopFollowing(Z_Param_MontageFollower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontageSync_Follow)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageFollower);
		P_GET_OBJECT(UAnimInstance,Z_Param_OtherAnimInstance);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MontageSync_Follow(Z_Param_MontageFollower,Z_Param_OtherAnimInstance,Z_Param_MontageLeader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetEffectivePlayRate)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_GetEffectivePlayRate(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetPlayRate)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_GetPlayRate(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetBlendTime)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_GetBlendTime(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetIsStopped)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Montage_GetIsStopped(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_SetPosition)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_SetPosition(Z_Param_Montage,Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetPosition)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_GetPosition(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_GetCurrentSection)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->Montage_GetCurrentSection(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_IsPlaying)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Montage_IsPlaying(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_IsActive)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Montage_IsActive(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_SetPlayRate)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_SetPlayRate(Z_Param_Montage,Z_Param_NewPlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_SetNextSection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionNameToChange);
		P_GET_PROPERTY(FNameProperty,Z_Param_NextSection);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_SetNextSection(Z_Param_SectionNameToChange,Z_Param_NextSection,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_JumpToSectionsEnd)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_JumpToSectionsEnd(Z_Param_SectionName,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_JumpToSection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_JumpToSection(Z_Param_SectionName,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_Resume)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_Resume(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_Pause)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_Pause(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_StopGroupByName)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTime);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_StopGroupByName(Z_Param_InBlendOutTime,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_StopWithBlendSettings)
	{
		P_GET_STRUCT_REF(FMontageBlendSettings,Z_Param_Out_BlendOutSettings);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_StopWithBlendSettings(Z_Param_Out_BlendOutSettings,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_StopWithBlendOut)
	{
		P_GET_STRUCT_REF(FAlphaBlendArgs,Z_Param_Out_BlendOut);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_StopWithBlendOut(Z_Param_Out_BlendOut,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_Stop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTime);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Montage_Stop(Z_Param_InBlendOutTime,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_PlayWithBlendSettings)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_STRUCT_REF(FMontageBlendSettings,Z_Param_Out_BlendInSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_ENUM(EMontagePlayReturnType,Z_Param_ReturnValueType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeToStartMontageAt);
		P_GET_UBOOL(Z_Param_bStopAllMontages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_PlayWithBlendSettings(Z_Param_MontageToPlay,Z_Param_Out_BlendInSettings,Z_Param_InPlayRate,EMontagePlayReturnType(Z_Param_ReturnValueType),Z_Param_InTimeToStartMontageAt,Z_Param_bStopAllMontages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_PlayWithBlendIn)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_STRUCT_REF(FAlphaBlendArgs,Z_Param_Out_BlendIn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_ENUM(EMontagePlayReturnType,Z_Param_ReturnValueType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeToStartMontageAt);
		P_GET_UBOOL(Z_Param_bStopAllMontages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_PlayWithBlendIn(Z_Param_MontageToPlay,Z_Param_Out_BlendIn,Z_Param_InPlayRate,EMontagePlayReturnType(Z_Param_ReturnValueType),Z_Param_InTimeToStartMontageAt,Z_Param_bStopAllMontages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execMontage_Play)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_ENUM(EMontagePlayReturnType,Z_Param_ReturnValueType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeToStartMontageAt);
		P_GET_UBOOL(Z_Param_bStopAllMontages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Montage_Play(Z_Param_MontageToPlay,Z_Param_InPlayRate,EMontagePlayReturnType(Z_Param_ReturnValueType),Z_Param_InTimeToStartMontageAt,Z_Param_bStopAllMontages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execIsPlayingSlotAnimation)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingSlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execStopSlotAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTime);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSlotAnimation(Z_Param_InBlendOutTime,Z_Param_SlotNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execPlaySlotAnimationAsDynamicMontage_WithBlendSettings)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_GET_STRUCT_REF(FMontageBlendSettings,Z_Param_Out_BlendInSettings);
		P_GET_STRUCT_REF(FMontageBlendSettings,Z_Param_Out_BlendOutSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoopCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTriggerTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeToStartMontageAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlaySlotAnimationAsDynamicMontage_WithBlendSettings(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_Out_BlendInSettings,Z_Param_Out_BlendOutSettings,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStartMontageAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execPlaySlotAnimationAsDynamicMontage_WithBlendArgs)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_GET_STRUCT_REF(FAlphaBlendArgs,Z_Param_Out_BlendIn);
		P_GET_STRUCT_REF(FAlphaBlendArgs,Z_Param_Out_BlendOut);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoopCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTriggerTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeToStartMontageAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlaySlotAnimationAsDynamicMontage_WithBlendArgs(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_Out_BlendIn,Z_Param_Out_BlendOut,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStartMontageAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execPlaySlotAnimationAsDynamicMontage)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoopCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTriggerTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeToStartMontageAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlaySlotAnimationAsDynamicMontage(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStartMontageAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetOwningComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetUseMainInstanceMontageEvaluationData)
	{
		P_GET_UBOOL(Z_Param_bSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseMainInstanceMontageEvaluationData(Z_Param_bSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execIsUsingMainInstanceMontageEvaluationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingMainInstanceMontageEvaluationData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetPropagateNotifiesToLinkedInstances)
	{
		P_GET_UBOOL(Z_Param_bSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropagateNotifiesToLinkedInstances(Z_Param_bSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetPropagateNotifiesToLinkedInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPropagateNotifiesToLinkedInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSetReceiveNotifiesFromLinkedInstances)
	{
		P_GET_UBOOL(Z_Param_bSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceiveNotifiesFromLinkedInstances(Z_Param_bSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execGetReceiveNotifiesFromLinkedInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReceiveNotifiesFromLinkedInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSnapshotPose)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapshotPose(Z_Param_Out_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execRemovePoseSnapshot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SnapshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePoseSnapshot(Z_Param_SnapshotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execSavePoseSnapshot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SnapshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SavePoseSnapshot(Z_Param_SnapshotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstance::execTryGetPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->TryGetPawnOwner();
		P_NATIVE_END;
	}
	struct AnimInstance_eventBlueprintThreadSafeUpdateAnimation_Parms
	{
		float DeltaTime;
	};
	struct AnimInstance_eventBlueprintUpdateAnimation_Parms
	{
		float DeltaTimeX;
	};
	static FName NAME_UAnimInstance_BlueprintBeginPlay = FName(TEXT("BlueprintBeginPlay"));
	void UAnimInstance::BlueprintBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintBeginPlay),NULL);
	}
	static FName NAME_UAnimInstance_BlueprintInitializeAnimation = FName(TEXT("BlueprintInitializeAnimation"));
	void UAnimInstance::BlueprintInitializeAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintInitializeAnimation),NULL);
	}
	static FName NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized = FName(TEXT("BlueprintLinkedAnimationLayersInitialized"));
	void UAnimInstance::BlueprintLinkedAnimationLayersInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized),NULL);
	}
	static FName NAME_UAnimInstance_BlueprintPostEvaluateAnimation = FName(TEXT("BlueprintPostEvaluateAnimation"));
	void UAnimInstance::BlueprintPostEvaluateAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintPostEvaluateAnimation),NULL);
	}
	static FName NAME_UAnimInstance_BlueprintThreadSafeUpdateAnimation = FName(TEXT("BlueprintThreadSafeUpdateAnimation"));
	void UAnimInstance::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
	{
		AnimInstance_eventBlueprintThreadSafeUpdateAnimation_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintThreadSafeUpdateAnimation),&Parms);
	}
	static FName NAME_UAnimInstance_BlueprintUpdateAnimation = FName(TEXT("BlueprintUpdateAnimation"));
	void UAnimInstance::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		AnimInstance_eventBlueprintUpdateAnimation_Parms Parms;
		Parms.DeltaTimeX=DeltaTimeX;
		ProcessEvent(FindFunctionChecked(NAME_UAnimInstance_BlueprintUpdateAnimation),&Parms);
	}
	void UAnimInstance::StaticRegisterNativesUAnimInstance()
	{
		UClass* Class = UAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateDirection", &UAnimInstance::execCalculateDirection },
			{ "ClearAllTransitionEvents", &UAnimInstance::execClearAllTransitionEvents },
			{ "ClearMorphTargets", &UAnimInstance::execClearMorphTargets },
			{ "ClearTransitionEvents", &UAnimInstance::execClearTransitionEvents },
			{ "GetActiveCurveNames", &UAnimInstance::execGetActiveCurveNames },
			{ "GetAllCurveNames", &UAnimInstance::execGetAllCurveNames },
			{ "GetCurrentActiveMontage", &UAnimInstance::execGetCurrentActiveMontage },
			{ "GetCurrentStateName", &UAnimInstance::execGetCurrentStateName },
			{ "GetCurveValue", &UAnimInstance::execGetCurveValue },
			{ "GetCurveValueWithDefault", &UAnimInstance::execGetCurveValueWithDefault },
			{ "GetDeltaSeconds", &UAnimInstance::execGetDeltaSeconds },
			{ "GetInstanceAssetPlayerLength", &UAnimInstance::execGetInstanceAssetPlayerLength },
			{ "GetInstanceAssetPlayerTime", &UAnimInstance::execGetInstanceAssetPlayerTime },
			{ "GetInstanceAssetPlayerTimeFraction", &UAnimInstance::execGetInstanceAssetPlayerTimeFraction },
			{ "GetInstanceAssetPlayerTimeFromEnd", &UAnimInstance::execGetInstanceAssetPlayerTimeFromEnd },
			{ "GetInstanceAssetPlayerTimeFromEndFraction", &UAnimInstance::execGetInstanceAssetPlayerTimeFromEndFraction },
			{ "GetInstanceCurrentStateElapsedTime", &UAnimInstance::execGetInstanceCurrentStateElapsedTime },
			{ "GetInstanceMachineWeight", &UAnimInstance::execGetInstanceMachineWeight },
			{ "GetInstanceStateWeight", &UAnimInstance::execGetInstanceStateWeight },
			{ "GetInstanceTransitionCrossfadeDuration", &UAnimInstance::execGetInstanceTransitionCrossfadeDuration },
			{ "GetInstanceTransitionTimeElapsed", &UAnimInstance::execGetInstanceTransitionTimeElapsed },
			{ "GetInstanceTransitionTimeElapsedFraction", &UAnimInstance::execGetInstanceTransitionTimeElapsedFraction },
			{ "GetLinkedAnimGraphInstanceByTag", &UAnimInstance::execGetLinkedAnimGraphInstanceByTag },
			{ "GetLinkedAnimGraphInstancesByTag", &UAnimInstance::execGetLinkedAnimGraphInstancesByTag },
			{ "GetLinkedAnimLayerInstanceByClass", &UAnimInstance::execGetLinkedAnimLayerInstanceByClass },
			{ "GetLinkedAnimLayerInstanceByGroup", &UAnimInstance::execGetLinkedAnimLayerInstanceByGroup },
			{ "GetLinkedAnimLayerInstanceByGroupAndClass", &UAnimInstance::execGetLinkedAnimLayerInstanceByGroupAndClass },
			{ "GetLinkedAnimLayerInstancesByGroup", &UAnimInstance::execGetLinkedAnimLayerInstancesByGroup },
			{ "GetOwningActor", &UAnimInstance::execGetOwningActor },
			{ "GetOwningComponent", &UAnimInstance::execGetOwningComponent },
			{ "GetPropagateNotifiesToLinkedInstances", &UAnimInstance::execGetPropagateNotifiesToLinkedInstances },
			{ "GetReceiveNotifiesFromLinkedInstances", &UAnimInstance::execGetReceiveNotifiesFromLinkedInstances },
			{ "GetRelevantAnimLength", &UAnimInstance::execGetRelevantAnimLength },
			{ "GetRelevantAnimTime", &UAnimInstance::execGetRelevantAnimTime },
			{ "GetRelevantAnimTimeFraction", &UAnimInstance::execGetRelevantAnimTimeFraction },
			{ "GetRelevantAnimTimeRemaining", &UAnimInstance::execGetRelevantAnimTimeRemaining },
			{ "GetRelevantAnimTimeRemainingFraction", &UAnimInstance::execGetRelevantAnimTimeRemainingFraction },
			{ "GetSyncGroupPosition", &UAnimInstance::execGetSyncGroupPosition },
			{ "GetTimeToClosestMarker", &UAnimInstance::execGetTimeToClosestMarker },
			{ "HasMarkerBeenHitThisFrame", &UAnimInstance::execHasMarkerBeenHitThisFrame },
			{ "IsAnyMontagePlaying", &UAnimInstance::execIsAnyMontagePlaying },
			{ "IsPlayingSlotAnimation", &UAnimInstance::execIsPlayingSlotAnimation },
			{ "IsSyncGroupBetweenMarkers", &UAnimInstance::execIsSyncGroupBetweenMarkers },
			{ "IsUsingMainInstanceMontageEvaluationData", &UAnimInstance::execIsUsingMainInstanceMontageEvaluationData },
			{ "LinkAnimClassLayers", &UAnimInstance::execLinkAnimClassLayers },
			{ "LinkAnimGraphByTag", &UAnimInstance::execLinkAnimGraphByTag },
			{ "LockAIResources", &UAnimInstance::execLockAIResources },
			{ "Montage_GetBlendTime", &UAnimInstance::execMontage_GetBlendTime },
			{ "Montage_GetCurrentSection", &UAnimInstance::execMontage_GetCurrentSection },
			{ "Montage_GetEffectivePlayRate", &UAnimInstance::execMontage_GetEffectivePlayRate },
			{ "Montage_GetIsStopped", &UAnimInstance::execMontage_GetIsStopped },
			{ "Montage_GetPlayRate", &UAnimInstance::execMontage_GetPlayRate },
			{ "Montage_GetPosition", &UAnimInstance::execMontage_GetPosition },
			{ "Montage_IsActive", &UAnimInstance::execMontage_IsActive },
			{ "Montage_IsPlaying", &UAnimInstance::execMontage_IsPlaying },
			{ "Montage_JumpToSection", &UAnimInstance::execMontage_JumpToSection },
			{ "Montage_JumpToSectionsEnd", &UAnimInstance::execMontage_JumpToSectionsEnd },
			{ "Montage_Pause", &UAnimInstance::execMontage_Pause },
			{ "Montage_Play", &UAnimInstance::execMontage_Play },
			{ "Montage_PlayWithBlendIn", &UAnimInstance::execMontage_PlayWithBlendIn },
			{ "Montage_PlayWithBlendSettings", &UAnimInstance::execMontage_PlayWithBlendSettings },
			{ "Montage_Resume", &UAnimInstance::execMontage_Resume },
			{ "Montage_SetNextSection", &UAnimInstance::execMontage_SetNextSection },
			{ "Montage_SetPlayRate", &UAnimInstance::execMontage_SetPlayRate },
			{ "Montage_SetPosition", &UAnimInstance::execMontage_SetPosition },
			{ "Montage_Stop", &UAnimInstance::execMontage_Stop },
			{ "Montage_StopGroupByName", &UAnimInstance::execMontage_StopGroupByName },
			{ "Montage_StopWithBlendOut", &UAnimInstance::execMontage_StopWithBlendOut },
			{ "Montage_StopWithBlendSettings", &UAnimInstance::execMontage_StopWithBlendSettings },
			{ "MontageSync_Follow", &UAnimInstance::execMontageSync_Follow },
			{ "MontageSync_StopFollowing", &UAnimInstance::execMontageSync_StopFollowing },
			{ "PlaySlotAnimationAsDynamicMontage", &UAnimInstance::execPlaySlotAnimationAsDynamicMontage },
			{ "PlaySlotAnimationAsDynamicMontage_WithBlendArgs", &UAnimInstance::execPlaySlotAnimationAsDynamicMontage_WithBlendArgs },
			{ "PlaySlotAnimationAsDynamicMontage_WithBlendSettings", &UAnimInstance::execPlaySlotAnimationAsDynamicMontage_WithBlendSettings },
			{ "QueryAndMarkTransitionEvent", &UAnimInstance::execQueryAndMarkTransitionEvent },
			{ "QueryTransitionEvent", &UAnimInstance::execQueryTransitionEvent },
			{ "RemovePoseSnapshot", &UAnimInstance::execRemovePoseSnapshot },
			{ "RequestSlotGroupInertialization", &UAnimInstance::execRequestSlotGroupInertialization },
			{ "RequestTransitionEvent", &UAnimInstance::execRequestTransitionEvent },
			{ "ResetDynamics", &UAnimInstance::execResetDynamics },
			{ "SavePoseSnapshot", &UAnimInstance::execSavePoseSnapshot },
			{ "SetMorphTarget", &UAnimInstance::execSetMorphTarget },
			{ "SetPropagateNotifiesToLinkedInstances", &UAnimInstance::execSetPropagateNotifiesToLinkedInstances },
			{ "SetReceiveNotifiesFromLinkedInstances", &UAnimInstance::execSetReceiveNotifiesFromLinkedInstances },
			{ "SetRootMotionMode", &UAnimInstance::execSetRootMotionMode },
			{ "SetUseMainInstanceMontageEvaluationData", &UAnimInstance::execSetUseMainInstanceMontageEvaluationData },
			{ "SnapshotPose", &UAnimInstance::execSnapshotPose },
			{ "StopSlotAnimation", &UAnimInstance::execStopSlotAnimation },
			{ "TryGetPawnOwner", &UAnimInstance::execTryGetPawnOwner },
			{ "UnlinkAnimClassLayers", &UAnimInstance::execUnlinkAnimClassLayers },
			{ "UnlockAIResources", &UAnimInstance::execUnlockAIResources },
			{ "WasAnimNotifyNameTriggeredInAnyState", &UAnimInstance::execWasAnimNotifyNameTriggeredInAnyState },
			{ "WasAnimNotifyNameTriggeredInSourceState", &UAnimInstance::execWasAnimNotifyNameTriggeredInSourceState },
			{ "WasAnimNotifyNameTriggeredInStateMachine", &UAnimInstance::execWasAnimNotifyNameTriggeredInStateMachine },
			{ "WasAnimNotifyStateActiveInAnyState", &UAnimInstance::execWasAnimNotifyStateActiveInAnyState },
			{ "WasAnimNotifyStateActiveInSourceState", &UAnimInstance::execWasAnimNotifyStateActiveInSourceState },
			{ "WasAnimNotifyStateActiveInStateMachine", &UAnimInstance::execWasAnimNotifyStateActiveInStateMachine },
			{ "WasAnimNotifyTriggeredInAnyState", &UAnimInstance::execWasAnimNotifyTriggeredInAnyState },
			{ "WasAnimNotifyTriggeredInSourceState", &UAnimInstance::execWasAnimNotifyTriggeredInSourceState },
			{ "WasAnimNotifyTriggeredInStateMachine", &UAnimInstance::execWasAnimNotifyTriggeredInStateMachine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when begin play is called on the owning component */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when begin play is called on the owning component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is initialized */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when the Animation is initialized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintInitializeAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the all Linked Animation Layers are initialized */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when the all Linked Animation Layers are initialized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintLinkedAnimationLayersInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed after the Animation is evaluated */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed after the Animation is evaluated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintPostEvaluateAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventBlueprintThreadSafeUpdateAnimation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/** Executed when the Animation Blueprint is updated on a worker thread, just prior to graph update */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when the Animation Blueprint is updated on a worker thread, just prior to graph update" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintThreadSafeUpdateAnimation", nullptr, nullptr, sizeof(AnimInstance_eventBlueprintThreadSafeUpdateAnimation_Parms), Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::NewProp_DeltaTimeX = { "DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventBlueprintUpdateAnimation_Parms, DeltaTimeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::NewProp_DeltaTimeX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is updated */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Executed when the Animation is updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "BlueprintUpdateAnimation", nullptr, nullptr, sizeof(AnimInstance_eventBlueprintUpdateAnimation_Parms), Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics
	{
		struct AnimInstance_eventCalculateDirection_Parms
		{
			FVector Velocity;
			FRotator BaseRotation;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventCalculateDirection_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventCalculateDirection_Parms, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventCalculateDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_BaseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "CalculateDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::AnimInstance_eventCalculateDirection_Parms), Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_CalculateDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_CalculateDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/** Removes all queued transition requests */" },
		{ "Keywords", "Event,Request,Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Removes all queued transition requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "ClearAllTransitionEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Morph Targets" },
		{ "Comment", "/** Clears the current morph targets. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Clears the current morph targets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "ClearMorphTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_ClearMorphTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_ClearMorphTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics
	{
		struct AnimInstance_eventClearTransitionEvents_Parms
		{
			FName EventName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventClearTransitionEvents_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/** Removes all queued transition requests with the given event name */" },
		{ "Keywords", "Event,Request,Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Removes all queued transition requests with the given event name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "ClearTransitionEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::AnimInstance_eventClearTransitionEvents_Parms), Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics
	{
		struct AnimInstance_eventGetActiveCurveNames_Parms
		{
			EAnimCurveType CurveType;
			TArray<FName> OutNames;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetActiveCurveNames_Parms, CurveType), Z_Construct_UEnum_Engine_EAnimCurveType, METADATA_PARAMS(nullptr, 0) }; // 3756150698
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_OutNames_Inner = { "OutNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_OutNames = { "OutNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetActiveCurveNames_Parms, OutNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_OutNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::NewProp_OutNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Curves" },
		{ "Comment", "/** This returns last up-to-date list of active curve names */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "This returns last up-to-date list of active curve names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetActiveCurveNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::AnimInstance_eventGetActiveCurveNames_Parms), Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics
	{
		struct AnimInstance_eventGetAllCurveNames_Parms
		{
			TArray<FName> OutNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::NewProp_OutNames_Inner = { "OutNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::NewProp_OutNames = { "OutNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetAllCurveNames_Parms, OutNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::NewProp_OutNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::NewProp_OutNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Curves" },
		{ "Comment", "/* This returns all curve names */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "This returns all curve names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetAllCurveNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::AnimInstance_eventGetAllCurveNames_Parms), Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetAllCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetAllCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics
	{
		struct AnimInstance_eventGetCurrentActiveMontage_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetCurrentActiveMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Get a current Active Montage in this AnimInstance. \n\x09\x09Note that there might be multiple Active at the same time. This will only return the first active one it finds. **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get a current Active Montage in this AnimInstance.\n              Note that there might be multiple Active at the same time. This will only return the first active one it finds. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetCurrentActiveMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::AnimInstance_eventGetCurrentActiveMontage_Parms), Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics
	{
		struct AnimInstance_eventGetCurrentStateName_Parms
		{
			int32 MachineIndex;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetCurrentStateName_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetCurrentStateName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Returns the name of a currently active state in a state machine. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns the name of a currently active state in a state machine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetCurrentStateName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::AnimInstance_eventGetCurrentStateName_Parms), Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetCurrentStateName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetCurrentStateName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics
	{
		struct AnimInstance_eventGetCurveValue_Parms
		{
			FName CurveName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetCurveValue_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Curves" },
		{ "Comment", "/** Returns the value of a named curve. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns the value of a named curve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetCurveValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::AnimInstance_eventGetCurveValue_Parms), Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics
	{
		struct AnimInstance_eventGetCurveValueWithDefault_Parms
		{
			FName CurveName;
			float DefaultValue;
			float OutValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetCurveValueWithDefault_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetCurveValueWithDefault_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetCurveValueWithDefault_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventGetCurveValueWithDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventGetCurveValueWithDefault_Parms), &Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Curves" },
		{ "Comment", "/** \n\x09* Returns whether a named curve was found, its value, and a default value when it's not found.\n\x09* @param\x09""AnimInstance\x09The anim instance to find this curve value for.\n\x09* @param\x09""CurveName\x09\x09The name of the curve.\n\x09* @param\x09""DefaultValue\x09Value to use when the curve is not found.\n\x09* @param\x09OutValue\x09\x09The curve's value.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns whether a named curve was found, its value, and a default value when it's not found.\n@param        AnimInstance    The anim instance to find this curve value for.\n@param        CurveName               The name of the curve.\n@param        DefaultValue    Value to use when the curve is not found.\n@param        OutValue                The curve's value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetCurveValueWithDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::AnimInstance_eventGetCurveValueWithDefault_Parms), Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics
	{
		struct AnimInstance_eventGetDeltaSeconds_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetDeltaSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/** Get the current delta time */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current delta time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetDeltaSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::AnimInstance_eventGetDeltaSeconds_Parms), Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerLength_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerLength_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::NewProp_AssetPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Asset Player" },
		{ "Comment", "/** Gets the length in seconds of the asset referenced in an asset player node */" },
		{ "DisplayName", "Length" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Gets the length in seconds of the asset referenced in an asset player node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::AnimInstance_eventGetInstanceAssetPlayerLength_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerTime_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTime_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::NewProp_AssetPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Asset Player" },
		{ "Comment", "/** Get the current accumulated time in seconds for an asset player node */" },
		{ "DisplayName", "Current Time" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current accumulated time in seconds for an asset player node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::AnimInstance_eventGetInstanceAssetPlayerTime_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerTimeFraction_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFraction_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::NewProp_AssetPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Asset Player" },
		{ "Comment", "/** Get the current accumulated time as a fraction for an asset player node */" },
		{ "DisplayName", "Current Time (ratio)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current accumulated time as a fraction for an asset player node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerTimeFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::AnimInstance_eventGetInstanceAssetPlayerTimeFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerTimeFromEnd_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFromEnd_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFromEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::NewProp_AssetPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Asset Player" },
		{ "Comment", "/** Get the time in seconds from the end of an animation in an asset player node */" },
		{ "DisplayName", "Time Remaining" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the time in seconds from the end of an animation in an asset player node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerTimeFromEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::AnimInstance_eventGetInstanceAssetPlayerTimeFromEnd_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics
	{
		struct AnimInstance_eventGetInstanceAssetPlayerTimeFromEndFraction_Parms
		{
			int32 AssetPlayerIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetPlayerIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::NewProp_AssetPlayerIndex = { "AssetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFromEndFraction_Parms, AssetPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceAssetPlayerTimeFromEndFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::NewProp_AssetPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Asset Player" },
		{ "Comment", "/** Get the time as a fraction of the asset length of an animation in an asset player node */" },
		{ "DisplayName", "Time Remaining (ratio)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the time as a fraction of the asset length of an animation in an asset player node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceAssetPlayerTimeFromEndFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::AnimInstance_eventGetInstanceAssetPlayerTimeFromEndFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics
	{
		struct AnimInstance_eventGetInstanceCurrentStateElapsedTime_Parms
		{
			int32 MachineIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceCurrentStateElapsedTime_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceCurrentStateElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the current elapsed time of a state within the specified state machine */" },
		{ "DisplayName", "Current State Time" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current elapsed time of a state within the specified state machine" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceCurrentStateElapsedTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::AnimInstance_eventGetInstanceCurrentStateElapsedTime_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics
	{
		struct AnimInstance_eventGetInstanceMachineWeight_Parms
		{
			int32 MachineIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceMachineWeight_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceMachineWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the blend weight of a specified state machine */" },
		{ "DisplayName", "Machine Weight" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the blend weight of a specified state machine" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceMachineWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::AnimInstance_eventGetInstanceMachineWeight_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics
	{
		struct AnimInstance_eventGetInstanceStateWeight_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceStateWeight_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceStateWeight_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceStateWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the blend weight of a specified state */" },
		{ "DisplayName", "State Weight" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the blend weight of a specified state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceStateWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::AnimInstance_eventGetInstanceStateWeight_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics
	{
		struct AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms
		{
			int32 MachineIndex;
			int32 TransitionIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms, TransitionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_TransitionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the crossfade duration of a specified transition */" },
		{ "DisplayName", "Get Transition Crossfade Duration" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the crossfade duration of a specified transition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceTransitionCrossfadeDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::AnimInstance_eventGetInstanceTransitionCrossfadeDuration_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics
	{
		struct AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms
		{
			int32 MachineIndex;
			int32 TransitionIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms, TransitionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_TransitionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the elapsed time in seconds of a specified transition */" },
		{ "DisplayName", "Get Transition Time Elapsed" },
		{ "GetterContext", "CustomBlend" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the elapsed time in seconds of a specified transition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceTransitionTimeElapsed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::AnimInstance_eventGetInstanceTransitionTimeElapsed_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics
	{
		struct AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms
		{
			int32 MachineIndex;
			int32 TransitionIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms, TransitionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_TransitionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the elapsed time as a fraction of the crossfade duration of a specified transition */" },
		{ "DisplayName", "Get Transition Time Elapsed (ratio)" },
		{ "GetterContext", "CustomBlend" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the elapsed time as a fraction of the crossfade duration of a specified transition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetInstanceTransitionTimeElapsedFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::AnimInstance_eventGetInstanceTransitionTimeElapsedFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics
	{
		struct AnimInstance_eventGetLinkedAnimGraphInstanceByTag_Parms
		{
			FName InTag;
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimGraphInstanceByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimGraphInstanceByTag_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Runs through all nodes, attempting to find the first linked instance by name/tag */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all nodes, attempting to find the first linked instance by name/tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimGraphInstanceByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::AnimInstance_eventGetLinkedAnimGraphInstanceByTag_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics
	{
		struct AnimInstance_eventGetLinkedAnimGraphInstancesByTag_Parms
		{
			FName InTag;
			TArray<UAnimInstance*> OutLinkedInstances;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLinkedInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLinkedInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimGraphInstancesByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances_Inner = { "OutLinkedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances = { "OutLinkedInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimGraphInstancesByTag_Parms, OutLinkedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Tags are unique so this function is no longer supported. Please use GetLinkedAnimGraphInstanceByTag instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimGraphInstancesByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::AnimInstance_eventGetLinkedAnimGraphInstancesByTag_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics
	{
		struct AnimInstance_eventGetLinkedAnimLayerInstanceByClass_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByClass_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Gets the first layer linked instance corresponding to the specified class */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Gets the first layer linked instance corresponding to the specified class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimLayerInstanceByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::AnimInstance_eventGetLinkedAnimLayerInstanceByClass_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics
	{
		struct AnimInstance_eventGetLinkedAnimLayerInstanceByGroup_Parms
		{
			FName InGroup;
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InGroup;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_InGroup = { "InGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByGroup_Parms, InGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByGroup_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_InGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Gets the layer linked instance corresponding to the specified group */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Gets the layer linked instance corresponding to the specified group" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimLayerInstanceByGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::AnimInstance_eventGetLinkedAnimLayerInstanceByGroup_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics
	{
		struct AnimInstance_eventGetLinkedAnimLayerInstanceByGroupAndClass_Parms
		{
			FName InGroup;
			TSubclassOf<UAnimInstance>  InClass;
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InGroup;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::NewProp_InGroup = { "InGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByGroupAndClass_Parms, InGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByGroupAndClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstanceByGroupAndClass_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::NewProp_InGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Gets layer linked instance that matches group and class */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Gets layer linked instance that matches group and class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimLayerInstanceByGroupAndClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::AnimInstance_eventGetLinkedAnimLayerInstanceByGroupAndClass_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics
	{
		struct AnimInstance_eventGetLinkedAnimLayerInstancesByGroup_Parms
		{
			FName InGroup;
			TArray<UAnimInstance*> OutLinkedInstances;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InGroup;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLinkedInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLinkedInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::NewProp_InGroup = { "InGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstancesByGroup_Parms, InGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::NewProp_OutLinkedInstances_Inner = { "OutLinkedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::NewProp_OutLinkedInstances = { "OutLinkedInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetLinkedAnimLayerInstancesByGroup_Parms, OutLinkedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::NewProp_InGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::NewProp_OutLinkedInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::NewProp_OutLinkedInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Runs through all nodes, attempting to find all distinct layer linked instances in the group */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all nodes, attempting to find all distinct layer linked instances in the group" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetLinkedAnimLayerInstancesByGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::AnimInstance_eventGetLinkedAnimLayerInstancesByGroup_Parms), Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics
	{
		struct AnimInstance_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the owning actor of this AnimInstance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns the owning actor of this AnimInstance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::AnimInstance_eventGetOwningActor_Parms), Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics
	{
		struct AnimInstance_eventGetOwningComponent_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Returns the skeletal mesh component that has created this AnimInstance\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns the skeletal mesh component that has created this AnimInstance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetOwningComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::AnimInstance_eventGetOwningComponent_Parms), Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetOwningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetOwningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics
	{
		struct AnimInstance_eventGetPropagateNotifiesToLinkedInstances_Parms
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
	void Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventGetPropagateNotifiesToLinkedInstances_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventGetPropagateNotifiesToLinkedInstances_Parms), &Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Notifies" },
		{ "Comment", "/** Get whether to propagate notifies to any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether to propagate notifies to any linked anim instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetPropagateNotifiesToLinkedInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::AnimInstance_eventGetPropagateNotifiesToLinkedInstances_Parms), Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics
	{
		struct AnimInstance_eventGetReceiveNotifiesFromLinkedInstances_Parms
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
	void Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventGetReceiveNotifiesFromLinkedInstances_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventGetReceiveNotifiesFromLinkedInstances_Parms), &Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Notifies" },
		{ "Comment", "/** Get whether to process notifies from any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether to process notifies from any linked anim instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetReceiveNotifiesFromLinkedInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::AnimInstance_eventGetReceiveNotifiesFromLinkedInstances_Parms), Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics
	{
		struct AnimInstance_eventGetRelevantAnimLength_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimLength_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimLength_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the length in seconds of the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the length in seconds of the most relevant animation in the source state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::AnimInstance_eventGetRelevantAnimLength_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics
	{
		struct AnimInstance_eventGetRelevantAnimTime_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTime_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTime_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the current accumulated time in seconds for the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current accumulated time in seconds for the most relevant animation in the source state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::AnimInstance_eventGetRelevantAnimTime_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics
	{
		struct AnimInstance_eventGetRelevantAnimTimeFraction_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeFraction_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeFraction_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the current accumulated time as a fraction of the length of the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current accumulated time as a fraction of the length of the most relevant animation in the source state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimTimeFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::AnimInstance_eventGetRelevantAnimTimeFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics
	{
		struct AnimInstance_eventGetRelevantAnimTimeRemaining_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemaining_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemaining_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the time remaining in seconds for the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the time remaining in seconds for the most relevant animation in the source state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimTimeRemaining", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::AnimInstance_eventGetRelevantAnimTimeRemaining_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics
	{
		struct AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get the time remaining as a fraction of the duration for the most relevant animation in the source state */" },
		{ "GetterContext", "Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the time remaining as a fraction of the duration for the most relevant animation in the source state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetRelevantAnimTimeRemainingFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::AnimInstance_eventGetRelevantAnimTimeRemainingFraction_Parms), Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics
	{
		struct AnimInstance_eventGetSyncGroupPosition_Parms
		{
			FName InSyncGroupName;
			FMarkerSyncAnimPosition ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSyncGroupName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::NewProp_InSyncGroupName = { "InSyncGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetSyncGroupPosition_Parms, InSyncGroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetSyncGroupPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FMarkerSyncAnimPosition, METADATA_PARAMS(nullptr, 0) }; // 2184714248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::NewProp_InSyncGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Synchronization" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetSyncGroupPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::AnimInstance_eventGetSyncGroupPosition_Parms), Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics
	{
		struct AnimInstance_eventGetTimeToClosestMarker_Parms
		{
			FName SyncGroup;
			FName MarkerName;
			float OutMarkerTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SyncGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MarkerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMarkerTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetTimeToClosestMarker_Parms, SyncGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetTimeToClosestMarker_Parms, MarkerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_OutMarkerTime = { "OutMarkerTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventGetTimeToClosestMarker_Parms, OutMarkerTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventGetTimeToClosestMarker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventGetTimeToClosestMarker_Parms), &Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_SyncGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_OutMarkerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Synchronization" },
		{ "Comment", "//--- AI communication end ---//\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "--- AI communication end ---" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "GetTimeToClosestMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::AnimInstance_eventGetTimeToClosestMarker_Parms), Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics
	{
		struct AnimInstance_eventHasMarkerBeenHitThisFrame_Parms
		{
			FName SyncGroup;
			FName MarkerName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SyncGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MarkerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventHasMarkerBeenHitThisFrame_Parms, SyncGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventHasMarkerBeenHitThisFrame_Parms, MarkerName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventHasMarkerBeenHitThisFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventHasMarkerBeenHitThisFrame_Parms), &Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_SyncGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Synchronization" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "HasMarkerBeenHitThisFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::AnimInstance_eventHasMarkerBeenHitThisFrame_Parms), Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics
	{
		struct AnimInstance_eventIsAnyMontagePlaying_Parms
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
	void Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventIsAnyMontagePlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventIsAnyMontagePlaying_Parms), &Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Returns true if any montage is playing currently. Doesn't mean it's active though, it could be blending out. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns true if any montage is playing currently. Doesn't mean it's active though, it could be blending out." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "IsAnyMontagePlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::AnimInstance_eventIsAnyMontagePlaying_Parms), Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics
	{
		struct AnimInstance_eventIsPlayingSlotAnimation_Parms
		{
			const UAnimSequenceBase* Asset;
			FName SlotNodeName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventIsPlayingSlotAnimation_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventIsPlayingSlotAnimation_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventIsPlayingSlotAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventIsPlayingSlotAnimation_Parms), &Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_SlotNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Return true if it's playing the slot animation */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Return true if it's playing the slot animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "IsPlayingSlotAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::AnimInstance_eventIsPlayingSlotAnimation_Parms), Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics
	{
		struct AnimInstance_eventIsSyncGroupBetweenMarkers_Parms
		{
			FName InSyncGroupName;
			FName PreviousMarker;
			FName NextMarker;
			bool bRespectMarkerOrder;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSyncGroupName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousMarker;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NextMarker;
		static void NewProp_bRespectMarkerOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectMarkerOrder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_InSyncGroupName = { "InSyncGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms, InSyncGroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_PreviousMarker = { "PreviousMarker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms, PreviousMarker), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_NextMarker = { "NextMarker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms, NextMarker), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_bRespectMarkerOrder_SetBit(void* Obj)
	{
		((AnimInstance_eventIsSyncGroupBetweenMarkers_Parms*)Obj)->bRespectMarkerOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_bRespectMarkerOrder = { "bRespectMarkerOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms), &Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_bRespectMarkerOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventIsSyncGroupBetweenMarkers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventIsSyncGroupBetweenMarkers_Parms), &Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_InSyncGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_PreviousMarker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_NextMarker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_bRespectMarkerOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Synchronization" },
		{ "CPP_Default_bRespectMarkerOrder", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "IsSyncGroupBetweenMarkers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::AnimInstance_eventIsSyncGroupBetweenMarkers_Parms), Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics
	{
		struct AnimInstance_eventIsUsingMainInstanceMontageEvaluationData_Parms
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
	void Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventIsUsingMainInstanceMontageEvaluationData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventIsUsingMainInstanceMontageEvaluationData_Parms), &Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs|Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "IsUsingMainInstanceMontageEvaluationData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::AnimInstance_eventIsUsingMainInstanceMontageEvaluationData_Parms), Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics
	{
		struct AnimInstance_eventLinkAnimClassLayers_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventLinkAnimClassLayers_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/**\n\x09 * Runs through all layer nodes, attempting to find layer nodes that are implemented by the specified class, then sets up a linked instance of the class for each.\n\x09 * Allocates one linked instance to run each of the groups specified in the class, so state is shared. If a layer is not grouped (ie. NAME_None), then state is not shared\n\x09 * and a separate linked instance is allocated for each layer node.\n\x09 * If InClass is null, then all layers are reset to their defaults.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all layer nodes, attempting to find layer nodes that are implemented by the specified class, then sets up a linked instance of the class for each.\nAllocates one linked instance to run each of the groups specified in the class, so state is shared. If a layer is not grouped (ie. NAME_None), then state is not shared\nand a separate linked instance is allocated for each layer node.\nIf InClass is null, then all layers are reset to their defaults." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "LinkAnimClassLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::AnimInstance_eventLinkAnimClassLayers_Parms), Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics
	{
		struct AnimInstance_eventLinkAnimGraphByTag_Parms
		{
			FName InTag;
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventLinkAnimGraphByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventLinkAnimGraphByTag_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Runs through all nodes, attempting to find a linked instance by name/tag, then sets the class of each node if the tag matches */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all nodes, attempting to find a linked instance by name/tag, then sets the class of each node if the tag matches" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "LinkAnimGraphByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::AnimInstance_eventLinkAnimGraphByTag_Parms), Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics
	{
		struct AnimInstance_eventLockAIResources_Parms
		{
			bool bLockMovement;
			bool LockAILogic;
		};
		static void NewProp_bLockMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockMovement;
		static void NewProp_LockAILogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LockAILogic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement_SetBit(void* Obj)
	{
		((AnimInstance_eventLockAIResources_Parms*)Obj)->bLockMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement = { "bLockMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventLockAIResources_Parms), &Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic_SetBit(void* Obj)
	{
		((AnimInstance_eventLockAIResources_Parms*)Obj)->LockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic = { "LockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventLockAIResources_Parms), &Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_bLockMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::NewProp_LockAILogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** locks indicated AI resources of animated pawn\n\x09 *\x09""DEPRECATED. Use LockAIResourcesWithAnimation instead */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use LockAIResourcesWithAnimation instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "locks indicated AI resources of animated pawn\n    DEPRECATED. Use LockAIResourcesWithAnimation instead" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "LockAIResources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::AnimInstance_eventLockAIResources_Parms), Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_LockAIResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_LockAIResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics
	{
		struct AnimInstance_eventMontage_GetBlendTime_Parms
		{
			const UAnimMontage* Montage;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetBlendTime_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetBlendTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Get the current blend time of the Montage.\n\x09If Montage reference is NULL, it will return the current blend time on the first active Montage found. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get the current blend time of the Montage.\n      If Montage reference is NULL, it will return the current blend time on the first active Montage found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetBlendTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::AnimInstance_eventMontage_GetBlendTime_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics
	{
		struct AnimInstance_eventMontage_GetCurrentSection_Parms
		{
			const UAnimMontage* Montage;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetCurrentSection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetCurrentSection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Returns the name of the current animation montage section. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns the name of the current animation montage section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetCurrentSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::AnimInstance_eventMontage_GetCurrentSection_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics
	{
		struct AnimInstance_eventMontage_GetEffectivePlayRate_Parms
		{
			const UAnimMontage* Montage;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetEffectivePlayRate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetEffectivePlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Get scaled PlayRate for Montage. This accounts for RateScale, so it will reflect the actual play rate seen in game.\n\x09If Montage reference is NULL, scaled PlayRate for any Active Montage will be returned.\n\x09If Montage is not playing, 0 is returned. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get scaled PlayRate for Montage. This accounts for RateScale, so it will reflect the actual play rate seen in game.\n      If Montage reference is NULL, scaled PlayRate for any Active Montage will be returned.\n      If Montage is not playing, 0 is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetEffectivePlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::AnimInstance_eventMontage_GetEffectivePlayRate_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics
	{
		struct AnimInstance_eventMontage_GetIsStopped_Parms
		{
			const UAnimMontage* Montage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetIsStopped_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage_MetaData)) };
	void Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_GetIsStopped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventMontage_GetIsStopped_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** return true if Montage is not currently active. (not valid or blending out) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "return true if Montage is not currently active. (not valid or blending out)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetIsStopped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::AnimInstance_eventMontage_GetIsStopped_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics
	{
		struct AnimInstance_eventMontage_GetPlayRate_Parms
		{
			const UAnimMontage* Montage;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetPlayRate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Get PlayRate for Montage. This does not account for RateScale, so it may not reflect the actual play rate seen in game (see Montage_GetEffectivePlayRate).\n\x09If Montage reference is NULL, PlayRate for any Active Montage will be returned.\n\x09If Montage is not playing, 0 is returned. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get PlayRate for Montage. This does not account for RateScale, so it may not reflect the actual play rate seen in game (see Montage_GetEffectivePlayRate).\n      If Montage reference is NULL, PlayRate for any Active Montage will be returned.\n      If Montage is not playing, 0 is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::AnimInstance_eventMontage_GetPlayRate_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics
	{
		struct AnimInstance_eventMontage_GetPosition_Parms
		{
			const UAnimMontage* Montage;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetPosition_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_GetPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Get Current Montage Position */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get Current Montage Position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_GetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::AnimInstance_eventMontage_GetPosition_Parms), Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics
	{
		struct AnimInstance_eventMontage_IsActive_Parms
		{
			const UAnimMontage* Montage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_IsActive_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage_MetaData)) };
	void Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_IsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventMontage_IsActive_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Returns true if the animation montage is active. If the Montage reference is NULL, it will return true if any Montage is active. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns true if the animation montage is active. If the Montage reference is NULL, it will return true if any Montage is active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_IsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::AnimInstance_eventMontage_IsActive_Parms), Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics
	{
		struct AnimInstance_eventMontage_IsPlaying_Parms
		{
			const UAnimMontage* Montage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_IsPlaying_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage_MetaData)) };
	void Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_IsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventMontage_IsPlaying_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Returns true if the animation montage is currently active and playing. \n\x09If reference is NULL, it will return true is ANY montage is currently active and playing. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns true if the animation montage is currently active and playing.\n      If reference is NULL, it will return true is ANY montage is currently active and playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::AnimInstance_eventMontage_IsPlaying_Parms), Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics
	{
		struct AnimInstance_eventMontage_JumpToSection_Parms
		{
			FName SectionName;
			const UAnimMontage* Montage;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_JumpToSection_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_JumpToSection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Makes a montage jump to a named section. If Montage reference is NULL, it will do that to all active montages. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Makes a montage jump to a named section. If Montage reference is NULL, it will do that to all active montages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_JumpToSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::AnimInstance_eventMontage_JumpToSection_Parms), Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics
	{
		struct AnimInstance_eventMontage_JumpToSectionsEnd_Parms
		{
			FName SectionName;
			const UAnimMontage* Montage;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_JumpToSectionsEnd_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_JumpToSectionsEnd_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Makes a montage jump to the end of a named section. If Montage reference is NULL, it will do that to all active montages. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Makes a montage jump to the end of a named section. If Montage reference is NULL, it will do that to all active montages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_JumpToSectionsEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::AnimInstance_eventMontage_JumpToSectionsEnd_Parms), Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics
	{
		struct AnimInstance_eventMontage_Pause_Parms
		{
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Pause_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Pauses the animation montage. If reference is NULL, it will pause ALL active montages. */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Pauses the animation montage. If reference is NULL, it will pause ALL active montages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_Pause", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::AnimInstance_eventMontage_Pause_Parms), Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics
	{
		struct AnimInstance_eventMontage_Play_Parms
		{
			UAnimMontage* MontageToPlay;
			float InPlayRate;
			EMontagePlayReturnType ReturnValueType;
			float InTimeToStartMontageAt;
			bool bStopAllMontages;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValueType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeToStartMontageAt;
		static void NewProp_bStopAllMontages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAllMontages;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValueType = { "ReturnValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, ReturnValueType), Z_Construct_UEnum_Engine_EMontagePlayReturnType, METADATA_PARAMS(nullptr, 0) }; // 1162392915
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_InTimeToStartMontageAt = { "InTimeToStartMontageAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, InTimeToStartMontageAt), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_Play_Parms*)Obj)->bStopAllMontages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages = { "bStopAllMontages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventMontage_Play_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Play_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_InTimeToStartMontageAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_bStopAllMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Plays an animation montage. Returns the length of the animation montage in seconds. Returns 0.f if failed to play. */" },
		{ "CPP_Default_bStopAllMontages", "true" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InTimeToStartMontageAt", "0.000000" },
		{ "CPP_Default_ReturnValueType", "MontageLength" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Plays an animation montage. Returns the length of the animation montage in seconds. Returns 0.f if failed to play." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::AnimInstance_eventMontage_Play_Parms), Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics
	{
		struct AnimInstance_eventMontage_PlayWithBlendIn_Parms
		{
			UAnimMontage* MontageToPlay;
			FAlphaBlendArgs BlendIn;
			float InPlayRate;
			EMontagePlayReturnType ReturnValueType;
			float InTimeToStartMontageAt;
			bool bStopAllMontages;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValueType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeToStartMontageAt;
		static void NewProp_bStopAllMontages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAllMontages;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendIn_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_BlendIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendIn_Parms, BlendIn), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_BlendIn_MetaData)) }; // 131481067
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendIn_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_ReturnValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_ReturnValueType = { "ReturnValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendIn_Parms, ReturnValueType), Z_Construct_UEnum_Engine_EMontagePlayReturnType, METADATA_PARAMS(nullptr, 0) }; // 1162392915
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_InTimeToStartMontageAt = { "InTimeToStartMontageAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendIn_Parms, InTimeToStartMontageAt), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_bStopAllMontages_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_PlayWithBlendIn_Parms*)Obj)->bStopAllMontages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_bStopAllMontages = { "bStopAllMontages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventMontage_PlayWithBlendIn_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_bStopAllMontages_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendIn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_BlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_ReturnValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_ReturnValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_InTimeToStartMontageAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_bStopAllMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Plays an animation montage. Same as Montage_Play, but you can specify an AlphaBlend for Blend In settings. */" },
		{ "CPP_Default_bStopAllMontages", "true" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InTimeToStartMontageAt", "0.000000" },
		{ "CPP_Default_ReturnValueType", "MontageLength" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Plays an animation montage. Same as Montage_Play, but you can specify an AlphaBlend for Blend In settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_PlayWithBlendIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::AnimInstance_eventMontage_PlayWithBlendIn_Parms), Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics
	{
		struct AnimInstance_eventMontage_PlayWithBlendSettings_Parms
		{
			UAnimMontage* MontageToPlay;
			FMontageBlendSettings BlendInSettings;
			float InPlayRate;
			EMontagePlayReturnType ReturnValueType;
			float InTimeToStartMontageAt;
			bool bStopAllMontages;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendInSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValueType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeToStartMontageAt;
		static void NewProp_bStopAllMontages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAllMontages;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendSettings_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_BlendInSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_BlendInSettings = { "BlendInSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendSettings_Parms, BlendInSettings), Z_Construct_UScriptStruct_FMontageBlendSettings, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_BlendInSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_BlendInSettings_MetaData)) }; // 1515019043
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendSettings_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_ReturnValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_ReturnValueType = { "ReturnValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendSettings_Parms, ReturnValueType), Z_Construct_UEnum_Engine_EMontagePlayReturnType, METADATA_PARAMS(nullptr, 0) }; // 1162392915
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_InTimeToStartMontageAt = { "InTimeToStartMontageAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendSettings_Parms, InTimeToStartMontageAt), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_bStopAllMontages_SetBit(void* Obj)
	{
		((AnimInstance_eventMontage_PlayWithBlendSettings_Parms*)Obj)->bStopAllMontages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_bStopAllMontages = { "bStopAllMontages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventMontage_PlayWithBlendSettings_Parms), &Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_bStopAllMontages_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_PlayWithBlendSettings_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_BlendInSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_ReturnValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_ReturnValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_InTimeToStartMontageAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_bStopAllMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Plays an animation montage. Same as Montage_Play, but you can overwrite all of the montage's default blend in settings. */" },
		{ "CPP_Default_bStopAllMontages", "true" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InTimeToStartMontageAt", "0.000000" },
		{ "CPP_Default_ReturnValueType", "MontageLength" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Plays an animation montage. Same as Montage_Play, but you can overwrite all of the montage's default blend in settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_PlayWithBlendSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::AnimInstance_eventMontage_PlayWithBlendSettings_Parms), Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics
	{
		struct AnimInstance_eventMontage_Resume_Parms
		{
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Resume_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Resumes a paused animation montage. If reference is NULL, it will resume ALL active montages. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Resumes a paused animation montage. If reference is NULL, it will resume ALL active montages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_Resume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::AnimInstance_eventMontage_Resume_Parms), Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics
	{
		struct AnimInstance_eventMontage_SetNextSection_Parms
		{
			FName SectionNameToChange;
			FName NextSection;
			const UAnimMontage* Montage;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionNameToChange;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NextSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_SectionNameToChange = { "SectionNameToChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_SetNextSection_Parms, SectionNameToChange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_NextSection = { "NextSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_SetNextSection_Parms, NextSection), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_SetNextSection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_SectionNameToChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_NextSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Relink new next section AFTER SectionNameToChange in run-time\n\x09 *\x09You can link section order the way you like in editor, but in run-time if you'd like to change it dynamically, \n\x09 *\x09use this function to relink the next section\n\x09 *\x09""For example, you can have Start->Loop->Loop->Loop.... but when you want it to end, you can relink\n\x09 *\x09next section of Loop to be End to finish the montage, in which case, it stops looping by Loop->End. \n\x09 \n\x09 * @param SectionNameToChange : This should be the name of the Montage Section after which you want to insert a new next section\n\x09 * @param NextSection\x09: new next section \n\x09 */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Relink new next section AFTER SectionNameToChange in run-time\n    You can link section order the way you like in editor, but in run-time if you'd like to change it dynamically,\n    use this function to relink the next section\n    For example, you can have Start->Loop->Loop->Loop.... but when you want it to end, you can relink\n    next section of Loop to be End to finish the montage, in which case, it stops looping by Loop->End.\n\n@param SectionNameToChange : This should be the name of the Montage Section after which you want to insert a new next section\n@param NextSection   : new next section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_SetNextSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::AnimInstance_eventMontage_SetNextSection_Parms), Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics
	{
		struct AnimInstance_eventMontage_SetPlayRate_Parms
		{
			const UAnimMontage* Montage;
			float NewPlayRate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_SetPlayRate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_NewPlayRate = { "NewPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_SetPlayRate_Parms, NewPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::NewProp_NewPlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Change AnimMontage play rate. NewPlayRate = 1.0 is the default playback rate. */" },
		{ "CPP_Default_NewPlayRate", "1.000000" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Change AnimMontage play rate. NewPlayRate = 1.0 is the default playback rate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_SetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::AnimInstance_eventMontage_SetPlayRate_Parms), Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics
	{
		struct AnimInstance_eventMontage_SetPosition_Parms
		{
			const UAnimMontage* Montage;
			float NewPosition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_SetPosition_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_SetPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Set position. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Set position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_SetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::AnimInstance_eventMontage_SetPosition_Parms), Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics
	{
		struct AnimInstance_eventMontage_Stop_Parms
		{
			float InBlendOutTime;
			const UAnimMontage* Montage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_InBlendOutTime = { "InBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Stop_Parms, InBlendOutTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_Stop_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_InBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Stopped montages will blend out using their montage asset's BlendOut, with InBlendOutTime as the BlendTime */" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Stopped montages will blend out using their montage asset's BlendOut, with InBlendOutTime as the BlendTime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_Stop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::AnimInstance_eventMontage_Stop_Parms), Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics
	{
		struct AnimInstance_eventMontage_StopGroupByName_Parms
		{
			float InBlendOutTime;
			FName GroupName;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTime;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::NewProp_InBlendOutTime = { "InBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_StopGroupByName_Parms, InBlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_StopGroupByName_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::NewProp_InBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::NewProp_GroupName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Stops all active montages belonging to a group. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Stops all active montages belonging to a group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_StopGroupByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::AnimInstance_eventMontage_StopGroupByName_Parms), Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics
	{
		struct AnimInstance_eventMontage_StopWithBlendOut_Parms
		{
			FAlphaBlendArgs BlendOut;
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_BlendOut_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_StopWithBlendOut_Parms, BlendOut), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_BlendOut_MetaData)) }; // 131481067
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_StopWithBlendOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_BlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Same as Montage_Stop. Uses values from the AlphaBlendArgs. Other settings come from the montage asset*/" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Same as Montage_Stop. Uses values from the AlphaBlendArgs. Other settings come from the montage asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_StopWithBlendOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::AnimInstance_eventMontage_StopWithBlendOut_Parms), Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics
	{
		struct AnimInstance_eventMontage_StopWithBlendSettings_Parms
		{
			FMontageBlendSettings BlendOutSettings;
			const UAnimMontage* Montage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOutSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_BlendOutSettings = { "BlendOutSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_StopWithBlendSettings_Parms, BlendOutSettings), Z_Construct_UScriptStruct_FMontageBlendSettings, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData)) }; // 1515019043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontage_StopWithBlendSettings_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_BlendOutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Same as Montage_Stop, but all blend settings are provided instead of using the ones on the montage asset*/" },
		{ "CPP_Default_Montage", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Same as Montage_Stop, but all blend settings are provided instead of using the ones on the montage asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "Montage_StopWithBlendSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::AnimInstance_eventMontage_StopWithBlendSettings_Parms), Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics
	{
		struct AnimInstance_eventMontageSync_Follow_Parms
		{
			const UAnimMontage* MontageFollower;
			const UAnimInstance* OtherAnimInstance;
			const UAnimMontage* MontageLeader;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageFollower_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageFollower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageLeader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageLeader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageFollower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageFollower = { "MontageFollower", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontageSync_Follow_Parms, MontageFollower), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageFollower_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageFollower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_OtherAnimInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_OtherAnimInstance = { "OtherAnimInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontageSync_Follow_Parms, OtherAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_OtherAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_OtherAnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageLeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageLeader = { "MontageLeader", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontageSync_Follow_Parms, MontageLeader), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageLeader_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageFollower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_OtherAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::NewProp_MontageLeader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Synchronize a montage to another anim instance's montage. Both montages must be playing already\n\x09* @param MontageFollower : The montage that will follow the leader in OtherAnimInstance\n\x09* @param OtherAnimInstance\x09: The other anim instance we want to synchronize to. Can be set to self\n\x09* @param MontageLeader\x09: The montage we want to follow in the other anim instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Synchronize a montage to another anim instance's montage. Both montages must be playing already\n@param MontageFollower : The montage that will follow the leader in OtherAnimInstance\n@param OtherAnimInstance      : The other anim instance we want to synchronize to. Can be set to self\n@param MontageLeader  : The montage we want to follow in the other anim instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "MontageSync_Follow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::AnimInstance_eventMontageSync_Follow_Parms), Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_MontageSync_Follow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_MontageSync_Follow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics
	{
		struct AnimInstance_eventMontageSync_StopFollowing_Parms
		{
			const UAnimMontage* MontageFollower;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageFollower_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageFollower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::NewProp_MontageFollower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::NewProp_MontageFollower = { "MontageFollower", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventMontageSync_StopFollowing_Parms, MontageFollower), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::NewProp_MontageFollower_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::NewProp_MontageFollower_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::NewProp_MontageFollower,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Stop following the montage's leader in this anim instance\n\x09* @param MontageFollower : The montage we want to stop synchronizing */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Stop following the montage's leader in this anim instance\n@param MontageFollower : The montage we want to stop synchronizing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "MontageSync_StopFollowing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::AnimInstance_eventMontageSync_StopFollowing_Parms), Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics
	{
		struct AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms
		{
			UAnimSequenceBase* Asset;
			FName SlotNodeName;
			float BlendInTime;
			float BlendOutTime;
			float InPlayRate;
			int32 LoopCount;
			float BlendOutTriggerTime;
			float InTimeToStartMontageAt;
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeToStartMontageAt;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, BlendInTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, LoopCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendOutTriggerTime = { "BlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, BlendOutTriggerTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_InTimeToStartMontageAt = { "InTimeToStartMontageAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, InTimeToStartMontageAt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_SlotNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_LoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_BlendOutTriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_InTimeToStartMontageAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Play normal animation asset on the slot node by creating a dynamic UAnimMontage. You can only play one asset (whether montage or animsequence) at a time per SlotGroup. */" },
		{ "CPP_Default_BlendInTime", "0.250000" },
		{ "CPP_Default_BlendOutTime", "0.250000" },
		{ "CPP_Default_BlendOutTriggerTime", "-1.000000" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InTimeToStartMontageAt", "0.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Play normal animation asset on the slot node by creating a dynamic UAnimMontage. You can only play one asset (whether montage or animsequence) at a time per SlotGroup." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "PlaySlotAnimationAsDynamicMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::AnimInstance_eventPlaySlotAnimationAsDynamicMontage_Parms), Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics
	{
		struct AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms
		{
			UAnimSequenceBase* Asset;
			FName SlotNodeName;
			FAlphaBlendArgs BlendIn;
			FAlphaBlendArgs BlendOut;
			float InPlayRate;
			int32 LoopCount;
			float BlendOutTriggerTime;
			float InTimeToStartMontageAt;
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOut;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeToStartMontageAt;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, BlendIn), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendIn_MetaData)) }; // 131481067
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendOut_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, BlendOut), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendOut_MetaData)) }; // 131481067
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, LoopCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendOutTriggerTime = { "BlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, BlendOutTriggerTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_InTimeToStartMontageAt = { "InTimeToStartMontageAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, InTimeToStartMontageAt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_SlotNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_LoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_BlendOutTriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_InTimeToStartMontageAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Play normal animation asset on the slot node by creating a dynamic UAnimMontage with blend in arguments. You can only play one asset (whether montage or animsequence) at a time per SlotGroup. */" },
		{ "CPP_Default_BlendOutTriggerTime", "-1.000000" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InTimeToStartMontageAt", "0.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Play normal animation asset on the slot node by creating a dynamic UAnimMontage with blend in arguments. You can only play one asset (whether montage or animsequence) at a time per SlotGroup." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "PlaySlotAnimationAsDynamicMontage_WithBlendArgs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendArgs_Parms), Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics
	{
		struct AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms
		{
			UAnimSequenceBase* Asset;
			FName SlotNodeName;
			FMontageBlendSettings BlendInSettings;
			FMontageBlendSettings BlendOutSettings;
			float InPlayRate;
			int32 LoopCount;
			float BlendOutTriggerTime;
			float InTimeToStartMontageAt;
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendInSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOutSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeToStartMontageAt;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings = { "BlendInSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, BlendInSettings), Z_Construct_UScriptStruct_FMontageBlendSettings, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings_MetaData)) }; // 1515019043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings = { "BlendOutSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, BlendOutSettings), Z_Construct_UScriptStruct_FMontageBlendSettings, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings_MetaData)) }; // 1515019043
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, LoopCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutTriggerTime = { "BlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, BlendOutTriggerTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InTimeToStartMontageAt = { "InTimeToStartMontageAt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, InTimeToStartMontageAt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_SlotNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_LoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutTriggerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InTimeToStartMontageAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Play normal animation asset on the slot node by creating a dynamic UAnimMontage with blend in settings. You can only play one asset (whether montage or animsequence) at a time per SlotGroup. */" },
		{ "CPP_Default_BlendOutTriggerTime", "-1.000000" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InTimeToStartMontageAt", "0.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Play normal animation asset on the slot node by creating a dynamic UAnimMontage with blend in settings. You can only play one asset (whether montage or animsequence) at a time per SlotGroup." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "PlaySlotAnimationAsDynamicMontage_WithBlendSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::AnimInstance_eventPlaySlotAnimationAsDynamicMontage_WithBlendSettings_Parms), Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics
	{
		struct AnimInstance_eventQueryAndMarkTransitionEvent_Parms
		{
			int32 MachineIndex;
			int32 TransitionIndex;
			FName EventName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventQueryAndMarkTransitionEvent_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventQueryAndMarkTransitionEvent_Parms, TransitionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventQueryAndMarkTransitionEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventQueryAndMarkTransitionEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventQueryAndMarkTransitionEvent_Parms), &Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_TransitionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Transitions" },
		{ "Comment", "/** Behaves like QueryTransitionEvent but additionally marks the event for consumption */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Event,Request,Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Behaves like QueryTransitionEvent but additionally marks the event for consumption" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "QueryAndMarkTransitionEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::AnimInstance_eventQueryAndMarkTransitionEvent_Parms), Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics
	{
		struct AnimInstance_eventQueryTransitionEvent_Parms
		{
			int32 MachineIndex;
			int32 TransitionIndex;
			FName EventName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventQueryTransitionEvent_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventQueryTransitionEvent_Parms, TransitionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventQueryTransitionEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventQueryTransitionEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventQueryTransitionEvent_Parms), &Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_TransitionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Transitions" },
		{ "Comment", "/** Returns whether or not the given event transition request has been queued */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Event,Request,Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Returns whether or not the given event transition request has been queued" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "QueryTransitionEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::AnimInstance_eventQueryTransitionEvent_Parms), Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics
	{
		struct AnimInstance_eventRemovePoseSnapshot_Parms
		{
			FName SnapshotName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventRemovePoseSnapshot_Parms, SnapshotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::NewProp_SnapshotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/** Remove a previously saved pose snapshot from the internal snapshot cache */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Remove a previously saved pose snapshot from the internal snapshot cache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "RemovePoseSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::AnimInstance_eventRemovePoseSnapshot_Parms), Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics
	{
		struct AnimInstance_eventRequestSlotGroupInertialization_Parms
		{
			FName InSlotGroupName;
			float Duration;
			const UBlendProfile* BlendProfile;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSlotGroupName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_InSlotGroupName = { "InSlotGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventRequestSlotGroupInertialization_Parms, InSlotGroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventRequestSlotGroupInertialization_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventRequestSlotGroupInertialization_Parms, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_BlendProfile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_InSlotGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::NewProp_BlendProfile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Inertial Blending" },
		{ "Comment", "/**  Requests an inertial blend during the next anim graph update. Requires your anim graph to have a slot node belonging to the specified group name */" },
		{ "CPP_Default_BlendProfile", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Requests an inertial blend during the next anim graph update. Requires your anim graph to have a slot node belonging to the specified group name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "RequestSlotGroupInertialization", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::AnimInstance_eventRequestSlotGroupInertialization_Parms), Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics
	{
		struct AnimInstance_eventRequestTransitionEvent_Parms
		{
			FName EventName;
			double RequestTimeout;
			ETransitionRequestQueueMode QueueMode;
			ETransitionRequestOverwriteMode OverwriteMode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RequestTimeout;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueueMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QueueMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverwriteMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverwriteMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverwriteMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventRequestTransitionEvent_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_RequestTimeout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_RequestTimeout = { "RequestTimeout", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventRequestTransitionEvent_Parms, RequestTimeout), METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_RequestTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_RequestTimeout_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_QueueMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_QueueMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_QueueMode = { "QueueMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventRequestTransitionEvent_Parms, QueueMode), Z_Construct_UEnum_Engine_ETransitionRequestQueueMode, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_QueueMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_QueueMode_MetaData)) }; // 4035696818
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_OverwriteMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_OverwriteMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_OverwriteMode = { "OverwriteMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventRequestTransitionEvent_Parms, OverwriteMode), Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_OverwriteMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_OverwriteMode_MetaData)) }; // 2897143268
	void Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventRequestTransitionEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventRequestTransitionEvent_Parms), &Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_RequestTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_QueueMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_QueueMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_OverwriteMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_OverwriteMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/** Attempts to queue a transition request, returns true if the request was successful */" },
		{ "Keywords", "Event,Request,Transition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Attempts to queue a transition request, returns true if the request was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "RequestTransitionEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::AnimInstance_eventRequestTransitionEvent_Parms), Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics
	{
		struct AnimInstance_eventResetDynamics_Parms
		{
			ETeleportType InTeleportType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTeleportType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InTeleportType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::NewProp_InTeleportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::NewProp_InTeleportType = { "InTeleportType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventResetDynamics_Parms, InTeleportType), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(nullptr, 0) }; // 252955233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::NewProp_InTeleportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::NewProp_InTeleportType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Dynamics" },
		{ "Comment", "/** Reset any dynamics running simulation-style updates (e.g. on teleport, time skip etc.) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Reset any dynamics running simulation-style updates (e.g. on teleport, time skip etc.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "ResetDynamics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::AnimInstance_eventResetDynamics_Parms), Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_ResetDynamics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_ResetDynamics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics
	{
		struct AnimInstance_eventSavePoseSnapshot_Parms
		{
			FName SnapshotName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventSavePoseSnapshot_Parms, SnapshotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::NewProp_SnapshotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/** \n\x09 * Takes a snapshot of the current skeletal mesh component pose & saves it internally.\n\x09 * This snapshot can then be retrieved by name in the animation blueprint for blending. \n\x09 * The snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1 and then used it at LOD0 any bones not in LOD1 will use the reference pose \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Takes a snapshot of the current skeletal mesh component pose & saves it internally.\nThis snapshot can then be retrieved by name in the animation blueprint for blending.\nThe snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1 and then used it at LOD0 any bones not in LOD1 will use the reference pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SavePoseSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::AnimInstance_eventSavePoseSnapshot_Parms), Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics
	{
		struct AnimInstance_eventSetMorphTarget_Parms
		{
			FName MorphTargetName;
			float Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_MorphTargetName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::NewProp_MorphTargetName = { "MorphTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventSetMorphTarget_Parms, MorphTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventSetMorphTarget_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::NewProp_MorphTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Morph Targets" },
		{ "Comment", "/** Sets a morph target to a certain weight. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Sets a morph target to a certain weight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetMorphTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::AnimInstance_eventSetMorphTarget_Parms), Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics
	{
		struct AnimInstance_eventSetPropagateNotifiesToLinkedInstances_Parms
		{
			bool bSet;
		};
		static void NewProp_bSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((AnimInstance_eventSetPropagateNotifiesToLinkedInstances_Parms*)Obj)->bSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventSetPropagateNotifiesToLinkedInstances_Parms), &Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::NewProp_bSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Notifies" },
		{ "Comment", "/** Set whether to propagate notifies to any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Set whether to propagate notifies to any linked anim instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetPropagateNotifiesToLinkedInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::AnimInstance_eventSetPropagateNotifiesToLinkedInstances_Parms), Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics
	{
		struct AnimInstance_eventSetReceiveNotifiesFromLinkedInstances_Parms
		{
			bool bSet;
		};
		static void NewProp_bSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((AnimInstance_eventSetReceiveNotifiesFromLinkedInstances_Parms*)Obj)->bSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventSetReceiveNotifiesFromLinkedInstances_Parms), &Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::NewProp_bSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Notifies" },
		{ "Comment", "/** Set whether to process notifies from any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Set whether to process notifies from any linked anim instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetReceiveNotifiesFromLinkedInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::AnimInstance_eventSetReceiveNotifiesFromLinkedInstances_Parms), Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics
	{
		struct AnimInstance_eventSetRootMotionMode_Parms
		{
			TEnumAsByte<ERootMotionMode::Type> Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventSetRootMotionMode_Parms, Value), Z_Construct_UEnum_Engine_ERootMotionMode, METADATA_PARAMS(nullptr, 0) }; // 359971998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Root Motion" },
		{ "Comment", "/** Set RootMotionMode */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Set RootMotionMode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetRootMotionMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::AnimInstance_eventSetRootMotionMode_Parms), Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetRootMotionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetRootMotionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics
	{
		struct AnimInstance_eventSetUseMainInstanceMontageEvaluationData_Parms
		{
			bool bSet;
		};
		static void NewProp_bSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::NewProp_bSet_SetBit(void* Obj)
	{
		((AnimInstance_eventSetUseMainInstanceMontageEvaluationData_Parms*)Obj)->bSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventSetUseMainInstanceMontageEvaluationData_Parms), &Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::NewProp_bSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs|Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SetUseMainInstanceMontageEvaluationData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::AnimInstance_eventSetUseMainInstanceMontageEvaluationData_Parms), Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics
	{
		struct AnimInstance_eventSnapshotPose_Parms
		{
			FPoseSnapshot Snapshot;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventSnapshotPose_Parms, Snapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) }; // 2909787229
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::NewProp_Snapshot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09 * Takes a snapshot of the current skeletal mesh component pose and saves it to the specified snapshot.\n\x09 * The snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1 \n\x09 * and then used it at LOD0 any bones not in LOD1 will use the reference pose \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Takes a snapshot of the current skeletal mesh component pose and saves it to the specified snapshot.\nThe snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1\nand then used it at LOD0 any bones not in LOD1 will use the reference pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "SnapshotPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::AnimInstance_eventSnapshotPose_Parms), Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_SnapshotPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_SnapshotPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics
	{
		struct AnimInstance_eventStopSlotAnimation_Parms
		{
			float InBlendOutTime;
			FName SlotNodeName;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTime;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::NewProp_InBlendOutTime = { "InBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventStopSlotAnimation_Parms, InBlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventStopSlotAnimation_Parms, SlotNodeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::NewProp_InBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::NewProp_SlotNodeName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Montage" },
		{ "Comment", "/** Stops currently playing slot animation slot or all*/" },
		{ "CPP_Default_InBlendOutTime", "0.250000" },
		{ "CPP_Default_SlotNodeName", "None" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Stops currently playing slot animation slot or all" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "StopSlotAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::AnimInstance_eventStopSlotAnimation_Parms), Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_StopSlotAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_StopSlotAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics
	{
		struct AnimInstance_eventTryGetPawnOwner_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventTryGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "// kismet event functions\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "kismet event functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "TryGetPawnOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::AnimInstance_eventTryGetPawnOwner_Parms), Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics
	{
		struct AnimInstance_eventUnlinkAnimClassLayers_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventUnlinkAnimClassLayers_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/**\n\x09 * Runs through all layer nodes, attempting to find layer nodes that are currently running the specified class, then resets each to its default value.\n\x09 * State sharing rules are as with SetLayerOverlay.\n\x09 * If InClass is null, does nothing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Runs through all layer nodes, attempting to find layer nodes that are currently running the specified class, then resets each to its default value.\nState sharing rules are as with SetLayerOverlay.\nIf InClass is null, does nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "UnlinkAnimClassLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::AnimInstance_eventUnlinkAnimClassLayers_Parms), Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics
	{
		struct AnimInstance_eventUnlockAIResources_Parms
		{
			bool bUnlockMovement;
			bool UnlockAILogic;
		};
		static void NewProp_bUnlockMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnlockMovement;
		static void NewProp_UnlockAILogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UnlockAILogic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement_SetBit(void* Obj)
	{
		((AnimInstance_eventUnlockAIResources_Parms*)Obj)->bUnlockMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement = { "bUnlockMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventUnlockAIResources_Parms), &Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic_SetBit(void* Obj)
	{
		((AnimInstance_eventUnlockAIResources_Parms*)Obj)->UnlockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic = { "UnlockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventUnlockAIResources_Parms), &Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_bUnlockMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::NewProp_UnlockAILogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources.\n\x09 *\x09""DEPRECATED. Use UnlockAIResourcesWithAnimation instead */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use UnlockAIResourcesWithAnimation instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources.\n    DEPRECATED. Use UnlockAIResourcesWithAnimation instead" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "UnlockAIResources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::AnimInstance_eventUnlockAIResources_Parms), Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_UnlockAIResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_UnlockAIResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics
	{
		struct AnimInstance_eventWasAnimNotifyNameTriggeredInAnyState_Parms
		{
			FName NotifyName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyNameTriggeredInAnyState_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyNameTriggeredInAnyState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyNameTriggeredInAnyState_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get whether the animation notify with the specified name triggered last tick. */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether the animation notify with the specified name triggered last tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyNameTriggeredInAnyState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::AnimInstance_eventWasAnimNotifyNameTriggeredInAnyState_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics
	{
		struct AnimInstance_eventWasAnimNotifyNameTriggeredInSourceState_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			FName NotifyName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyNameTriggeredInSourceState_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyNameTriggeredInSourceState_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyNameTriggeredInSourceState_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyNameTriggeredInSourceState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyNameTriggeredInSourceState_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get whether the most relevant animation triggered the animation notify with the specified name last tick.. */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether the most relevant animation triggered the animation notify with the specified name last tick.." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyNameTriggeredInSourceState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::AnimInstance_eventWasAnimNotifyNameTriggeredInSourceState_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics
	{
		struct AnimInstance_eventWasAnimNotifyNameTriggeredInStateMachine_Parms
		{
			int32 MachineIndex;
			FName NotifyName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyNameTriggeredInStateMachine_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyNameTriggeredInStateMachine_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyNameTriggeredInStateMachine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyNameTriggeredInStateMachine_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get whether the given state machine triggered the animation notify with the specified name last tick. */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether the given state machine triggered the animation notify with the specified name last tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyNameTriggeredInStateMachine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::AnimInstance_eventWasAnimNotifyNameTriggeredInStateMachine_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics
	{
		struct AnimInstance_eventWasAnimNotifyStateActiveInAnyState_Parms
		{
			TSubclassOf<UAnimNotifyState>  AnimNotifyStateType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimNotifyStateType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::NewProp_AnimNotifyStateType = { "AnimNotifyStateType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyStateActiveInAnyState_Parms, AnimNotifyStateType), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyStateActiveInAnyState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyStateActiveInAnyState_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::NewProp_AnimNotifyStateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get whether a particular notify state was active in any state machine last tick.*/" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether a particular notify state was active in any state machine last tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyStateActiveInAnyState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::AnimInstance_eventWasAnimNotifyStateActiveInAnyState_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics
	{
		struct AnimInstance_eventWasAnimNotifyStateActiveInSourceState_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			TSubclassOf<UAnimNotifyState>  AnimNotifyStateType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimNotifyStateType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyStateActiveInSourceState_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyStateActiveInSourceState_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_AnimNotifyStateType = { "AnimNotifyStateType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyStateActiveInSourceState_Parms, AnimNotifyStateType), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyStateActiveInSourceState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyStateActiveInSourceState_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_AnimNotifyStateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get whether a particular notify state is active in a specific state last tick. */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether a particular notify state is active in a specific state last tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyStateActiveInSourceState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::AnimInstance_eventWasAnimNotifyStateActiveInSourceState_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics
	{
		struct AnimInstance_eventWasAnimNotifyStateActiveInStateMachine_Parms
		{
			int32 MachineIndex;
			TSubclassOf<UAnimNotifyState>  AnimNotifyStateType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimNotifyStateType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyStateActiveInStateMachine_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::NewProp_AnimNotifyStateType = { "AnimNotifyStateType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyStateActiveInStateMachine_Parms, AnimNotifyStateType), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyStateActiveInStateMachine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyStateActiveInStateMachine_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::NewProp_AnimNotifyStateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get whether a particular notify state is active in a specific state machine last tick.  */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether a particular notify state is active in a specific state machine last tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyStateActiveInStateMachine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::AnimInstance_eventWasAnimNotifyStateActiveInStateMachine_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics
	{
		struct AnimInstance_eventWasAnimNotifyTriggeredInAnyState_Parms
		{
			TSubclassOf<UAnimNotify>  AnimNotifyType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimNotifyType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::NewProp_AnimNotifyType = { "AnimNotifyType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyTriggeredInAnyState_Parms, AnimNotifyType), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyTriggeredInAnyState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyTriggeredInAnyState_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::NewProp_AnimNotifyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/**  Get whether an animation notify of a given type was triggered last tick. */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether an animation notify of a given type was triggered last tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyTriggeredInAnyState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::AnimInstance_eventWasAnimNotifyTriggeredInAnyState_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics
	{
		struct AnimInstance_eventWasAnimNotifyTriggeredInSourceState_Parms
		{
			int32 MachineIndex;
			int32 StateIndex;
			TSubclassOf<UAnimNotify>  AnimNotifyType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimNotifyType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyTriggeredInSourceState_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyTriggeredInSourceState_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_AnimNotifyType = { "AnimNotifyType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyTriggeredInSourceState_Parms, AnimNotifyType), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyTriggeredInSourceState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyTriggeredInSourceState_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_AnimNotifyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get whether the most relevant animation was in a particular notify state last tick. */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether the most relevant animation was in a particular notify state last tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyTriggeredInSourceState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::AnimInstance_eventWasAnimNotifyTriggeredInSourceState_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics
	{
		struct AnimInstance_eventWasAnimNotifyTriggeredInStateMachine_Parms
		{
			int32 MachineIndex;
			TSubclassOf<UAnimNotify>  AnimNotifyType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimNotifyType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyTriggeredInStateMachine_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::NewProp_AnimNotifyType = { "AnimNotifyType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimInstance_eventWasAnimNotifyTriggeredInStateMachine_Parms, AnimNotifyType), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimInstance_eventWasAnimNotifyTriggeredInStateMachine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimInstance_eventWasAnimNotifyTriggeredInStateMachine_Parms), &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::NewProp_MachineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::NewProp_AnimNotifyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::Function_MetaDataParams[] = {
		{ "AnimGetter", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|State Machines" },
		{ "Comment", "/** Get whether a particular notify type was active in a specific state machine last tick.  */" },
		{ "GetterContext", "Transition" },
		{ "Keywords", "Window,TransitionWindow,NotifyState,NotifyStateTransition" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Get whether a particular notify type was active in a specific state machine last tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance, nullptr, "WasAnimNotifyTriggeredInStateMachine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::AnimInstance_eventWasAnimNotifyTriggeredInStateMachine_Parms), Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimInstance);
	UClass* Z_Construct_UClass_UAnimInstance_NoRegister()
	{
		return UAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultiThreadedAnimationUpdate_MetaData[];
#endif
		static void NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultiThreadedAnimationUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingCopyPoseFromMesh_MetaData[];
#endif
		static void NewProp_bUsingCopyPoseFromMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingCopyPoseFromMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveNotifiesFromLinkedInstances_MetaData[];
#endif
		static void NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveNotifiesFromLinkedInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateNotifiesToLinkedInstances_MetaData[];
#endif
		static void NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateNotifiesToLinkedInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMainInstanceMontageEvaluationData_MetaData[];
#endif
		static void NewProp_bUseMainInstanceMontageEvaluationData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMainInstanceMontageEvaluationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bQueueMontageEvents_MetaData[];
#endif
		static void NewProp_bQueueMontageEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bQueueMontageEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageBlendingOut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageBlendingOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAllMontageInstancesEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllMontageInstancesEnded;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostCompileValidationClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostCompileValidationClassName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyQueue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveAnimNotifyState_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAnimNotifyState_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAnimNotifyState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveAnimNotifyEventReference_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAnimNotifyEventReference_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAnimNotifyEventReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintBeginPlay, "BlueprintBeginPlay" }, // 2876000983
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintInitializeAnimation, "BlueprintInitializeAnimation" }, // 91966960
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintLinkedAnimationLayersInitialized, "BlueprintLinkedAnimationLayersInitialized" }, // 2064653232
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintPostEvaluateAnimation, "BlueprintPostEvaluateAnimation" }, // 355803515
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintThreadSafeUpdateAnimation, "BlueprintThreadSafeUpdateAnimation" }, // 2999646905
		{ &Z_Construct_UFunction_UAnimInstance_BlueprintUpdateAnimation, "BlueprintUpdateAnimation" }, // 2755844042
		{ &Z_Construct_UFunction_UAnimInstance_CalculateDirection, "CalculateDirection" }, // 3274784885
		{ &Z_Construct_UFunction_UAnimInstance_ClearAllTransitionEvents, "ClearAllTransitionEvents" }, // 3014684502
		{ &Z_Construct_UFunction_UAnimInstance_ClearMorphTargets, "ClearMorphTargets" }, // 3026413718
		{ &Z_Construct_UFunction_UAnimInstance_ClearTransitionEvents, "ClearTransitionEvents" }, // 4101860613
		{ &Z_Construct_UFunction_UAnimInstance_GetActiveCurveNames, "GetActiveCurveNames" }, // 1619114447
		{ &Z_Construct_UFunction_UAnimInstance_GetAllCurveNames, "GetAllCurveNames" }, // 1468954562
		{ &Z_Construct_UFunction_UAnimInstance_GetCurrentActiveMontage, "GetCurrentActiveMontage" }, // 1111860293
		{ &Z_Construct_UFunction_UAnimInstance_GetCurrentStateName, "GetCurrentStateName" }, // 3601225958
		{ &Z_Construct_UFunction_UAnimInstance_GetCurveValue, "GetCurveValue" }, // 2681390696
		{ &Z_Construct_UFunction_UAnimInstance_GetCurveValueWithDefault, "GetCurveValueWithDefault" }, // 4089616801
		{ &Z_Construct_UFunction_UAnimInstance_GetDeltaSeconds, "GetDeltaSeconds" }, // 3435641634
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerLength, "GetInstanceAssetPlayerLength" }, // 3341706525
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTime, "GetInstanceAssetPlayerTime" }, // 197590033
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFraction, "GetInstanceAssetPlayerTimeFraction" }, // 1167211414
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEnd, "GetInstanceAssetPlayerTimeFromEnd" }, // 587283247
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction, "GetInstanceAssetPlayerTimeFromEndFraction" }, // 2087238454
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceCurrentStateElapsedTime, "GetInstanceCurrentStateElapsedTime" }, // 1192375603
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceMachineWeight, "GetInstanceMachineWeight" }, // 28496626
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceStateWeight, "GetInstanceStateWeight" }, // 1292141486
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionCrossfadeDuration, "GetInstanceTransitionCrossfadeDuration" }, // 3801699061
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsed, "GetInstanceTransitionTimeElapsed" }, // 2334954962
		{ &Z_Construct_UFunction_UAnimInstance_GetInstanceTransitionTimeElapsedFraction, "GetInstanceTransitionTimeElapsedFraction" }, // 3712774583
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstanceByTag, "GetLinkedAnimGraphInstanceByTag" }, // 70239412
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimGraphInstancesByTag, "GetLinkedAnimGraphInstancesByTag" }, // 1472516755
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByClass, "GetLinkedAnimLayerInstanceByClass" }, // 2371042466
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroup, "GetLinkedAnimLayerInstanceByGroup" }, // 1840256745
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass, "GetLinkedAnimLayerInstanceByGroupAndClass" }, // 2356496873
		{ &Z_Construct_UFunction_UAnimInstance_GetLinkedAnimLayerInstancesByGroup, "GetLinkedAnimLayerInstancesByGroup" }, // 1068094718
		{ &Z_Construct_UFunction_UAnimInstance_GetOwningActor, "GetOwningActor" }, // 2599183659
		{ &Z_Construct_UFunction_UAnimInstance_GetOwningComponent, "GetOwningComponent" }, // 502523195
		{ &Z_Construct_UFunction_UAnimInstance_GetPropagateNotifiesToLinkedInstances, "GetPropagateNotifiesToLinkedInstances" }, // 2660306418
		{ &Z_Construct_UFunction_UAnimInstance_GetReceiveNotifiesFromLinkedInstances, "GetReceiveNotifiesFromLinkedInstances" }, // 2971059109
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimLength, "GetRelevantAnimLength" }, // 4186281687
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTime, "GetRelevantAnimTime" }, // 3365305471
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeFraction, "GetRelevantAnimTimeFraction" }, // 1604149744
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemaining, "GetRelevantAnimTimeRemaining" }, // 1136324326
		{ &Z_Construct_UFunction_UAnimInstance_GetRelevantAnimTimeRemainingFraction, "GetRelevantAnimTimeRemainingFraction" }, // 675663412
		{ &Z_Construct_UFunction_UAnimInstance_GetSyncGroupPosition, "GetSyncGroupPosition" }, // 468897468
		{ &Z_Construct_UFunction_UAnimInstance_GetTimeToClosestMarker, "GetTimeToClosestMarker" }, // 3908774765
		{ &Z_Construct_UFunction_UAnimInstance_HasMarkerBeenHitThisFrame, "HasMarkerBeenHitThisFrame" }, // 4087407606
		{ &Z_Construct_UFunction_UAnimInstance_IsAnyMontagePlaying, "IsAnyMontagePlaying" }, // 1667878758
		{ &Z_Construct_UFunction_UAnimInstance_IsPlayingSlotAnimation, "IsPlayingSlotAnimation" }, // 72866253
		{ &Z_Construct_UFunction_UAnimInstance_IsSyncGroupBetweenMarkers, "IsSyncGroupBetweenMarkers" }, // 1788591711
		{ &Z_Construct_UFunction_UAnimInstance_IsUsingMainInstanceMontageEvaluationData, "IsUsingMainInstanceMontageEvaluationData" }, // 1433800510
		{ &Z_Construct_UFunction_UAnimInstance_LinkAnimClassLayers, "LinkAnimClassLayers" }, // 1359587480
		{ &Z_Construct_UFunction_UAnimInstance_LinkAnimGraphByTag, "LinkAnimGraphByTag" }, // 2754365538
		{ &Z_Construct_UFunction_UAnimInstance_LockAIResources, "LockAIResources" }, // 413104112
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetBlendTime, "Montage_GetBlendTime" }, // 3334920632
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetCurrentSection, "Montage_GetCurrentSection" }, // 117931460
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetEffectivePlayRate, "Montage_GetEffectivePlayRate" }, // 236043487
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetIsStopped, "Montage_GetIsStopped" }, // 2476406911
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetPlayRate, "Montage_GetPlayRate" }, // 428154684
		{ &Z_Construct_UFunction_UAnimInstance_Montage_GetPosition, "Montage_GetPosition" }, // 1848940518
		{ &Z_Construct_UFunction_UAnimInstance_Montage_IsActive, "Montage_IsActive" }, // 1603013113
		{ &Z_Construct_UFunction_UAnimInstance_Montage_IsPlaying, "Montage_IsPlaying" }, // 1261726228
		{ &Z_Construct_UFunction_UAnimInstance_Montage_JumpToSection, "Montage_JumpToSection" }, // 1053047863
		{ &Z_Construct_UFunction_UAnimInstance_Montage_JumpToSectionsEnd, "Montage_JumpToSectionsEnd" }, // 664196974
		{ &Z_Construct_UFunction_UAnimInstance_Montage_Pause, "Montage_Pause" }, // 694340752
		{ &Z_Construct_UFunction_UAnimInstance_Montage_Play, "Montage_Play" }, // 3964290514
		{ &Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendIn, "Montage_PlayWithBlendIn" }, // 2332045612
		{ &Z_Construct_UFunction_UAnimInstance_Montage_PlayWithBlendSettings, "Montage_PlayWithBlendSettings" }, // 17213556
		{ &Z_Construct_UFunction_UAnimInstance_Montage_Resume, "Montage_Resume" }, // 1098832848
		{ &Z_Construct_UFunction_UAnimInstance_Montage_SetNextSection, "Montage_SetNextSection" }, // 3816597919
		{ &Z_Construct_UFunction_UAnimInstance_Montage_SetPlayRate, "Montage_SetPlayRate" }, // 3646911340
		{ &Z_Construct_UFunction_UAnimInstance_Montage_SetPosition, "Montage_SetPosition" }, // 3747348450
		{ &Z_Construct_UFunction_UAnimInstance_Montage_Stop, "Montage_Stop" }, // 1274434832
		{ &Z_Construct_UFunction_UAnimInstance_Montage_StopGroupByName, "Montage_StopGroupByName" }, // 3223587566
		{ &Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendOut, "Montage_StopWithBlendOut" }, // 4011033889
		{ &Z_Construct_UFunction_UAnimInstance_Montage_StopWithBlendSettings, "Montage_StopWithBlendSettings" }, // 2355968662
		{ &Z_Construct_UFunction_UAnimInstance_MontageSync_Follow, "MontageSync_Follow" }, // 1906711463
		{ &Z_Construct_UFunction_UAnimInstance_MontageSync_StopFollowing, "MontageSync_StopFollowing" }, // 3730271471
		{ &Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage, "PlaySlotAnimationAsDynamicMontage" }, // 2040752228
		{ &Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendArgs, "PlaySlotAnimationAsDynamicMontage_WithBlendArgs" }, // 1909900969
		{ &Z_Construct_UFunction_UAnimInstance_PlaySlotAnimationAsDynamicMontage_WithBlendSettings, "PlaySlotAnimationAsDynamicMontage_WithBlendSettings" }, // 302653636
		{ &Z_Construct_UFunction_UAnimInstance_QueryAndMarkTransitionEvent, "QueryAndMarkTransitionEvent" }, // 4232001689
		{ &Z_Construct_UFunction_UAnimInstance_QueryTransitionEvent, "QueryTransitionEvent" }, // 4020256063
		{ &Z_Construct_UFunction_UAnimInstance_RemovePoseSnapshot, "RemovePoseSnapshot" }, // 2962626682
		{ &Z_Construct_UFunction_UAnimInstance_RequestSlotGroupInertialization, "RequestSlotGroupInertialization" }, // 3433149638
		{ &Z_Construct_UFunction_UAnimInstance_RequestTransitionEvent, "RequestTransitionEvent" }, // 2465555995
		{ &Z_Construct_UFunction_UAnimInstance_ResetDynamics, "ResetDynamics" }, // 4084514499
		{ &Z_Construct_UFunction_UAnimInstance_SavePoseSnapshot, "SavePoseSnapshot" }, // 2753626892
		{ &Z_Construct_UFunction_UAnimInstance_SetMorphTarget, "SetMorphTarget" }, // 2695317933
		{ &Z_Construct_UFunction_UAnimInstance_SetPropagateNotifiesToLinkedInstances, "SetPropagateNotifiesToLinkedInstances" }, // 285005067
		{ &Z_Construct_UFunction_UAnimInstance_SetReceiveNotifiesFromLinkedInstances, "SetReceiveNotifiesFromLinkedInstances" }, // 3778664785
		{ &Z_Construct_UFunction_UAnimInstance_SetRootMotionMode, "SetRootMotionMode" }, // 2494425626
		{ &Z_Construct_UFunction_UAnimInstance_SetUseMainInstanceMontageEvaluationData, "SetUseMainInstanceMontageEvaluationData" }, // 896372695
		{ &Z_Construct_UFunction_UAnimInstance_SnapshotPose, "SnapshotPose" }, // 1748754242
		{ &Z_Construct_UFunction_UAnimInstance_StopSlotAnimation, "StopSlotAnimation" }, // 450885629
		{ &Z_Construct_UFunction_UAnimInstance_TryGetPawnOwner, "TryGetPawnOwner" }, // 1616215555
		{ &Z_Construct_UFunction_UAnimInstance_UnlinkAnimClassLayers, "UnlinkAnimClassLayers" }, // 2380030361
		{ &Z_Construct_UFunction_UAnimInstance_UnlockAIResources, "UnlockAIResources" }, // 2776663585
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInAnyState, "WasAnimNotifyNameTriggeredInAnyState" }, // 2310392145
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInSourceState, "WasAnimNotifyNameTriggeredInSourceState" }, // 106258562
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyNameTriggeredInStateMachine, "WasAnimNotifyNameTriggeredInStateMachine" }, // 3118603313
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInAnyState, "WasAnimNotifyStateActiveInAnyState" }, // 2994971300
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInSourceState, "WasAnimNotifyStateActiveInSourceState" }, // 1089444937
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyStateActiveInStateMachine, "WasAnimNotifyStateActiveInStateMachine" }, // 2110139645
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInAnyState, "WasAnimNotifyTriggeredInAnyState" }, // 1899030223
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInSourceState, "WasAnimNotifyTriggeredInSourceState" }, // 758250412
		{ &Z_Construct_UFunction_UAnimInstance_WasAnimNotifyTriggeredInStateMachine, "WasAnimNotifyTriggeredInStateMachine" }, // 1559377581
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/AnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton_MetaData[] = {
		{ "Comment", "/** This is used to extract animation. If Mesh exists, this will be overwritten by Mesh->Skeleton */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "This is used to extract animation. If Mesh exists, this will be overwritten by Mesh->Skeleton" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton = { "CurrentSkeleton", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, CurrentSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "// Sets where this blueprint pulls Root Motion from\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Sets where this blueprint pulls Root Motion from" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode = { "RootMotionMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, RootMotionMode), Z_Construct_UEnum_Engine_ERootMotionMode, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode_MetaData)) }; // 359971998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/**\n\x09 * Allows this anim instance to update its native update, blend tree, montages and asset players on\n\x09 * a worker thread. This flag is propagated from the UAnimBlueprint to this instance by the compiler.\n\x09 * The compiler will attempt to pick up any issues that may occur with threaded update.\n\x09 * For updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded \n\x09 * Animation Update\" should be set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Allows this anim instance to update its native update, blend tree, montages and asset players on\na worker thread. This flag is propagated from the UAnimBlueprint to this instance by the compiler.\nThe compiler will attempt to pick up any issues that may occur with threaded update.\nFor updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded\nAnimation Update\" should be set." },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bUseMultiThreadedAnimationUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate = { "bUseMultiThreadedAnimationUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** If this AnimInstance has nodes using 'CopyPoseFromMesh' this will be true. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "If this AnimInstance has nodes using 'CopyPoseFromMesh' this will be true." },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bUsingCopyPoseFromMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh = { "bUsingCopyPoseFromMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData[] = {
		{ "Category", "Notifies" },
		{ "Comment", "/** Whether to process notifies from any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Whether to process notifies from any linked anim instances" },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bReceiveNotifiesFromLinkedInstances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances = { "bReceiveNotifiesFromLinkedInstances", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData[] = {
		{ "Category", "Notifies" },
		{ "Comment", "/** Whether to propagate notifies to any linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Whether to propagate notifies to any linked anim instances" },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bPropagateNotifiesToLinkedInstances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances = { "bPropagateNotifiesToLinkedInstances", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMainInstanceMontageEvaluationData_MetaData[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** If true, linked instances will use the main instance's montage data. (i.e. playing a montage on a main instance will play it on the linked layer too.) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "If true, linked instances will use the main instance's montage data. (i.e. playing a montage on a main instance will play it on the linked layer too.)" },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMainInstanceMontageEvaluationData_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bUseMainInstanceMontageEvaluationData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMainInstanceMontageEvaluationData = { "bUseMainInstanceMontageEvaluationData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMainInstanceMontageEvaluationData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMainInstanceMontageEvaluationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMainInstanceMontageEvaluationData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_MetaData[] = {
		{ "Comment", "/** True when Montages are being ticked, and Montage Events should be queued. \n\x09 * When Montage are being ticked, we queue AnimNotifies and Events. We trigger notifies first, then Montage events. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "True when Montages are being ticked, and Montage Events should be queued.\nWhen Montage are being ticked, we queue AnimNotifies and Events. We trigger notifies first, then Montage events." },
	};
#endif
	void Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_SetBit(void* Obj)
	{
		((UAnimInstance*)Obj)->bQueueMontageEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents = { "bQueueMontageEvents", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimInstance), &Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut_MetaData[] = {
		{ "Comment", "/** Called when a montage starts blending out, whether interrupted or finished */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Called when a montage starts blending out, whether interrupted or finished" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut = { "OnMontageBlendingOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, OnMontageBlendingOut), Z_Construct_UDelegateFunction_Engine_OnMontageBlendingOutStartedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut_MetaData)) }; // 3435816964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted_MetaData[] = {
		{ "Comment", "/** Called when a montage has started */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Called when a montage has started" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted = { "OnMontageStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, OnMontageStarted), Z_Construct_UDelegateFunction_Engine_OnMontageStartedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted_MetaData)) }; // 2669678416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded_MetaData[] = {
		{ "Comment", "/** Called when a montage has ended, whether interrupted or finished*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Called when a montage has ended, whether interrupted or finished" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded = { "OnMontageEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, OnMontageEnded), Z_Construct_UDelegateFunction_Engine_OnMontageEndedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded_MetaData)) }; // 3413180989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded_MetaData[] = {
		{ "Comment", "/** Called when all Montage instances have ended. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Called when all Montage instances have ended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded = { "OnAllMontageInstancesEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, OnAllMontageInstancesEnded), Z_Construct_UDelegateFunction_Engine_OnAllMontageInstancesEndedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded_MetaData)) }; // 2578866893
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName_MetaData[] = {
		{ "Comment", "/** Name of Class to do Post Compile Validation.\n\x09* See Class UAnimBlueprintPostCompileValidation. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Name of Class to do Post Compile Validation.\nSee Class UAnimBlueprintPostCompileValidation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName = { "PostCompileValidationClassName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, PostCompileValidationClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue_MetaData[] = {
		{ "Comment", "/** Animation Notifies that has been triggered in the latest tick **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Animation Notifies that has been triggered in the latest tick *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue = { "NotifyQueue", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, NotifyQueue), Z_Construct_UScriptStruct_FAnimNotifyQueue, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue_MetaData)) }; // 1153152247
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_Inner = { "ActiveAnimNotifyState", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData[] = {
		{ "Comment", "/** Currently Active AnimNotifyState, stored as a copy of the event as we need to\n\x09\x09""call NotifyEnd on the event after a deletion in the editor. After this the event\n\x09\x09is removed correctly. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
		{ "ToolTip", "Currently Active AnimNotifyState, stored as a copy of the event as we need to\n              call NotifyEnd on the event after a deletion in the editor. After this the event\n              is removed correctly." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState = { "ActiveAnimNotifyState", nullptr, (EPropertyFlags)0x0010008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, ActiveAnimNotifyState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_MetaData)) }; // 3418516681
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyEventReference_Inner = { "ActiveAnimNotifyEventReference", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(nullptr, 0) }; // 1168965002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyEventReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyEventReference = { "ActiveAnimNotifyEventReference", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimInstance, ActiveAnimNotifyEventReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyEventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyEventReference_MetaData)) }; // 1168965002
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_CurrentSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_RootMotionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMultiThreadedAnimationUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUsingCopyPoseFromMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bReceiveNotifiesFromLinkedInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bPropagateNotifiesToLinkedInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bUseMainInstanceMontageEvaluationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_bQueueMontageEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageBlendingOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnMontageEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_OnAllMontageInstancesEnded,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_PostCompileValidationClassName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_NotifyQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyEventReference_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Statics::NewProp_ActiveAnimNotifyEventReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstance_Statics::ClassParams = {
		&UAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimInstance.OuterSingleton, Z_Construct_UClass_UAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimInstance>()
	{
		return UAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimInstance)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::EnumInfo[] = {
		{ EMontagePlayReturnType_StaticEnum, TEXT("EMontagePlayReturnType"), &Z_Registration_Info_UEnum_EMontagePlayReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1162392915U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FA2Pose::StaticStruct, Z_Construct_UScriptStruct_FA2Pose_Statics::NewStructOps, TEXT("A2Pose"), &Z_Registration_Info_UScriptStruct_A2Pose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FA2Pose), 3062373700U) },
		{ FA2CSPose::StaticStruct, Z_Construct_UScriptStruct_FA2CSPose_Statics::NewStructOps, TEXT("A2CSPose"), &Z_Registration_Info_UScriptStruct_A2CSPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FA2CSPose), 3431916153U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimInstance, UAnimInstance::StaticClass, TEXT("UAnimInstance"), &Z_Registration_Info_UClass_UAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimInstance), 2147639279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_3552072744(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
