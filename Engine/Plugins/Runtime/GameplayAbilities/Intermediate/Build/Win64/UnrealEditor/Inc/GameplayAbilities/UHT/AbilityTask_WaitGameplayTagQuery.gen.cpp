// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayTagQuery() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitGameplayTagQueryDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitGameplayTagQueryDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayTagQueryDelegate)
{
	WaitGameplayTagQueryDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition;
	static UEnum* EWaitGameplayTagQueryTriggerCondition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EWaitGameplayTagQueryTriggerCondition"));
		}
		return Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EWaitGameplayTagQueryTriggerCondition>()
	{
		return EWaitGameplayTagQueryTriggerCondition_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enumerators[] = {
		{ "EWaitGameplayTagQueryTriggerCondition::WhenTrue", (int64)EWaitGameplayTagQueryTriggerCondition::WhenTrue },
		{ "EWaitGameplayTagQueryTriggerCondition::WhenFalse", (int64)EWaitGameplayTagQueryTriggerCondition::WhenFalse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** This enum defines the condition in which the wait gameplay tag query node will trigger. */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
		{ "ToolTip", "This enum defines the condition in which the wait gameplay tag query node will trigger." },
		{ "WhenFalse.Name", "EWaitGameplayTagQueryTriggerCondition::WhenFalse" },
		{ "WhenTrue.Name", "EWaitGameplayTagQueryTriggerCondition::WhenTrue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EWaitGameplayTagQueryTriggerCondition",
		"EWaitGameplayTagQueryTriggerCondition",
		Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition()
	{
		if (!Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition.InnerSingleton;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayTagQuery::execUpdateTargetTags)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTargetTags(Z_Param_Tag,Z_Param_NewCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayTagQuery::execWaitGameplayTagQuery)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayTagQuery,Z_Param_TagQuery);
		P_GET_OBJECT(AActor,Z_Param_InOptionalExternalTarget);
		P_GET_ENUM(EWaitGameplayTagQueryTriggerCondition,Z_Param_TriggerCondition);
		P_GET_UBOOL(Z_Param_bOnlyTriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitGameplayTagQuery**)Z_Param__Result=UAbilityTask_WaitGameplayTagQuery::WaitGameplayTagQuery(Z_Param_OwningAbility,Z_Param_TagQuery,Z_Param_InOptionalExternalTarget,EWaitGameplayTagQueryTriggerCondition(Z_Param_TriggerCondition),Z_Param_bOnlyTriggerOnce);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitGameplayTagQuery::StaticRegisterNativesUAbilityTask_WaitGameplayTagQuery()
	{
		UClass* Class = UAbilityTask_WaitGameplayTagQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateTargetTags", &UAbilityTask_WaitGameplayTagQuery::execUpdateTargetTags },
			{ "WaitGameplayTagQuery", &UAbilityTask_WaitGameplayTagQuery::execWaitGameplayTagQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics
	{
		struct AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms
		{
			FGameplayTag Tag;
			int32 NewCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::NewProp_NewCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** This will update the tags in the TargetTags container to reflect that tags that are on the target ASC. */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
		{ "ToolTip", "This will update the tags in the TargetTags container to reflect that tags that are on the target ASC." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery, nullptr, "UpdateTargetTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::AbilityTask_WaitGameplayTagQuery_eventUpdateTargetTags_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics
	{
		struct AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayTagQuery TagQuery;
			const AActor* InOptionalExternalTarget;
			EWaitGameplayTagQueryTriggerCondition TriggerCondition;
			bool bOnlyTriggerOnce;
			UAbilityTask_WaitGameplayTagQuery* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOptionalExternalTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOptionalExternalTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerCondition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerCondition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyTriggerOnce_MetaData[];
#endif
		static void NewProp_bOnlyTriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyTriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TagQuery_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_InOptionalExternalTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_InOptionalExternalTarget = { "InOptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, InOptionalExternalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_InOptionalExternalTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_InOptionalExternalTarget_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition = { "TriggerCondition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, TriggerCondition), Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition_MetaData)) }; // 2105784171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms*)Obj)->bOnlyTriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce = { "bOnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_InOptionalExternalTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_TriggerCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_bOnlyTriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * \x09Wait until the given gameplay tag query has become true or false, based on TriggerCondition. \n\x09 *  By default this will look at the owner of this ability. OptionalExternalTarget can be set to\n\x09 *  make this look at another actor's tags for changes.  If the the tag query already satisfies \n\x09 *  the TriggerCondition when this task is started, it will immediately broadcast the Triggered \n\x09 *  event. It will keep listening as long as bOnlyTriggerOnce = false.\n\x09 */" },
		{ "CPP_Default_bOnlyTriggerOnce", "false" },
		{ "CPP_Default_InOptionalExternalTarget", "None" },
		{ "CPP_Default_TriggerCondition", "WhenTrue" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
		{ "ToolTip", "Wait until the given gameplay tag query has become true or false, based on TriggerCondition.\nBy default this will look at the owner of this ability. OptionalExternalTarget can be set to\nmake this look at another actor's tags for changes.  If the the tag query already satisfies\nthe TriggerCondition when this task is started, it will immediately broadcast the Triggered\nevent. It will keep listening as long as bOnlyTriggerOnce = false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery, nullptr, "WaitGameplayTagQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::AbilityTask_WaitGameplayTagQuery_eventWaitGameplayTagQuery_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayTagQuery);
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_NoRegister()
	{
		return UAbilityTask_WaitGameplayTagQuery::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Triggered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalExternalTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionalExternalTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags, "UpdateTargetTags" }, // 1064420394
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery, "WaitGameplayTagQuery" }, // 1231626488
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This class defines a node to wait on a gameplay tag query. */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
		{ "ToolTip", "This class defines a node to wait on a gameplay tag query." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_Triggered_MetaData[] = {
		{ "Comment", "/** This delegate will be triggered when the trigger condition has been met. */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
		{ "ToolTip", "This delegate will be triggered when the trigger condition has been met." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_Triggered = { "Triggered", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayTagQuery, Triggered), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayTagQueryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_Triggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_Triggered_MetaData)) }; // 2008591374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_OptionalExternalTarget_MetaData[] = {
		{ "Comment", "/** This is the optional external target to use when getting the ASC to get tags from. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h" },
		{ "ToolTip", "This is the optional external target to use when getting the ASC to get tags from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayTagQuery, OptionalExternalTarget), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_OptionalExternalTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_OptionalExternalTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_Triggered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::NewProp_OptionalExternalTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayTagQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::ClassParams = {
		&UAbilityTask_WaitGameplayTagQuery::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagQuery.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagQuery.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayTagQuery>()
	{
		return UAbilityTask_WaitGameplayTagQuery::StaticClass();
	}
	UAbilityTask_WaitGameplayTagQuery::UAbilityTask_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayTagQuery);
	UAbilityTask_WaitGameplayTagQuery::~UAbilityTask_WaitGameplayTagQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::EnumInfo[] = {
		{ EWaitGameplayTagQueryTriggerCondition_StaticEnum, TEXT("EWaitGameplayTagQueryTriggerCondition"), &Z_Registration_Info_UEnum_EWaitGameplayTagQueryTriggerCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2105784171U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery, UAbilityTask_WaitGameplayTagQuery::StaticClass, TEXT("UAbilityTask_WaitGameplayTagQuery"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayTagQuery), 2078883783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_1447859232(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
