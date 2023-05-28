// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Abilities/GameplayAbilityWorldReticle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldReticleParameters();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	DEFINE_FUNCTION(AGameplayAbilityTargetActor::execCancelTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelTargeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayAbilityTargetActor::execConfirmTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmTargeting();
		P_NATIVE_END;
	}
	void AGameplayAbilityTargetActor::StaticRegisterNativesAGameplayAbilityTargetActor()
	{
		UClass* Class = AGameplayAbilityTargetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTargeting", &AGameplayAbilityTargetActor::execCancelTargeting },
			{ "ConfirmTargeting", &AGameplayAbilityTargetActor::execConfirmTargeting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Outside code is saying 'stop everything and just forget about it' */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Outside code is saying 'stop everything and just forget about it'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityTargetActor, nullptr, "CancelTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Outside code is saying 'stop and just give me what you have.' Returns true if the ability accepts this and can be forgotten. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Outside code is saying 'stop and just give me what you have.' Returns true if the ability accepts this and can be forgotten." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityTargetActor, nullptr, "ConfirmTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor);
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister()
	{
		return AGameplayAbilityTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayAbilityTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldProduceTargetDataOnServer_MetaData[];
#endif
		static void NewProp_ShouldProduceTargetDataOnServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldProduceTargetDataOnServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrimaryPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningAbility_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnConfirmation_MetaData[];
#endif
		static void NewProp_bDestroyOnConfirmation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnConfirmation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReticleParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReticleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReticleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericDelegateBoundASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GenericDelegateBoundASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting, "CancelTargeting" }, // 2246308455
		{ &Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting, "ConfirmTargeting" }, // 364995142
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * TargetActors are spawned to assist with ability targeting. They are spawned by ability tasks and create/determine the outgoing targeting data passed from one task to another\n *\n * WARNING: These actors are spawned once per ability activation and in their default form are not very efficient\n * For most games you will need to subclass and heavily modify this actor, or you will want to implement similar functions in a game-specific actor or blueprint to avoid actor spawn costs\n * This class is not well tested by internal games, but it is a useful class to look at to learn how target replication occurs\n */" },
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "TargetActors are spawned to assist with ability targeting. They are spawned by ability tasks and create/determine the outgoing targeting data passed from one task to another\n\nWARNING: These actors are spawned once per ability activation and in their default form are not very efficient\nFor most games you will need to subclass and heavily modify this actor, or you will want to implement similar functions in a game-specific actor or blueprint to avoid actor spawn costs\nThis class is not well tested by internal games, but it is a useful class to look at to learn how target replication occurs" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** The TargetData this class produces can be entirely generated on the server. We don't require the client to send us full or partial TargetData (possibly just a 'confirm') */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "The TargetData this class produces can be entirely generated on the server. We don't require the client to send us full or partial TargetData (possibly just a 'confirm')" },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_SetBit(void* Obj)
	{
		((AGameplayAbilityTargetActor*)Obj)->ShouldProduceTargetDataOnServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer = { "ShouldProduceTargetDataOnServer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Describes where the targeting action starts, usually the player character or a socket on the player character. *///UPROPERTY(BlueprintReadOnly, meta=(ExposeOnSpawn=true), Category=Targeting)\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Describes where the targeting action starts, usually the player character or a socket on the player character. //UPROPERTY(BlueprintReadOnly, meta=(ExposeOnSpawn=true), Category=Targeting)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0011008000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor, StartLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation_MetaData)) }; // 1075373019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_PrimaryPC_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_PrimaryPC = { "PrimaryPC", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor, PrimaryPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_PrimaryPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_PrimaryPC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_SetBit(void* Obj)
	{
		((AGameplayAbilityTargetActor*)Obj)->bDestroyOnConfirmation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation = { "bDestroyOnConfirmation", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Parameters for world reticle. Usage of these parameters is dependent on the reticle. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Parameters for world reticle. Usage of these parameters is dependent on the reticle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams = { "ReticleParams", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor, ReticleParams), Z_Construct_UScriptStruct_FWorldReticleParameters, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams_MetaData)) }; // 4227539575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Reticle that will appear on top of acquired targets. Reticles will be spawned/despawned as targets are acquired/lost. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Reticle that will appear on top of acquired targets. Reticles will be spawned/despawned as targets are acquired/lost." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass = { "ReticleClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor, ReticleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "//Using a special class for replication purposes.\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Using a special class for replication purposes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0011000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor, Filter), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter_MetaData)) }; // 3502446820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Draw the debug information (if applicable) for this targeting actor. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Draw the debug information (if applicable) for this targeting actor." },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((AGameplayAbilityTargetActor*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0011000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC = { "GenericDelegateBoundASC", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor, GenericDelegateBoundASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_PrimaryPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::ClassParams = {
		&AGameplayAbilityTargetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor()
	{
		if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayAbilityTargetActor.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor>()
	{
		return AGameplayAbilityTargetActor::StaticClass();
	}

	void AGameplayAbilityTargetActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StartLocation(TEXT("StartLocation"));
		static const FName Name_bDestroyOnConfirmation(TEXT("bDestroyOnConfirmation"));
		static const FName Name_SourceActor(TEXT("SourceActor"));
		static const FName Name_Filter(TEXT("Filter"));
		static const FName Name_bDebug(TEXT("bDebug"));

		const bool bIsValid = true
			&& Name_StartLocation == ClassReps[(int32)ENetFields_Private::StartLocation].Property->GetFName()
			&& Name_bDestroyOnConfirmation == ClassReps[(int32)ENetFields_Private::bDestroyOnConfirmation].Property->GetFName()
			&& Name_SourceActor == ClassReps[(int32)ENetFields_Private::SourceActor].Property->GetFName()
			&& Name_Filter == ClassReps[(int32)ENetFields_Private::Filter].Property->GetFName()
			&& Name_bDebug == ClassReps[(int32)ENetFields_Private::bDebug].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameplayAbilityTargetActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor);
	AGameplayAbilityTargetActor::~AGameplayAbilityTargetActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor, AGameplayAbilityTargetActor::StaticClass, TEXT("AGameplayAbilityTargetActor"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor), 2925119570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_2732533797(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
