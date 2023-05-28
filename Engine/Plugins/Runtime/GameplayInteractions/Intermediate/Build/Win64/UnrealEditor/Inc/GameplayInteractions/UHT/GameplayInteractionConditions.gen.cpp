// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionConditions.h"
#include "GameplayTagContainer.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionConditions() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayInteractionMatchSlotTagSource;
	static UEnum* EGameplayInteractionMatchSlotTagSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionMatchSlotTagSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayInteractionMatchSlotTagSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayInteractionMatchSlotTagSource"));
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionMatchSlotTagSource.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionMatchSlotTagSource>()
	{
		return EGameplayInteractionMatchSlotTagSource_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics::Enumerators[] = {
		{ "EGameplayInteractionMatchSlotTagSource::ActivityTags", (int64)EGameplayInteractionMatchSlotTagSource::ActivityTags },
		{ "EGameplayInteractionMatchSlotTagSource::RuntimeTags", (int64)EGameplayInteractionMatchSlotTagSource::RuntimeTags },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics::Enum_MetaDataParams[] = {
		{ "ActivityTags.Comment", "/** Test slot definition activity Tags. */" },
		{ "ActivityTags.Name", "EGameplayInteractionMatchSlotTagSource::ActivityTags" },
		{ "ActivityTags.ToolTip", "Test slot definition activity Tags." },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
		{ "RuntimeTags.Comment", "/** Test slot Runtime tags. */" },
		{ "RuntimeTags.Name", "EGameplayInteractionMatchSlotTagSource::RuntimeTags" },
		{ "RuntimeTags.ToolTip", "Test slot Runtime tags." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayInteractionMatchSlotTagSource",
		"EGameplayInteractionMatchSlotTagSource",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionMatchSlotTagSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayInteractionMatchSlotTagSource.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionMatchSlotTagSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionMatchSlotTagsConditionInstanceData;
class UScriptStruct* FGameplayInteractionMatchSlotTagsConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionMatchSlotTagsConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionMatchSlotTagsConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionMatchSlotTagsConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionMatchSlotTagsConditionInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionMatchSlotTagsConditionInstanceData>()
{
	return FGameplayInteractionMatchSlotTagsConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToMatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionMatchSlotTagsConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_Slot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionMatchSlotTagsConditionInstanceData, Slot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_Slot_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_TagsToMatch_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_TagsToMatch = { "TagsToMatch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionMatchSlotTagsConditionInstanceData, TagsToMatch), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_TagsToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_TagsToMatch_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewProp_TagsToMatch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionMatchSlotTagsConditionInstanceData",
		sizeof(FGameplayInteractionMatchSlotTagsConditionInstanceData),
		alignof(FGameplayInteractionMatchSlotTagsConditionInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionMatchSlotTagsConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionMatchSlotTagsConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionMatchSlotTagsConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionSlotTagsMatchCondition>() == std::is_polymorphic<FGameplayInteractionStateTreeCondition>(), "USTRUCT FGameplayInteractionSlotTagsMatchCondition cannot be polymorphic unless super FGameplayInteractionStateTreeCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSlotTagsMatchCondition;
class UScriptStruct* FGameplayInteractionSlotTagsMatchCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSlotTagsMatchCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSlotTagsMatchCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSlotTagsMatchCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSlotTagsMatchCondition.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSlotTagsMatchCondition>()
{
	return FGameplayInteractionSlotTagsMatchCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExactMatch_MetaData[];
#endif
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Condition to check if Gameplay Tags on a Smart Object slot match the specified tags.\n */" },
		{ "DisplayName", "Match Slot Tags" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
		{ "ToolTip", "Condition to check if Gameplay Tags on a Smart Object slot match the specified tags." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSlotTagsMatchCondition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSlotTagsMatchCondition, Source), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_Source_MetaData)) }; // 4268035655
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_MatchType_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSlotTagsMatchCondition, MatchType), Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_MatchType_MetaData)) }; // 3109490235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bExactMatch_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((FGameplayInteractionSlotTagsMatchCondition*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayInteractionSlotTagsMatchCondition), &Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bExactMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bExactMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FGameplayInteractionSlotTagsMatchCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayInteractionSlotTagsMatchCondition), &Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_Source_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_MatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_MatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition,
		&NewStructOps,
		"GameplayInteractionSlotTagsMatchCondition",
		sizeof(FGameplayInteractionSlotTagsMatchCondition),
		alignof(FGameplayInteractionSlotTagsMatchCondition),
		Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSlotTagsMatchCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSlotTagsMatchCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSlotTagsMatchCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagsConditionInstanceData;
class UScriptStruct* FGameplayInteractionQuerySlotTagsConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagsConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagsConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionQuerySlotTagsConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagsConditionInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionQuerySlotTagsConditionInstanceData>()
{
	return FGameplayInteractionQuerySlotTagsConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionQuerySlotTagsConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::NewProp_Slot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionQuerySlotTagsConditionInstanceData, Slot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::NewProp_Slot_MetaData)) }; // 467463604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::NewProp_Slot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionQuerySlotTagsConditionInstanceData",
		sizeof(FGameplayInteractionQuerySlotTagsConditionInstanceData),
		alignof(FGameplayInteractionQuerySlotTagsConditionInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagsConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagsConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagsConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionQuerySlotTagCondition>() == std::is_polymorphic<FGameplayInteractionStateTreeCondition>(), "USTRUCT FGameplayInteractionQuerySlotTagCondition cannot be polymorphic unless super FGameplayInteractionStateTreeCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagCondition;
class UScriptStruct* FGameplayInteractionQuerySlotTagCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionQuerySlotTagCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagCondition.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionQuerySlotTagCondition>()
{
	return FGameplayInteractionQuerySlotTagCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Condition to check if Gameplay Tags on a Smart Object slot match the Gameplay Tag query.\n */" },
		{ "DisplayName", "Query Slot Tags" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
		{ "ToolTip", "Condition to check if Gameplay Tags on a Smart Object slot match the Gameplay Tag query." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionQuerySlotTagCondition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionQuerySlotTagCondition, Source), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionMatchSlotTagSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_Source_MetaData)) }; // 4268035655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_TagQuery_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionQuerySlotTagCondition, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_TagQuery_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FGameplayInteractionQuerySlotTagCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayInteractionQuerySlotTagCondition), &Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_Source_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_TagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition,
		&NewStructOps,
		"GameplayInteractionQuerySlotTagCondition",
		sizeof(FGameplayInteractionQuerySlotTagCondition),
		alignof(FGameplayInteractionQuerySlotTagCondition),
		Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidConditionInstanceData;
