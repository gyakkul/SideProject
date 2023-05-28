// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "ActiveGameplayEffectHandle.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModOp();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagContainerAggregator();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayModEvaluationChannel;
	static UEnum* EGameplayModEvaluationChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayModEvaluationChannel"));
		}
		return Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayModEvaluationChannel>()
	{
		return EGameplayModEvaluationChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enumerators[] = {
		{ "EGameplayModEvaluationChannel::Channel0", (int64)EGameplayModEvaluationChannel::Channel0 },
		{ "EGameplayModEvaluationChannel::Channel1", (int64)EGameplayModEvaluationChannel::Channel1 },
		{ "EGameplayModEvaluationChannel::Channel2", (int64)EGameplayModEvaluationChannel::Channel2 },
		{ "EGameplayModEvaluationChannel::Channel3", (int64)EGameplayModEvaluationChannel::Channel3 },
		{ "EGameplayModEvaluationChannel::Channel4", (int64)EGameplayModEvaluationChannel::Channel4 },
		{ "EGameplayModEvaluationChannel::Channel5", (int64)EGameplayModEvaluationChannel::Channel5 },
		{ "EGameplayModEvaluationChannel::Channel6", (int64)EGameplayModEvaluationChannel::Channel6 },
		{ "EGameplayModEvaluationChannel::Channel7", (int64)EGameplayModEvaluationChannel::Channel7 },
		{ "EGameplayModEvaluationChannel::Channel8", (int64)EGameplayModEvaluationChannel::Channel8 },
		{ "EGameplayModEvaluationChannel::Channel9", (int64)EGameplayModEvaluationChannel::Channel9 },
		{ "EGameplayModEvaluationChannel::Channel_MAX", (int64)EGameplayModEvaluationChannel::Channel_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enum_MetaDataParams[] = {
		{ "Channel0.Hidden", "" },
		{ "Channel0.Name", "EGameplayModEvaluationChannel::Channel0" },
		{ "Channel1.Hidden", "" },
		{ "Channel1.Name", "EGameplayModEvaluationChannel::Channel1" },
		{ "Channel2.Hidden", "" },
		{ "Channel2.Name", "EGameplayModEvaluationChannel::Channel2" },
		{ "Channel3.Hidden", "" },
		{ "Channel3.Name", "EGameplayModEvaluationChannel::Channel3" },
		{ "Channel4.Hidden", "" },
		{ "Channel4.Name", "EGameplayModEvaluationChannel::Channel4" },
		{ "Channel5.Hidden", "" },
		{ "Channel5.Name", "EGameplayModEvaluationChannel::Channel5" },
		{ "Channel6.Hidden", "" },
		{ "Channel6.Name", "EGameplayModEvaluationChannel::Channel6" },
		{ "Channel7.Hidden", "" },
		{ "Channel7.Name", "EGameplayModEvaluationChannel::Channel7" },
		{ "Channel8.Hidden", "" },
		{ "Channel8.Name", "EGameplayModEvaluationChannel::Channel8" },
		{ "Channel9.Hidden", "" },
		{ "Channel9.Name", "EGameplayModEvaluationChannel::Channel9" },
		{ "Channel_MAX.Comment", "// Always keep last\n" },
		{ "Channel_MAX.Hidden", "" },
		{ "Channel_MAX.Name", "EGameplayModEvaluationChannel::Channel_MAX" },
		{ "Channel_MAX.ToolTip", "Always keep last" },
		{ "Comment", "/** Valid gameplay modifier evaluation channels; Displayed and renamed via game-specific aliases and options */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Valid gameplay modifier evaluation channels; Displayed and renamed via game-specific aliases and options" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayModEvaluationChannel",
		"EGameplayModEvaluationChannel",
		Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel()
	{
		if (!Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayModEvaluationChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings;
class UScriptStruct* FGameplayModEvaluationChannelSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayModEvaluationChannelSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayModEvaluationChannelSettings>()
{
	return FGameplayModEvaluationChannelSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct representing evaluation channel settings for a gameplay modifier */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Struct representing evaluation channel settings for a gameplay modifier" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModEvaluationChannelSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "EvaluationChannel" },
		{ "Comment", "/** Channel the settings would prefer to use, if possible/valid */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Channel the settings would prefer to use, if possible/valid" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModEvaluationChannelSettings, Channel), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_MetaData)) }; // 3983419795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayModEvaluationChannelSettings",
		sizeof(FGameplayModEvaluationChannelSettings),
		alignof(FGameplayModEvaluationChannelSettings),
		Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.InnerSingleton, Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayModOp;
	static UEnum* EGameplayModOp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayModOp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayModOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayModOp"));
		}
		return Z_Registration_Info_UEnum_EGameplayModOp.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayModOp::Type>()
	{
		return EGameplayModOp_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enumerators[] = {
		{ "EGameplayModOp::Additive", (int64)EGameplayModOp::Additive },
		{ "EGameplayModOp::Multiplicitive", (int64)EGameplayModOp::Multiplicitive },
		{ "EGameplayModOp::Division", (int64)EGameplayModOp::Division },
		{ "EGameplayModOp::Override", (int64)EGameplayModOp::Override },
		{ "EGameplayModOp::Max", (int64)EGameplayModOp::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** Numeric. */" },
		{ "Additive.DisplayName", "Add" },
		{ "Additive.Name", "EGameplayModOp::Additive" },
		{ "Additive.ToolTip", "Numeric." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines the ways that mods will modify attributes. Numeric ones operate on the existing value, override ignores it */" },
		{ "Division.Comment", "/** Numeric. */" },
		{ "Division.DisplayName", "Divide" },
		{ "Division.Name", "EGameplayModOp::Division" },
		{ "Division.ToolTip", "Numeric." },
		{ "Max.Comment", "// This must always be at the end.\n" },
		{ "Max.DisplayName", "Invalid" },
		{ "Max.Name", "EGameplayModOp::Max" },
		{ "Max.ToolTip", "This must always be at the end." },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "Multiplicitive.Comment", "/** Numeric. */" },
		{ "Multiplicitive.DisplayName", "Multiply" },
		{ "Multiplicitive.Name", "EGameplayModOp::Multiplicitive" },
		{ "Multiplicitive.ToolTip", "Numeric." },
		{ "Override.Comment", "/** Other. */" },
		{ "Override.DisplayName", "Override" },
		{ "Override.Name", "EGameplayModOp::Override" },
		{ "Override.ToolTip", "Other." },
		{ "ToolTip", "Defines the ways that mods will modify attributes. Numeric ones operate on the existing value, override ignores it" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayModOp",
		"EGameplayModOp::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModOp()
	{
		if (!Z_Registration_Info_UEnum_EGameplayModOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayModOp.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayModOp.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectStackingType;
	static UEnum* EGameplayEffectStackingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectStackingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectStackingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingType"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectStackingType.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingType>()
	{
		return EGameplayEffectStackingType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enumerators[] = {
		{ "EGameplayEffectStackingType::None", (int64)EGameplayEffectStackingType::None },
		{ "EGameplayEffectStackingType::AggregateBySource", (int64)EGameplayEffectStackingType::AggregateBySource },
		{ "EGameplayEffectStackingType::AggregateByTarget", (int64)EGameplayEffectStackingType::AggregateByTarget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enum_MetaDataParams[] = {
		{ "AggregateBySource.Comment", "/** Each caster has its own stack. */" },
		{ "AggregateBySource.Name", "EGameplayEffectStackingType::AggregateBySource" },
		{ "AggregateBySource.ToolTip", "Each caster has its own stack." },
		{ "AggregateByTarget.Comment", "/** Each target has its own stack. */" },
		{ "AggregateByTarget.Name", "EGameplayEffectStackingType::AggregateByTarget" },
		{ "AggregateByTarget.ToolTip", "Each target has its own stack." },
		{ "Comment", "/** Enumeration for ways a single GameplayEffect asset can stack. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "None.Comment", "/** No stacking. Multiple applications of this GameplayEffect are treated as separate instances. */" },
		{ "None.Name", "EGameplayEffectStackingType::None" },
		{ "None.ToolTip", "No stacking. Multiple applications of this GameplayEffect are treated as separate instances." },
		{ "ToolTip", "Enumeration for ways a single GameplayEffect asset can stack." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectStackingType",
		"EGameplayEffectStackingType",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectStackingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectStackingType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectStackingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData;
class UScriptStruct* FGameplayModifierEvaluatedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayModifierEvaluatedData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayModifierEvaluatedData>()
{
	return FGameplayModifierEvaluatedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data that describes what happened in an attribute modification. This is passed to ability set callbacks */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Data that describes what happened in an attribute modification. This is passed to ability set callbacks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModifierEvaluatedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute_MetaData[] = {
		{ "Comment", "/** What attribute was modified */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "What attribute was modified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute_MetaData)) }; // 2095245243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp_MetaData[] = {
		{ "Comment", "/** The numeric operation of this modifier: Override, Add, Multiply, etc  */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The numeric operation of this modifier: Override, Add, Multiply, etc" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierEvaluatedData, ModifierOp), Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp_MetaData)) }; // 1741596775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Comment", "/** The raw magnitude of the applied attribute, this is generally before being clamped */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The raw magnitude of the applied attribute, this is generally before being clamped" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/** Handle of the active gameplay effect that originated us. Will be invalid in many cases */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Handle of the active gameplay effect that originated us. Will be invalid in many cases" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle_MetaData)) }; // 3579869929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_MetaData[] = {
		{ "Comment", "/** True if something was evaluated */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "True if something was evaluated" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((FGameplayModifierEvaluatedData*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayModifierEvaluatedData), &Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayModifierEvaluatedData",
		sizeof(FGameplayModifierEvaluatedData),
		alignof(FGameplayModifierEvaluatedData),
		Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectContext;
class UScriptStruct* FGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectContext.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectContext>()
{
	return FGameplayEffectContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EffectCauser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCDO_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilityCDO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInstanceNotReplicated_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilityInstanceNotReplicated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorAbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InstigatorAbilitySystemComponent;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasWorldOrigin_MetaData[];
#endif
		static void NewProp_bHasWorldOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasWorldOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateSourceObject_MetaData[];
#endif
		static void NewProp_bReplicateSourceObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateSourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateInstigator_MetaData[];
#endif
		static void NewProp_bReplicateInstigator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateInstigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateEffectCauser_MetaData[];
#endif
		static void NewProp_bReplicateEffectCauser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateEffectCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data structure that stores an instigator and related data, such as positions and targets\n * Games can subclass this structure and add game-specific information\n * It is passed throughout effect execution so it is a great place to track transient information about an execution\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Data structure that stores an instigator and related data, such as positions and targets\nGames can subclass this structure and add game-specific information\nIt is passed throughout effect execution so it is a great place to track transient information about an execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator_MetaData[] = {
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser_MetaData[] = {
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO_MetaData[] = {
		{ "Comment", "/** The ability CDO that is responsible for this effect context (replicated) */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The ability CDO that is responsible for this effect context (replicated)" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO = { "AbilityCDO", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, AbilityCDO), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated_MetaData[] = {
		{ "Comment", "/** The ability instance that is responsible for this effect context (NOT replicated) */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The ability instance that is responsible for this effect context (NOT replicated)" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated = { "AbilityInstanceNotReplicated", nullptr, (EPropertyFlags)0x0024080080000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, AbilityInstanceNotReplicated), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Comment", "/** The level this was executed at */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The level this was executed at" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData[] = {
		{ "Comment", "/** The ability system component that's bound to instigator */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The ability system component that's bound to instigator" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent = { "InstigatorAbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080080080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, InstigatorAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_MetaData[] = {
		{ "Comment", "/** Actors referenced by this context */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Actors referenced by this context" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin_MetaData[] = {
		{ "Comment", "/** Stored origin, may be invalid if bHasWorldOrigin is false */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Stored origin, may be invalid if bHasWorldOrigin is false" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectContext, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_SetBit(void* Obj)
	{
		((FGameplayEffectContext*)Obj)->bHasWorldOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin = { "bHasWorldOrigin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_MetaData[] = {
		{ "Comment", "/** True if the SourceObject can be replicated. This bool is not replicated itself. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "True if the SourceObject can be replicated. This bool is not replicated itself." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_SetBit(void* Obj)
	{
		((FGameplayEffectContext*)Obj)->bReplicateSourceObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject = { "bReplicateSourceObject", nullptr, (EPropertyFlags)0x0020080080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator_MetaData[] = {
		{ "Comment", "/** True if the Instigator can be replicated. This bool is not replicated itself. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "True if the Instigator can be replicated. This bool is not replicated itself." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator_SetBit(void* Obj)
	{
		((FGameplayEffectContext*)Obj)->bReplicateInstigator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator = { "bReplicateInstigator", nullptr, (EPropertyFlags)0x0020080080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser_MetaData[] = {
		{ "Comment", "/** True if the Instigator can be replicated. This bool is not replicated itself. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "True if the Instigator can be replicated. This bool is not replicated itself." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser_SetBit(void* Obj)
	{
		((FGameplayEffectContext*)Obj)->bReplicateEffectCauser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser = { "bReplicateEffectCauser", nullptr, (EPropertyFlags)0x0020080080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateEffectCauser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectContext",
		sizeof(FGameplayEffectContext),
		alignof(FGameplayEffectContext),
		Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle;
class UScriptStruct* FGameplayEffectContextHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectContextHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectContextHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectContextHandle>()
{
	return FGameplayEffectContextHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handle that wraps a FGameplayEffectContext or subclass, to allow it to be polymorphic and replicate properly\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Handle that wraps a FGameplayEffectContext or subclass, to allow it to be polymorphic and replicate properly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectContextHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectContextHandle",
		sizeof(FGameplayEffectContextHandle),
		alignof(FGameplayEffectContextHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo;
class UScriptStruct* FGameplayEffectRemovalInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectRemovalInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectRemovalInfo>()
{
	return FGameplayEffectRemovalInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrematureRemoval_MetaData[];
#endif
		static void NewProp_bPrematureRemoval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrematureRemoval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data struct for containing information pertinent to GameplayEffects as they are removed */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Data struct for containing information pertinent to GameplayEffects as they are removed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectRemovalInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** True when the gameplay effect's duration has not expired, meaning the gameplay effect is being forcefully removed.  */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "True when the gameplay effect's duration has not expired, meaning the gameplay effect is being forcefully removed." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_SetBit(void* Obj)
	{
		((FGameplayEffectRemovalInfo*)Obj)->bPrematureRemoval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval = { "bPrematureRemoval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayEffectRemovalInfo), &Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** Number of Stacks this gameplay effect had before it was removed. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Number of Stacks this gameplay effect had before it was removed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectRemovalInfo, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** Actor this gameplay effect was targeting. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Actor this gameplay effect was targeting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectRemovalInfo, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext_MetaData)) }; // 668201340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectRemovalInfo",
		sizeof(FGameplayEffectRemovalInfo),
		alignof(FGameplayEffectRemovalInfo),
		Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueParameters;
class UScriptStruct* FGameplayCueParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueParameters, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueParameters"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueParameters.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueParameters>()
{
	return FGameplayCueParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchedTagName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchedTagName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedSourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedSourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedTargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedTargetTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EffectCauser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayEffectLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttachComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetAttachComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateLocationWhenUsingMinimalRepProxy_MetaData[];
#endif
		static void NewProp_bReplicateLocationWhenUsingMinimalRepProxy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateLocationWhenUsingMinimalRepProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Metadata about a gameplay cue execution */" },
		{ "HasNativeBreak", "/Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters" },
		{ "HasNativeMake", "/Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Metadata about a gameplay cue execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max) */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, NormalizedMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Raw final magnitude of source gameplay effect. Use this is you need to display numbers or for other informational purposes. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Raw final magnitude of source gameplay effect. Use this is you need to display numbers or for other informational purposes." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude = { "RawMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, RawMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Effect context, contains information about hit result, etc */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Effect context, contains information about hit result, etc" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext_MetaData)) }; // 668201340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The tag name that matched this specific gameplay cue handler */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The tag name that matched this specific gameplay cue handler" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName = { "MatchedTagName", nullptr, (EPropertyFlags)0x0010000080000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, MatchedTagName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The original tag of the gameplay cue */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The original tag of the gameplay cue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag = { "OriginalTag", nullptr, (EPropertyFlags)0x0010000080000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, OriginalTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The aggregated source tags taken from the effect spec */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The aggregated source tags taken from the effect spec" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags = { "AggregatedSourceTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, AggregatedSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The aggregated target tags taken from the effect spec */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The aggregated target tags taken from the effect spec" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags = { "AggregatedTargetTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, AggregatedTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Location cue took place at */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Location cue took place at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, Location), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location_MetaData)) }; // 3369118706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Normal of impact that caused cue */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Normal of impact that caused cue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, Normal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal_MetaData)) }; // 903499713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** PhysMat of the hit, if there was a hit. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "PhysMat of the hit, if there was a hit." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** If originating from a GameplayEffect, the level of that GameplayEffect */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "If originating from a GameplayEffect, the level of that GameplayEffect" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel = { "GameplayEffectLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, GameplayEffectLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** If originating from an ability, this will be the level of that ability */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "If originating from an ability, this will be the level of that ability" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Could be used to say \"attach FX to this component always\" */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Could be used to say \"attach FX to this component always\"" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent = { "TargetAttachComponent", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueParameters, TargetAttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** If we're using a minimal replication proxy, should we replicate location for this cue */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "If we're using a minimal replication proxy, should we replicate location for this cue" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy_SetBit(void* Obj)
	{
		((FGameplayCueParameters*)Obj)->bReplicateLocationWhenUsingMinimalRepProxy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy = { "bReplicateLocationWhenUsingMinimalRepProxy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayCueParameters), &Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_bReplicateLocationWhenUsingMinimalRepProxy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueParameters",
		sizeof(FGameplayCueParameters),
		alignof(FGameplayCueParameters),
		Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueParameters.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueParameters.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayCueEvent;
	static UEnum* EGameplayCueEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayCueEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayCueEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCueEvent"));
		}
		return Z_Registration_Info_UEnum_EGameplayCueEvent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCueEvent::Type>()
	{
		return EGameplayCueEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enumerators[] = {
		{ "EGameplayCueEvent::OnActive", (int64)EGameplayCueEvent::OnActive },
		{ "EGameplayCueEvent::WhileActive", (int64)EGameplayCueEvent::WhileActive },
		{ "EGameplayCueEvent::Executed", (int64)EGameplayCueEvent::Executed },
		{ "EGameplayCueEvent::Removed", (int64)EGameplayCueEvent::Removed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Indicates what type of action happened to a specific gameplay cue tag. Sometimes you will get multiple events at once */" },
		{ "Executed.Comment", "/** Called when a GameplayCue is executed, this is used for instant effects or periodic ticks */" },
		{ "Executed.Name", "EGameplayCueEvent::Executed" },
		{ "Executed.ToolTip", "Called when a GameplayCue is executed, this is used for instant effects or periodic ticks" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "OnActive.Comment", "/** Called when a GameplayCue with duration is first activated, this will only be called if the client witnessed the activation */" },
		{ "OnActive.Name", "EGameplayCueEvent::OnActive" },
		{ "OnActive.ToolTip", "Called when a GameplayCue with duration is first activated, this will only be called if the client witnessed the activation" },
		{ "Removed.Comment", "/** Called when a GameplayCue with duration is removed */" },
		{ "Removed.Name", "EGameplayCueEvent::Removed" },
		{ "Removed.ToolTip", "Called when a GameplayCue with duration is removed" },
		{ "ToolTip", "Indicates what type of action happened to a specific gameplay cue tag. Sometimes you will get multiple events at once" },
		{ "WhileActive.Comment", "/** Called when a GameplayCue with duration is first seen as active, even if it wasn't actually just applied (Join in progress, etc) */" },
		{ "WhileActive.Name", "EGameplayCueEvent::WhileActive" },
		{ "WhileActive.ToolTip", "Called when a GameplayCue with duration is first seen as active, even if it wasn't actually just applied (Join in progress, etc)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayCueEvent",
		"EGameplayCueEvent::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent()
	{
		if (!Z_Registration_Info_UEnum_EGameplayCueEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayCueEvent.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayCueEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTagEventType;
	static UEnum* EGameplayTagEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTagEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTagEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayTagEventType"));
		}
		return Z_Registration_Info_UEnum_EGameplayTagEventType.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayTagEventType::Type>()
	{
		return EGameplayTagEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enumerators[] = {
		{ "EGameplayTagEventType::NewOrRemoved", (int64)EGameplayTagEventType::NewOrRemoved },
		{ "EGameplayTagEventType::AnyCountChange", (int64)EGameplayTagEventType::AnyCountChange },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enum_MetaDataParams[] = {
		{ "AnyCountChange.Comment", "/** Event happens any time tag \"count\" changes */" },
		{ "AnyCountChange.Name", "EGameplayTagEventType::AnyCountChange" },
		{ "AnyCountChange.ToolTip", "Event happens any time tag \"count\" changes" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Rather a tag was added or removed, used in callbacks */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "NewOrRemoved.Comment", "/** Event only happens when tag is new or completely removed */" },
		{ "NewOrRemoved.Name", "EGameplayTagEventType::NewOrRemoved" },
		{ "NewOrRemoved.ToolTip", "Event only happens when tag is new or completely removed" },
		{ "ToolTip", "Rather a tag was added or removed, used in callbacks" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayTagEventType",
		"EGameplayTagEventType::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTagEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTagEventType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTagEventType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping;
class UScriptStruct* FGameplayTagBlueprintPropertyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagBlueprintPropertyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagBlueprintPropertyMapping>()
{
	return FGameplayTagBlueprintPropertyMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagToMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyToEdit_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_PropertyToEdit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct used to update a blueprint property with a gameplay tag count.\n * The property is automatically updated as the gameplay tag count changes.\n * It only supports boolean, integer, and float properties.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Struct used to update a blueprint property with a gameplay tag count.\nThe property is automatically updated as the gameplay tag count changes.\nIt only supports boolean, integer, and float properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagBlueprintPropertyMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "Comment", "/** Gameplay tag being counted. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Gameplay tag being counted." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap = { "TagToMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, TagToMap), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "Comment", "/** Property to update with the gameplay tag count. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Property to update with the gameplay tag count." },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit = { "PropertyToEdit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyToEdit), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "Comment", "/** Name of property being edited. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Name of property being edited." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "Comment", "/** Guid of property being edited. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Guid of property being edited." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid = { "PropertyGuid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTagBlueprintPropertyMapping",
		sizeof(FGameplayTagBlueprintPropertyMapping),
		alignof(FGameplayTagBlueprintPropertyMapping),
		Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap;
class UScriptStruct* FGameplayTagBlueprintPropertyMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagBlueprintPropertyMap"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagBlueprintPropertyMap>()
{
	return FGameplayTagBlueprintPropertyMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct used to manage gameplay tag blueprint property mappings.\n * It registers the properties with delegates on an ability system component.\n * This struct can not be used in containers (such as TArray) since it uses a raw pointer\n * to bind the delegate and it's address could change causing an invalid binding.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Struct used to manage gameplay tag blueprint property mappings.\nIt registers the properties with delegates on an ability system component.\nThis struct can not be used in containers (such as TArray) since it uses a raw pointer\nto bind the delegate and it's address could change causing an invalid binding." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagBlueprintPropertyMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_Inner = { "PropertyMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping, METADATA_PARAMS(nullptr, 0) }; // 3219865780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings = { "PropertyMappings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMap, PropertyMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_MetaData)) }; // 3219865780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTagBlueprintPropertyMap",
		sizeof(FGameplayTagBlueprintPropertyMap),
		alignof(FGameplayTagBlueprintPropertyMap),
		Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagRequirements;
class UScriptStruct* FGameplayTagRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagRequirements, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagRequirements.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagRequirements>()
{
	return FGameplayTagRequirements::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequireTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequireTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoreTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Encapsulate require and ignore tags */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Encapsulate require and ignore tags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagRequirements>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** All of these tags must be present */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "All of these tags must be present" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags = { "RequireTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagRequirements, RequireTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** None of these tags may be present */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "None of these tags may be present" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags = { "IgnoreTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagRequirements, IgnoreTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTagRequirements",
		sizeof(FGameplayTagRequirements),
		alignof(FGameplayTagRequirements),
		Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagRequirements.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagRequirements.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagRequirements.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TagContainerAggregator;
class UScriptStruct* FTagContainerAggregator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TagContainerAggregator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TagContainerAggregator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagContainerAggregator, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("TagContainerAggregator"));
	}
	return Z_Registration_Info_UScriptStruct_TagContainerAggregator.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FTagContainerAggregator>()
{
	return FTagContainerAggregator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTagContainerAggregator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedActorTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedActorTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedSpecTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedSpecTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScopedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure used to combine tags from different sources during effect execution */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Structure used to combine tags from different sources during effect execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagContainerAggregator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags = { "CapturedActorTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTagContainerAggregator, CapturedActorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags = { "CapturedSpecTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTagContainerAggregator, CapturedSpecTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags = { "ScopedTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTagContainerAggregator, ScopedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"TagContainerAggregator",
		sizeof(FTagContainerAggregator),
		alignof(FTagContainerAggregator),
		Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTagContainerAggregator()
	{
		if (!Z_Registration_Info_UScriptStruct_TagContainerAggregator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TagContainerAggregator.InnerSingleton, Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TagContainerAggregator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle;
class UScriptStruct* FGameplayEffectSpecHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectSpecHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectSpecHandle>()
{
	return FGameplayEffectSpecHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Allows blueprints to generate a GameplayEffectSpec once and then reference it by handle, to apply it multiple times/multiple targets. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Allows blueprints to generate a GameplayEffectSpec once and then reference it by handle, to apply it multiple times/multiple targets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectSpecHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectSpecHandle",
		sizeof(FGameplayEffectSpecHandle),
		alignof(FGameplayEffectSpecHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap;
class UScriptStruct* FMinimalReplicationTagCountMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalReplicationTagCountMap"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalReplicationTagCountMap>()
{
	return FMinimalReplicationTagCountMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Map that stores count of tags, in a form that is optimized for replication */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Map that stores count of tags, in a form that is optimized for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalReplicationTagCountMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalReplicationTagCountMap, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"MinimalReplicationTagCountMap",
		sizeof(FMinimalReplicationTagCountMap),
		alignof(FMinimalReplicationTagCountMap),
		Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap()
	{
		if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.InnerSingleton, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::EnumInfo[] = {
		{ EGameplayModEvaluationChannel_StaticEnum, TEXT("EGameplayModEvaluationChannel"), &Z_Registration_Info_UEnum_EGameplayModEvaluationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3983419795U) },
		{ EGameplayModOp_StaticEnum, TEXT("EGameplayModOp"), &Z_Registration_Info_UEnum_EGameplayModOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1741596775U) },
		{ EGameplayEffectStackingType_StaticEnum, TEXT("EGameplayEffectStackingType"), &Z_Registration_Info_UEnum_EGameplayEffectStackingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1892287901U) },
		{ EGameplayCueEvent_StaticEnum, TEXT("EGameplayCueEvent"), &Z_Registration_Info_UEnum_EGameplayCueEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1199521666U) },
		{ EGameplayTagEventType_StaticEnum, TEXT("EGameplayTagEventType"), &Z_Registration_Info_UEnum_EGameplayTagEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 767548952U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::ScriptStructInfo[] = {
		{ FGameplayModEvaluationChannelSettings::StaticStruct, Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewStructOps, TEXT("GameplayModEvaluationChannelSettings"), &Z_Registration_Info_UScriptStruct_GameplayModEvaluationChannelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayModEvaluationChannelSettings), 1723749364U) },
		{ FGameplayModifierEvaluatedData::StaticStruct, Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewStructOps, TEXT("GameplayModifierEvaluatedData"), &Z_Registration_Info_UScriptStruct_GameplayModifierEvaluatedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayModifierEvaluatedData), 2685457557U) },
		{ FGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewStructOps, TEXT("GameplayEffectContext"), &Z_Registration_Info_UScriptStruct_GameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectContext), 2917929142U) },
		{ FGameplayEffectContextHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::NewStructOps, TEXT("GameplayEffectContextHandle"), &Z_Registration_Info_UScriptStruct_GameplayEffectContextHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectContextHandle), 668201340U) },
		{ FGameplayEffectRemovalInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewStructOps, TEXT("GameplayEffectRemovalInfo"), &Z_Registration_Info_UScriptStruct_GameplayEffectRemovalInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectRemovalInfo), 2534919950U) },
		{ FGameplayCueParameters::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewStructOps, TEXT("GameplayCueParameters"), &Z_Registration_Info_UScriptStruct_GameplayCueParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueParameters), 3089669807U) },
		{ FGameplayTagBlueprintPropertyMapping::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewStructOps, TEXT("GameplayTagBlueprintPropertyMapping"), &Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagBlueprintPropertyMapping), 3219865780U) },
		{ FGameplayTagBlueprintPropertyMap::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewStructOps, TEXT("GameplayTagBlueprintPropertyMap"), &Z_Registration_Info_UScriptStruct_GameplayTagBlueprintPropertyMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagBlueprintPropertyMap), 2885114522U) },
		{ FGameplayTagRequirements::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewStructOps, TEXT("GameplayTagRequirements"), &Z_Registration_Info_UScriptStruct_GameplayTagRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagRequirements), 1682790808U) },
		{ FTagContainerAggregator::StaticStruct, Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewStructOps, TEXT("TagContainerAggregator"), &Z_Registration_Info_UScriptStruct_TagContainerAggregator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTagContainerAggregator), 3298126561U) },
		{ FGameplayEffectSpecHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::NewStructOps, TEXT("GameplayEffectSpecHandle"), &Z_Registration_Info_UScriptStruct_GameplayEffectSpecHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectSpecHandle), 1303953225U) },
		{ FMinimalReplicationTagCountMap::StaticStruct, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewStructOps, TEXT("MinimalReplicationTagCountMap"), &Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalReplicationTagCountMap), 697667331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_388712927(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
