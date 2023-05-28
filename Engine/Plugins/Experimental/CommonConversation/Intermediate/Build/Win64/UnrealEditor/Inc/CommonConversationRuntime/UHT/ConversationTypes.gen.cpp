// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationTypes.h"
#include "ConversationNode.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationTypes() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UEnum* Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAdvanceConversationRequest();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClientConversationMessage();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClientConversationMessagePayload();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClientConversationOptionEntry();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationBranchPoint();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationChoiceData();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationChoiceDataHandle();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationChoiceReference();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationNodeHandle();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationNodeParameterPair();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationParticipantEntry();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationParticipants();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationChoiceData;
class UScriptStruct* FConversationChoiceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationChoiceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationChoiceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationChoiceData, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationChoiceData"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationChoiceData.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationChoiceData>()
{
	return FConversationChoiceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationChoiceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationChoiceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationChoiceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationChoiceData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationChoiceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationChoiceData",
		sizeof(FConversationChoiceData),
		alignof(FConversationChoiceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationChoiceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationChoiceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationChoiceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationChoiceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationChoiceData.InnerSingleton, Z_Construct_UScriptStruct_FConversationChoiceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationChoiceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationChoiceDataHandle;
class UScriptStruct* FConversationChoiceDataHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationChoiceDataHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationChoiceDataHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationChoiceDataHandle, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationChoiceDataHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationChoiceDataHandle.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationChoiceDataHandle>()
{
	return FConversationChoiceDataHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//template<>\n//struct TStructOpsTypeTraits<FConversationChoiceData> : public TStructOpsTypeTraitsBase2<FConversationChoiceData>\n//{\n//\x09""enum\n//\x09{\n//\x09\x09WithNetSerializer = true\x09// For now this is REQUIRED for FConversationChoiceDataHandle net serialization to work\n//\x09};\n//};\n" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "template<>\nstruct TStructOpsTypeTraits<FConversationChoiceData> : public TStructOpsTypeTraitsBase2<FConversationChoiceData>\n{\n       enum\n       {\n               WithNetSerializer = true         For now this is REQUIRED for FConversationChoiceDataHandle net serialization to work\n       };\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationChoiceDataHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationChoiceDataHandle",
		sizeof(FConversationChoiceDataHandle),
		alignof(FConversationChoiceDataHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationChoiceDataHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationChoiceDataHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationChoiceDataHandle.InnerSingleton, Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationChoiceDataHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationParticipantEntry;
class UScriptStruct* FConversationParticipantEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationParticipantEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationParticipantEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationParticipantEntry, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationParticipantEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationParticipantEntry.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationParticipantEntry>()
{
	return FConversationParticipantEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationParticipantEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationParticipantEntry, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_ParticipantID_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_ParticipantID = { "ParticipantID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationParticipantEntry, ParticipantID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_ParticipantID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_ParticipantID_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewProp_ParticipantID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationParticipantEntry",
		sizeof(FConversationParticipantEntry),
		alignof(FConversationParticipantEntry),
		Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationParticipantEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationParticipantEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationParticipantEntry.InnerSingleton, Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationParticipantEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationParticipants;
class UScriptStruct* FConversationParticipants::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationParticipants.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationParticipants.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationParticipants, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationParticipants"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationParticipants.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationParticipants>()
{
	return FConversationParticipants::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationParticipants_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_List_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationParticipants_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationParticipants>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationParticipantEntry, METADATA_PARAMS(nullptr, 0) }; // 3790462426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewProp_List_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationParticipants, List), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewProp_List_MetaData)) }; // 3790462426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationParticipants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewProp_List_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewProp_List,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationParticipants_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationParticipants",
		sizeof(FConversationParticipants),
		alignof(FConversationParticipants),
		Z_Construct_UScriptStruct_FConversationParticipants_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationParticipants_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationParticipants_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationParticipants_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationParticipants()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationParticipants.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationParticipants.InnerSingleton, Z_Construct_UScriptStruct_FConversationParticipants_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationParticipants.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationNodeParameterPair;
class UScriptStruct* FConversationNodeParameterPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationNodeParameterPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationNodeParameterPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationNodeParameterPair, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationNodeParameterPair"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationNodeParameterPair.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationNodeParameterPair>()
{
	return FConversationNodeParameterPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationNodeParameterPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationNodeParameterPair, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationNodeParameterPair, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationNodeParameterPair",
		sizeof(FConversationNodeParameterPair),
		alignof(FConversationNodeParameterPair),
		Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationNodeParameterPair()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationNodeParameterPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationNodeParameterPair.InnerSingleton, Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationNodeParameterPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationChoiceReference;
class UScriptStruct* FConversationChoiceReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationChoiceReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationChoiceReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationChoiceReference, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationChoiceReference"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationChoiceReference.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationChoiceReference>()
{
	return FConversationChoiceReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationChoiceReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeReference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The conversation choice reference is the closest thing there is to a link at runtime for a choice. \n * Choices always map to a Task node, which is the NodeReference.  However some tasks could potentially\n * dynamically generate several possible choices.  In that case they would do so with a unique set of\n * NodeParameters.  These would allow one task, say, \"Sell N Items\", where it's one task offering 3\n * different items for sale, and so it needs to match-up those choices with what the user chooses later.\n * the NodeParameters would contain the dynamic data generated at runtime signifying for the server\n * what to choose.\n *\n * Luckily the user does not need to guard against cheating clients.  Any dynamically generated choice\n * is remembered by the server - so any choice selected dynamically can be verified by the server as\n * one it offered to the user.\n */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "The conversation choice reference is the closest thing there is to a link at runtime for a choice.\nChoices always map to a Task node, which is the NodeReference.  However some tasks could potentially\ndynamically generate several possible choices.  In that case they would do so with a unique set of\nNodeParameters.  These would allow one task, say, \"Sell N Items\", where it's one task offering 3\ndifferent items for sale, and so it needs to match-up those choices with what the user chooses later.\nthe NodeParameters would contain the dynamic data generated at runtime signifying for the server\nwhat to choose.\n\nLuckily the user does not need to guard against cheating clients.  Any dynamically generated choice\nis remembered by the server - so any choice selected dynamically can be verified by the server as\none it offered to the user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationChoiceReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeReference_MetaData[] = {
		{ "Category", "Conversation" },
		{ "Comment", "/** This is the node that we're targeting with our choice. */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "This is the node that we're targeting with our choice." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeReference = { "NodeReference", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationChoiceReference, NodeReference), Z_Construct_UScriptStruct_FConversationNodeHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeReference_MetaData)) }; // 2347894001
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeParameters_Inner = { "NodeParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationNodeParameterPair, METADATA_PARAMS(nullptr, 0) }; // 3894127766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeParameters_MetaData[] = {
		{ "Category", "Conversation" },
		{ "Comment", "/**\n\x09 * These are the parameters required by that node to be activated.  The \n\x09 * same node could potentially handle several dynamic choices it provides, so these\n     * parameters are used to uniquely identify the choice when the client responds to the server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "These are the parameters required by that node to be activated.  The\nsame node could potentially handle several dynamic choices it provides, so these\nparameters are used to uniquely identify the choice when the client responds to the server." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeParameters = { "NodeParameters", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationChoiceReference, NodeParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeParameters_MetaData)) }; // 3894127766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewProp_NodeParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationChoiceReference",
		sizeof(FConversationChoiceReference),
		alignof(FConversationChoiceReference),
		Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationChoiceReference()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationChoiceReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationChoiceReference.InnerSingleton, Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationChoiceReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdvanceConversationRequest;
class UScriptStruct* FAdvanceConversationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdvanceConversationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdvanceConversationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvanceConversationRequest, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("AdvanceConversationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AdvanceConversationRequest.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FAdvanceConversationRequest>()
{
	return FAdvanceConversationRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Choice;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvanceConversationRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_Choice_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAdvanceConversationRequest, Choice), Z_Construct_UScriptStruct_FConversationChoiceReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_Choice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_Choice_MetaData)) }; // 245536594
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_UserParameters_Inner = { "UserParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationNodeParameterPair, METADATA_PARAMS(nullptr, 0) }; // 3894127766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_UserParameters_MetaData[] = {
		{ "Category", "Conversation" },
		{ "Comment", "//@TODO: CONVERSATION: Not currently supported, TODO.\n" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "@TODO: CONVERSATION: Not currently supported, TODO." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_UserParameters = { "UserParameters", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAdvanceConversationRequest, UserParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_UserParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_UserParameters_MetaData)) }; // 3894127766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_Choice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_UserParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewProp_UserParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"AdvanceConversationRequest",
		sizeof(FAdvanceConversationRequest),
		alignof(FAdvanceConversationRequest),
		Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdvanceConversationRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_AdvanceConversationRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdvanceConversationRequest.InnerSingleton, Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AdvanceConversationRequest.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConversationChoiceType;
	static UEnum* EConversationChoiceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConversationChoiceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConversationChoiceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("EConversationChoiceType"));
		}
		return Z_Registration_Info_UEnum_EConversationChoiceType.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UEnum* StaticEnum<EConversationChoiceType>()
	{
		return EConversationChoiceType_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics::Enumerators[] = {
		{ "EConversationChoiceType::ServerOnly", (int64)EConversationChoiceType::ServerOnly },
		{ "EConversationChoiceType::UserChoiceAvailable", (int64)EConversationChoiceType::UserChoiceAvailable },
		{ "EConversationChoiceType::UserChoiceUnavailable", (int64)EConversationChoiceType::UserChoiceUnavailable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ServerOnly.Comment", "/**\n\x09 * ServerOnly choices are the choices the user shouldn't see and are filtered from the client.\n\x09 */" },
		{ "ServerOnly.Name", "EConversationChoiceType::ServerOnly" },
		{ "ServerOnly.ToolTip", "ServerOnly choices are the choices the user shouldn't see and are filtered from the client." },
		{ "UserChoiceAvailable.Name", "EConversationChoiceType::UserChoiceAvailable" },
		{ "UserChoiceUnavailable.Name", "EConversationChoiceType::UserChoiceUnavailable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		"EConversationChoiceType",
		"EConversationChoiceType",
		Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType()
	{
		if (!Z_Registration_Info_UEnum_EConversationChoiceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConversationChoiceType.InnerSingleton, Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConversationChoiceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientConversationOptionEntry;
class UScriptStruct* FClientConversationOptionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientConversationOptionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientConversationOptionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientConversationOptionEntry, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ClientConversationOptionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ClientConversationOptionEntry.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FClientConversationOptionEntry>()
{
	return FClientConversationOptionEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ChoiceText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceTags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChoiceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChoiceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceReference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The conversation option entry is what we send to the client, one entry per choice.\n */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "The conversation option entry is what we send to the client, one entry per choice." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientConversationOptionEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceText_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceText = { "ChoiceText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationOptionEntry, ChoiceText), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceTags_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceTags = { "ChoiceTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationOptionEntry, ChoiceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceType_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceType = { "ChoiceType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationOptionEntry, ChoiceType), Z_Construct_UEnum_CommonConversationRuntime_EConversationChoiceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceType_MetaData)) }; // 1133398146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceReference_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceReference = { "ChoiceReference", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationOptionEntry, ChoiceReference), Z_Construct_UScriptStruct_FConversationChoiceReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceReference_MetaData)) }; // 245536594
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ExtraData_Inner = { "ExtraData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationNodeParameterPair, METADATA_PARAMS(nullptr, 0) }; // 3894127766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ExtraData_MetaData[] = {
		{ "Category", "Conversation" },
		{ "Comment", "/**\n\x09 * Occasionally a choice might need to send down metadata that's entirely extra.\n     * It's just bonus information for the client to do things like show more information\n     * in the UI.  This information is not used on the return to the server to make the choice.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "Occasionally a choice might need to send down metadata that's entirely extra.\nIt's just bonus information for the client to do things like show more information\nin the UI.  This information is not used on the return to the server to make the choice." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationOptionEntry, ExtraData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ExtraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ExtraData_MetaData)) }; // 3894127766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ChoiceReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ExtraData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewProp_ExtraData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ClientConversationOptionEntry",
		sizeof(FClientConversationOptionEntry),
		alignof(FClientConversationOptionEntry),
		Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientConversationOptionEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ClientConversationOptionEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientConversationOptionEntry.InnerSingleton, Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClientConversationOptionEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationBranchPoint;
class UScriptStruct* FConversationBranchPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationBranchPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationBranchPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationBranchPoint, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationBranchPoint"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationBranchPoint.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationBranchPoint>()
{
	return FConversationBranchPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationBranchPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnScopeStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnScopeStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnScopeStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientChoice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientChoice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * You can think of the FConversationBranchPoint as the owner of FClientConversationOptionEntry.\n * We don't send this one to the client though, we store temporary state here so that when a user\n * picks a choice there may be other things we need to know or store for actions we need to take\n * due to the user picking this choice.  For example, some choices may introduce needing to\n * 'push' a new scope so that when that subtree terminates we return to the previous point, like\n * a stack.  There's no reason the client needs to understand this, so we just store it here.\n */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "You can think of the FConversationBranchPoint as the owner of FClientConversationOptionEntry.\nWe don't send this one to the client though, we store temporary state here so that when a user\npicks a choice there may be other things we need to know or store for actions we need to take\ndue to the user picking this choice.  For example, some choices may introduce needing to\n'push' a new scope so that when that subtree terminates we return to the previous point, like\na stack.  There's no reason the client needs to understand this, so we just store it here." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationBranchPoint>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ReturnScopeStack_Inner = { "ReturnScopeStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationNodeHandle, METADATA_PARAMS(nullptr, 0) }; // 2347894001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ReturnScopeStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ReturnScopeStack = { "ReturnScopeStack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationBranchPoint, ReturnScopeStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ReturnScopeStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ReturnScopeStack_MetaData)) }; // 2347894001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ClientChoice_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ClientChoice = { "ClientChoice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationBranchPoint, ClientChoice), Z_Construct_UScriptStruct_FClientConversationOptionEntry, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ClientChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ClientChoice_MetaData)) }; // 2053502488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ReturnScopeStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ReturnScopeStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewProp_ClientChoice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationBranchPoint",
		sizeof(FConversationBranchPoint),
		alignof(FConversationBranchPoint),
		Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationBranchPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationBranchPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationBranchPoint.InnerSingleton, Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationBranchPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientConversationMessage;
class UScriptStruct* FClientConversationMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientConversationMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientConversationMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientConversationMessage, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ClientConversationMessage"));
	}
	return Z_Registration_Info_UScriptStruct_ClientConversationMessage.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FClientConversationMessage>()
{
	return FClientConversationMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClientConversationMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ParticipantDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetadataParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetadataParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientConversationMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_SpeakerID_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationMessage, SpeakerID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_SpeakerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_SpeakerID_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_ParticipantDisplayName_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_ParticipantDisplayName = { "ParticipantDisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationMessage, ParticipantDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_ParticipantDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_ParticipantDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationMessage, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_MetadataParameters_Inner = { "MetadataParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationNodeParameterPair, METADATA_PARAMS(nullptr, 0) }; // 3894127766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_MetadataParameters_MetaData[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Additional metadata for this message (e.g. Emotion: \"Angry\"/\"Happy\")\n" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
		{ "ToolTip", "Additional metadata for this message (e.g. Emotion: \"Angry\"/\"Happy\")" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_MetadataParameters = { "MetadataParameters", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationMessage, MetadataParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_MetadataParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_MetadataParameters_MetaData)) }; // 3894127766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientConversationMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_SpeakerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_ParticipantDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_MetadataParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewProp_MetadataParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientConversationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ClientConversationMessage",
		sizeof(FClientConversationMessage),
		alignof(FClientConversationMessage),
		Z_Construct_UScriptStruct_FClientConversationMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientConversationMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_ClientConversationMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientConversationMessage.InnerSingleton, Z_Construct_UScriptStruct_FClientConversationMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClientConversationMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientConversationMessagePayload;
class UScriptStruct* FClientConversationMessagePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientConversationMessagePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientConversationMessagePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientConversationMessagePayload, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ClientConversationMessagePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ClientConversationMessagePayload.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FClientConversationMessagePayload>()
{
	return FClientConversationMessagePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Participants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientConversationMessagePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationMessagePayload, Message), Z_Construct_UScriptStruct_FClientConversationMessage, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Message_MetaData)) }; // 1141337253
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Participants_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationMessagePayload, Participants), Z_Construct_UScriptStruct_FConversationParticipants, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Participants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Participants_MetaData)) }; // 3858117654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_CurrentNode_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_CurrentNode = { "CurrentNode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationMessagePayload, CurrentNode), Z_Construct_UScriptStruct_FConversationNodeHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_CurrentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_CurrentNode_MetaData)) }; // 2347894001
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClientConversationOptionEntry, METADATA_PARAMS(nullptr, 0) }; // 2053502488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientConversationMessagePayload, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Options_MetaData)) }; // 2053502488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Participants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_CurrentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ClientConversationMessagePayload",
		sizeof(FClientConversationMessagePayload),
		alignof(FClientConversationMessagePayload),
		Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientConversationMessagePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ClientConversationMessagePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientConversationMessagePayload.InnerSingleton, Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClientConversationMessagePayload.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_Statics::EnumInfo[] = {
		{ EConversationChoiceType_StaticEnum, TEXT("EConversationChoiceType"), &Z_Registration_Info_UEnum_EConversationChoiceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1133398146U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_Statics::ScriptStructInfo[] = {
		{ FConversationChoiceData::StaticStruct, Z_Construct_UScriptStruct_FConversationChoiceData_Statics::NewStructOps, TEXT("ConversationChoiceData"), &Z_Registration_Info_UScriptStruct_ConversationChoiceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationChoiceData), 1396935416U) },
		{ FConversationChoiceDataHandle::StaticStruct, Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics::NewStructOps, TEXT("ConversationChoiceDataHandle"), &Z_Registration_Info_UScriptStruct_ConversationChoiceDataHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationChoiceDataHandle), 294383577U) },
		{ FConversationParticipantEntry::StaticStruct, Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics::NewStructOps, TEXT("ConversationParticipantEntry"), &Z_Registration_Info_UScriptStruct_ConversationParticipantEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationParticipantEntry), 3790462426U) },
		{ FConversationParticipants::StaticStruct, Z_Construct_UScriptStruct_FConversationParticipants_Statics::NewStructOps, TEXT("ConversationParticipants"), &Z_Registration_Info_UScriptStruct_ConversationParticipants, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationParticipants), 3858117654U) },
		{ FConversationNodeParameterPair::StaticStruct, Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics::NewStructOps, TEXT("ConversationNodeParameterPair"), &Z_Registration_Info_UScriptStruct_ConversationNodeParameterPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationNodeParameterPair), 3894127766U) },
		{ FConversationChoiceReference::StaticStruct, Z_Construct_UScriptStruct_FConversationChoiceReference_Statics::NewStructOps, TEXT("ConversationChoiceReference"), &Z_Registration_Info_UScriptStruct_ConversationChoiceReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationChoiceReference), 245536594U) },
		{ FAdvanceConversationRequest::StaticStruct, Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics::NewStructOps, TEXT("AdvanceConversationRequest"), &Z_Registration_Info_UScriptStruct_AdvanceConversationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdvanceConversationRequest), 714291252U) },
		{ FClientConversationOptionEntry::StaticStruct, Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics::NewStructOps, TEXT("ClientConversationOptionEntry"), &Z_Registration_Info_UScriptStruct_ClientConversationOptionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientConversationOptionEntry), 2053502488U) },
		{ FConversationBranchPoint::StaticStruct, Z_Construct_UScriptStruct_FConversationBranchPoint_Statics::NewStructOps, TEXT("ConversationBranchPoint"), &Z_Registration_Info_UScriptStruct_ConversationBranchPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationBranchPoint), 3640279551U) },
		{ FClientConversationMessage::StaticStruct, Z_Construct_UScriptStruct_FClientConversationMessage_Statics::NewStructOps, TEXT("ClientConversationMessage"), &Z_Registration_Info_UScriptStruct_ClientConversationMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientConversationMessage), 1141337253U) },
		{ FClientConversationMessagePayload::StaticStruct, Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics::NewStructOps, TEXT("ClientConversationMessagePayload"), &Z_Registration_Info_UScriptStruct_ClientConversationMessagePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientConversationMessagePayload), 117888623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_3861510809(TEXT("/Script/CommonConversationRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
