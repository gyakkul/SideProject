// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityRepAnimMontage.h"
#include "GameplayPrediction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityRepAnimMontage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERepAnimPositionMethod;
	static UEnum* ERepAnimPositionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERepAnimPositionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERepAnimPositionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ERepAnimPositionMethod"));
		}
		return Z_Registration_Info_UEnum_ERepAnimPositionMethod.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ERepAnimPositionMethod>()
	{
		return ERepAnimPositionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enumerators[] = {
		{ "ERepAnimPositionMethod::Position", (int64)ERepAnimPositionMethod::Position },
		{ "ERepAnimPositionMethod::CurrentSectionId", (int64)ERepAnimPositionMethod::CurrentSectionId },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum used by the Ability Rep Anim Montage struct to rep the quantized position or the current section id */" },
		{ "CurrentSectionId.Comment", "// reps the position in the montage to keep the client in sync (heavier, quantized, more precise)\n" },
		{ "CurrentSectionId.Name", "ERepAnimPositionMethod::CurrentSectionId" },
		{ "CurrentSectionId.ToolTip", "reps the position in the montage to keep the client in sync (heavier, quantized, more precise)" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "Position.Name", "ERepAnimPositionMethod::Position" },
		{ "ToolTip", "Enum used by the Ability Rep Anim Montage struct to rep the quantized position or the current section id" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"ERepAnimPositionMethod",
		"ERepAnimPositionMethod",
		Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod()
	{
		if (!Z_Registration_Info_UEnum_ERepAnimPositionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERepAnimPositionMethod.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERepAnimPositionMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage;
class UScriptStruct* FGameplayAbilityRepAnimMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityRepAnimMontage"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityRepAnimMontage>()
{
	return FGameplayAbilityRepAnimMontage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextSectionID_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NextSectionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayInstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayInstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepPosition_MetaData[];
#endif
		static void NewProp_bRepPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStopped_MetaData[];
#endif
		static void NewProp_IsStopped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStopped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkipPositionCorrection_MetaData[];
#endif
		static void NewProp_SkipPositionCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipPositionCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipPlayRate_MetaData[];
#endif
		static void NewProp_bSkipPlayRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SectionIdToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data about montages that is replicated to simulated clients */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "Data about montages that is replicated to simulated clients" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityRepAnimMontage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Comment", "/** AnimMontage ref */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "AnimMontage ref" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Comment", "/** Play Rate */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "Play Rate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Montage position */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "Montage position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Comment", "/** Montage current blend time */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "Montage current blend time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID_MetaData[] = {
		{ "Comment", "/** NextSectionID */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "NextSectionID" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID = { "NextSectionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, NextSectionID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayInstanceId_MetaData[] = {
		{ "Comment", "/** ID incremented every time a montage is played, used to trigger replication when the same montage is played multiple times. This ID wraps around when it reaches its max value. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "ID incremented every time a montage is played, used to trigger replication when the same montage is played multiple times. This ID wraps around when it reaches its max value." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayInstanceId = { "PlayInstanceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, PlayInstanceId), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayInstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_MetaData[] = {
		{ "Comment", "/** flag indicating we should serialize the position or the current section id */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "flag indicating we should serialize the position or the current section id" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->bRepPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition = { "bRepPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_MetaData[] = {
		{ "Comment", "/** Bit set when montage has been stopped. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "Bit set when montage has been stopped." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->IsStopped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped = { "IsStopped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_MetaData[] = {
		{ "Comment", "/** Stops montage position from replicating at all to save bandwidth */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "Stops montage position from replicating at all to save bandwidth" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->SkipPositionCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection = { "SkipPositionCorrection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_MetaData[] = {
		{ "Comment", "/** Stops PlayRate from replicating to save bandwidth. PlayRate will be assumed to be 1.f. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "Stops PlayRate from replicating to save bandwidth. PlayRate will be assumed to be 1.f." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->bSkipPlayRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate = { "bSkipPlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey_MetaData)) }; // 2453680625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay_MetaData[] = {
		{ "Comment", "/** The current section Id used by the montage. Will only be valid if bRepPosition is false */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityRepAnimMontage.h" },
		{ "ToolTip", "The current section Id used by the montage. Will only be valid if bRepPosition is false" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay = { "SectionIdToPlay", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, SectionIdToPlay), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityRepAnimMontage",
		sizeof(FGameplayAbilityRepAnimMontage),
		alignof(FGameplayAbilityRepAnimMontage),
		Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::EnumInfo[] = {
		{ ERepAnimPositionMethod_StaticEnum, TEXT("ERepAnimPositionMethod"), &Z_Registration_Info_UEnum_ERepAnimPositionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4018476385U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilityRepAnimMontage::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewStructOps, TEXT("GameplayAbilityRepAnimMontage"), &Z_Registration_Info_UScriptStruct_GameplayAbilityRepAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityRepAnimMontage), 677649352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_2520113930(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
