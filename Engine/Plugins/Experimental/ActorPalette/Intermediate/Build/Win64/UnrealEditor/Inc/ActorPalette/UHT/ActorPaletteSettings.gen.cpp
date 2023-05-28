// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ActorPaletteSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPaletteSettings() {}
// Cross Module References
	ACTORPALETTE_API UClass* Z_Construct_UClass_UActorPaletteSettings();
	ACTORPALETTE_API UClass* Z_Construct_UClass_UActorPaletteSettings_NoRegister();
	ACTORPALETTE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPaletteMapEntry();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ActorPalette();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorPaletteMapEntry;
class UScriptStruct* FActorPaletteMapEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPaletteMapEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorPaletteMapEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPaletteMapEntry, (UObject*)Z_Construct_UPackage__Script_ActorPalette(), TEXT("ActorPaletteMapEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ActorPaletteMapEntry.OuterSingleton;
}
template<> ACTORPALETTE_API UScriptStruct* StaticStruct<FActorPaletteMapEntry>()
{
	return FActorPaletteMapEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Information about a single recent/favorite map\n" },
		{ "ModuleRelativePath", "Private/ActorPaletteSettings.h" },
		{ "ToolTip", "Information about a single recent/favorite map" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPaletteMapEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::NewProp_MapPath_MetaData[] = {
		{ "Category", "ActorPalette" },
		{ "ModuleRelativePath", "Private/ActorPaletteSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::NewProp_MapPath = { "MapPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPaletteMapEntry, MapPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::NewProp_MapPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::NewProp_MapPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::NewProp_MapPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorPalette,
		nullptr,
		&NewStructOps,
		"ActorPaletteMapEntry",
		sizeof(FActorPaletteMapEntry),
		alignof(FActorPaletteMapEntry),
		Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPaletteMapEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorPaletteMapEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorPaletteMapEntry.InnerSingleton, Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorPaletteMapEntry.InnerSingleton;
	}
	void UActorPaletteSettings::StaticRegisterNativesUActorPaletteSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorPaletteSettings);
	UClass* Z_Construct_UClass_UActorPaletteSettings_NoRegister()
	{
		return UActorPaletteSettings::StaticClass();
	}
	struct Z_Construct_UClass_UActorPaletteSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsPerLevel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsPerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SettingsPerLevel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecentlyUsedList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyUsedList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecentlyUsedList;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MostRecentLevelByTab_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MostRecentLevelByTab_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MostRecentLevelByTab;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FavoritesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FavoritesList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRecentLevelsToKeep_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumRecentLevelsToKeep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorPaletteSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPaletteSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings/preferences for Actor Palettes\n" },
		{ "IncludePath", "ActorPaletteSettings.h" },
		{ "ModuleRelativePath", "Private/ActorPaletteSettings.h" },
		{ "ToolTip", "Settings/preferences for Actor Palettes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_SettingsPerLevel_Inner = { "SettingsPerLevel", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorPaletteMapEntry, METADATA_PARAMS(nullptr, 0) }; // 2496238566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_SettingsPerLevel_MetaData[] = {
		{ "Comment", "// Remembered settings for any recent/current/favorite actor palette maps\n" },
		{ "ModuleRelativePath", "Private/ActorPaletteSettings.h" },
		{ "ToolTip", "Remembered settings for any recent/current/favorite actor palette maps" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_SettingsPerLevel = { "SettingsPerLevel", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorPaletteSettings, SettingsPerLevel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_SettingsPerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_SettingsPerLevel_MetaData)) }; // 2496238566
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_RecentlyUsedList_Inner = { "RecentlyUsedList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_RecentlyUsedList_MetaData[] = {
		{ "Comment", "// List of levels that were recently open in any Actor Palette tab\n" },
		{ "ModuleRelativePath", "Private/ActorPaletteSettings.h" },
		{ "ToolTip", "List of levels that were recently open in any Actor Palette tab" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_RecentlyUsedList = { "RecentlyUsedList", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorPaletteSettings, RecentlyUsedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_RecentlyUsedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_RecentlyUsedList_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_MostRecentLevelByTab_Inner = { "MostRecentLevelByTab", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_MostRecentLevelByTab_MetaData[] = {
		{ "Comment", "// List of levels that were last open in each Actor Palette tab (indexed by tab index)\n" },
		{ "ModuleRelativePath", "Private/ActorPaletteSettings.h" },
		{ "ToolTip", "List of levels that were last open in each Actor Palette tab (indexed by tab index)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_MostRecentLevelByTab = { "MostRecentLevelByTab", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorPaletteSettings, MostRecentLevelByTab), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_MostRecentLevelByTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_MostRecentLevelByTab_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_FavoritesList_Inner = { "FavoritesList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_FavoritesList_MetaData[] = {
		{ "Comment", "// List of levels that were marked as favorite actor palettes\n" },
		{ "ModuleRelativePath", "Private/ActorPaletteSettings.h" },
		{ "ToolTip", "List of levels that were marked as favorite actor palettes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_FavoritesList = { "FavoritesList", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorPaletteSettings, FavoritesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_FavoritesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_FavoritesList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_NumRecentLevelsToKeep_MetaData[] = {
		{ "Category", "ActorPalette" },
		{ "ClampMax", "25" },
		{ "ClampMin", "0" },
		{ "Comment", "// How many recent levels will be remembered?\n" },
		{ "ModuleRelativePath", "Private/ActorPaletteSettings.h" },
		{ "ToolTip", "How many recent levels will be remembered?" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_NumRecentLevelsToKeep = { "NumRecentLevelsToKeep", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorPaletteSettings, NumRecentLevelsToKeep), METADATA_PARAMS(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_NumRecentLevelsToKeep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_NumRecentLevelsToKeep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorPaletteSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_SettingsPerLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_SettingsPerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_RecentlyUsedList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_RecentlyUsedList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_MostRecentLevelByTab_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_MostRecentLevelByTab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_FavoritesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_FavoritesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPaletteSettings_Statics::NewProp_NumRecentLevelsToKeep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorPaletteSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPaletteSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorPaletteSettings_Statics::ClassParams = {
		&UActorPaletteSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorPaletteSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorPaletteSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorPaletteSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPaletteSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorPaletteSettings()
	{
		if (!Z_Registration_Info_UClass_UActorPaletteSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPaletteSettings.OuterSingleton, Z_Construct_UClass_UActorPaletteSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorPaletteSettings.OuterSingleton;
	}
	template<> ACTORPALETTE_API UClass* StaticClass<UActorPaletteSettings>()
	{
		return UActorPaletteSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPaletteSettings);
	UActorPaletteSettings::~UActorPaletteSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_Statics::ScriptStructInfo[] = {
		{ FActorPaletteMapEntry::StaticStruct, Z_Construct_UScriptStruct_FActorPaletteMapEntry_Statics::NewStructOps, TEXT("ActorPaletteMapEntry"), &Z_Registration_Info_UScriptStruct_ActorPaletteMapEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPaletteMapEntry), 2496238566U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorPaletteSettings, UActorPaletteSettings::StaticClass, TEXT("UActorPaletteSettings"), &Z_Registration_Info_UClass_UActorPaletteSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPaletteSettings), 852443832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_4010712736(TEXT("/Script/ActorPalette"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ActorPalette_Source_ActorPalette_Private_ActorPaletteSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
