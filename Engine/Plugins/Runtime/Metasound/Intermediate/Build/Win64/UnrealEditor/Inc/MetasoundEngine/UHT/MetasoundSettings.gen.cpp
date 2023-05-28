// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundSettings.h"
#include "MetasoundFrontendDocument.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSettings();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSettings_NoRegister();
	METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel();
	METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings();
	METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassName();
	UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaSoundMessageLevel;
	static UEnum* EMetaSoundMessageLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("EMetaSoundMessageLevel"));
		}
		return Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton;
	}
	template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundMessageLevel>()
	{
		return EMetaSoundMessageLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enumerators[] = {
		{ "EMetaSoundMessageLevel::Error", (int64)EMetaSoundMessageLevel::Error },
		{ "EMetaSoundMessageLevel::Warning", (int64)EMetaSoundMessageLevel::Warning },
		{ "EMetaSoundMessageLevel::Info", (int64)EMetaSoundMessageLevel::Info },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enum_MetaDataParams[] = {
		{ "Error.Name", "EMetaSoundMessageLevel::Error" },
		{ "Info.Name", "EMetaSoundMessageLevel::Info" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "Warning.Name", "EMetaSoundMessageLevel::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine,
		nullptr,
		"EMetaSoundMessageLevel",
		"EMetaSoundMessageLevel",
		Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel()
	{
		if (!Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton, Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings;
class UScriptStruct* FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("DefaultMetaSoundAssetAutoUpdateSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FDefaultMetaSoundAssetAutoUpdateSettings>()
{
	return FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultMetaSoundAssetAutoUpdateSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound_MetaData[] = {
		{ "AllowedClasses", "/Script/MetasoundEngine.MetaSound, /Script/MetasoundEngine.MetaSoundSource" },
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** MetaSound to prevent from AutoUpdate. */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "MetaSound to prevent from AutoUpdate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound = { "MetaSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDefaultMetaSoundAssetAutoUpdateSettings, MetaSound), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
		nullptr,
		&NewStructOps,
		"DefaultMetaSoundAssetAutoUpdateSettings",
		sizeof(FDefaultMetaSoundAssetAutoUpdateSettings),
		alignof(FDefaultMetaSoundAssetAutoUpdateSettings),
		Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton;
	}
	void UMetaSoundSettings::StaticRegisterNativesUMetaSoundSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundSettings);
	UClass* Z_Construct_UClass_UMetaSoundSettings_NoRegister()
	{
		return UMetaSoundSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMetaSoundSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateEnabled_MetaData[];
#endif
		static void NewProp_bAutoUpdateEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoUpdateDenylist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoUpdateDenylist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoUpdateDenylist;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoUpdateAssetDenylist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoUpdateAssetDenylist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoUpdateAssetDenylist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData[];
#endif
		static void NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateLogWarningOnDroppedConnection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToRegister_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToRegister_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToRegister;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DenyListCacheChangeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DenyListCacheChangeID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaSoundSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "MetaSounds" },
		{ "IncludePath", "MetasoundSettings.h" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** If true, AutoUpdate is enabled, increasing load times.  If false, skips AutoUpdate on load, but can result in MetaSounds failing to load, \n\x09  * register, and execute if interface differences are present. */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "If true, AutoUpdate is enabled, increasing load times.  If false, skips AutoUpdate on load, but can result in MetaSounds failing to load,\nregister, and execute if interface differences are present." },
	};
#endif
	void Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_SetBit(void* Obj)
	{
		((UMetaSoundSettings*)Obj)->bAutoUpdateEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled = { "bAutoUpdateEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMetaSoundSettings), &Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_Inner = { "AutoUpdateDenylist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(nullptr, 0) }; // 2447492296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** List of native MetaSound classes whose node references should not be AutoUpdated. */" },
		{ "DisplayName", "DenyList" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "List of native MetaSound classes whose node references should not be AutoUpdated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist = { "AutoUpdateDenylist", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundSettings, AutoUpdateDenylist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_MetaData)) }; // 2447492296
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_Inner = { "AutoUpdateAssetDenylist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings, METADATA_PARAMS(nullptr, 0) }; // 2460652466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** List of MetaSound assets whose node references should not be AutoUpdated. */" },
		{ "DisplayName", "Asset DenyList" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "List of MetaSound assets whose node references should not be AutoUpdated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist = { "AutoUpdateAssetDenylist", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundSettings, AutoUpdateAssetDenylist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_MetaData)) }; // 2460652466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** If true, warnings will be logged if updating a node results in existing connections being discarded. */" },
		{ "DisplayName", "Log Warning on Dropped Connection" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "If true, warnings will be logged if updating a node results in existing connections being discarded." },
	};
#endif
	void Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit(void* Obj)
	{
		((UMetaSoundSettings*)Obj)->bAutoUpdateLogWarningOnDroppedConnection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection = { "bAutoUpdateLogWarningOnDroppedConnection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMetaSoundSettings), &Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_Inner = { "DirectoriesToRegister", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_MetaData[] = {
		{ "Category", "Registration" },
		{ "Comment", "/** Directories to scan & automatically register MetaSound post initial asset scan on engine start-up.\n\x09  * May speed up subsequent calls to playback MetaSounds post asset scan but increases application load time.\n\x09  * See 'MetaSoundAssetSubsystem::RegisterAssetClassesInDirectories' to dynamically register or \n\x09  * 'MetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories' to unregister asset classes.\n\x09  */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Directories to scan & automatically register MetaSound post initial asset scan on engine start-up.\nMay speed up subsequent calls to playback MetaSounds post asset scan but increases application load time.\nSee 'MetaSoundAssetSubsystem::RegisterAssetClassesInDirectories' to dynamically register or\n'MetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories' to unregister asset classes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister = { "DirectoriesToRegister", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundSettings, DirectoriesToRegister), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID = { "DenyListCacheChangeID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundSettings, DenyListCacheChangeID), METADATA_PARAMS(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaSoundSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundSettings_Statics::ClassParams = {
		&UMetaSoundSettings::StaticClass,
		"MetaSound",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaSoundSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaSoundSettings()
	{
		if (!Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton, Z_Construct_UClass_UMetaSoundSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton;
	}
	template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundSettings>()
	{
		return UMetaSoundSettings::StaticClass();
	}
	UMetaSoundSettings::UMetaSoundSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundSettings);
	UMetaSoundSettings::~UMetaSoundSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::EnumInfo[] = {
		{ EMetaSoundMessageLevel_StaticEnum, TEXT("EMetaSoundMessageLevel"), &Z_Registration_Info_UEnum_EMetaSoundMessageLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2724851303U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ScriptStructInfo[] = {
		{ FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewStructOps, TEXT("DefaultMetaSoundAssetAutoUpdateSettings"), &Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultMetaSoundAssetAutoUpdateSettings), 2460652466U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundSettings, UMetaSoundSettings::StaticClass, TEXT("UMetaSoundSettings"), &Z_Registration_Info_UClass_UMetaSoundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundSettings), 1383293655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_3910438815(TEXT("/Script/MetasoundEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
