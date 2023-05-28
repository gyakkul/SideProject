// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigInfluenceMap.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigInfluenceMap() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceEntry();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceEntryModifier();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMap();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInfluenceEntry;
class UScriptStruct* FRigInfluenceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInfluenceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceEntry, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInfluenceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceEntry.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInfluenceEntry>()
{
	return FRigInfluenceEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInfluenceEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigInfluenceEntry, Source), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_Source_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList_Inner = { "AffectedList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList = { "AffectedList", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigInfluenceEntry, AffectedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewProp_AffectedList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigInfluenceEntry",
		sizeof(FRigInfluenceEntry),
		alignof(FRigInfluenceEntry),
		Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_RigInfluenceEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInfluenceEntry.InnerSingleton, Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigInfluenceEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier;
class UScriptStruct* FRigInfluenceEntryModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInfluenceEntryModifier"));
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInfluenceEntryModifier>()
{
	return FRigInfluenceEntryModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInfluenceEntryModifier>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList_Inner = { "AffectedList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList_MetaData[] = {
		{ "Category", "Inversion" },
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList = { "AffectedList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigInfluenceEntryModifier, AffectedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewProp_AffectedList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigInfluenceEntryModifier",
		sizeof(FRigInfluenceEntryModifier),
		alignof(FRigInfluenceEntryModifier),
		Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceEntryModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.InnerSingleton, Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInfluenceMap;
class UScriptStruct* FRigInfluenceMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInfluenceMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceMap, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInfluenceMap"));
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceMap.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInfluenceMap>()
{
	return FRigInfluenceMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigInfluenceMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyToIndex_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KeyToIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInfluenceMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_EventName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigInfluenceMap, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigInfluenceEntry, METADATA_PARAMS(nullptr, 0) }; // 2141942287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigInfluenceMap, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries_MetaData)) }; // 2141942287
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_ValueProp = { "KeyToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_Key_KeyProp = { "KeyToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex = { "KeyToIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigInfluenceMap, KeyToIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewProp_KeyToIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigInfluenceMap",
		sizeof(FRigInfluenceMap),
		alignof(FRigInfluenceMap),
		Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMap()
	{
		if (!Z_Registration_Info_UScriptStruct_RigInfluenceMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInfluenceMap.InnerSingleton, Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigInfluenceMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent;
class UScriptStruct* FRigInfluenceMapPerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigInfluenceMapPerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigInfluenceMapPerEvent>()
{
	return FRigInfluenceMapPerEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Maps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Maps;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventToIndex_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventToIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EventToIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigInfluenceMapPerEvent>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigInfluenceMap, METADATA_PARAMS(nullptr, 0) }; // 3838648350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigInfluenceMapPerEvent, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps_MetaData)) }; // 3838648350
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_ValueProp = { "EventToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_Key_KeyProp = { "EventToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigInfluenceMap.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex = { "EventToIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigInfluenceMapPerEvent, EventToIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_Maps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewProp_EventToIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigInfluenceMapPerEvent",
		sizeof(FRigInfluenceMapPerEvent),
		alignof(FRigInfluenceMapPerEvent),
		Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.InnerSingleton, Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_Statics::ScriptStructInfo[] = {
		{ FRigInfluenceEntry::StaticStruct, Z_Construct_UScriptStruct_FRigInfluenceEntry_Statics::NewStructOps, TEXT("RigInfluenceEntry"), &Z_Registration_Info_UScriptStruct_RigInfluenceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInfluenceEntry), 2141942287U) },
		{ FRigInfluenceEntryModifier::StaticStruct, Z_Construct_UScriptStruct_FRigInfluenceEntryModifier_Statics::NewStructOps, TEXT("RigInfluenceEntryModifier"), &Z_Registration_Info_UScriptStruct_RigInfluenceEntryModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInfluenceEntryModifier), 2562240172U) },
		{ FRigInfluenceMap::StaticStruct, Z_Construct_UScriptStruct_FRigInfluenceMap_Statics::NewStructOps, TEXT("RigInfluenceMap"), &Z_Registration_Info_UScriptStruct_RigInfluenceMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInfluenceMap), 3838648350U) },
		{ FRigInfluenceMapPerEvent::StaticStruct, Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent_Statics::NewStructOps, TEXT("RigInfluenceMapPerEvent"), &Z_Registration_Info_UScriptStruct_RigInfluenceMapPerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigInfluenceMapPerEvent), 2658910230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_427827085(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigInfluenceMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
