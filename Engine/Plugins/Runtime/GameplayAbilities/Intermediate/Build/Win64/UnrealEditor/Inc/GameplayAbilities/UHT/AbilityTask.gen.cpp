// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityTaskWaitState;
	static UEnum* EAbilityTaskWaitState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityTaskWaitState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityTaskWaitState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EAbilityTaskWaitState"));
		}
		return Z_Registration_Info_UEnum_EAbilityTaskWaitState.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EAbilityTaskWaitState>()
	{
		return EAbilityTaskWaitState_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics::Enumerators[] = {
		{ "EAbilityTaskWaitState::WaitingOnGame", (int64)EAbilityTaskWaitState::WaitingOnGame },
		{ "EAbilityTaskWaitState::WaitingOnUser", (int64)EAbilityTaskWaitState::WaitingOnUser },
		{ "EAbilityTaskWaitState::WaitingOnAvatar", (int64)EAbilityTaskWaitState::WaitingOnAvatar },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Latent tasks are waiting on something. This is to differeniate waiting on the user to do something vs waiting on the game to do something.\n *\x09Tasks start WaitingOnGame, and are set to WaitingOnUser when appropriate (see WaitTargetData, WaitIiputPress, etc)\n */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask.h" },
		{ "ToolTip", "Latent tasks are waiting on something. This is to differeniate waiting on the user to do something vs waiting on the game to do something.\nTasks start WaitingOnGame, and are set to WaitingOnUser when appropriate (see WaitTargetData, WaitIiputPress, etc)" },
		{ "WaitingOnAvatar.Comment", "/** Waiting on Avatar (Character/Pawn/Actor) to do something (usually something physical in the world, like land, move, etc) */" },
		{ "WaitingOnAvatar.Name", "EAbilityTaskWaitState::WaitingOnAvatar" },
		{ "WaitingOnAvatar.ToolTip", "Waiting on Avatar (Character/Pawn/Actor) to do something (usually something physical in the world, like land, move, etc)" },
		{ "WaitingOnGame.Comment", "/** Task is waiting for the game to do something */" },
		{ "WaitingOnGame.Name", "EAbilityTaskWaitState::WaitingOnGame" },
		{ "WaitingOnGame.ToolTip", "Task is waiting for the game to do something" },
		{ "WaitingOnUser.Comment", "/** Waiting for the user to do something */" },
		{ "WaitingOnUser.Name", "EAbilityTaskWaitState::WaitingOnUser" },
		{ "WaitingOnUser.ToolTip", "Waiting for the user to do something" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EAbilityTaskWaitState",
		"EAbilityTaskWaitState",
		Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState()
	{
		if (!Z_Registration_Info_UEnum_EAbilityTaskWaitState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityTaskWaitState.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EAbilityTaskWaitState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilityTaskWaitState.InnerSingleton;
	}
	void UAbilityTask::StaticRegisterNativesUAbilityTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask);
	UClass* Z_Construct_UClass_UAbilityTask_NoRegister()
	{
		return UAbilityTask::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_Statics::NewProp_Ability_MetaData[] = {
		{ "Comment", "/** GameplayAbility that created us */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask.h" },
		{ "ToolTip", "GameplayAbility that created us" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAbilityTask_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_Statics::NewProp_AbilitySystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_Statics::ClassParams = {
		&UAbilityTask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilityTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask.OuterSingleton, Z_Construct_UClass_UAbilityTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask>()
	{
		return UAbilityTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask);
	UAbilityTask::~UAbilityTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_Statics::EnumInfo[] = {
		{ EAbilityTaskWaitState_StaticEnum, TEXT("EAbilityTaskWaitState"), &Z_Registration_Info_UEnum_EAbilityTaskWaitState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1008875229U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask, UAbilityTask::StaticClass, TEXT("UAbilityTask"), &Z_Registration_Info_UClass_UAbilityTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask), 269700475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_602583186(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
