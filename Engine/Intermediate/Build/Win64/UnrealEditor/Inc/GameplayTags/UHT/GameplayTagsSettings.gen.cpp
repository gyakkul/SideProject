// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagsSettings.h"
#include "../Public/GameplayTagRedirectors.h"
#include "GameplayTagsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedConfigInfo();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap;
class UScriptStruct* FGameplayTagCategoryRemap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagCategoryRemap"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagCategoryRemap>()
{
	return FGameplayTagCategoryRemap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseCategory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemapCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemapCategories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagCategoryRemap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory = { "BaseCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagCategoryRemap, BaseCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_Inner = { "RemapCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories = { "RemapCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagCategoryRemap, RemapCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagCategoryRemap",
		sizeof(FGameplayTagCategoryRemap),
		alignof(FGameplayTagCategoryRemap),
		Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap.InnerSingleton;
	}
	void UGameplayTagsList::StaticRegisterNativesUGameplayTagsList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsList);
	UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister()
	{
		return UGameplayTagsList::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigFileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTagList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for storing a list of gameplay tags as an ini list. This is used for both the central list and additional lists */" },
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Base class for storing a list of gameplay tags as an ini list. This is used for both the central list and additional lists" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData[] = {
		{ "Comment", "/** Relative path to the ini file that is backing this list */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Relative path to the ini file that is backing this list" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName = { "ConfigFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsList, ConfigFileName), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_Inner = { "GameplayTagList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagTableRow, METADATA_PARAMS(nullptr, 0) }; // 1311950329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** List of tags saved to this file */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of tags saved to this file" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList = { "GameplayTagList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsList, GameplayTagList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_MetaData)) }; // 1311950329
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsList_Statics::ClassParams = {
		&UGameplayTagsList::StaticClass,
		"GameplayTagsList",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsList()
	{
		if (!Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton, Z_Construct_UClass_UGameplayTagsList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTagsList.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsList>()
	{
		return UGameplayTagsList::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsList);
	UGameplayTagsList::~UGameplayTagsList() {}
	void URestrictedGameplayTagsList::StaticRegisterNativesURestrictedGameplayTagsList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URestrictedGameplayTagsList);
	UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister()
	{
		return URestrictedGameplayTagsList::StaticClass();
	}
	struct Z_Construct_UClass_URestrictedGameplayTagsList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigFileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RestrictedGameplayTagList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedGameplayTagList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictedGameplayTagList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URestrictedGameplayTagsList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedGameplayTagsList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for storing a list of restricted gameplay tags as an ini list. This is used for both the central list and additional lists */" },
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Base class for storing a list of restricted gameplay tags as an ini list. This is used for both the central list and additional lists" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData[] = {
		{ "Comment", "/** Relative path to the ini file that is backing this list */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Relative path to the ini file that is backing this list" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName = { "ConfigFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URestrictedGameplayTagsList, ConfigFileName), METADATA_PARAMS(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_Inner = { "RestrictedGameplayTagList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow, METADATA_PARAMS(nullptr, 0) }; // 46145526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** List of restricted tags saved to this file */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of restricted tags saved to this file" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList = { "RestrictedGameplayTagList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URestrictedGameplayTagsList, RestrictedGameplayTagList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_MetaData)) }; // 46145526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URestrictedGameplayTagsList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestrictedGameplayTagsList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::ClassParams = {
		&URestrictedGameplayTagsList::StaticClass,
		"GameplayTags",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URestrictedGameplayTagsList()
	{
		if (!Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton, Z_Construct_UClass_URestrictedGameplayTagsList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URestrictedGameplayTagsList.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<URestrictedGameplayTagsList>()
	{
		return URestrictedGameplayTagsList::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URestrictedGameplayTagsList);
	URestrictedGameplayTagsList::~URestrictedGameplayTagsList() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RestrictedConfigInfo;
class UScriptStruct* FRestrictedConfigInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedConfigInfo, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("RestrictedConfigInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FRestrictedConfigInfo>()
{
	return FRestrictedConfigInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RestrictedConfigName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Owners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Owners;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRestrictedConfigInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName = { "RestrictedConfigName", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRestrictedConfigInfo, RestrictedConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_Inner = { "Owners", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners = { "Owners", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRestrictedConfigInfo, Owners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"RestrictedConfigInfo",
		sizeof(FRestrictedConfigInfo),
		alignof(FRestrictedConfigInfo),
		Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRestrictedConfigInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.InnerSingleton, Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RestrictedConfigInfo.InnerSingleton;
	}
	void UGameplayTagsSettings::StaticRegisterNativesUGameplayTagsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsSettings);
	UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister()
	{
		return UGameplayTagsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportTagsFromConfig_MetaData[];
#endif
		static void NewProp_ImportTagsFromConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportTagsFromConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarnOnInvalidTags_MetaData[];
#endif
		static void NewProp_WarnOnInvalidTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WarnOnInvalidTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearInvalidTags_MetaData[];
#endif
		static void NewProp_ClearInvalidTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearInvalidTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowEditorTagUnloading_MetaData[];
#endif
		static void NewProp_AllowEditorTagUnloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowEditorTagUnloading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowGameTagUnloading_MetaData[];
#endif
		static void NewProp_AllowGameTagUnloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowGameTagUnloading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastReplication_MetaData[];
#endif
		static void NewProp_FastReplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FastReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidTagCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InvalidTagCharacters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryRemapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryRemapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoryRemapping;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagTableList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagTableList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTagTableList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagRedirects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagRedirects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTagRedirects;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CommonlyReplicatedTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonlyReplicatedTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonlyReplicatedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBitsForContainerSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBitsForContainerSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetIndexFirstBitSegment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NetIndexFirstBitSegment;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RestrictedConfigFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedConfigFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictedConfigFiles;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictedTagList_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RestrictedTagList;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTagsList,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Class for importing GameplayTags directly from a config file.\n *\x09""FGameplayTagsEditorModule::StartupModule adds this class to the Project Settings menu to be edited.\n *\x09""Editing this in Project Settings will output changes to Config/DefaultGameplayTags.ini.\n *\x09\n *\x09Primary advantages of this approach are:\n *\x09-Adding new tags doesn't require checking out external and editing file (CSV or xls) then reimporting.\n *\x09-New tags are mergeable since .ini are text and non exclusive checkout.\n *\x09\n *\x09To do:\n *\x09-Better support could be added for adding new tags. We could match existing tags and autocomplete subtags as\n *\x09the user types (e.g, autocomplete 'Damage.Physical' as the user is adding a 'Damage.Physical.Slash' tag).\n *\x09\n */" },
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Class for importing GameplayTags directly from a config file.\nFGameplayTagsEditorModule::StartupModule adds this class to the Project Settings menu to be edited.\nEditing this in Project Settings will output changes to Config/DefaultGameplayTags.ini.\n\nPrimary advantages of this approach are:\n-Adding new tags doesn't require checking out external and editing file (CSV or xls) then reimporting.\n-New tags are mergeable since .ini are text and non exclusive checkout.\n\nTo do:\n-Better support could be added for adding new tags. We could match existing tags and autocomplete subtags as\nthe user types (e.g, autocomplete 'Damage.Physical' as the user is adding a 'Damage.Physical.Slash' tag)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** If true, will import tags from ini files in the config/tags folder */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will import tags from ini files in the config/tags folder" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->ImportTagsFromConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig = { "ImportTagsFromConfig", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** If true, will give load warnings when reading in saved tag references that are not in the dictionary */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will give load warnings when reading in saved tag references that are not in the dictionary" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->WarnOnInvalidTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags = { "WarnOnInvalidTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** If true, will clear any invalid tags when reading in saved tag references that are not in the dictionary */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will clear any invalid tags when reading in saved tag references that are not in the dictionary" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->ClearInvalidTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags = { "ClearInvalidTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "Comment", "/** If true, will allow unloading of tags in the editor when plugins are removed */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will allow unloading of tags in the editor when plugins are removed" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->AllowEditorTagUnloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading = { "AllowEditorTagUnloading", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "Comment", "/** If true, will allow unloading of tags in a non-editor gebuild when plugins are removed, this is potentially unsafe and affects requests to unload during play in editor */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will allow unloading of tags in a non-editor gebuild when plugins are removed, this is potentially unsafe and affects requests to unload during play in editor" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->AllowGameTagUnloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading = { "AllowGameTagUnloading", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** If true, will replicate gameplay tags by index instead of name. For this to work, tags must be identical on client and server */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will replicate gameplay tags by index instead of name. For this to work, tags must be identical on client and server" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->FastReplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication = { "FastReplication", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_InvalidTagCharacters_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** These characters cannot be used in gameplay tags, in addition to special ones like newline*/" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "These characters cannot be used in gameplay tags, in addition to special ones like newline" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_InvalidTagCharacters = { "InvalidTagCharacters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, InvalidTagCharacters), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_InvalidTagCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_InvalidTagCharacters_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_Inner = { "CategoryRemapping", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap, METADATA_PARAMS(nullptr, 0) }; // 2755409804
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping = { "CategoryRemapping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, CategoryRemapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_MetaData)) }; // 2755409804
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_Inner = { "GameplayTagTableList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** List of data tables to load tags from */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of data tables to load tags from" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList = { "GameplayTagTableList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, GameplayTagTableList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_Inner = { "GameplayTagRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagRedirect, METADATA_PARAMS(nullptr, 0) }; // 633842574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** List of active tag redirects */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of active tag redirects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects = { "GameplayTagRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, GameplayTagRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_MetaData)) }; // 633842574
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_Inner = { "CommonlyReplicatedTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** List of most frequently replicated tags */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of most frequently replicated tags" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags = { "CommonlyReplicatedTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, CommonlyReplicatedTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** Numbers of bits to use for replicating container size, set this based on how large your containers tend to be */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Numbers of bits to use for replicating container size, set this based on how large your containers tend to be" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize = { "NumBitsForContainerSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, NumBitsForContainerSize), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "Comment", "/** The length in bits of the first segment when net serializing tags. We will serialize NetIndexFirstBitSegment + 1 bit to indicate \"more\", which is slower to replicate */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "The length in bits of the first segment when net serializing tags. We will serialize NetIndexFirstBitSegment + 1 bit to indicate \"more\", which is slower to replicate" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment = { "NetIndexFirstBitSegment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, NetIndexFirstBitSegment), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_Inner = { "RestrictedConfigFiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRestrictedConfigInfo, METADATA_PARAMS(nullptr, 0) }; // 2564228862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "Comment", "/** A list of .ini files used to store restricted gameplay tags. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "A list of .ini files used to store restricted gameplay tags." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles = { "RestrictedConfigFiles", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, RestrictedConfigFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_MetaData)) }; // 2564228862
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "Comment", "/** Restricted Gameplay Tags.\n\x09 * \n\x09 *  Restricted tags are intended to be top level tags that are important for your data hierarchy and modified by very few people.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Restricted Gameplay Tags.\n\nRestricted tags are intended to be top level tags that are important for your data hierarchy and modified by very few people." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList = { "RestrictedTagList", nullptr, (EPropertyFlags)0x0010040800002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, RestrictedTagList), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ClearInvalidTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowEditorTagUnloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_AllowGameTagUnloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_InvalidTagCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsSettings_Statics::ClassParams = {
		&UGameplayTagsSettings::StaticClass,
		"GameplayTags",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsSettings()
	{
		if (!Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton, Z_Construct_UClass_UGameplayTagsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTagsSettings.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsSettings>()
	{
		return UGameplayTagsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsSettings);
	UGameplayTagsSettings::~UGameplayTagsSettings() {}
	void UGameplayTagsDeveloperSettings::StaticRegisterNativesUGameplayTagsDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsDeveloperSettings);
	UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister()
	{
		return UGameplayTagsDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperConfigName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FavoriteTagSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FavoriteTagSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Gameplay Tag Editing" },
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName = { "DeveloperConfigName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsDeveloperSettings, DeveloperConfigName), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_FavoriteTagSource_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Stores the favorite tag source, used as the default ini when adding new tags, can be toggled on/off using the button next to the tag source picker */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Stores the favorite tag source, used as the default ini when adding new tags, can be toggled on/off using the button next to the tag source picker" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_FavoriteTagSource = { "FavoriteTagSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsDeveloperSettings, FavoriteTagSource), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_FavoriteTagSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_FavoriteTagSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_FavoriteTagSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::ClassParams = {
		&UGameplayTagsDeveloperSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton, Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsDeveloperSettings>()
	{
		return UGameplayTagsDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsDeveloperSettings);
	UGameplayTagsDeveloperSettings::~UGameplayTagsDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagCategoryRemap::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewStructOps, TEXT("GameplayTagCategoryRemap"), &Z_Registration_Info_UScriptStruct_GameplayTagCategoryRemap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagCategoryRemap), 2755409804U) },
		{ FRestrictedConfigInfo::StaticStruct, Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewStructOps, TEXT("RestrictedConfigInfo"), &Z_Registration_Info_UScriptStruct_RestrictedConfigInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRestrictedConfigInfo), 2564228862U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsList, UGameplayTagsList::StaticClass, TEXT("UGameplayTagsList"), &Z_Registration_Info_UClass_UGameplayTagsList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsList), 3054061817U) },
		{ Z_Construct_UClass_URestrictedGameplayTagsList, URestrictedGameplayTagsList::StaticClass, TEXT("URestrictedGameplayTagsList"), &Z_Registration_Info_UClass_URestrictedGameplayTagsList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URestrictedGameplayTagsList), 2473034591U) },
		{ Z_Construct_UClass_UGameplayTagsSettings, UGameplayTagsSettings::StaticClass, TEXT("UGameplayTagsSettings"), &Z_Registration_Info_UClass_UGameplayTagsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsSettings), 3371113800U) },
		{ Z_Construct_UClass_UGameplayTagsDeveloperSettings, UGameplayTagsDeveloperSettings::StaticClass, TEXT("UGameplayTagsDeveloperSettings"), &Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsDeveloperSettings), 2729092430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_3289475582(TEXT("/Script/GameplayTags"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
