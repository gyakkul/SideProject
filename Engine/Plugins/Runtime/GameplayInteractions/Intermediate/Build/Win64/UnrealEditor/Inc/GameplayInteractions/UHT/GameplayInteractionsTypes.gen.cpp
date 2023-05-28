// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayInteractionsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionsTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult();
	GAMEPLAYINTERACTIONSMODULE_API UFunction* Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionAbortContext();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotStateData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayInteractionAbortReason;
	static UEnum* EGameplayInteractionAbortReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionAbortReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayInteractionAbortReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayInteractionAbortReason"));
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionAbortReason.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionAbortReason>()
	{
		return EGameplayInteractionAbortReason_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics::Enumerators[] = {
		{ "EGameplayInteractionAbortReason::Unset", (int64)EGameplayInteractionAbortReason::Unset },
		{ "EGameplayInteractionAbortReason::ExternalAbort", (int64)EGameplayInteractionAbortReason::ExternalAbort },
		{ "EGameplayInteractionAbortReason::InternalAbort", (int64)EGameplayInteractionAbortReason::InternalAbort },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Reason why the interaction is ended prematurely. */" },
		{ "ExternalAbort.Name", "EGameplayInteractionAbortReason::ExternalAbort" },
		{ "InternalAbort.Name", "EGameplayInteractionAbortReason::InternalAbort" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
		{ "ToolTip", "Reason why the interaction is ended prematurely." },
		{ "Unset.Name", "EGameplayInteractionAbortReason::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayInteractionAbortReason",
		"EGameplayInteractionAbortReason",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionAbortReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayInteractionAbortReason.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionAbortReason.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionAbortContext;
class UScriptStruct* FGameplayInteractionAbortContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionAbortContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionAbortContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionAbortContext, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionAbortContext"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionAbortContext.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionAbortContext>()
{
	return FGameplayInteractionAbortContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct holding data related to the abort action  \n */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
		{ "ToolTip", "Struct holding data related to the abort action" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionAbortContext>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewProp_Reason_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionAbortContext, Reason), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionAbortReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewProp_Reason_MetaData)) }; // 2196315791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewProp_Reason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewProp_Reason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionAbortContext",
		sizeof(FGameplayInteractionAbortContext),
		alignof(FGameplayInteractionAbortContext),
		Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionAbortContext()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionAbortContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionAbortContext.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionAbortContext.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionSlotUserData>() == std::is_polymorphic<FSmartObjectSlotStateData>(), "USTRUCT FGameplayInteractionSlotUserData cannot be polymorphic unless super FSmartObjectSlotStateData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSlotUserData;
class UScriptStruct* FGameplayInteractionSlotUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSlotUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSlotUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSlotUserData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSlotUserData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSlotUserData>()
{
	return FGameplayInteractionSlotUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data added to a Smart Object slot when interaction is started on it. Allows to look up the user.\n */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
		{ "ToolTip", "Data added to a Smart Object slot when interaction is started on it. Allows to look up the user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSlotUserData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FSmartObjectSlotStateData,
		&NewStructOps,
		"GameplayInteractionSlotUserData",
		sizeof(FGameplayInteractionSlotUserData),
		alignof(FGameplayInteractionSlotUserData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSlotUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSlotUserData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSlotUserData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionStateTreeTask>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FGameplayInteractionStateTreeTask cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeTask;
class UScriptStruct* FGameplayInteractionStateTreeTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionStateTreeTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionStateTreeTask>()
{
	return FGameplayInteractionStateTreeTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class (namespace) for all StateTree Tasks related to AI/Gameplay.\n * This allows schemas to safely include all tasks child of this struct. \n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
		{ "ToolTip", "Base class (namespace) for all StateTree Tasks related to AI/Gameplay.\nThis allows schemas to safely include all tasks child of this struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionStateTreeTask>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FStateTreeTaskBase,
		&NewStructOps,
		"GameplayInteractionStateTreeTask",
		sizeof(FGameplayInteractionStateTreeTask),
		alignof(FGameplayInteractionStateTreeTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeTask.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionStateTreeCondition>() == std::is_polymorphic<FStateTreeConditionBase>(), "USTRUCT FGameplayInteractionStateTreeCondition cannot be polymorphic unless super FStateTreeConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeCondition;
class UScriptStruct* FGameplayInteractionStateTreeCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionStateTreeCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeCondition.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionStateTreeCondition>()
{
	return FGameplayInteractionStateTreeCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionStateTreeCondition>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FStateTreeConditionBase,
		&NewStructOps,
		"GameplayInteractionStateTreeCondition",
		sizeof(FGameplayInteractionStateTreeCondition),
		alignof(FGameplayInteractionStateTreeCondition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeCondition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayInteractionModifyGameplayTagOperation;
	static UEnum* EGameplayInteractionModifyGameplayTagOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionModifyGameplayTagOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayInteractionModifyGameplayTagOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayInteractionModifyGameplayTagOperation"));
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionModifyGameplayTagOperation.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionModifyGameplayTagOperation>()
	{
		return EGameplayInteractionModifyGameplayTagOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics::Enumerators[] = {
		{ "EGameplayInteractionModifyGameplayTagOperation::Add", (int64)EGameplayInteractionModifyGameplayTagOperation::Add },
		{ "EGameplayInteractionModifyGameplayTagOperation::Remove", (int64)EGameplayInteractionModifyGameplayTagOperation::Remove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics::Enum_MetaDataParams[] = {
		{ "Add.Comment", "/** The tag modified during the lifetime of the task. */" },
		{ "Add.Name", "EGameplayInteractionModifyGameplayTagOperation::Add" },
		{ "Add.ToolTip", "The tag modified during the lifetime of the task." },
		{ "Comment", "/**\n * Value specifying how GameplayTag container should be modified.\n */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
		{ "Remove.Comment", "/** The tag modified when the state becomes active. */" },
		{ "Remove.Name", "EGameplayInteractionModifyGameplayTagOperation::Remove" },
		{ "Remove.ToolTip", "The tag modified when the state becomes active." },
		{ "ToolTip", "Value specifying how GameplayTag container should be modified." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayInteractionModifyGameplayTagOperation",
		"EGameplayInteractionModifyGameplayTagOperation",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionModifyGameplayTagOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayInteractionModifyGameplayTagOperation.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionModifyGameplayTagOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionModifyGameplayTagOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayInteractionTaskModify;
	static UEnum* EGameplayInteractionTaskModify_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionTaskModify.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayInteractionTaskModify.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayInteractionTaskModify"));
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionTaskModify.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionTaskModify>()
	{
		return EGameplayInteractionTaskModify_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics::Enumerators[] = {
		{ "EGameplayInteractionTaskModify::OnEnterStateUndoOnExitState", (int64)EGameplayInteractionTaskModify::OnEnterStateUndoOnExitState },
		{ "EGameplayInteractionTaskModify::OnEnterState", (int64)EGameplayInteractionTaskModify::OnEnterState },
		{ "EGameplayInteractionTaskModify::OnExitState", (int64)EGameplayInteractionTaskModify::OnExitState },
		{ "EGameplayInteractionTaskModify::OnExitStateFailed", (int64)EGameplayInteractionTaskModify::OnExitStateFailed },
		{ "EGameplayInteractionTaskModify::OnExitStateSucceeded", (int64)EGameplayInteractionTaskModify::OnExitStateSucceeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Value specifying when a State Tree task based modification should take place.\n */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
		{ "OnEnterState.Comment", "/** The modification takes place when the state becomes active. */" },
		{ "OnEnterState.Name", "EGameplayInteractionTaskModify::OnEnterState" },
		{ "OnEnterState.ToolTip", "The modification takes place when the state becomes active." },
		{ "OnEnterStateUndoOnExitState.Comment", "/** The modification takes effect when the state becomes active, and is undone when the state becomes inactive. */" },
		{ "OnEnterStateUndoOnExitState.Name", "EGameplayInteractionTaskModify::OnEnterStateUndoOnExitState" },
		{ "OnEnterStateUndoOnExitState.ToolTip", "The modification takes effect when the state becomes active, and is undone when the state becomes inactive." },
		{ "OnExitState.Comment", "/** The modification takes place when the state becomes inactive. */" },
		{ "OnExitState.Name", "EGameplayInteractionTaskModify::OnExitState" },
		{ "OnExitState.ToolTip", "The modification takes place when the state becomes inactive." },
		{ "OnExitStateFailed.Comment", "/** The modification takes place if the state fails. */" },
		{ "OnExitStateFailed.Name", "EGameplayInteractionTaskModify::OnExitStateFailed" },
		{ "OnExitStateFailed.ToolTip", "The modification takes place if the state fails." },
		{ "OnExitStateSucceeded.Comment", "/** The modification takes place if the state succeeds. */" },
		{ "OnExitStateSucceeded.Name", "EGameplayInteractionTaskModify::OnExitStateSucceeded" },
		{ "OnExitStateSucceeded.ToolTip", "The modification takes place if the state succeeds." },
		{ "ToolTip", "Value specifying when a State Tree task based modification should take place." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayInteractionTaskModify",
		"EGameplayInteractionTaskModify",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionTaskModify.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayInteractionTaskModify.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionTaskModify.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayInteractionTaskTrigger;
	static UEnum* EGameplayInteractionTaskTrigger_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionTaskTrigger.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayInteractionTaskTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayInteractionTaskTrigger"));
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionTaskTrigger.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionTaskTrigger>()
	{
		return EGameplayInteractionTaskTrigger_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics::Enumerators[] = {
		{ "EGameplayInteractionTaskTrigger::OnEnterState", (int64)EGameplayInteractionTaskTrigger::OnEnterState },
		{ "EGameplayInteractionTaskTrigger::OnExitState", (int64)EGameplayInteractionTaskTrigger::OnExitState },
		{ "EGameplayInteractionTaskTrigger::OnExitStateSucceeded", (int64)EGameplayInteractionTaskTrigger::OnExitStateSucceeded },
		{ "EGameplayInteractionTaskTrigger::OnExitStateFailed", (int64)EGameplayInteractionTaskTrigger::OnExitStateFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Value specifying when a State Tree task based action should be triggered.\n */" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
		{ "OnEnterState.Comment", "/** Execute when state becomes active. */" },
		{ "OnEnterState.Name", "EGameplayInteractionTaskTrigger::OnEnterState" },
		{ "OnEnterState.ToolTip", "Execute when state becomes active." },
		{ "OnExitState.Comment", "/** Execute when state becomes inactive. */" },
		{ "OnExitState.Name", "EGameplayInteractionTaskTrigger::OnExitState" },
		{ "OnExitState.ToolTip", "Execute when state becomes inactive." },
		{ "OnExitStateFailed.Comment", "/** Execute if the state succeeds. */" },
		{ "OnExitStateFailed.Name", "EGameplayInteractionTaskTrigger::OnExitStateFailed" },
		{ "OnExitStateFailed.ToolTip", "Execute if the state succeeds." },
		{ "OnExitStateSucceeded.Comment", "/** Execute if the state fails. */" },
		{ "OnExitStateSucceeded.Name", "EGameplayInteractionTaskTrigger::OnExitStateSucceeded" },
		{ "OnExitStateSucceeded.ToolTip", "Execute if the state fails." },
		{ "ToolTip", "Value specifying when a State Tree task based action should be triggered." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayInteractionTaskTrigger",
		"EGameplayInteractionTaskTrigger",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionTaskTrigger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayInteractionTaskTrigger.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionTaskTrigger.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTaskActuationResult;
	static UEnum* EGameplayTaskActuationResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTaskActuationResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTaskActuationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayTaskActuationResult"));
		}
		return Z_Registration_Info_UEnum_EGameplayTaskActuationResult.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayTaskActuationResult>()
	{
		return EGameplayTaskActuationResult_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics::Enumerators[] = {
		{ "EGameplayTaskActuationResult::None", (int64)EGameplayTaskActuationResult::None },
		{ "EGameplayTaskActuationResult::RequestFailed", (int64)EGameplayTaskActuationResult::RequestFailed },
		{ "EGameplayTaskActuationResult::Failed", (int64)EGameplayTaskActuationResult::Failed },
		{ "EGameplayTaskActuationResult::Succeeded", (int64)EGameplayTaskActuationResult::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics::Enum_MetaDataParams[] = {
		{ "Failed.Name", "EGameplayTaskActuationResult::Failed" },
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
		{ "None.Name", "EGameplayTaskActuationResult::None" },
		{ "RequestFailed.Name", "EGameplayTaskActuationResult::RequestFailed" },
		{ "Succeeded.Name", "EGameplayTaskActuationResult::Succeeded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayTaskActuationResult",
		"EGameplayTaskActuationResult",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTaskActuationResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTaskActuationResult.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTaskActuationResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics
	{
		struct _Script_GameplayInteractionsModule_eventGameplayTaskActuationCompleted_Parms
		{
			EGameplayTaskActuationResult Result;
			AActor* Actor;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayInteractionsModule_eventGameplayTaskActuationCompleted_Parms, Result), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTaskActuationResult, METADATA_PARAMS(nullptr, 0) }; // 3428586248
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayInteractionsModule_eventGameplayTaskActuationCompleted_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayInteractionsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule, nullptr, "GameplayTaskActuationCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::_Script_GameplayInteractionsModule_eventGameplayTaskActuationCompleted_Parms), Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGameplayTaskActuationCompleted_DelegateWrapper(const FMulticastScriptDelegate& GameplayTaskActuationCompleted, EGameplayTaskActuationResult Result, AActor* Actor)
{
	struct _Script_GameplayInteractionsModule_eventGameplayTaskActuationCompleted_Parms
	{
		EGameplayTaskActuationResult Result;
		AActor* Actor;
	};
	_Script_GameplayInteractionsModule_eventGameplayTaskActuationCompleted_Parms Parms;
	Parms.Result=Result;
	Parms.Actor=Actor;
	GameplayTaskActuationCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_Statics::EnumInfo[] = {
		{ EGameplayInteractionAbortReason_StaticEnum, TEXT("EGameplayInteractionAbortReason"), &Z_Registration_Info_UEnum_EGameplayInteractionAbortReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2196315791U) },
		{ EGameplayInteractionModifyGameplayTagOperation_StaticEnum, TEXT("EGameplayInteractionModifyGameplayTagOperation"), &Z_Registration_Info_UEnum_EGameplayInteractionModifyGameplayTagOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2942725198U) },
		{ EGameplayInteractionTaskModify_StaticEnum, TEXT("EGameplayInteractionTaskModify"), &Z_Registration_Info_UEnum_EGameplayInteractionTaskModify, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1475098485U) },
		{ EGameplayInteractionTaskTrigger_StaticEnum, TEXT("EGameplayInteractionTaskTrigger"), &Z_Registration_Info_UEnum_EGameplayInteractionTaskTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 632723220U) },
		{ EGameplayTaskActuationResult_StaticEnum, TEXT("EGameplayTaskActuationResult"), &Z_Registration_Info_UEnum_EGameplayTaskActuationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3428586248U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionAbortContext::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics::NewStructOps, TEXT("GameplayInteractionAbortContext"), &Z_Registration_Info_UScriptStruct_GameplayInteractionAbortContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionAbortContext), 2210915608U) },
		{ FGameplayInteractionSlotUserData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics::NewStructOps, TEXT("GameplayInteractionSlotUserData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSlotUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSlotUserData), 3027950660U) },
		{ FGameplayInteractionStateTreeTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics::NewStructOps, TEXT("GameplayInteractionStateTreeTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionStateTreeTask), 2153231718U) },
		{ FGameplayInteractionStateTreeCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics::NewStructOps, TEXT("GameplayInteractionStateTreeCondition"), &Z_Registration_Info_UScriptStruct_GameplayInteractionStateTreeCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionStateTreeCondition), 1427304433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_236583633(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
