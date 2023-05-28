// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayBehavior.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayBehavior() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UEnum* Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayBehaviorInstantiationPolicy;
	static UEnum* EGameplayBehaviorInstantiationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayBehaviorInstantiationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayBehaviorInstantiationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayBehaviorsModule(), TEXT("EGameplayBehaviorInstantiationPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayBehaviorInstantiationPolicy.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UEnum* StaticEnum<EGameplayBehaviorInstantiationPolicy>()
	{
		return EGameplayBehaviorInstantiationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics::Enumerators[] = {
		{ "EGameplayBehaviorInstantiationPolicy::Instantiate", (int64)EGameplayBehaviorInstantiationPolicy::Instantiate },
		{ "EGameplayBehaviorInstantiationPolicy::ConditionallyInstantiate", (int64)EGameplayBehaviorInstantiationPolicy::ConditionallyInstantiate },
		{ "EGameplayBehaviorInstantiationPolicy::DontInstantiate", (int64)EGameplayBehaviorInstantiationPolicy::DontInstantiate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "ConditionallyInstantiate.Name", "EGameplayBehaviorInstantiationPolicy::ConditionallyInstantiate" },
		{ "DontInstantiate.Name", "EGameplayBehaviorInstantiationPolicy::DontInstantiate" },
		{ "Instantiate.Name", "EGameplayBehaviorInstantiationPolicy::Instantiate" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
		nullptr,
		"EGameplayBehaviorInstantiationPolicy",
		"EGameplayBehaviorInstantiationPolicy",
		Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayBehaviorInstantiationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayBehaviorInstantiationPolicy.InnerSingleton, Z_Construct_UEnum_GameplayBehaviorsModule_EGameplayBehaviorInstantiationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayBehaviorInstantiationPolicy.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameplayBehavior::execK2_GetNextActorIndexInSequence)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->K2_GetNextActorIndexInSequence(Z_Param_CurrentIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayBehavior::execK2_TriggerBehavior)
	{
		P_GET_OBJECT(AActor,Z_Param_Avatar);
		P_GET_OBJECT(UGameplayBehaviorConfig,Z_Param_Config);
		P_GET_OBJECT(AActor,Z_Param_SmartObjectOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_TriggerBehavior(Z_Param_Avatar,Z_Param_Config,Z_Param_SmartObjectOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayBehavior::execK2_AbortBehavior)
	{
		P_GET_OBJECT(AActor,Z_Param_Avatar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AbortBehavior(Z_Param_Avatar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayBehavior::execK2_EndBehavior)
	{
		P_GET_OBJECT(AActor,Z_Param_Avatar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_EndBehavior(Z_Param_Avatar);
		P_NATIVE_END;
	}
	struct GameplayBehavior_eventK2_OnFinished_Parms
	{
		AActor* Avatar;
		bool bWasInterrupted;
	};
	struct GameplayBehavior_eventK2_OnFinishedCharacter_Parms
	{
		ACharacter* Avatar;
		bool bWasInterrupted;
	};
	struct GameplayBehavior_eventK2_OnFinishedPawn_Parms
	{
		APawn* Avatar;
		bool bWasInterrupted;
	};
	struct GameplayBehavior_eventK2_OnTriggered_Parms
	{
		AActor* Avatar;
		const UGameplayBehaviorConfig* Config;
		AActor* SmartObjectOwner;
	};
	struct GameplayBehavior_eventK2_OnTriggeredCharacter_Parms
	{
		ACharacter* Avatar;
		const UGameplayBehaviorConfig* Config;
		AActor* SmartObjectOwner;
	};
	struct GameplayBehavior_eventK2_OnTriggeredPawn_Parms
	{
		APawn* Avatar;
		const UGameplayBehaviorConfig* Config;
		AActor* SmartObjectOwner;
	};
	static FName NAME_UGameplayBehavior_K2_OnFinished = FName(TEXT("K2_OnFinished"));
	void UGameplayBehavior::K2_OnFinished(AActor* Avatar, bool bWasInterrupted)
	{
		GameplayBehavior_eventK2_OnFinished_Parms Parms;
		Parms.Avatar=Avatar;
		Parms.bWasInterrupted=bWasInterrupted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayBehavior_K2_OnFinished),&Parms);
	}
	static FName NAME_UGameplayBehavior_K2_OnFinishedCharacter = FName(TEXT("K2_OnFinishedCharacter"));
	void UGameplayBehavior::K2_OnFinishedCharacter(ACharacter* Avatar, bool bWasInterrupted)
	{
		GameplayBehavior_eventK2_OnFinishedCharacter_Parms Parms;
		Parms.Avatar=Avatar;
		Parms.bWasInterrupted=bWasInterrupted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayBehavior_K2_OnFinishedCharacter),&Parms);
	}
	static FName NAME_UGameplayBehavior_K2_OnFinishedPawn = FName(TEXT("K2_OnFinishedPawn"));
	void UGameplayBehavior::K2_OnFinishedPawn(APawn* Avatar, bool bWasInterrupted)
	{
		GameplayBehavior_eventK2_OnFinishedPawn_Parms Parms;
		Parms.Avatar=Avatar;
		Parms.bWasInterrupted=bWasInterrupted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayBehavior_K2_OnFinishedPawn),&Parms);
	}
	static FName NAME_UGameplayBehavior_K2_OnTriggered = FName(TEXT("K2_OnTriggered"));
	void UGameplayBehavior::K2_OnTriggered(AActor* Avatar, const UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner)
	{
		GameplayBehavior_eventK2_OnTriggered_Parms Parms;
		Parms.Avatar=Avatar;
		Parms.Config=Config;
		Parms.SmartObjectOwner=SmartObjectOwner;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayBehavior_K2_OnTriggered),&Parms);
	}
	static FName NAME_UGameplayBehavior_K2_OnTriggeredCharacter = FName(TEXT("K2_OnTriggeredCharacter"));
	void UGameplayBehavior::K2_OnTriggeredCharacter(ACharacter* Avatar, const UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner)
	{
		GameplayBehavior_eventK2_OnTriggeredCharacter_Parms Parms;
		Parms.Avatar=Avatar;
		Parms.Config=Config;
		Parms.SmartObjectOwner=SmartObjectOwner;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayBehavior_K2_OnTriggeredCharacter),&Parms);
	}
	static FName NAME_UGameplayBehavior_K2_OnTriggeredPawn = FName(TEXT("K2_OnTriggeredPawn"));
	void UGameplayBehavior::K2_OnTriggeredPawn(APawn* Avatar, const UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner)
	{
		GameplayBehavior_eventK2_OnTriggeredPawn_Parms Parms;
		Parms.Avatar=Avatar;
		Parms.Config=Config;
		Parms.SmartObjectOwner=SmartObjectOwner;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayBehavior_K2_OnTriggeredPawn),&Parms);
	}
	void UGameplayBehavior::StaticRegisterNativesUGameplayBehavior()
	{
		UClass* Class = UGameplayBehavior::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_AbortBehavior", &UGameplayBehavior::execK2_AbortBehavior },
			{ "K2_EndBehavior", &UGameplayBehavior::execK2_EndBehavior },
			{ "K2_GetNextActorIndexInSequence", &UGameplayBehavior::execK2_GetNextActorIndexInSequence },
			{ "K2_TriggerBehavior", &UGameplayBehavior::execK2_TriggerBehavior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics
	{
		struct GameplayBehavior_eventK2_AbortBehavior_Parms
		{
			AActor* Avatar;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_AbortBehavior_Parms, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::NewProp_Avatar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayBehavior" },
		{ "DisplayName", "AbortBehavior" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_AbortBehavior", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::GameplayBehavior_eventK2_AbortBehavior_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics
	{
		struct GameplayBehavior_eventK2_EndBehavior_Parms
		{
			AActor* Avatar;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_EndBehavior_Parms, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::NewProp_Avatar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayBehavior" },
		{ "DisplayName", "EndBehavior" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_EndBehavior", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::GameplayBehavior_eventK2_EndBehavior_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics
	{
		struct GameplayBehavior_eventK2_GetNextActorIndexInSequence_Parms
		{
			int32 CurrentIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_GetNextActorIndexInSequence_Parms, CurrentIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_GetNextActorIndexInSequence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::NewProp_CurrentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayBehavior" },
		{ "Comment", "/** @return None if there's no actors or only the one under the index of CurrentIndex is valid */" },
		{ "CPP_Default_CurrentIndex", "0" },
		{ "DisplayName", "GetNextActorIndexInSequence" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
		{ "ToolTip", "@return None if there's no actors or only the one under the index of CurrentIndex is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_GetNextActorIndexInSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::GameplayBehavior_eventK2_GetNextActorIndexInSequence_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
		static void NewProp_bWasInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnFinished_Parms, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::NewProp_bWasInterrupted_SetBit(void* Obj)
	{
		((GameplayBehavior_eventK2_OnFinished_Parms*)Obj)->bWasInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::NewProp_bWasInterrupted = { "bWasInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayBehavior_eventK2_OnFinished_Parms), &Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::NewProp_bWasInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::NewProp_bWasInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TagPayload" },
		{ "Category", "GameplayBehavior" },
		{ "DisplayName", "OnFinished" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_OnFinished", nullptr, nullptr, sizeof(GameplayBehavior_eventK2_OnFinished_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
		static void NewProp_bWasInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnFinishedCharacter_Parms, Avatar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::NewProp_bWasInterrupted_SetBit(void* Obj)
	{
		((GameplayBehavior_eventK2_OnFinishedCharacter_Parms*)Obj)->bWasInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::NewProp_bWasInterrupted = { "bWasInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayBehavior_eventK2_OnFinishedCharacter_Parms), &Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::NewProp_bWasInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::NewProp_bWasInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TagPayload" },
		{ "Category", "GameplayBehavior" },
		{ "DisplayName", "OnFinishedCharacter" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_OnFinishedCharacter", nullptr, nullptr, sizeof(GameplayBehavior_eventK2_OnFinishedCharacter_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
		static void NewProp_bWasInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnFinishedPawn_Parms, Avatar), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::NewProp_bWasInterrupted_SetBit(void* Obj)
	{
		((GameplayBehavior_eventK2_OnFinishedPawn_Parms*)Obj)->bWasInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::NewProp_bWasInterrupted = { "bWasInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayBehavior_eventK2_OnFinishedPawn_Parms), &Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::NewProp_bWasInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::NewProp_bWasInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TagPayload" },
		{ "Category", "GameplayBehavior" },
		{ "DisplayName", "OnFinishedPawn" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_OnFinishedPawn", nullptr, nullptr, sizeof(GameplayBehavior_eventK2_OnFinishedPawn_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggered_Parms, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggered_Parms, Config), Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_Config_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_SmartObjectOwner = { "SmartObjectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggered_Parms, SmartObjectOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::NewProp_SmartObjectOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TagPayload" },
		{ "Category", "GameplayBehavior" },
		{ "Comment", "// @NOTE on trigger functions - we\"ll trigger the most specific one that given behavior implements\n" },
		{ "DisplayName", "OnTriggered" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
		{ "ToolTip", "@NOTE on trigger functions - we\"ll trigger the most specific one that given behavior implements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_OnTriggered", nullptr, nullptr, sizeof(GameplayBehavior_eventK2_OnTriggered_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggeredCharacter_Parms, Avatar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggeredCharacter_Parms, Config), Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_Config_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_SmartObjectOwner = { "SmartObjectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggeredCharacter_Parms, SmartObjectOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::NewProp_SmartObjectOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TagPayload" },
		{ "Category", "GameplayBehavior" },
		{ "DisplayName", "OnTriggeredCharacter" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_OnTriggeredCharacter", nullptr, nullptr, sizeof(GameplayBehavior_eventK2_OnTriggeredCharacter_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggeredPawn_Parms, Avatar), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggeredPawn_Parms, Config), Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_Config_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_SmartObjectOwner = { "SmartObjectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_OnTriggeredPawn_Parms, SmartObjectOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::NewProp_SmartObjectOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TagPayload" },
		{ "Category", "GameplayBehavior" },
		{ "DisplayName", "OnTriggeredPawn" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_OnTriggeredPawn", nullptr, nullptr, sizeof(GameplayBehavior_eventK2_OnTriggeredPawn_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics
	{
		struct GameplayBehavior_eventK2_TriggerBehavior_Parms
		{
			AActor* Avatar;
			UGameplayBehaviorConfig* Config;
			AActor* SmartObjectOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_TriggerBehavior_Parms, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_TriggerBehavior_Parms, Config), Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::NewProp_SmartObjectOwner = { "SmartObjectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehavior_eventK2_TriggerBehavior_Parms, SmartObjectOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::NewProp_SmartObjectOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayBehavior" },
		{ "CPP_Default_Config", "None" },
		{ "CPP_Default_SmartObjectOwner", "None" },
		{ "DisplayName", "TriggerBehavior" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior, nullptr, "K2_TriggerBehavior", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::GameplayBehavior_eventK2_TriggerBehavior_Parms), Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayBehavior);
	UClass* Z_Construct_UClass_UGameplayBehavior_NoRegister()
	{
		return UGameplayBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionTag;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RelevantActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelevantActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RelevantActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientSmartObjectOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransientSmartObjectOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientAvatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransientAvatar;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveTasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayBehavior_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_AbortBehavior, "K2_AbortBehavior" }, // 610819404
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_EndBehavior, "K2_EndBehavior" }, // 4009863871
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_GetNextActorIndexInSequence, "K2_GetNextActorIndexInSequence" }, // 844394221
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_OnFinished, "K2_OnFinished" }, // 2523250984
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedCharacter, "K2_OnFinishedCharacter" }, // 3501973964
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_OnFinishedPawn, "K2_OnFinishedPawn" }, // 3348484003
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggered, "K2_OnTriggered" }, // 1349258370
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredCharacter, "K2_OnTriggeredCharacter" }, // 2813146272
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_OnTriggeredPawn, "K2_OnTriggeredPawn" }, // 2486325406
		{ &Z_Construct_UFunction_UGameplayBehavior_K2_TriggerBehavior, "K2_TriggerBehavior" }, // 2958533699
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayBehavior.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActionTag_MetaData[] = {
		{ "Category", "GameplayBehavior" },
		{ "Comment", "/** Tag identifying behavior this class represents */" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
		{ "ToolTip", "Tag identifying behavior this class represents" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehavior, ActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActionTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_RelevantActors_Inner = { "RelevantActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_RelevantActors_MetaData[] = {
		{ "Category", "GameplayBehavior" },
		{ "Comment", "/**\n\x09 * It's up to the behavior implementation to decide how to use these actors.\n\x09 * Can be used as patrol points, investigation location, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
		{ "ToolTip", "It's up to the behavior implementation to decide how to use these actors.\nCan be used as patrol points, investigation location, etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_RelevantActors = { "RelevantActors", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehavior, RelevantActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_RelevantActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_RelevantActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientSmartObjectOwner_MetaData[] = {
		{ "Comment", "/* SmartObject Actor Owner, can be null */" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
		{ "ToolTip", "SmartObject Actor Owner, can be null" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientSmartObjectOwner = { "TransientSmartObjectOwner", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehavior, TransientSmartObjectOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientSmartObjectOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientSmartObjectOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientAvatar_MetaData[] = {
		{ "Comment", "/**\n\x09 * Used mostly as world context for IGameplayTaskOwnerInterface function.\n\x09 *\x09Use with caution if working with CDOs.\n\x09 *\x09Set automatically as part of Trigger call\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
		{ "ToolTip", "Used mostly as world context for IGameplayTaskOwnerInterface function.\n     Use with caution if working with CDOs.\n     Set automatically as part of Trigger call" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientAvatar = { "TransientAvatar", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehavior, TransientAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientAvatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientAvatar_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActiveTasks_Inner = { "ActiveTasks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActiveTasks_MetaData[] = {
		{ "Comment", "/** List of currently active tasks, do not modify directly */" },
		{ "ModuleRelativePath", "Public/GameplayBehavior.h" },
		{ "ToolTip", "List of currently active tasks, do not modify directly" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActiveTasks = { "ActiveTasks", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehavior, ActiveTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActiveTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActiveTasks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_RelevantActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_RelevantActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientSmartObjectOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_TransientAvatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActiveTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_Statics::NewProp_ActiveTasks,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayBehavior_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayBehavior, IGameplayTaskOwnerInterface), false },  // 2384509100
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayBehavior_Statics::ClassParams = {
		&UGameplayBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayBehavior_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayBehavior()
	{
		if (!Z_Registration_Info_UClass_UGameplayBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayBehavior.OuterSingleton, Z_Construct_UClass_UGameplayBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayBehavior.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UGameplayBehavior>()
	{
		return UGameplayBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayBehavior);
	UGameplayBehavior::~UGameplayBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_Statics::EnumInfo[] = {
		{ EGameplayBehaviorInstantiationPolicy_StaticEnum, TEXT("EGameplayBehaviorInstantiationPolicy"), &Z_Registration_Info_UEnum_EGameplayBehaviorInstantiationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 396964232U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayBehavior, UGameplayBehavior::StaticClass, TEXT("UGameplayBehavior"), &Z_Registration_Info_UClass_UGameplayBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayBehavior), 2121610302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_1951737088(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
