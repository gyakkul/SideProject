// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCue_Types.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"
#include "GameplayPrediction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCue_Types() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCuePendingExecute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPreallocationInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayCuePayloadType;
	static UEnum* EGameplayCuePayloadType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayCuePayloadType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayCuePayloadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCuePayloadType"));
		}
		return Z_Registration_Info_UEnum_EGameplayCuePayloadType.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCuePayloadType>()
	{
		return EGameplayCuePayloadType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enumerators[] = {
		{ "EGameplayCuePayloadType::CueParameters", (int64)EGameplayCuePayloadType::CueParameters },
		{ "EGameplayCuePayloadType::FromSpec", (int64)EGameplayCuePayloadType::FromSpec },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Describes what type of payload is attached to a cue execution, we only replicate what is needed */" },
		{ "CueParameters.Comment", "/** Uses FGameplayCueParameters */" },
		{ "CueParameters.Name", "EGameplayCuePayloadType::CueParameters" },
		{ "CueParameters.ToolTip", "Uses FGameplayCueParameters" },
		{ "FromSpec.Comment", "/** Uses FGameplayEffectSpecForRPC */" },
		{ "FromSpec.Name", "EGameplayCuePayloadType::FromSpec" },
		{ "FromSpec.ToolTip", "Uses FGameplayEffectSpecForRPC" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "Describes what type of payload is attached to a cue execution, we only replicate what is needed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayCuePayloadType",
		"EGameplayCuePayloadType",
		Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayCuePayloadType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayCuePayloadType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayCuePayloadType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute;
class UScriptStruct* FGameplayCuePendingExecute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCuePendingExecute, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCuePendingExecute"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCuePendingExecute>()
{
	return FGameplayCuePendingExecute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PayloadType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PayloadType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromSpec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure to keep track of pending gameplay cues that haven't been applied yet. */" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "Structure to keep track of pending gameplay cues that haven't been applied yet." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCuePendingExecute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "Comment", "/** Prediction key that spawned this cue */" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "Prediction key that spawned this cue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCuePendingExecute, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PredictionKey_MetaData)) }; // 2453680625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType_MetaData[] = {
		{ "Comment", "/** What type of payload is attached to this cue */" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "What type of payload is attached to this cue" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType = { "PayloadType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCuePendingExecute, PayloadType), Z_Construct_UEnum_GameplayAbilities_EGameplayCuePayloadType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType_MetaData)) }; // 425815108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "Comment", "/** What component to send the cue on */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "What component to send the cue on" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCuePendingExecute, OwningComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_OwningComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_OwningComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_FromSpec_MetaData[] = {
		{ "Comment", "/** If this cue is from a spec, here's the copy of that spec */" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "If this cue is from a spec, here's the copy of that spec" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_FromSpec = { "FromSpec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCuePendingExecute, FromSpec), Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_FromSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_FromSpec_MetaData)) }; // 492904513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_CueParameters_MetaData[] = {
		{ "Comment", "/** Store the full cue parameters or just the effect context depending on type */" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "Store the full cue parameters or just the effect context depending on type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_CueParameters = { "CueParameters", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCuePendingExecute, CueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_CueParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_CueParameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PredictionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_PayloadType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_OwningComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_FromSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewProp_CueParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCuePendingExecute",
		sizeof(FGameplayCuePendingExecute),
		alignof(FGameplayCuePendingExecute),
		Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCuePendingExecute()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray;
class UScriptStruct* FGameplayCueNotifyActorArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueNotifyActorArray"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueNotifyActorArray>()
{
	return FGameplayCueNotifyActorArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueNotifyActorArray>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueNotifyActorArray, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewProp_Actors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueNotifyActorArray",
		sizeof(FGameplayCueNotifyActorArray),
		alignof(FGameplayCueNotifyActorArray),
		Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreallocationInfo;
class UScriptStruct* FPreallocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreallocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreallocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreallocationInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("PreallocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PreallocationInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FPreallocationInfo>()
{
	return FPreallocationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPreallocationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreallocatedInstances_ValueProp;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_PreallocatedInstances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreallocatedInstances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PreallocatedInstances;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassesNeedingPreallocation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassesNeedingPreallocation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassesNeedingPreallocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreallocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct for pooling and preallocating gameplaycuenotify_actor classes. This data is per world and used to track what actors are available to recycle and which classes need to preallocate instances of those actors */" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "Struct for pooling and preallocating gameplaycuenotify_actor classes. This data is per world and used to track what actors are available to recycle and which classes need to preallocate instances of those actors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreallocationInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_ValueProp = { "PreallocatedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray, METADATA_PARAMS(nullptr, 0) }; // 1735388165
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_Key_KeyProp = { "PreallocatedInstances_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_MetaData[] = {
		{ "Comment", "/** Raw list of pooled instances. This relies on NotifyGameplayCueActorEndPlay always being called when actor is destroyed */" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "Raw list of pooled instances. This relies on NotifyGameplayCueActorEndPlay always being called when actor is destroyed" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances = { "PreallocatedInstances", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreallocationInfo, PreallocatedInstances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_MetaData)) }; // 1735388165
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation_Inner = { "ClassesNeedingPreallocation", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayCueNotify_Actor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation_MetaData[] = {
		{ "Comment", "/** List of classes that will be pooled */" },
		{ "ModuleRelativePath", "Public/GameplayCue_Types.h" },
		{ "ToolTip", "List of classes that will be pooled" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation = { "ClassesNeedingPreallocation", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreallocationInfo, ClassesNeedingPreallocation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreallocationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_PreallocatedInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewProp_ClassesNeedingPreallocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreallocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"PreallocationInfo",
		sizeof(FPreallocationInfo),
		alignof(FPreallocationInfo),
		Z_Construct_UScriptStruct_FPreallocationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreallocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreallocationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PreallocationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreallocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FPreallocationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PreallocationInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::EnumInfo[] = {
		{ EGameplayCuePayloadType_StaticEnum, TEXT("EGameplayCuePayloadType"), &Z_Registration_Info_UEnum_EGameplayCuePayloadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 425815108U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::ScriptStructInfo[] = {
		{ FGameplayCuePendingExecute::StaticStruct, Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics::NewStructOps, TEXT("GameplayCuePendingExecute"), &Z_Registration_Info_UScriptStruct_GameplayCuePendingExecute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCuePendingExecute), 822504576U) },
		{ FGameplayCueNotifyActorArray::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics::NewStructOps, TEXT("GameplayCueNotifyActorArray"), &Z_Registration_Info_UScriptStruct_GameplayCueNotifyActorArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueNotifyActorArray), 1735388165U) },
		{ FPreallocationInfo::StaticStruct, Z_Construct_UScriptStruct_FPreallocationInfo_Statics::NewStructOps, TEXT("PreallocationInfo"), &Z_Registration_Info_UScriptStruct_PreallocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreallocationInfo), 1373043976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_2175620494(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
