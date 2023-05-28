// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNode();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagSource();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayTagTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGameplayTagTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagTableRow;
class UScriptStruct* FGameplayTagTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagTableRow, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagTableRow.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagTableRow>()
{
	return FGameplayTagTableRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevComment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DevComment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple struct for a table row in the gameplay tag table and element in the ini list */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple struct for a table row in the gameplay tag table and element in the ini list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagTableRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "Comment", "/** Tag specified in the table */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Tag specified in the table" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagTableRow, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "Comment", "/** Developer comment clarifying the usage of a particular tag, not user facing */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Developer comment clarifying the usage of a particular tag, not user facing" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment = { "DevComment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagTableRow, DevComment), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GameplayTagTableRow",
		sizeof(FGameplayTagTableRow),
		alignof(FGameplayTagTableRow),
		Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagTableRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagTableRow.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagTableRow.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRestrictedGameplayTagTableRow>() == std::is_polymorphic<FGameplayTagTableRow>(), "USTRUCT FRestrictedGameplayTagTableRow cannot be polymorphic unless super FGameplayTagTableRow is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow;
class UScriptStruct* FRestrictedGameplayTagTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("RestrictedGameplayTagTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FRestrictedGameplayTagTableRow>()
{
	return FRestrictedGameplayTagTableRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNonRestrictedChildren_MetaData[];
#endif
		static void NewProp_bAllowNonRestrictedChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNonRestrictedChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple struct for a table row in the restricted gameplay tag table and element in the ini list */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple struct for a table row in the restricted gameplay tag table and element in the ini list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRestrictedGameplayTagTableRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "Comment", "/** Tag specified in the table */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Tag specified in the table" },
	};
#endif
	void Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_SetBit(void* Obj)
	{
		((FRestrictedGameplayTagTableRow*)Obj)->bAllowNonRestrictedChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren = { "bAllowNonRestrictedChildren", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRestrictedGameplayTagTableRow), &Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		Z_Construct_UScriptStruct_FGameplayTagTableRow,
		&NewStructOps,
		"RestrictedGameplayTagTableRow",
		sizeof(FRestrictedGameplayTagTableRow),
		alignof(FRestrictedGameplayTagTableRow),
		Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow()
	{
		if (!Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.InnerSingleton, Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTagSourceType;
	static UEnum* EGameplayTagSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagSourceType"));
		}
		return Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagSourceType>()
	{
		return EGameplayTagSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enumerators[] = {
		{ "EGameplayTagSourceType::Native", (int64)EGameplayTagSourceType::Native },
		{ "EGameplayTagSourceType::DefaultTagList", (int64)EGameplayTagSourceType::DefaultTagList },
		{ "EGameplayTagSourceType::TagList", (int64)EGameplayTagSourceType::TagList },
		{ "EGameplayTagSourceType::RestrictedTagList", (int64)EGameplayTagSourceType::RestrictedTagList },
		{ "EGameplayTagSourceType::DataTable", (int64)EGameplayTagSourceType::DataTable },
		{ "EGameplayTagSourceType::Invalid", (int64)EGameplayTagSourceType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enum_MetaDataParams[] = {
		{ "DataTable.Comment", "// Restricted tags from an ini\n" },
		{ "DataTable.Name", "EGameplayTagSourceType::DataTable" },
		{ "DataTable.ToolTip", "Restricted tags from an ini" },
		{ "DefaultTagList.Comment", "// Was added from C++ code\n" },
		{ "DefaultTagList.Name", "EGameplayTagSourceType::DefaultTagList" },
		{ "DefaultTagList.ToolTip", "Was added from C++ code" },
		{ "Invalid.Comment", "// From a DataTable\n" },
		{ "Invalid.Name", "EGameplayTagSourceType::Invalid" },
		{ "Invalid.ToolTip", "From a DataTable" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "Native.Name", "EGameplayTagSourceType::Native" },
		{ "RestrictedTagList.Comment", "// Another tag list from an ini in tags/*.ini\n" },
		{ "RestrictedTagList.Name", "EGameplayTagSourceType::RestrictedTagList" },
		{ "RestrictedTagList.ToolTip", "Another tag list from an ini in tags.ini" },
		{ "TagList.Comment", "// The default tag list in DefaultGameplayTags.ini\n" },
		{ "TagList.Name", "EGameplayTagSourceType::TagList" },
		{ "TagList.ToolTip", "The default tag list in DefaultGameplayTags.ini" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		"EGameplayTagSourceType",
		"EGameplayTagSourceType",
		Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton, Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTagSelectionType;
	static UEnum* EGameplayTagSelectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagSelectionType"));
		}
		return Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagSelectionType>()
	{
		return EGameplayTagSelectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enumerators[] = {
		{ "EGameplayTagSelectionType::None", (int64)EGameplayTagSelectionType::None },
		{ "EGameplayTagSelectionType::NonRestrictedOnly", (int64)EGameplayTagSelectionType::NonRestrictedOnly },
		{ "EGameplayTagSelectionType::RestrictedOnly", (int64)EGameplayTagSelectionType::RestrictedOnly },
		{ "EGameplayTagSelectionType::All", (int64)EGameplayTagSelectionType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EGameplayTagSelectionType::All" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "None.Name", "EGameplayTagSelectionType::None" },
		{ "NonRestrictedOnly.Name", "EGameplayTagSelectionType::NonRestrictedOnly" },
		{ "RestrictedOnly.Name", "EGameplayTagSelectionType::RestrictedOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		"EGameplayTagSelectionType",
		"EGameplayTagSelectionType",
		Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton, Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagSource;
class UScriptStruct* FGameplayTagSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagSource, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagSource"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagSource.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagSource>()
{
	return FGameplayTagSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTagList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceTagList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRestrictedTagList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceRestrictedTagList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct defining where gameplay tags are loaded/saved from. Mostly for the editor */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Struct defining where gameplay tags are loaded/saved from. Mostly for the editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "Comment", "/** Name of this source */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Name of this source" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagSource, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_MetaData[] = {
		{ "Comment", "/** Type of this source */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Type of this source" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagSource, SourceType), Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_MetaData)) }; // 2467261521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList_MetaData[] = {
		{ "Comment", "/** If this is bound to an ini object for saving, this is the one */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "If this is bound to an ini object for saving, this is the one" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList = { "SourceTagList", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagSource, SourceTagList), Z_Construct_UClass_UGameplayTagsList_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList_MetaData[] = {
		{ "Comment", "/** If this has restricted tags and is bound to an ini object for saving, this is the one */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "If this has restricted tags and is bound to an ini object for saving, this is the one" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList = { "SourceRestrictedTagList", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagSource, SourceRestrictedTagList), Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagSource",
		sizeof(FGameplayTagSource),
		alignof(FGameplayTagSource),
		Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagSource()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagSource.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagNode;
class UScriptStruct* FGameplayTagNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagNode, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagNode"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagNode.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagNode>()
{
	return FGameplayTagNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple tree node for gameplay tags, this stores metadata about specific tags */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple tree node for gameplay tags, this stores metadata about specific tags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagNode",
		sizeof(FGameplayTagNode),
		alignof(FGameplayTagNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagNode.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagNode.InnerSingleton;
	}
	void UGameplayTagsManager::StaticRegisterNativesUGameplayTagsManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsManager);
	UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister()
	{
		return UGameplayTagsManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagSources_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagSources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagSources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TagSources;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameplayTagTables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagTables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTagTables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Holds data about the tag dictionary, is in a singleton UObject */" },
		{ "IncludePath", "GameplayTagsManager.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Holds data about the tag dictionary, is in a singleton UObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_ValueProp = { "TagSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGameplayTagSource, METADATA_PARAMS(nullptr, 0) }; // 4274384593
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_Key_KeyProp = { "TagSources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_MetaData[] = {
		{ "Comment", "/** Map of gameplay tag source names to source objects */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Map of gameplay tag source names to source objects" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources = { "TagSources", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsManager, TagSources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_MetaData)) }; // 4274384593
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_Inner = { "GameplayTagTables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_MetaData[] = {
		{ "Comment", "/** Holds all of the valid gameplay-related tags that can be applied to assets */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Holds all of the valid gameplay-related tags that can be applied to assets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables = { "GameplayTagTables", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsManager, GameplayTagTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsManager_Statics::ClassParams = {
		&UGameplayTagsManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsManager()
	{
		if (!Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton, Z_Construct_UClass_UGameplayTagsManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsManager>()
	{
		return UGameplayTagsManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsManager);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::EnumInfo[] = {
		{ EGameplayTagSourceType_StaticEnum, TEXT("EGameplayTagSourceType"), &Z_Registration_Info_UEnum_EGameplayTagSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2467261521U) },
		{ EGameplayTagSelectionType_StaticEnum, TEXT("EGameplayTagSelectionType"), &Z_Registration_Info_UEnum_EGameplayTagSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 424438735U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagTableRow::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewStructOps, TEXT("GameplayTagTableRow"), &Z_Registration_Info_UScriptStruct_GameplayTagTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagTableRow), 1311950329U) },
		{ FRestrictedGameplayTagTableRow::StaticStruct, Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewStructOps, TEXT("RestrictedGameplayTagTableRow"), &Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRestrictedGameplayTagTableRow), 46145526U) },
		{ FGameplayTagSource::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewStructOps, TEXT("GameplayTagSource"), &Z_Registration_Info_UScriptStruct_GameplayTagSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagSource), 4274384593U) },
		{ FGameplayTagNode::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagNode_Statics::NewStructOps, TEXT("GameplayTagNode"), &Z_Registration_Info_UScriptStruct_GameplayTagNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagNode), 3879842576U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsManager, UGameplayTagsManager::StaticClass, TEXT("UGameplayTagsManager"), &Z_Registration_Info_UClass_UGameplayTagsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsManager), 590264103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_2098225521(TEXT("/Script/GameplayTags"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
