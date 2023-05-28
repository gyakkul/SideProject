// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityEndedData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityTaskDebugMessage();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeDefaults();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FServerAbilityRPCBatch();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy;
	static UEnum* EGameplayAbilityInstancingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityInstancingPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityInstancingPolicy::Type>()
	{
		return EGameplayAbilityInstancingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enumerators[] = {
		{ "EGameplayAbilityInstancingPolicy::NonInstanced", (int64)EGameplayAbilityInstancingPolicy::NonInstanced },
		{ "EGameplayAbilityInstancingPolicy::InstancedPerActor", (int64)EGameplayAbilityInstancingPolicy::InstancedPerActor },
		{ "EGameplayAbilityInstancingPolicy::InstancedPerExecution", (int64)EGameplayAbilityInstancingPolicy::InstancedPerExecution },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09 *\x09How the ability is instanced when executed. This limits what an ability can do in its implementation. For example, a NonInstanced\n\x09 *\x09""Ability cannot have state. It is probably unsafe for an InstancedPerActor ability to have latent actions, etc.\n\x09 */" },
		{ "InstancedPerActor.Comment", "// Each actor gets their own instance of this ability. State can be saved, replication is possible.\n" },
		{ "InstancedPerActor.Name", "EGameplayAbilityInstancingPolicy::InstancedPerActor" },
		{ "InstancedPerActor.ToolTip", "Each actor gets their own instance of this ability. State can be saved, replication is possible." },
		{ "InstancedPerExecution.Comment", "// We instance this ability each time it is executed. Replication possible but not recommended.\n" },
		{ "InstancedPerExecution.Name", "EGameplayAbilityInstancingPolicy::InstancedPerExecution" },
		{ "InstancedPerExecution.ToolTip", "We instance this ability each time it is executed. Replication possible but not recommended." },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NonInstanced.Comment", "// This ability is never instanced. Anything that executes the ability is operating on the CDO.\n" },
		{ "NonInstanced.Name", "EGameplayAbilityInstancingPolicy::NonInstanced" },
		{ "NonInstanced.ToolTip", "This ability is never instanced. Anything that executes the ability is operating on the CDO." },
		{ "ToolTip", "How the ability is instanced when executed. This limits what an ability can do in its implementation. For example, a NonInstanced\nAbility cannot have state. It is probably unsafe for an InstancedPerActor ability to have latent actions, etc." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayAbilityInstancingPolicy",
		"EGameplayAbilityInstancingPolicy::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy;
	static UEnum* EGameplayAbilityNetExecutionPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityNetExecutionPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityNetExecutionPolicy::Type>()
	{
		return EGameplayAbilityNetExecutionPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enumerators[] = {
		{ "EGameplayAbilityNetExecutionPolicy::LocalPredicted", (int64)EGameplayAbilityNetExecutionPolicy::LocalPredicted },
		{ "EGameplayAbilityNetExecutionPolicy::LocalOnly", (int64)EGameplayAbilityNetExecutionPolicy::LocalOnly },
		{ "EGameplayAbilityNetExecutionPolicy::ServerInitiated", (int64)EGameplayAbilityNetExecutionPolicy::ServerInitiated },
		{ "EGameplayAbilityNetExecutionPolicy::ServerOnly", (int64)EGameplayAbilityNetExecutionPolicy::ServerOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Where does an ability execute on the network. Does a client \"ask and predict\", \"ask and wait\", \"don't ask (just do it)\" */" },
		{ "LocalOnly.Comment", "// This ability will only run on the client or server that has local control\n" },
		{ "LocalOnly.DisplayName", "Local Only" },
		{ "LocalOnly.Name", "EGameplayAbilityNetExecutionPolicy::LocalOnly" },
		{ "LocalOnly.ToolTip", "This ability will only run on the client or server that has local control" },
		{ "LocalPredicted.Comment", "// Part of this ability runs predictively on the local client if there is one\n" },
		{ "LocalPredicted.DisplayName", "Local Predicted" },
		{ "LocalPredicted.Name", "EGameplayAbilityNetExecutionPolicy::LocalPredicted" },
		{ "LocalPredicted.ToolTip", "Part of this ability runs predictively on the local client if there is one" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ServerInitiated.Comment", "// This ability is initiated by the server, but will also run on the local client if one exists\n" },
		{ "ServerInitiated.DisplayName", "Server Initiated" },
		{ "ServerInitiated.Name", "EGameplayAbilityNetExecutionPolicy::ServerInitiated" },
		{ "ServerInitiated.ToolTip", "This ability is initiated by the server, but will also run on the local client if one exists" },
		{ "ServerOnly.Comment", "// This ability will only run on the server\n" },
		{ "ServerOnly.DisplayName", "Server Only" },
		{ "ServerOnly.Name", "EGameplayAbilityNetExecutionPolicy::ServerOnly" },
		{ "ServerOnly.ToolTip", "This ability will only run on the server" },
		{ "ToolTip", "Where does an ability execute on the network. Does a client \"ask and predict\", \"ask and wait\", \"don't ask (just do it)\"" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayAbilityNetExecutionPolicy",
		"EGameplayAbilityNetExecutionPolicy::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy;
	static UEnum* EGameplayAbilityNetSecurityPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityNetSecurityPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityNetSecurityPolicy::Type>()
	{
		return EGameplayAbilityNetSecurityPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enumerators[] = {
		{ "EGameplayAbilityNetSecurityPolicy::ClientOrServer", (int64)EGameplayAbilityNetSecurityPolicy::ClientOrServer },
		{ "EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution },
		{ "EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination },
		{ "EGameplayAbilityNetSecurityPolicy::ServerOnly", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClientOrServer.Comment", "// No security requirements. Client or server can trigger execution and termination of this ability freely.\n" },
		{ "ClientOrServer.DisplayName", "Client Or Server" },
		{ "ClientOrServer.Name", "EGameplayAbilityNetSecurityPolicy::ClientOrServer" },
		{ "ClientOrServer.ToolTip", "No security requirements. Client or server can trigger execution and termination of this ability freely." },
		{ "Comment", "/** What protections does this ability have? Should the client be allowed to request changes to the execution of the ability? */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ServerOnly.Comment", "// Server controls both execution and termination of this ability. A client making any requests will be ignored.\n" },
		{ "ServerOnly.DisplayName", "Server Only" },
		{ "ServerOnly.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnly" },
		{ "ServerOnly.ToolTip", "Server controls both execution and termination of this ability. A client making any requests will be ignored." },
		{ "ServerOnlyExecution.Comment", "// A client requesting execution of this ability will be ignored by the server. Clients can still request that the server cancel or end this ability.\n" },
		{ "ServerOnlyExecution.DisplayName", "Server Only Execution" },
		{ "ServerOnlyExecution.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution" },
		{ "ServerOnlyExecution.ToolTip", "A client requesting execution of this ability will be ignored by the server. Clients can still request that the server cancel or end this ability." },
		{ "ServerOnlyTermination.Comment", "// A client requesting cancellation or ending of this ability will be ignored by the server. Clients can still request execution of the ability.\n" },
		{ "ServerOnlyTermination.DisplayName", "Server Only Termination" },
		{ "ServerOnlyTermination.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination" },
		{ "ServerOnlyTermination.ToolTip", "A client requesting cancellation or ending of this ability will be ignored by the server. Clients can still request execution of the ability." },
		{ "ToolTip", "What protections does this ability have? Should the client be allowed to request changes to the execution of the ability?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayAbilityNetSecurityPolicy",
		"EGameplayAbilityNetSecurityPolicy::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy;
	static UEnum* EGameplayAbilityReplicationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityReplicationPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityReplicationPolicy::Type>()
	{
		return EGameplayAbilityReplicationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enumerators[] = {
		{ "EGameplayAbilityReplicationPolicy::ReplicateNo", (int64)EGameplayAbilityReplicationPolicy::ReplicateNo },
		{ "EGameplayAbilityReplicationPolicy::ReplicateYes", (int64)EGameplayAbilityReplicationPolicy::ReplicateYes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** How an ability replicates state/events to everyone on the network */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ReplicateNo.Comment", "// We don't replicate the instance of the ability to anyone.\n" },
		{ "ReplicateNo.DisplayName", "Do Not Replicate" },
		{ "ReplicateNo.Name", "EGameplayAbilityReplicationPolicy::ReplicateNo" },
		{ "ReplicateNo.ToolTip", "We don't replicate the instance of the ability to anyone." },
		{ "ReplicateYes.Comment", "// We replicate the instance of the ability to the owner.\n" },
		{ "ReplicateYes.DisplayName", "Replicate" },
		{ "ReplicateYes.Name", "EGameplayAbilityReplicationPolicy::ReplicateYes" },
		{ "ReplicateYes.ToolTip", "We replicate the instance of the ability to the owner." },
		{ "ToolTip", "How an ability replicates state/events to everyone on the network" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayAbilityReplicationPolicy",
		"EGameplayAbilityReplicationPolicy::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource;
	static UEnum* EGameplayAbilityTriggerSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityTriggerSource"));
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityTriggerSource::Type>()
	{
		return EGameplayAbilityTriggerSource_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enumerators[] = {
		{ "EGameplayAbilityTriggerSource::GameplayEvent", (int64)EGameplayAbilityTriggerSource::GameplayEvent },
		{ "EGameplayAbilityTriggerSource::OwnedTagAdded", (int64)EGameplayAbilityTriggerSource::OwnedTagAdded },
		{ "EGameplayAbilityTriggerSource::OwnedTagPresent", (int64)EGameplayAbilityTriggerSource::OwnedTagPresent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\x09""Defines what type of trigger will activate the ability, paired to a tag */" },
		{ "GameplayEvent.Comment", "// Triggered from a gameplay event, will come with payload\n" },
		{ "GameplayEvent.Name", "EGameplayAbilityTriggerSource::GameplayEvent" },
		{ "GameplayEvent.ToolTip", "Triggered from a gameplay event, will come with payload" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "OwnedTagAdded.Comment", "// Triggered if the ability's owner gets a tag added, triggered once whenever it's added\n" },
		{ "OwnedTagAdded.Name", "EGameplayAbilityTriggerSource::OwnedTagAdded" },
		{ "OwnedTagAdded.ToolTip", "Triggered if the ability's owner gets a tag added, triggered once whenever it's added" },
		{ "OwnedTagPresent.Comment", "// Triggered if the ability's owner gets tag added, removed when the tag is removed\n" },
		{ "OwnedTagPresent.Name", "EGameplayAbilityTriggerSource::OwnedTagPresent" },
		{ "OwnedTagPresent.ToolTip", "Triggered if the ability's owner gets tag added, removed when the tag is removed" },
		{ "ToolTip", "Defines what type of trigger will activate the ability, paired to a tag" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayAbilityTriggerSource",
		"EGameplayAbilityTriggerSource::Type",
		Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource()
	{
		if (!Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo;
class UScriptStruct* FGameplayAbilityActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityActorInfo>()
{
	return FGameplayAbilityActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedAnimInstanceTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AffectedAnimInstanceTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""FGameplayAbilityActorInfo\n *\n *\x09""Cached data associated with an Actor using an Ability.\n *\x09\x09-Initialized from an AActor* in InitFromActor\n *\x09\x09-Abilities use this to know what to actor upon. E.g., instead of being coupled to a specific actor class.\n *\x09\x09-These are generally passed around as pointers to support polymorphism.\n *\x09\x09-Projects can override UAbilitySystemGlobals::AllocAbilityActorInfo to override the default struct type that is created.\n *\n */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "FGameplayAbilityActorInfo\n\nCached data associated with an Actor using an Ability.\n        -Initialized from an AActor* in InitFromActor\n        -Abilities use this to know what to actor upon. E.g., instead of being coupled to a specific actor class.\n        -These are generally passed around as pointers to support polymorphism.\n        -Projects can override UAbilitySystemGlobals::AllocAbilityActorInfo to override the default struct type that is created." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** The actor that owns the abilities, shouldn't be null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The actor that owns the abilities, shouldn't be null" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActorInfo, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** The physical representation of the owner, used for targeting and animation. This will often be null! */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The physical representation of the owner, used for targeting and animation. This will often be null!" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActorInfo, AvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** PlayerController associated with the owning actor. This will often be null! */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "PlayerController associated with the owning actor. This will often be null!" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActorInfo, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Ability System component associated with the owner actor, shouldn't be null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Ability System component associated with the owner actor, shouldn't be null" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActorInfo, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Skeletal mesh of the avatar actor. Often null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Skeletal mesh of the avatar actor. Often null" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActorInfo, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Anim instance of the avatar actor. Often null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Anim instance of the avatar actor. Often null" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActorInfo, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Movement component of the avatar actor. Often null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Movement component of the avatar actor. Often null" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActorInfo, MovementComponent), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** The linked Anim Instance that this component will play montages in. Use NAME_None for the main anim instance. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The linked Anim Instance that this component will play montages in. Use NAME_None for the main anim instance." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag = { "AffectedAnimInstanceTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityActorInfo, AffectedAnimInstanceTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityActorInfo",
		sizeof(FGameplayAbilityActorInfo),
		alignof(FGameplayAbilityActorInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage;
class UScriptStruct* FGameplayAbilityLocalAnimMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityLocalAnimMontage"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityLocalAnimMontage>()
{
	return FGameplayAbilityLocalAnimMontage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayInstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayInstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatingAbility_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnimatingAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data about montages that were played locally (all montages in case of server. predictive montages in case of client). Never replicated directly. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Data about montages that were played locally (all montages in case of server. predictive montages in case of client). Never replicated directly." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityLocalAnimMontage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Comment", "/** What montage is being played */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "What montage is being played" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayInstanceId_MetaData[] = {
		{ "Comment", "/** ID tied to a particular play of a montage, used to trigger replication when the same montage is played multiple times. This ID wraps around when it reaches its max value.  */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "ID tied to a particular play of a montage, used to trigger replication when the same montage is played multiple times. This ID wraps around when it reaches its max value." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayInstanceId = { "PlayInstanceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, PlayInstanceId), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayInstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "Comment", "/** Prediction key that started the montage play */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Prediction key that started the montage play" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey_MetaData)) }; // 2453680625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility_MetaData[] = {
		{ "Comment", "/** The ability, if any, that instigated this montage */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The ability, if any, that instigated this montage" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility = { "AnimatingAbility", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, AnimatingAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityLocalAnimMontage",
		sizeof(FGameplayAbilityLocalAnimMontage),
		alignof(FGameplayAbilityLocalAnimMontage),
		Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEventData;
class UScriptStruct* FGameplayEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEventData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEventData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEventData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEventData>()
{
	return FGameplayEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEventData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionalObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObject2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionalObject2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EventMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Metadata for a tag-based Gameplay Event, that can activate other abilities or run ability-specific logic */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Metadata for a tag-based Gameplay Event, that can activate other abilities or run ability-specific logic" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEventData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** Tag of the event that triggered this */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Tag of the event that triggered this" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** The instigator of the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The instigator of the event" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** The target of the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The target of the event" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** An optional ability-specific object to be passed though the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "An optional ability-specific object to be passed though the event" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** A second optional ability-specific object to be passed though the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "A second optional ability-specific object to be passed though the event" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2 = { "OptionalObject2", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, OptionalObject2), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** Polymorphic context information */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Polymorphic context information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle = { "ContextHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, ContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle_MetaData)) }; // 668201340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** Tags that the instigator has */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Tags that the instigator has" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags = { "InstigatorTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, InstigatorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** Tags that the target has */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Tags that the target has" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** The magnitude of the triggering event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The magnitude of the triggering event" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude = { "EventMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, EventMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** The polymorphic target information for the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The polymorphic target information for the event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEventData, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData_MetaData)) }; // 3993235140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEventData",
		sizeof(FGameplayEventData),
		alignof(FGameplayEventData),
		Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEventData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEventData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityEndedData;
class UScriptStruct* FAbilityEndedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityEndedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityEndedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityEndedData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AbilityEndedData"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityEndedData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAbilityEndedData>()
{
	return FAbilityEndedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbilityEndedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityThatEnded_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityThatEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateEndAbility_MetaData[];
#endif
		static void NewProp_bReplicateEndAbility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateEndAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasCancelled_MetaData[];
#endif
		static void NewProp_bWasCancelled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Ability Ended Data */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Ability Ended Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityEndedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded_MetaData[] = {
		{ "Comment", "/** Ability that ended, normally instance but could be CDO */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Ability that ended, normally instance but could be CDO" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded = { "AbilityThatEnded", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityEndedData, AbilityThatEnded), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle_MetaData[] = {
		{ "Comment", "/** Specific ability spec that ended */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Specific ability spec that ended" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityEndedData, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_MetaData[] = {
		{ "Comment", "/** Rather to replicate the ability to ending */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Rather to replicate the ability to ending" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_SetBit(void* Obj)
	{
		((FAbilityEndedData*)Obj)->bReplicateEndAbility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility = { "bReplicateEndAbility", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbilityEndedData), &Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_MetaData[] = {
		{ "Comment", "/** True if this was cancelled deliberately, false if it ended normally */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "True if this was cancelled deliberately, false if it ended normally" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
	{
		((FAbilityEndedData*)Obj)->bWasCancelled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbilityEndedData), &Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"AbilityEndedData",
		sizeof(FAbilityEndedData),
		alignof(FAbilityEndedData),
		Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityEndedData()
	{
		if (!Z_Registration_Info_UScriptStruct_AbilityEndedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityEndedData.InnerSingleton, Z_Construct_UScriptStruct_FAbilityEndedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbilityEndedData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeDefaults;
class UScriptStruct* FAttributeDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeDefaults, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AttributeDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeDefaults.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAttributeDefaults>()
{
	return FAttributeDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStartingTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultStartingTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeDefaults_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to initialize default values for attributes */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Used to initialize default values for attributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeDefaults, Attributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable = { "DefaultStartingTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeDefaults, DefaultStartingTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"AttributeDefaults",
		sizeof(FAttributeDefaults),
		alignof(FAttributeDefaults),
		Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeDefaults.InnerSingleton, Z_Construct_UScriptStruct_FAttributeDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeDefaults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage;
class UScriptStruct* FAbilityTaskDebugMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AbilityTaskDebugMessage"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAbilityTaskDebugMessage>()
{
	return FAbilityTaskDebugMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FromTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Debug message emitted by ability tasks */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Debug message emitted by ability tasks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityTaskDebugMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask = { "FromTask", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityTaskDebugMessage, FromTask), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityTaskDebugMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"AbilityTaskDebugMessage",
		sizeof(FAbilityTaskDebugMessage),
		alignof(FAbilityTaskDebugMessage),
		Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityTaskDebugMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.InnerSingleton, Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch;
class UScriptStruct* FServerAbilityRPCBatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerAbilityRPCBatch, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ServerAbilityRPCBatch"));
	}
	return Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FServerAbilityRPCBatch>()
{
	return FServerAbilityRPCBatch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPressed_MetaData[];
#endif
		static void NewProp_InputPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InputPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ended_MetaData[];
#endif
		static void NewProp_Ended_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Ended;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Started_MetaData[];
#endif
		static void NewProp_Started_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Started;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This struct holds state to batch server RPC calls: ServerTryActivateAbility, ServerSetReplicatedTargetData, ServerEndAbility.  */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "This struct holds state to batch server RPC calls: ServerTryActivateAbility, ServerSetReplicatedTargetData, ServerEndAbility." },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerAbilityRPCBatch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FServerAbilityRPCBatch, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FServerAbilityRPCBatch, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey_MetaData)) }; // 2453680625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FServerAbilityRPCBatch, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData_MetaData)) }; // 3993235140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_SetBit(void* Obj)
	{
		((FServerAbilityRPCBatch*)Obj)->InputPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed = { "InputPressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_SetBit(void* Obj)
	{
		((FServerAbilityRPCBatch*)Obj)->Ended = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended = { "Ended", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_MetaData[] = {
		{ "Comment", "/** Safety bool to make sure ServerTryActivate was called exactly one time in a batch */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Safety bool to make sure ServerTryActivate was called exactly one time in a batch" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_SetBit(void* Obj)
	{
		((FServerAbilityRPCBatch*)Obj)->Started = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started = { "Started", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"ServerAbilityRPCBatch",
		sizeof(FServerAbilityRPCBatch),
		alignof(FServerAbilityRPCBatch),
		Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerAbilityRPCBatch()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.InnerSingleton, Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey;
class UScriptStruct* FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecHandleAndPredictionKey"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecHandleAndPredictionKey>()
{
	return FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKeyAtCreation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PredictionKeyAtCreation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used as a key for storing internal ability data */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Used as a key for storing internal ability data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandleAndPredictionKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation = { "PredictionKeyAtCreation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecHandleAndPredictionKey, PredictionKeyAtCreation), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecHandleAndPredictionKey",
		sizeof(FGameplayAbilitySpecHandleAndPredictionKey),
		alignof(FGameplayAbilitySpecHandleAndPredictionKey),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::EnumInfo[] = {
		{ EGameplayAbilityInstancingPolicy_StaticEnum, TEXT("EGameplayAbilityInstancingPolicy"), &Z_Registration_Info_UEnum_EGameplayAbilityInstancingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2008600999U) },
		{ EGameplayAbilityNetExecutionPolicy_StaticEnum, TEXT("EGameplayAbilityNetExecutionPolicy"), &Z_Registration_Info_UEnum_EGameplayAbilityNetExecutionPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3061392858U) },
		{ EGameplayAbilityNetSecurityPolicy_StaticEnum, TEXT("EGameplayAbilityNetSecurityPolicy"), &Z_Registration_Info_UEnum_EGameplayAbilityNetSecurityPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2744907062U) },
		{ EGameplayAbilityReplicationPolicy_StaticEnum, TEXT("EGameplayAbilityReplicationPolicy"), &Z_Registration_Info_UEnum_EGameplayAbilityReplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1919722029U) },
		{ EGameplayAbilityTriggerSource_StaticEnum, TEXT("EGameplayAbilityTriggerSource"), &Z_Registration_Info_UEnum_EGameplayAbilityTriggerSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3729863179U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilityActorInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewStructOps, TEXT("GameplayAbilityActorInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityActorInfo), 4078658179U) },
		{ FGameplayAbilityLocalAnimMontage::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewStructOps, TEXT("GameplayAbilityLocalAnimMontage"), &Z_Registration_Info_UScriptStruct_GameplayAbilityLocalAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityLocalAnimMontage), 1728304578U) },
		{ FGameplayEventData::StaticStruct, Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewStructOps, TEXT("GameplayEventData"), &Z_Registration_Info_UScriptStruct_GameplayEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEventData), 252801246U) },
		{ FAbilityEndedData::StaticStruct, Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewStructOps, TEXT("AbilityEndedData"), &Z_Registration_Info_UScriptStruct_AbilityEndedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityEndedData), 3539279511U) },
		{ FAttributeDefaults::StaticStruct, Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewStructOps, TEXT("AttributeDefaults"), &Z_Registration_Info_UScriptStruct_AttributeDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeDefaults), 59108616U) },
		{ FAbilityTaskDebugMessage::StaticStruct, Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewStructOps, TEXT("AbilityTaskDebugMessage"), &Z_Registration_Info_UScriptStruct_AbilityTaskDebugMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityTaskDebugMessage), 1636902830U) },
		{ FServerAbilityRPCBatch::StaticStruct, Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewStructOps, TEXT("ServerAbilityRPCBatch"), &Z_Registration_Info_UScriptStruct_ServerAbilityRPCBatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerAbilityRPCBatch), 1789223054U) },
		{ FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewStructOps, TEXT("GameplayAbilitySpecHandleAndPredictionKey"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandleAndPredictionKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecHandleAndPredictionKey), 2023632313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_510882319(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
