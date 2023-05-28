// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTargetingConfirmation;
	static UEnum* EGameplayTargetingConfirmation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTargetingConfirmation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTargetingConfirmation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayTargetingConfirmation"));
		}
		return Z_Registration_Info_UEnum_EGameplayTargetingConfirmation.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayTargetingConfirmation::Type>()
	{
		return EGameplayTargetingConfirmation_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics::Enumerators[] = {
		{ "EGameplayTargetingConfirmation::Instant", (int64)EGameplayTargetingConfirmation::Instant },
		{ "EGameplayTargetingConfirmation::UserConfirmed", (int64)EGameplayTargetingConfirmation::UserConfirmed },
		{ "EGameplayTargetingConfirmation::Custom", (int64)EGameplayTargetingConfirmation::Custom },
		{ "EGameplayTargetingConfirmation::CustomMulti", (int64)EGameplayTargetingConfirmation::CustomMulti },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes how the targeting information is confirmed */" },
		{ "Custom.Comment", "/** The GameplayTargeting Ability is responsible for deciding when the targeting data is ready. Not supported by all TargetingActors */" },
		{ "Custom.Name", "EGameplayTargetingConfirmation::Custom" },
		{ "Custom.ToolTip", "The GameplayTargeting Ability is responsible for deciding when the targeting data is ready. Not supported by all TargetingActors" },
		{ "CustomMulti.Comment", "/** The GameplayTargeting Ability is responsible for deciding when the targeting data is ready. Not supported by all TargetingActors. Should not destroy upon data production */" },
		{ "CustomMulti.Name", "EGameplayTargetingConfirmation::CustomMulti" },
		{ "CustomMulti.ToolTip", "The GameplayTargeting Ability is responsible for deciding when the targeting data is ready. Not supported by all TargetingActors. Should not destroy upon data production" },
		{ "Instant.Comment", "/** The targeting happens instantly without special logic or user input deciding when to 'fire' */" },
		{ "Instant.Name", "EGameplayTargetingConfirmation::Instant" },
		{ "Instant.ToolTip", "The targeting happens instantly without special logic or user input deciding when to 'fire'" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Describes how the targeting information is confirmed" },
		{ "UserConfirmed.Comment", "/** The targeting happens when the user confirms the targeting */" },
		{ "UserConfirmed.Name", "EGameplayTargetingConfirmation::UserConfirmed" },
		{ "UserConfirmed.ToolTip", "The targeting happens when the user confirms the targeting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayTargetingConfirmation",
		"EGameplayTargetingConfirmation::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTargetingConfirmation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTargetingConfirmation.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTargetingConfirmation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData;
class UScriptStruct* FGameplayAbilityTargetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData>()
{
	return FGameplayAbilityTargetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A generic structure for targeting data. We want generic functions to produce this data and other generic\n *\x09""functions to consume this data.\n *\n *\x09We expect this to be able to hold specific actors/object reference and also generic location/direction/origin\n *\x09information.\n *\n *\x09Some example producers:\n *\x09\x09-Overlap/Hit collision event generates TargetData about who was hit in a melee attack\n *\x09\x09-A mouse input causes a hit trace and the actor infront of the crosshair is turned into TargetData\n *\x09\x09-A mouse input causes TargetData to be generated from the owner's crosshair view origin/direction\n *\x09\x09-An AOE/aura pulses and all actors in a radius around the instigator are added to TargetData\n *\x09\x09-Panzer Dragoon style 'painting' targeting mode\n *\x09\x09-MMORPG style ground AOE targeting style (potentially both a location on the ground and actors that were targeted)\n *\n *\x09Some example consumers:\n *\x09\x09-Apply a GameplayEffect to all actors in TargetData\n *\x09\x09-Find closest actor from all in TargetData\n *\x09\x09-Call some function on all actors in TargetData\n * \x09\x09-Filter or merge TargetDatas\n *\x09\x09-Spawn a new actor at a TargetData location\n *\n *\x09Maybe it is better to distinguish between actor list targeting vs positional targeting data?\n *\x09\x09-AOE/aura type of targeting data blurs the line\n */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "A generic structure for targeting data. We want generic functions to produce this data and other generic\nfunctions to consume this data.\n\nWe expect this to be able to hold specific actors/object reference and also generic location/direction/origin\ninformation.\n\nSome example producers:\n        -Overlap/Hit collision event generates TargetData about who was hit in a melee attack\n        -A mouse input causes a hit trace and the actor infront of the crosshair is turned into TargetData\n        -A mouse input causes TargetData to be generated from the owner's crosshair view origin/direction\n        -An AOE/aura pulses and all actors in a radius around the instigator are added to TargetData\n        -Panzer Dragoon style 'painting' targeting mode\n        -MMORPG style ground AOE targeting style (potentially both a location on the ground and actors that were targeted)\n\nSome example consumers:\n        -Apply a GameplayEffect to all actors in TargetData\n        -Find closest actor from all in TargetData\n        -Call some function on all actors in TargetData\n        -Filter or merge TargetDatas\n        -Spawn a new actor at a TargetData location\n\nMaybe it is better to distinguish between actor list targeting vs positional targeting data?\n        -AOE/aura type of targeting data blurs the line" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityTargetData",
		sizeof(FGameplayAbilityTargetData),
		alignof(FGameplayAbilityTargetData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityTargetingLocationType;
	static UEnum* EGameplayAbilityTargetingLocationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityTargetingLocationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityTargetingLocationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityTargetingLocationType"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityTargetingLocationType.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityTargetingLocationType::Type>()
	{
		return EGameplayAbilityTargetingLocationType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics::Enumerators[] = {
		{ "EGameplayAbilityTargetingLocationType::LiteralTransform", (int64)EGameplayAbilityTargetingLocationType::LiteralTransform },
		{ "EGameplayAbilityTargetingLocationType::ActorTransform", (int64)EGameplayAbilityTargetingLocationType::ActorTransform },
		{ "EGameplayAbilityTargetingLocationType::SocketTransform", (int64)EGameplayAbilityTargetingLocationType::SocketTransform },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics::Enum_MetaDataParams[] = {
		{ "ActorTransform.Comment", "/** We pull the transform from an associated actor directly */" },
		{ "ActorTransform.DisplayName", "Actor Transform" },
		{ "ActorTransform.Name", "EGameplayAbilityTargetingLocationType::ActorTransform" },
		{ "ActorTransform.ToolTip", "We pull the transform from an associated actor directly" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** What type of location calculation to use when an ability asks for our transform */" },
		{ "LiteralTransform.Comment", "/** We report an actual raw transform. This is also the final fallback if other methods fail */" },
		{ "LiteralTransform.DisplayName", "Literal Transform" },
		{ "LiteralTransform.Name", "EGameplayAbilityTargetingLocationType::LiteralTransform" },
		{ "LiteralTransform.ToolTip", "We report an actual raw transform. This is also the final fallback if other methods fail" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "SocketTransform.Comment", "/** We aim from a named socket on the player's skeletal mesh component */" },
		{ "SocketTransform.DisplayName", "Socket Transform" },
		{ "SocketTransform.Name", "EGameplayAbilityTargetingLocationType::SocketTransform" },
		{ "SocketTransform.ToolTip", "We aim from a named socket on the player's skeletal mesh component" },
		{ "ToolTip", "What type of location calculation to use when an ability asks for our transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayAbilityTargetingLocationType",
		"EGameplayAbilityTargetingLocationType::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityTargetingLocationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityTargetingLocationType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityTargetingLocationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityTargetDataHandle;
class UScriptStruct* FGameplayAbilityTargetDataHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetDataHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityTargetDataHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetDataHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetDataHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetDataHandle>()
{
	return FGameplayAbilityTargetDataHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Handle for Targeting Data. This servers two main purposes:\n*\x09\x09-Avoid us having to copy around the full targeting data structure in Blueprints\n*\x09\x09-Allows us to leverage polymorphism in the target data structure\n*\x09\x09-Allows us to implement NetSerialize and replicate by value between clients/server\n*\n*\x09\x09-Avoid using UObjects could be used to give us polymorphism and by reference passing in blueprints.\n*\x09\x09-However we would still be screwed when it came to replication\n*\n*\x09\x09-Replication by value\n*\x09\x09-Pass by reference in blueprints\n*\x09\x09-Polymophism in TargetData structure\n*/" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Handle for Targeting Data. This servers two main purposes:\n        -Avoid us having to copy around the full targeting data structure in Blueprints\n        -Allows us to leverage polymorphism in the target data structure\n        -Allows us to implement NetSerialize and replicate by value between clients/server\n\n        -Avoid using UObjects could be used to give us polymorphism and by reference passing in blueprints.\n        -However we would still be screwed when it came to replication\n\n        -Replication by value\n        -Pass by reference in blueprints\n        -Polymophism in TargetData structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetDataHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityTargetDataHandle",
		sizeof(FGameplayAbilityTargetDataHandle),
		alignof(FGameplayAbilityTargetDataHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetDataHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityTargetDataHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetDataHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfo;
class UScriptStruct* FGameplayAbilityTargetingLocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetingLocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetingLocationInfo>()
{
	return FGameplayAbilityTargetingLocationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiteralTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiteralTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAbility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure that stores a location in one of several different formats */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Structure that stores a location in one of several different formats" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetingLocationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Type of location used - will determine what data is transmitted over the network and what fields are used when calculating position. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Type of location used - will determine what data is transmitted over the network and what fields are used when calculating position." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, LocationType), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType_MetaData)) }; // 3857621809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** A literal world transform can be used, if one has been calculated outside of the actor using the ability. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "A literal world transform can be used, if one has been calculated outside of the actor using the ability." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform = { "LiteralTransform", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, LiteralTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** A source actor is needed for Actor-based targeting, but not for Socket-based targeting. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "A source actor is needed for Actor-based targeting, but not for Socket-based targeting." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0015000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Socket-based targeting requires a skeletal mesh component to check for the named socket. */" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Socket-based targeting requires a skeletal mesh component to check for the named socket." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x001500000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, SourceComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Ability that will be using the targeting data */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Ability that will be using the targeting data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility = { "SourceAbility", nullptr, (EPropertyFlags)0x0015000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, SourceAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** If SourceComponent is valid, this is the name of the socket transform that will be used. If no Socket is provided, SourceComponent's transform will be used. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "If SourceComponent is valid, this is the name of the socket transform that will be used. If no Socket is provided, SourceComponent's transform will be used." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName = { "SourceSocketName", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, SourceSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityTargetingLocationInfo",
		sizeof(FGameplayAbilityTargetingLocationInfo),
		alignof(FGameplayAbilityTargetingLocationInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayAbilityTargetData_LocationInfo>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FGameplayAbilityTargetData_LocationInfo cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_LocationInfo;
class UScriptStruct* FGameplayAbilityTargetData_LocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_LocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_LocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetData_LocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_LocationInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData_LocationInfo>()
{
	return FGameplayAbilityTargetData_LocationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Target data with just a source and target location in space */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Target data with just a source and target location in space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_LocationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Generic location data for source */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Generic location data for source" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation = { "SourceLocation", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetData_LocationInfo, SourceLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation_MetaData)) }; // 1075373019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Generic location data for target */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Generic location data for target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetData_LocationInfo, TargetLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation_MetaData)) }; // 1075373019
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"GameplayAbilityTargetData_LocationInfo",
		sizeof(FGameplayAbilityTargetData_LocationInfo),
		alignof(FGameplayAbilityTargetData_LocationInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_LocationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_LocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_LocationInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayAbilityTargetData_ActorArray>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FGameplayAbilityTargetData_ActorArray cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_ActorArray;
class UScriptStruct* FGameplayAbilityTargetData_ActorArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_ActorArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_ActorArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetData_ActorArray"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_ActorArray.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData_ActorArray>()
{
	return FGameplayAbilityTargetData_ActorArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocation;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActorArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Target data with a source location and a list of targeted actors, makes sense for AOE attacks */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Target data with a source location and a list of targeted actors, makes sense for AOE attacks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_ActorArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** We could be selecting this group of actors from any type of location, so use a generic location type */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "We could be selecting this group of actors from any type of location, so use a generic location type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation = { "SourceLocation", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetData_ActorArray, SourceLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation_MetaData)) }; // 1075373019
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_Inner = { "TargetActorArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Rather than targeting a single point, this type of targeting selects multiple actors. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Rather than targeting a single point, this type of targeting selects multiple actors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray = { "TargetActorArray", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetData_ActorArray, TargetActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"GameplayAbilityTargetData_ActorArray",
		sizeof(FGameplayAbilityTargetData_ActorArray),
		alignof(FGameplayAbilityTargetData_ActorArray),
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_ActorArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_ActorArray.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_ActorArray.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayAbilityTargetData_SingleTargetHit>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FGameplayAbilityTargetData_SingleTargetHit cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_SingleTargetHit;
class UScriptStruct* FGameplayAbilityTargetData_SingleTargetHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_SingleTargetHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_SingleTargetHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetData_SingleTargetHit"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_SingleTargetHit.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData_SingleTargetHit>()
{
	return FGameplayAbilityTargetData_SingleTargetHit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitReplaced_MetaData[];
#endif
		static void NewProp_bHitReplaced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitReplaced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Target data with a single hit result, data is packed into the hit result */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Target data with a single hit result, data is packed into the hit result" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_SingleTargetHit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "Comment", "/** Hit result that stores data */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Hit result that stores data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityTargetData_SingleTargetHit, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_SetBit(void* Obj)
	{
		((FGameplayAbilityTargetData_SingleTargetHit*)Obj)->bHitReplaced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced = { "bHitReplaced", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayAbilityTargetData_SingleTargetHit), &Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"GameplayAbilityTargetData_SingleTargetHit",
		sizeof(FGameplayAbilityTargetData_SingleTargetHit),
		alignof(FGameplayAbilityTargetData_SingleTargetHit),
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_SingleTargetHit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_SingleTargetHit.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_SingleTargetHit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityGenericReplicatedEvent;
	static UEnum* EAbilityGenericReplicatedEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityGenericReplicatedEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityGenericReplicatedEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EAbilityGenericReplicatedEvent"));
		}
		return Z_Registration_Info_UEnum_EAbilityGenericReplicatedEvent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EAbilityGenericReplicatedEvent::Type>()
	{
		return EAbilityGenericReplicatedEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics::Enumerators[] = {
		{ "EAbilityGenericReplicatedEvent::GenericConfirm", (int64)EAbilityGenericReplicatedEvent::GenericConfirm },
		{ "EAbilityGenericReplicatedEvent::GenericCancel", (int64)EAbilityGenericReplicatedEvent::GenericCancel },
		{ "EAbilityGenericReplicatedEvent::InputPressed", (int64)EAbilityGenericReplicatedEvent::InputPressed },
		{ "EAbilityGenericReplicatedEvent::InputReleased", (int64)EAbilityGenericReplicatedEvent::InputReleased },
		{ "EAbilityGenericReplicatedEvent::GenericSignalFromClient", (int64)EAbilityGenericReplicatedEvent::GenericSignalFromClient },
		{ "EAbilityGenericReplicatedEvent::GenericSignalFromServer", (int64)EAbilityGenericReplicatedEvent::GenericSignalFromServer },
		{ "EAbilityGenericReplicatedEvent::GameCustom1", (int64)EAbilityGenericReplicatedEvent::GameCustom1 },
		{ "EAbilityGenericReplicatedEvent::GameCustom2", (int64)EAbilityGenericReplicatedEvent::GameCustom2 },
		{ "EAbilityGenericReplicatedEvent::GameCustom3", (int64)EAbilityGenericReplicatedEvent::GameCustom3 },
		{ "EAbilityGenericReplicatedEvent::GameCustom4", (int64)EAbilityGenericReplicatedEvent::GameCustom4 },
		{ "EAbilityGenericReplicatedEvent::GameCustom5", (int64)EAbilityGenericReplicatedEvent::GameCustom5 },
		{ "EAbilityGenericReplicatedEvent::GameCustom6", (int64)EAbilityGenericReplicatedEvent::GameCustom6 },
		{ "EAbilityGenericReplicatedEvent::MAX", (int64)EAbilityGenericReplicatedEvent::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** These are generic, nonpayload carrying events that are replicated between the client and server */" },
		{ "GameCustom1.Comment", "/** Custom events for game use */" },
		{ "GameCustom1.Name", "EAbilityGenericReplicatedEvent::GameCustom1" },
		{ "GameCustom1.ToolTip", "Custom events for game use" },
		{ "GameCustom2.Name", "EAbilityGenericReplicatedEvent::GameCustom2" },
		{ "GameCustom3.Name", "EAbilityGenericReplicatedEvent::GameCustom3" },
		{ "GameCustom4.Name", "EAbilityGenericReplicatedEvent::GameCustom4" },
		{ "GameCustom5.Name", "EAbilityGenericReplicatedEvent::GameCustom5" },
		{ "GameCustom6.Name", "EAbilityGenericReplicatedEvent::GameCustom6" },
		{ "GenericCancel.Comment", "/** A generic cancellation event. Not necessarily a canellation of the ability or targeting. Could be used to cancel out of a channelling portion of ability. */" },
		{ "GenericCancel.Name", "EAbilityGenericReplicatedEvent::GenericCancel" },
		{ "GenericCancel.ToolTip", "A generic cancellation event. Not necessarily a canellation of the ability or targeting. Could be used to cancel out of a channelling portion of ability." },
		{ "GenericConfirm.Comment", "/** A generic confirmation to commit the ability */" },
		{ "GenericConfirm.Name", "EAbilityGenericReplicatedEvent::GenericConfirm" },
		{ "GenericConfirm.ToolTip", "A generic confirmation to commit the ability" },
		{ "GenericSignalFromClient.Comment", "/** A generic event from the client */" },
		{ "GenericSignalFromClient.Name", "EAbilityGenericReplicatedEvent::GenericSignalFromClient" },
		{ "GenericSignalFromClient.ToolTip", "A generic event from the client" },
		{ "GenericSignalFromServer.Comment", "/** A generic event from the server */" },
		{ "GenericSignalFromServer.Name", "EAbilityGenericReplicatedEvent::GenericSignalFromServer" },
		{ "GenericSignalFromServer.ToolTip", "A generic event from the server" },
		{ "InputPressed.Comment", "/** Additional input presses of the ability (Press X to activate ability, press X again while it is active to do other things within the GameplayAbility's logic) */" },
		{ "InputPressed.Name", "EAbilityGenericReplicatedEvent::InputPressed" },
		{ "InputPressed.ToolTip", "Additional input presses of the ability (Press X to activate ability, press X again while it is active to do other things within the GameplayAbility's logic)" },
		{ "InputReleased.Comment", "/** Input release event of the ability */" },
		{ "InputReleased.Name", "EAbilityGenericReplicatedEvent::InputReleased" },
		{ "InputReleased.ToolTip", "Input release event of the ability" },
		{ "MAX.Name", "EAbilityGenericReplicatedEvent::MAX" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "These are generic, nonpayload carrying events that are replicated between the client and server" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EAbilityGenericReplicatedEvent",
		"EAbilityGenericReplicatedEvent::Type",
		Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent()
	{
		if (!Z_Registration_Info_UEnum_EAbilityGenericReplicatedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityGenericReplicatedEvent.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilityGenericReplicatedEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_Statics::EnumInfo[] = {
		{ EGameplayTargetingConfirmation_StaticEnum, TEXT("EGameplayTargetingConfirmation"), &Z_Registration_Info_UEnum_EGameplayTargetingConfirmation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 733912677U) },
		{ EGameplayAbilityTargetingLocationType_StaticEnum, TEXT("EGameplayAbilityTargetingLocationType"), &Z_Registration_Info_UEnum_EGameplayAbilityTargetingLocationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3857621809U) },
		{ EAbilityGenericReplicatedEvent_StaticEnum, TEXT("EAbilityGenericReplicatedEvent"), &Z_Registration_Info_UEnum_EAbilityGenericReplicatedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1924797668U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilityTargetData::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::NewStructOps, TEXT("GameplayAbilityTargetData"), &Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityTargetData), 552481583U) },
		{ FGameplayAbilityTargetDataHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::NewStructOps, TEXT("GameplayAbilityTargetDataHandle"), &Z_Registration_Info_UScriptStruct_GameplayAbilityTargetDataHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityTargetDataHandle), 3993235140U) },
		{ FGameplayAbilityTargetingLocationInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewStructOps, TEXT("GameplayAbilityTargetingLocationInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityTargetingLocationInfo), 1075373019U) },
		{ FGameplayAbilityTargetData_LocationInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewStructOps, TEXT("GameplayAbilityTargetData_LocationInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_LocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityTargetData_LocationInfo), 3672128652U) },
		{ FGameplayAbilityTargetData_ActorArray::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewStructOps, TEXT("GameplayAbilityTargetData_ActorArray"), &Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_ActorArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityTargetData_ActorArray), 2517660425U) },
		{ FGameplayAbilityTargetData_SingleTargetHit::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewStructOps, TEXT("GameplayAbilityTargetData_SingleTargetHit"), &Z_Registration_Info_UScriptStruct_GameplayAbilityTargetData_SingleTargetHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityTargetData_SingleTargetHit), 3003954545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_526813265(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
