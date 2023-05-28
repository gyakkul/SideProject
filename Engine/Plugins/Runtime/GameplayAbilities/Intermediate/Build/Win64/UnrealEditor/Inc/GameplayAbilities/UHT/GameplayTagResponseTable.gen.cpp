// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagResponseTable.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagResponseTable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagReponseTable();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagReponseTable_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReponsePair();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagReponsePair;
class UScriptStruct* FGameplayTagReponsePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagReponsePair, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagReponsePair"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagReponsePair>()
{
	return FGameplayTagReponsePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseGameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ResponseGameplayEffect;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ResponseGameplayEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseGameplayEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResponseGameplayEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftCountCap_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SoftCountCap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagReponsePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "/** Tag that triggers this response */" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
		{ "ToolTip", "Tag that triggers this response" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagReponsePair, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_Tag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffect_MetaData[] = {
		{ "Comment", "/** Deprecated. Replaced with ResponseGameplayEffects */" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
		{ "ToolTip", "Deprecated. Replaced with ResponseGameplayEffects" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffect = { "ResponseGameplayEffect", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagReponsePair, ResponseGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffect_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects_Inner = { "ResponseGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "/** The GameplayEffects to apply in reponse to the tag */" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
		{ "ToolTip", "The GameplayEffects to apply in reponse to the tag" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects = { "ResponseGameplayEffects", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagReponsePair, ResponseGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_SoftCountCap_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The max \"count\" this response can achieve. This will not prevent counts from being applied, but will be used when calculating the net count of a tag. 0=no cap. */" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
		{ "ToolTip", "The max \"count\" this response can achieve. This will not prevent counts from being applied, but will be used when calculating the net count of a tag. 0=no cap." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_SoftCountCap = { "SoftCountCap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagReponsePair, SoftCountCap), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_SoftCountCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_SoftCountCap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_ResponseGameplayEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewProp_SoftCountCap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTagReponsePair",
		sizeof(FGameplayTagReponsePair),
		alignof(FGameplayTagReponsePair),
		Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReponsePair()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagReponsePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry;
class UScriptStruct* FGameplayTagResponseTableEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagResponseTableEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagResponseTableEntry>()
{
	return FGameplayTagResponseTableEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Negative_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Negative;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagResponseTableEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Positive_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "/** Tags that count as \"positive\" toward to final response count. If the overall count is positive, this ResponseGameplayEffect is applied. */" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
		{ "ToolTip", "Tags that count as \"positive\" toward to final response count. If the overall count is positive, this ResponseGameplayEffect is applied." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Positive = { "Positive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagResponseTableEntry, Positive), Z_Construct_UScriptStruct_FGameplayTagReponsePair, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Positive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Positive_MetaData)) }; // 1010379492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Negative_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "/** Tags that count as \"negative\" toward to final response count. If the overall count is negative, this ResponseGameplayEffect is applied. */" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
		{ "ToolTip", "Tags that count as \"negative\" toward to final response count. If the overall count is negative, this ResponseGameplayEffect is applied." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Negative = { "Negative", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagResponseTableEntry, Negative), Z_Construct_UScriptStruct_FGameplayTagReponsePair, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Negative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Negative_MetaData)) }; // 1010379492
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Positive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewProp_Negative,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTagResponseTableEntry",
		sizeof(FGameplayTagResponseTableEntry),
		alignof(FGameplayTagResponseTableEntry),
		Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameplayTagReponseTable::execTagResponseEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_GET_PROPERTY(FIntProperty,Z_Param_idx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TagResponseEvent(Z_Param_Tag,Z_Param_NewCount,Z_Param_ASC,Z_Param_idx);
		P_NATIVE_END;
	}
	void UGameplayTagReponseTable::StaticRegisterNativesUGameplayTagReponseTable()
	{
		UClass* Class = UGameplayTagReponseTable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TagResponseEvent", &UGameplayTagReponseTable::execTagResponseEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics
	{
		struct GameplayTagReponseTable_eventTagResponseEvent_Parms
		{
			FGameplayTag Tag;
			int32 NewCount;
			UAbilitySystemComponent* ASC;
			int32 idx;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTagReponseTable_eventTagResponseEvent_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTagReponseTable_eventTagResponseEvent_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTagReponseTable_eventTagResponseEvent_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_ASC_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTagReponseTable_eventTagResponseEvent_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_NewCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_ASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagReponseTable, nullptr, "TagResponseEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::GameplayTagReponseTable_eventTagResponseEvent_Parms), Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagReponseTable);
	UClass* Z_Construct_UClass_UGameplayTagReponseTable_NoRegister()
	{
		return UGameplayTagReponseTable::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagReponseTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagReponseTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTagReponseTable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTagReponseTable_TagResponseEvent, "TagResponseEvent" }, // 2097395420
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagReponseTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A data driven table for applying gameplay effects based on tag count. This allows designers to map a \n *\x09\"tag count\" -> \"response Gameplay Effect\" relationship.\n *\x09\n *\x09""For example, \"for every count of \"Status.Haste\" I get 1 level of GE_Response_Haste. This class facilitates\n *\x09""building this table and automatically registering and responding to tag events on the ability system component.\n */" },
		{ "IncludePath", "GameplayTagResponseTable.h" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
		{ "ToolTip", "A data driven table for applying gameplay effects based on tag count. This allows designers to map a\n\"tag count\" -> \"response Gameplay Effect\" relationship.\n\nFor example, \"for every count of \"Status.Haste\" I get 1 level of GE_Response_Haste. This class facilitates\nbuilding this table and automatically registering and responding to tag events on the ability system component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry, METADATA_PARAMS(nullptr, 0) }; // 1455006076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/GameplayTagResponseTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagReponseTable, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries_MetaData)) }; // 1455006076
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagReponseTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagReponseTable_Statics::NewProp_Entries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagReponseTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagReponseTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagReponseTable_Statics::ClassParams = {
		&UGameplayTagReponseTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTagReponseTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagReponseTable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagReponseTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagReponseTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagReponseTable()
	{
		if (!Z_Registration_Info_UClass_UGameplayTagReponseTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagReponseTable.OuterSingleton, Z_Construct_UClass_UGameplayTagReponseTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTagReponseTable.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayTagReponseTable>()
	{
		return UGameplayTagReponseTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagReponseTable);
	UGameplayTagReponseTable::~UGameplayTagReponseTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagReponsePair::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagReponsePair_Statics::NewStructOps, TEXT("GameplayTagReponsePair"), &Z_Registration_Info_UScriptStruct_GameplayTagReponsePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagReponsePair), 1010379492U) },
		{ FGameplayTagResponseTableEntry::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagResponseTableEntry_Statics::NewStructOps, TEXT("GameplayTagResponseTableEntry"), &Z_Registration_Info_UScriptStruct_GameplayTagResponseTableEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagResponseTableEntry), 1455006076U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagReponseTable, UGameplayTagReponseTable::StaticClass, TEXT("UGameplayTagReponseTable"), &Z_Registration_Info_UClass_UGameplayTagReponseTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagReponseTable), 4113322210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_2962769158(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayTagResponseTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