class UScriptStruct* FGameplayInteractionIsSlotHandleValidConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionIsSlotHandleValidConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidConditionInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionIsSlotHandleValidConditionInstanceData>()
{
	return FGameplayInteractionIsSlotHandleValidConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionIsSlotHandleValidConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::NewProp_Slot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionIsSlotHandleValidConditionInstanceData, Slot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::NewProp_Slot_MetaData)) }; // 467463604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::NewProp_Slot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionIsSlotHandleValidConditionInstanceData",
		sizeof(FGameplayInteractionIsSlotHandleValidConditionInstanceData),
		alignof(FGameplayInteractionIsSlotHandleValidConditionInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionIsSlotHandleValidCondition>() == std::is_polymorphic<FGameplayInteractionStateTreeCondition>(), "USTRUCT FGameplayInteractionIsSlotHandleValidCondition cannot be polymorphic unless super FGameplayInteractionStateTreeCondition is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidCondition;
class UScriptStruct* FGameplayInteractionIsSlotHandleValidCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionIsSlotHandleValidCondition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidCondition.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionIsSlotHandleValidCondition>()
{
	return FGameplayInteractionIsSlotHandleValidCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Condition to check if a Smart Object slot handle is valid. \n */" },
		{ "DisplayName", "Is Slot Handle Valid" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
		{ "ToolTip", "Condition to check if a Smart Object slot handle is valid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionIsSlotHandleValidCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FGameplayInteractionIsSlotHandleValidCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayInteractionIsSlotHandleValidCondition), &Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition,
		&NewStructOps,
		"GameplayInteractionIsSlotHandleValidCondition",
		sizeof(FGameplayInteractionIsSlotHandleValidCondition),
		alignof(FGameplayInteractionIsSlotHandleValidCondition),
		Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidCondition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidCondition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_Statics::EnumInfo[] = {
		{ EGameplayInteractionMatchSlotTagSource_StaticEnum, TEXT("EGameplayInteractionMatchSlotTagSource"), &Z_Registration_Info_UEnum_EGameplayInteractionMatchSlotTagSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4268035655U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionMatchSlotTagsConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionMatchSlotTagsConditionInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionMatchSlotTagsConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionMatchSlotTagsConditionInstanceData), 4041396763U) },
		{ FGameplayInteractionSlotTagsMatchCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics::NewStructOps, TEXT("GameplayInteractionSlotTagsMatchCondition"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSlotTagsMatchCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSlotTagsMatchCondition), 146177110U) },
		{ FGameplayInteractionQuerySlotTagsConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionQuerySlotTagsConditionInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagsConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionQuerySlotTagsConditionInstanceData), 2491757030U) },
		{ FGameplayInteractionQuerySlotTagCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics::NewStructOps, TEXT("GameplayInteractionQuerySlotTagCondition"), &Z_Registration_Info_UScriptStruct_GameplayInteractionQuerySlotTagCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionQuerySlotTagCondition), 38204232U) },
		{ FGameplayInteractionIsSlotHandleValidConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionIsSlotHandleValidConditionInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionIsSlotHandleValidConditionInstanceData), 478635151U) },
		{ FGameplayInteractionIsSlotHandleValidCondition::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics::NewStructOps, TEXT("GameplayInteractionIsSlotHandleValidCondition"), &Z_Registration_Info_UScriptStruct_GameplayInteractionIsSlotHandleValidCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionIsSlotHandleValidCondition), 1655377001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_341820118(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
