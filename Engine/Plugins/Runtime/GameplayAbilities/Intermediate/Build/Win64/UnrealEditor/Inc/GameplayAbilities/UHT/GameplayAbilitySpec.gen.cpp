// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySpec.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilitySpec() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpec();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityActivationMode;
	static UEnum* EGameplayAbilityActivationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityActivationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityActivationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityActivationMode"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityActivationMode.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityActivationMode::Type>()
	{
		return EGameplayAbilityActivationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics::Enumerators[] = {
		{ "EGameplayAbilityActivationMode::Authority", (int64)EGameplayAbilityActivationMode::Authority },
		{ "EGameplayAbilityActivationMode::NonAuthority", (int64)EGameplayAbilityActivationMode::NonAuthority },
		{ "EGameplayAbilityActivationMode::Predicting", (int64)EGameplayAbilityActivationMode::Predicting },
		{ "EGameplayAbilityActivationMode::Confirmed", (int64)EGameplayAbilityActivationMode::Confirmed },
		{ "EGameplayAbilityActivationMode::Rejected", (int64)EGameplayAbilityActivationMode::Rejected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics::Enum_MetaDataParams[] = {
		{ "Authority.Comment", "/** We are the authority activating this ability */" },
		{ "Authority.Name", "EGameplayAbilityActivationMode::Authority" },
		{ "Authority.ToolTip", "We are the authority activating this ability" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes the status of activating this ability, this is updated as prediction is handled */" },
		{ "Confirmed.Comment", "/** We are not the authority, but the authority has confirmed this activation */" },
		{ "Confirmed.Name", "EGameplayAbilityActivationMode::Confirmed" },
		{ "Confirmed.ToolTip", "We are not the authority, but the authority has confirmed this activation" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "NonAuthority.Comment", "/** We are not the authority but aren't predicting yet. This is a mostly invalid state to be in */" },
		{ "NonAuthority.Name", "EGameplayAbilityActivationMode::NonAuthority" },
		{ "NonAuthority.ToolTip", "We are not the authority but aren't predicting yet. This is a mostly invalid state to be in" },
		{ "Predicting.Comment", "/** We are predicting the activation of this ability */" },
		{ "Predicting.Name", "EGameplayAbilityActivationMode::Predicting" },
		{ "Predicting.ToolTip", "We are predicting the activation of this ability" },
		{ "Rejected.Comment", "/** We tried to activate it, and server told us we couldn't (even though we thought we could) */" },
		{ "Rejected.Name", "EGameplayAbilityActivationMode::Rejected" },
		{ "Rejected.ToolTip", "We tried to activate it, and server told us we couldn't (even though we thought we could)" },
		{ "ToolTip", "Describes the status of activating this ability, this is updated as prediction is handled" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayAbilityActivationMode",
		"EGameplayAbilityActivationMode::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityActivationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityActivationMode.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityActivationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectGrantedAbilityRemovePolicy;
	static UEnum* EGameplayEffectGrantedAbilityRemovePolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectGrantedAbilityRemovePolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectGrantedAbilityRemovePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectGrantedAbilityRemovePolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectGrantedAbilityRemovePolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectGrantedAbilityRemovePolicy>()
	{
		return EGameplayEffectGrantedAbilityRemovePolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics::Enumerators[] = {
		{ "EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately", (int64)EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately },
		{ "EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd", (int64)EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd },
		{ "EGameplayEffectGrantedAbilityRemovePolicy::DoNothing", (int64)EGameplayEffectGrantedAbilityRemovePolicy::DoNothing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics::Enum_MetaDataParams[] = {
		{ "CancelAbilityImmediately.Comment", "/** Active abilities are immediately canceled and the ability is removed. */" },
		{ "CancelAbilityImmediately.Name", "EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately" },
		{ "CancelAbilityImmediately.ToolTip", "Active abilities are immediately canceled and the ability is removed." },
		{ "Comment", "/** Describes what happens when a GameplayEffect, that is granting an active ability, is removed from its owner. */" },
		{ "DoNothing.Comment", "/** Granted abilities are left lone when the granting GameplayEffect is removed. */" },
		{ "DoNothing.Name", "EGameplayEffectGrantedAbilityRemovePolicy::DoNothing" },
		{ "DoNothing.ToolTip", "Granted abilities are left lone when the granting GameplayEffect is removed." },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "RemoveAbilityOnEnd.Comment", "/** Active abilities are allowed to finish, and then removed. */" },
		{ "RemoveAbilityOnEnd.Name", "EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd" },
		{ "RemoveAbilityOnEnd.ToolTip", "Active abilities are allowed to finish, and then removed." },
		{ "ToolTip", "Describes what happens when a GameplayEffect, that is granting an active ability, is removed from its owner." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectGrantedAbilityRemovePolicy",
		"EGameplayEffectGrantedAbilityRemovePolicy",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectGrantedAbilityRemovePolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectGrantedAbilityRemovePolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectGrantedAbilityRemovePolicy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecDef;
class UScriptStruct* FGameplayAbilitySpecDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecDef"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecDef.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecDef>()
{
	return FGameplayAbilitySpecDef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelScalableFloat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelScalableFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemovalPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemovalPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignedHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssignedHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is data that can be used to create an FGameplayAbilitySpec. Has some data that is only relevant when granted by a GameplayEffect */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "This is data that can be used to create an FGameplayAbilitySpec. Has some data that is only relevant when granted by a GameplayEffect" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecDef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What ability to grant */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "What ability to grant" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000080010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecDef, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What level to grant this ability at */" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "What level to grant this ability at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat = { "LevelScalableFloat", nullptr, (EPropertyFlags)0x0010000080010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecDef, LevelScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** Input ID to bind this ability to */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Input ID to bind this ability to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000080010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecDef, InputID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What will remove this ability later */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "What will remove this ability later" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy = { "RemovalPolicy", nullptr, (EPropertyFlags)0x0010000080010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecDef, RemovalPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_MetaData)) }; // 414082169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** What granted this spec, not replicated or settable in editor */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "What granted this spec, not replicated or settable in editor" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000080000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecDef, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle_MetaData[] = {
		{ "Comment", "/** This handle can be set if the SpecDef is used to create a real FGameplaybilitySpec */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "This handle can be set if the SpecDef is used to create a real FGameplaybilitySpec" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle = { "AssignedHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecDef, AssignedHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle_MetaData)) }; // 3562347300
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecDef",
		sizeof(FGameplayAbilitySpecDef),
		alignof(FGameplayAbilitySpecDef),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecDef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecDef.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecDef.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityActivationInfo;
class UScriptStruct* FGameplayAbilityActivationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityActivationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityActivationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityActivationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityActivationInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityActivationInfo>()
{
	return FGameplayAbilityActivationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeEndedByOtherInstance_MetaData[];
#endif
		static void NewProp_bCanBeEndedByOtherInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeEndedByOtherInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKeyWhenActivated_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKeyWhenActivated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""FGameplayAbilityActivationInfo\n *\n *\x09""Data tied to a specific activation of an ability.\n *\x09\x09-Tell us whether we are the authority, if we are predicting, confirmed, etc.\n *\x09\x09-Holds current and previous PredictionKey\n *\x09\x09-Generally not meant to be subclassed in projects.\n *\x09\x09-Passed around by value since the struct is small.\n */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "FGameplayAbilityActivationInfo\n\nData tied to a specific activation of an ability.\n        -Tell us whether we are the authority, if we are predicting, confirmed, etc.\n        -Holds current and previous PredictionKey\n        -Generally not meant to be subclassed in projects.\n        -Passed around by value since the struct is small." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityActivationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Activation status of this ability */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Activation status of this ability" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode = { "ActivationMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActivationInfo, ActivationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode_MetaData)) }; // 1307856101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_MetaData[] = {
		{ "Comment", "/** An ability that runs on multiple game instances can be canceled by a remote instance, but only if that remote instance has already confirmed starting it. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "An ability that runs on multiple game instances can be canceled by a remote instance, but only if that remote instance has already confirmed starting it." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_SetBit(void* Obj)
	{
		((FGameplayAbilityActivationInfo*)Obj)->bCanBeEndedByOtherInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance = { "bCanBeEndedByOtherInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilityActivationInfo), &Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated_MetaData[] = {
		{ "Comment", "/** This was the prediction key used to activate this ability. It does not get updated if new prediction keys are generated over the course of the ability */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "This was the prediction key used to activate this ability. It does not get updated if new prediction keys are generated over the course of the ability" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated = { "PredictionKeyWhenActivated", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActivationInfo, PredictionKeyWhenActivated), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated_MetaData)) }; // 2453680625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityActivationInfo",
		sizeof(FGameplayAbilityActivationInfo),
		alignof(FGameplayAbilityActivationInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityActivationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityActivationInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityActivationInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayAbilitySpec>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FGameplayAbilitySpec cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpec;
class UScriptStruct* FGameplayAbilitySpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpec, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpec"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpec.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpec>()
{
	return FGameplayAbilitySpec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPressed_MetaData[];
#endif
		static void NewProp_InputPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InputPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveAfterActivation_MetaData[];
#endif
		static void NewProp_RemoveAfterActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveAfterActivation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingRemove_MetaData[];
#endif
		static void NewProp_PendingRemove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PendingRemove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateOnce_MetaData[];
#endif
		static void NewProp_bActivateOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicAbilityTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicAbilityTags;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NonReplicatedInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonReplicatedInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NonReplicatedInstances;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicatedInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicatedInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An activatable ability spec, hosted on the ability system component. This defines both what the ability is (what class, what level, input binding etc)\n * and also holds runtime state that must be kept outside of the ability being instanced/activated.\n */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "An activatable ability spec, hosted on the ability system component. This defines both what the ability is (what class, what level, input binding etc)\nand also holds runtime state that must be kept outside of the ability being instanced/activated." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/** Handle for outside sources to refer to this spec by */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Handle for outside sources to refer to this spec by" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability_MetaData[] = {
		{ "Comment", "/** Ability of the spec (Always the CDO. This should be const but too many things modify it currently) */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Ability of the spec (Always the CDO. This should be const but too many things modify it currently)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level_MetaData[] = {
		{ "Comment", "/** Level of Ability */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Level of Ability" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID_MetaData[] = {
		{ "Comment", "/** InputID, if bound */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "InputID, if bound" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, InputID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** Object this ability was created from, can be an actor or static object. Useful to bind an ability to a gameplay object */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Object this ability was created from, can be an actor or static object. Useful to bind an ability to a gameplay object" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount_MetaData[] = {
		{ "Comment", "/** A count of the number of times this ability has been activated minus the number of times it has been ended. For instanced abilities this will be the number of currently active instances. Can't replicate until prediction accurately handles this.*/" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "A count of the number of times this ability has been activated minus the number of times it has been ended. For instanced abilities this will be the number of currently active instances. Can't replicate until prediction accurately handles this." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount = { "ActiveCount", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, ActiveCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_MetaData[] = {
		{ "Comment", "/** Is input currently pressed. Set to false when input is released */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Is input currently pressed. Set to false when input is released" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_SetBit(void* Obj)
	{
		((FGameplayAbilitySpec*)Obj)->InputPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed = { "InputPressed", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilitySpec), &Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_MetaData[] = {
		{ "Comment", "/** If true, this ability should be removed as soon as it finishes executing */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "If true, this ability should be removed as soon as it finishes executing" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_SetBit(void* Obj)
	{
		((FGameplayAbilitySpec*)Obj)->RemoveAfterActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation = { "RemoveAfterActivation", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilitySpec), &Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_MetaData[] = {
		{ "Comment", "/** Pending removal due to scope lock */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Pending removal due to scope lock" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_SetBit(void* Obj)
	{
		((FGameplayAbilitySpec*)Obj)->PendingRemove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove = { "PendingRemove", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilitySpec), &Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_MetaData[] = {
		{ "Comment", "/** This ability should be activated once when it is granted. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "This ability should be activated once when it is granted." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_SetBit(void* Obj)
	{
		((FGameplayAbilitySpec*)Obj)->bActivateOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce = { "bActivateOnce", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayAbilitySpec), &Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo_MetaData[] = {
		{ "Comment", "/** Activation state of this ability. This is not replicated since it needs to be overwritten locally on clients during prediction. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Activation state of this ability. This is not replicated since it needs to be overwritten locally on clients during prediction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo = { "ActivationInfo", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, ActivationInfo), Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo_MetaData)) }; // 4255034867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags_MetaData[] = {
		{ "Comment", "/** Optional ability tags that are replicated.  These tags are also captured as source tags by applied gameplay effects. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Optional ability tags that are replicated.  These tags are also captured as source tags by applied gameplay effects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags = { "DynamicAbilityTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, DynamicAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_Inner = { "NonReplicatedInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_MetaData[] = {
		{ "Comment", "/** Non replicating instances of this ability. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Non replicating instances of this ability." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances = { "NonReplicatedInstances", nullptr, (EPropertyFlags)0x0014000080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, NonReplicatedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_Inner = { "ReplicatedInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_MetaData[] = {
		{ "Comment", "/** Replicated instances of this ability.. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Replicated instances of this ability.." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances = { "ReplicatedInstances", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, ReplicatedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle_MetaData[] = {
		{ "Comment", "/** Handle to GE that granted us (usually invalid) */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Handle to GE that granted us (usually invalid)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle = { "GameplayEffectHandle", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpec, GameplayEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle_MetaData)) }; // 3579869929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"GameplayAbilitySpec",
		sizeof(FGameplayAbilitySpec),
		alignof(FGameplayAbilitySpec),
		Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpec()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpec.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilitySpec.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayAbilitySpecContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FGameplayAbilitySpecContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecContainer;
class UScriptStruct* FGameplayAbilitySpecContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecContainer>()
{
	return FGameplayAbilitySpecContainer::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FGameplayAbilitySpecContainer);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FGameplayAbilitySpecContainer);
#endif
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Fast serializer wrapper for above struct */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Fast serializer wrapper for above struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpec, METADATA_PARAMS(nullptr, 0) }; // 3720105034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_MetaData[] = {
		{ "Comment", "/** List of activatable abilities */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "List of activatable abilities" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecContainer, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_MetaData)) }; // 3720105034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** Component that owns this list */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Component that owns this list" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecContainer, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"GameplayAbilitySpecContainer",
		sizeof(FGameplayAbilitySpecContainer),
		alignof(FGameplayAbilitySpecContainer),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecContainer.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_Statics::EnumInfo[] = {
		{ EGameplayAbilityActivationMode_StaticEnum, TEXT("EGameplayAbilityActivationMode"), &Z_Registration_Info_UEnum_EGameplayAbilityActivationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1307856101U) },
		{ EGameplayEffectGrantedAbilityRemovePolicy_StaticEnum, TEXT("EGameplayEffectGrantedAbilityRemovePolicy"), &Z_Registration_Info_UEnum_EGameplayEffectGrantedAbilityRemovePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 414082169U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilitySpecDef::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewStructOps, TEXT("GameplayAbilitySpecDef"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecDef), 2386331415U) },
		{ FGameplayAbilityActivationInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewStructOps, TEXT("GameplayAbilityActivationInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityActivationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityActivationInfo), 4255034867U) },
		{ FGameplayAbilitySpec::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewStructOps, TEXT("GameplayAbilitySpec"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpec), 3720105034U) },
		{ FGameplayAbilitySpecContainer::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewStructOps, TEXT("GameplayAbilitySpecContainer"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecContainer), 1220592007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_2314255619(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
