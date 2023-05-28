// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Settings/EditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UNREALED_API UClass* Z_Construct_UClass_UEditorSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorSettings_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FRecentProjectFile();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecentProjectFile;
class UScriptStruct* FRecentProjectFile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecentProjectFile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecentProjectFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecentProjectFile, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("RecentProjectFile"));
	}
	return Z_Registration_Info_UScriptStruct_RecentProjectFile.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FRecentProjectFile>()
{
	return FRecentProjectFile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRecentProjectFile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastOpenTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastOpenTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecentProjectFile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecentProjectFile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_ProjectName_MetaData[] = {
		{ "Comment", "/** Path to the project */" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Path to the project" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecentProjectFile, ProjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_ProjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_ProjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_LastOpenTime_MetaData[] = {
		{ "Comment", "/** Timestamp of the last time the editor opened this project */" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Timestamp of the last time the editor opened this project" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_LastOpenTime = { "LastOpenTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecentProjectFile, LastOpenTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_LastOpenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_LastOpenTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecentProjectFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_ProjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewProp_LastOpenTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecentProjectFile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"RecentProjectFile",
		sizeof(FRecentProjectFile),
		alignof(FRecentProjectFile),
		Z_Construct_UScriptStruct_FRecentProjectFile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecentProjectFile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecentProjectFile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecentProjectFile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecentProjectFile()
	{
		if (!Z_Registration_Info_UScriptStruct_RecentProjectFile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecentProjectFile.InnerSingleton, Z_Construct_UScriptStruct_FRecentProjectFile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RecentProjectFile.InnerSingleton;
	}
	void UEditorSettings::StaticRegisterNativesUEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorSettings);
	UClass* Z_Construct_UClass_UEditorSettings_NoRegister()
	{
		return UEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalLocalDDCPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalLocalDDCPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSharedDDCPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSharedDDCPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalDerivedDataCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalDerivedDataCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedDerivedDataCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedDerivedDataCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDDCNotifications_MetaData[];
#endif
		static void NewProp_bEnableDDCNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDDCNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyUseUnrealCloudDDC_MetaData[];
#endif
		static void NewProp_bNotifyUseUnrealCloudDDC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyUseUnrealCloudDDC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifySetupDDCPath_MetaData[];
#endif
		static void NewProp_bNotifySetupDDCPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifySetupDDCPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyEnableS3DD_MetaData[];
#endif
		static void NewProp_bNotifyEnableS3DD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyEnableS3DD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableS3DDC_MetaData[];
#endif
		static void NewProp_bEnableS3DDC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableS3DDC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalS3DDCPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalS3DDCPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_MetaData[];
#endif
		static void NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditorAnalyticsEnabled_MetaData[];
#endif
		static void NewProp_bEditorAnalyticsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorAnalyticsEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecentlyOpenedProjectFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyOpenedProjectFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecentlyOpenedProjectFiles;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedProjectPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedProjectPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedProjectPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyStarterContentPreference_MetaData[];
#endif
		static void NewProp_bCopyStarterContentPreference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyStarterContentPreference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedSurveys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedSurveys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletedSurveys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InProgressSurveys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProgressSurveys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InProgressSurveys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoScalabilityWorkScaleAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoScalabilityWorkScaleAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/EditorSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalLocalDDCPath_MetaData[] = {
		{ "Category", "DerivedDataCache" },
		{ "Comment", "/**\n\x09 * Adjusts the Local Cache location. This affects every project on your computer that uses the UE-LocalDataCachePath environment environment variable override.\n\x09 * This is usually the first location to query for previously built data.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Global Local DDC Path" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Adjusts the Local Cache location. This affects every project on your computer that uses the UE-LocalDataCachePath environment environment variable override.\nThis is usually the first location to query for previously built data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalLocalDDCPath = { "GlobalLocalDDCPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, GlobalLocalDDCPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalLocalDDCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalLocalDDCPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalSharedDDCPath_MetaData[] = {
		{ "Category", "DerivedDataCache" },
		{ "Comment", "/**\n\x09 * Adjusts the Shared cache location. This affects every project on your computer that uses the UE-SharedDataCachePath environment variable override.\n\x09 * The Shared Cache location is usually queried if we do't find previously built data in the Local cache. Colleauges should point to the same shared location so that work can be distributed. \n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Global Shared DDC Path" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Adjusts the Shared cache location. This affects every project on your computer that uses the UE-SharedDataCachePath environment variable override.\nThe Shared Cache location is usually queried if we do't find previously built data in the Local cache. Colleauges should point to the same shared location so that work can be distributed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalSharedDDCPath = { "GlobalSharedDDCPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, GlobalSharedDDCPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalSharedDDCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalSharedDDCPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache_MetaData[] = {
		{ "Category", "DerivedDataCache" },
		{ "Comment", "/**\n\x09 * Project specific overide for the Local Cache location. The editor must be restarted for changes to take effect.\n\x09 * This will override the 'Global Local DDC Path'.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Project Local DDC Path" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Project specific overide for the Local Cache location. The editor must be restarted for changes to take effect.\nThis will override the 'Global Local DDC Path'." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache = { "LocalDerivedDataCache", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, LocalDerivedDataCache), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache_MetaData[] = {
		{ "Category", "DerivedDataCache" },
		{ "Comment", "/**\n\x09 * Project specific overide for the Shared Cache location. The editor must be restarted for changes to take effect.\n\x09 * This will override the 'Global Shared DDC Path'.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Project Shared DDC Path" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Project specific overide for the Shared Cache location. The editor must be restarted for changes to take effect.\nThis will override the 'Global Shared DDC Path'." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache = { "SharedDerivedDataCache", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, SharedDerivedDataCache), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableDDCNotifications_MetaData[] = {
		{ "Category", "Derived Data Cache Notifications" },
		{ "Comment", "/** Whether to enable any DDC Notifications */" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Enable Notifcations" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Whether to enable any DDC Notifications" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableDDCNotifications_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bEnableDDCNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableDDCNotifications = { "bEnableDDCNotifications", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableDDCNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableDDCNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableDDCNotifications_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyUseUnrealCloudDDC_MetaData[] = {
		{ "Category", "Derived Data Cache Notifications" },
		{ "Comment", "/** Whether to enable the Unreal Cloud DDC notification */" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Notify Use Unreal Cloud DDC" },
		{ "EditCondition", "bEnableDDCNotifications" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Whether to enable the Unreal Cloud DDC notification" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyUseUnrealCloudDDC_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bNotifyUseUnrealCloudDDC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyUseUnrealCloudDDC = { "bNotifyUseUnrealCloudDDC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyUseUnrealCloudDDC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyUseUnrealCloudDDC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyUseUnrealCloudDDC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifySetupDDCPath_MetaData[] = {
		{ "Category", "Derived Data Cache Notifications" },
		{ "Comment", "/** Whether to enable the DDC path notification */" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Notify Setup DDC Path" },
		{ "EditCondition", "bEnableDDCNotifications" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Whether to enable the DDC path notification" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifySetupDDCPath_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bNotifySetupDDCPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifySetupDDCPath = { "bNotifySetupDDCPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifySetupDDCPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifySetupDDCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifySetupDDCPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyEnableS3DD_MetaData[] = {
		{ "Category", "Derived Data Cache Notifications" },
		{ "Comment", "/** Whether to enable the DDC path notification */" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Notify Enable S3 DDC" },
		{ "EditCondition", "bEnableDDCNotifications" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Whether to enable the DDC path notification" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyEnableS3DD_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bNotifyEnableS3DD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyEnableS3DD = { "bNotifyEnableS3DD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyEnableS3DD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyEnableS3DD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyEnableS3DD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableS3DDC_MetaData[] = {
		{ "Category", "Derived Data Cache S3" },
		{ "Comment", "/** Whether to enable the S3 derived data cache backend */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable AWS S3 Cache" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Whether to enable the S3 derived data cache backend" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableS3DDC_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bEnableS3DDC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableS3DDC = { "bEnableS3DDC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableS3DDC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableS3DDC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableS3DDC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalS3DDCPath_MetaData[] = {
		{ "Category", "Derived Data Cache S3" },
		{ "Comment", "/**\n\x09 * Adjusts the Local Cache location for AWS/S3 downloaded package bundles.\n\x09 * This affects every project on your computer that uses the UE-S3DataCachePath environment variable override.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Global Local S3DDC Path" },
		{ "EditCondition", "bEnableS3DDC" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Adjusts the Local Cache location for AWS/S3 downloaded package bundles.\nThis affects every project on your computer that uses the UE-S3DataCachePath environment variable override." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalS3DDCPath = { "GlobalS3DDCPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, GlobalS3DDCPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalS3DDCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalS3DDCPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_MetaData[] = {
		{ "Comment", "/** When checked, the most recently loaded project will be auto-loaded at editor startup if no other project was specified on the command line */" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "When checked, the most recently loaded project will be auto-loaded at editor startup if no other project was specified on the command line" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bLoadTheMostRecentlyLoadedProjectAtStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup = { "bLoadTheMostRecentlyLoadedProjectAtStartup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_MetaData[] = {
		{ "Comment", "/** Can the editor report usage analytics (types of assets being spawned, etc...) back to Epic in order for us to improve the editor user experience?  Note: The editor must be restarted for changes to take effect. */" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Can the editor report usage analytics (types of assets being spawned, etc...) back to Epic in order for us to improve the editor user experience?  Note: The editor must be restarted for changes to take effect." },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bEditorAnalyticsEnabled_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled = { "bEditorAnalyticsEnabled", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_Inner = { "RecentlyOpenedProjectFiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRecentProjectFile, METADATA_PARAMS(nullptr, 0) }; // 731779371
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_MetaData[] = {
		{ "Comment", "/** Game project files that were recently opened in the editor */" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "Game project files that were recently opened in the editor" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles = { "RecentlyOpenedProjectFiles", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, RecentlyOpenedProjectFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_MetaData)) }; // 731779371
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_Inner = { "CreatedProjectPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_MetaData[] = {
		{ "Comment", "/** The paths of projects created with the new project wizard. This is used to populate the \"Path\" field of the new project dialog. */" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "The paths of projects created with the new project wizard. This is used to populate the \"Path\" field of the new project dialog." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths = { "CreatedProjectPaths", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, CreatedProjectPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_SetBit(void* Obj)
	{
		((UEditorSettings*)Obj)->bCopyStarterContentPreference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference = { "bCopyStarterContentPreference", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorSettings), &Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_Inner = { "CompletedSurveys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_MetaData[] = {
		{ "Comment", "/** The id's of the surveys completed */" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "The id's of the surveys completed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys = { "CompletedSurveys", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, CompletedSurveys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_Inner = { "InProgressSurveys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_MetaData[] = {
		{ "Comment", "/** The id's of the surveys currently in-progress */" },
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
		{ "ToolTip", "The id's of the surveys currently in-progress" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys = { "InProgressSurveys", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, InProgressSurveys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/EditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount = { "AutoScalabilityWorkScaleAmount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorSettings, AutoScalabilityWorkScaleAmount), METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalLocalDDCPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalSharedDDCPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_LocalDerivedDataCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_SharedDerivedDataCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableDDCNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyUseUnrealCloudDDC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifySetupDDCPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bNotifyEnableS3DD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEnableS3DDC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_GlobalS3DDCPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bLoadTheMostRecentlyLoadedProjectAtStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bEditorAnalyticsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_RecentlyOpenedProjectFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_CreatedProjectPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_bCopyStarterContentPreference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_CompletedSurveys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_InProgressSurveys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorSettings_Statics::NewProp_AutoScalabilityWorkScaleAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorSettings_Statics::ClassParams = {
		&UEditorSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorSettings.OuterSingleton, Z_Construct_UClass_UEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorSettings>()
	{
		return UEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSettings);
	UEditorSettings::~UEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FRecentProjectFile::StaticStruct, Z_Construct_UScriptStruct_FRecentProjectFile_Statics::NewStructOps, TEXT("RecentProjectFile"), &Z_Registration_Info_UScriptStruct_RecentProjectFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecentProjectFile), 731779371U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorSettings, UEditorSettings::StaticClass, TEXT("UEditorSettings"), &Z_Registration_Info_UClass_UEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorSettings), 3190381932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_3349415117(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
