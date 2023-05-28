// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertTakeRecorderMessages.h"
#include "ConcertMessageData.h"
#include "IdentifierTable/ConcertIdentifierTableData.h"
#include "Recorder/TakeRecorderParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertTakeRecorderMessages() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionClientInfo();
	CONCERTTAKERECORDER_API UClass* Z_Construct_UClass_UConcertSessionRecordSettings();
	CONCERTTAKERECORDER_API UClass* Z_Construct_UClass_UConcertSessionRecordSettings_NoRegister();
	CONCERTTAKERECORDER_API UClass* Z_Construct_UClass_UConcertTakeSynchronization();
	CONCERTTAKERECORDER_API UClass* Z_Construct_UClass_UConcertTakeSynchronization_NoRegister();
	CONCERTTAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientRecordSetting();
	CONCERTTAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent();
	CONCERTTAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent();
	CONCERTTAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent();
	CONCERTTAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent();
	CONCERTTAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent();
	CONCERTTAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertTakeInitializedEvent();
	CONCERTTAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecordSettings();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertLocalIdentifierState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	TAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderUserParameters();
	UPackage* Z_Construct_UPackage__Script_ConcertTakeRecorder();
// End Cross Module References
	void UConcertTakeSynchronization::StaticRegisterNativesUConcertTakeSynchronization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertTakeSynchronization);
	UClass* Z_Construct_UClass_UConcertTakeSynchronization_NoRegister()
	{
		return UConcertTakeSynchronization::StaticClass();
	}
	struct Z_Construct_UClass_UConcertTakeSynchronization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncTakeRecordingTransactions_MetaData[];
#endif
		static void NewProp_bSyncTakeRecordingTransactions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncTakeRecordingTransactions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransactTakeMetadata_MetaData[];
#endif
		static void NewProp_bTransactTakeMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransactTakeMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertTakeSynchronization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertTakeSynchronization_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Multi-user Take Synchronization" },
		{ "IncludePath", "ConcertTakeRecorderMessages.h" },
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bSyncTakeRecordingTransactions_MetaData[] = {
		{ "Category", "Multi-user Take Synchronization" },
		{ "DisplayName", "Synchronize Take Recorder Transactions" },
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bSyncTakeRecordingTransactions_SetBit(void* Obj)
	{
		((UConcertTakeSynchronization*)Obj)->bSyncTakeRecordingTransactions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bSyncTakeRecordingTransactions = { "bSyncTakeRecordingTransactions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertTakeSynchronization), &Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bSyncTakeRecordingTransactions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bSyncTakeRecordingTransactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bSyncTakeRecordingTransactions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bTransactTakeMetadata_MetaData[] = {
		{ "Category", "Multi-user Take Synchronization" },
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bTransactTakeMetadata_SetBit(void* Obj)
	{
		((UConcertTakeSynchronization*)Obj)->bTransactTakeMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bTransactTakeMetadata = { "bTransactTakeMetadata", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertTakeSynchronization), &Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bTransactTakeMetadata_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bTransactTakeMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bTransactTakeMetadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertTakeSynchronization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bSyncTakeRecordingTransactions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertTakeSynchronization_Statics::NewProp_bTransactTakeMetadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertTakeSynchronization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertTakeSynchronization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertTakeSynchronization_Statics::ClassParams = {
		&UConcertTakeSynchronization::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertTakeSynchronization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertTakeSynchronization_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertTakeSynchronization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertTakeSynchronization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertTakeSynchronization()
	{
		if (!Z_Registration_Info_UClass_UConcertTakeSynchronization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertTakeSynchronization.OuterSingleton, Z_Construct_UClass_UConcertTakeSynchronization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertTakeSynchronization.OuterSingleton;
	}
	template<> CONCERTTAKERECORDER_API UClass* StaticClass<UConcertTakeSynchronization>()
	{
		return UConcertTakeSynchronization::StaticClass();
	}
	UConcertTakeSynchronization::UConcertTakeSynchronization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertTakeSynchronization);
	UConcertTakeSynchronization::~UConcertTakeSynchronization() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TakeRecordSettings;
class UScriptStruct* FTakeRecordSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TakeRecordSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TakeRecordSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTakeRecordSettings, (UObject*)Z_Construct_UPackage__Script_ConcertTakeRecorder(), TEXT("TakeRecordSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TakeRecordSettings.OuterSingleton;
}
template<> CONCERTTAKERECORDER_API UScriptStruct* StaticStruct<FTakeRecordSettings>()
{
	return FTakeRecordSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTakeRecordSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordOnClient_MetaData[];
#endif
		static void NewProp_bRecordOnClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordOnClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransactSources_MetaData[];
#endif
		static void NewProp_bTransactSources_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransactSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTakeRecordSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bRecordOnClient_MetaData[] = {
		{ "Category", "Multi-user Client Record Settings" },
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bRecordOnClient_SetBit(void* Obj)
	{
		((FTakeRecordSettings*)Obj)->bRecordOnClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bRecordOnClient = { "bRecordOnClient", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecordSettings), &Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bRecordOnClient_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bRecordOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bRecordOnClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bTransactSources_MetaData[] = {
		{ "Category", "Multi-user Client Record Settings" },
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bTransactSources_SetBit(void* Obj)
	{
		((FTakeRecordSettings*)Obj)->bTransactSources = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bTransactSources = { "bTransactSources", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTakeRecordSettings), &Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bTransactSources_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bTransactSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bTransactSources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bRecordOnClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewProp_bTransactSources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
		nullptr,
		&NewStructOps,
		"TakeRecordSettings",
		sizeof(FTakeRecordSettings),
		alignof(FTakeRecordSettings),
		Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTakeRecordSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TakeRecordSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TakeRecordSettings.InnerSingleton, Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TakeRecordSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientRecordSetting;
class UScriptStruct* FConcertClientRecordSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientRecordSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientRecordSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientRecordSetting, (UObject*)Z_Construct_UPackage__Script_ConcertTakeRecorder(), TEXT("ConcertClientRecordSetting"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientRecordSetting.OuterSingleton;
}
template<> CONCERTTAKERECORDER_API UScriptStruct* StaticStruct<FConcertClientRecordSetting>()
{
	return FConcertClientRecordSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTakeSyncEnabled_MetaData[];
#endif
		static void NewProp_bTakeSyncEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTakeSyncEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientRecordSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Details_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientRecordSetting, Details), Z_Construct_UScriptStruct_FConcertSessionClientInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Details_MetaData)) }; // 2103458102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_bTakeSyncEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_bTakeSyncEnabled_SetBit(void* Obj)
	{
		((FConcertClientRecordSetting*)Obj)->bTakeSyncEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_bTakeSyncEnabled = { "bTakeSyncEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertClientRecordSetting), &Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_bTakeSyncEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_bTakeSyncEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_bTakeSyncEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientRecordSetting, Settings), Z_Construct_UScriptStruct_FTakeRecordSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Settings_MetaData)) }; // 3939076123
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_bTakeSyncEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
		nullptr,
		&NewStructOps,
		"ConcertClientRecordSetting",
		sizeof(FConcertClientRecordSetting),
		alignof(FConcertClientRecordSetting),
		Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientRecordSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientRecordSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientRecordSetting.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientRecordSetting.InnerSingleton;
	}
	void UConcertSessionRecordSettings::StaticRegisterNativesUConcertSessionRecordSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertSessionRecordSettings);
	UClass* Z_Construct_UClass_UConcertSessionRecordSettings_NoRegister()
	{
		return UConcertSessionRecordSettings::StaticClass();
	}
	struct Z_Construct_UClass_UConcertSessionRecordSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoteSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertSessionRecordSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSessionRecordSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Multi-user Client Record Settings" },
		{ "IncludePath", "ConcertTakeRecorderMessages.h" },
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_LocalSettings_MetaData[] = {
		{ "Category", "Multi-user Client Record Settings" },
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_LocalSettings = { "LocalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertSessionRecordSettings, LocalSettings), Z_Construct_UScriptStruct_FTakeRecordSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_LocalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_LocalSettings_MetaData)) }; // 3939076123
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_RemoteSettings_Inner = { "RemoteSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConcertClientRecordSetting, METADATA_PARAMS(nullptr, 0) }; // 2770060378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_RemoteSettings_MetaData[] = {
		{ "Category", "Multi-user Client Record Settings" },
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_RemoteSettings = { "RemoteSettings", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertSessionRecordSettings, RemoteSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_RemoteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_RemoteSettings_MetaData)) }; // 2770060378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertSessionRecordSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_LocalSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_RemoteSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSessionRecordSettings_Statics::NewProp_RemoteSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertSessionRecordSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertSessionRecordSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertSessionRecordSettings_Statics::ClassParams = {
		&UConcertSessionRecordSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertSessionRecordSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionRecordSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertSessionRecordSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionRecordSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertSessionRecordSettings()
	{
		if (!Z_Registration_Info_UClass_UConcertSessionRecordSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertSessionRecordSettings.OuterSingleton, Z_Construct_UClass_UConcertSessionRecordSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertSessionRecordSettings.OuterSingleton;
	}
	template<> CONCERTTAKERECORDER_API UClass* StaticClass<UConcertSessionRecordSettings>()
	{
		return UConcertSessionRecordSettings::StaticClass();
	}
	UConcertSessionRecordSettings::UConcertSessionRecordSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertSessionRecordSettings);
	UConcertSessionRecordSettings::~UConcertSessionRecordSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertRecordSettingsChangeEvent;
class UScriptStruct* FConcertRecordSettingsChangeEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertRecordSettingsChangeEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertRecordSettingsChangeEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent, (UObject*)Z_Construct_UPackage__Script_ConcertTakeRecorder(), TEXT("ConcertRecordSettingsChangeEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertRecordSettingsChangeEvent.OuterSingleton;
}
template<> CONCERTTAKERECORDER_API UScriptStruct* StaticStruct<FConcertRecordSettingsChangeEvent>()
{
	return FConcertRecordSettingsChangeEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertRecordSettingsChangeEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_EndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertRecordSettingsChangeEvent, EndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_EndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_EndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertRecordSettingsChangeEvent, Settings), Z_Construct_UScriptStruct_FTakeRecordSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_Settings_MetaData)) }; // 3939076123
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
		nullptr,
		&NewStructOps,
		"ConcertRecordSettingsChangeEvent",
		sizeof(FConcertRecordSettingsChangeEvent),
		alignof(FConcertRecordSettingsChangeEvent),
		Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertRecordSettingsChangeEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertRecordSettingsChangeEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertRecordSettingsChangeEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertMultiUserSyncChangeEvent;
class UScriptStruct* FConcertMultiUserSyncChangeEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertMultiUserSyncChangeEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertMultiUserSyncChangeEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent, (UObject*)Z_Construct_UPackage__Script_ConcertTakeRecorder(), TEXT("ConcertMultiUserSyncChangeEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertMultiUserSyncChangeEvent.OuterSingleton;
}
template<> CONCERTTAKERECORDER_API UScriptStruct* StaticStruct<FConcertMultiUserSyncChangeEvent>()
{
	return FConcertMultiUserSyncChangeEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncTakeRecordingTransactions_MetaData[];
#endif
		static void NewProp_bSyncTakeRecordingTransactions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncTakeRecordingTransactions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertMultiUserSyncChangeEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_EndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertMultiUserSyncChangeEvent, EndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_EndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_EndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_bSyncTakeRecordingTransactions_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_bSyncTakeRecordingTransactions_SetBit(void* Obj)
	{
		((FConcertMultiUserSyncChangeEvent*)Obj)->bSyncTakeRecordingTransactions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_bSyncTakeRecordingTransactions = { "bSyncTakeRecordingTransactions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertMultiUserSyncChangeEvent), &Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_bSyncTakeRecordingTransactions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_bSyncTakeRecordingTransactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_bSyncTakeRecordingTransactions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewProp_bSyncTakeRecordingTransactions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
		nullptr,
		&NewStructOps,
		"ConcertMultiUserSyncChangeEvent",
		sizeof(FConcertMultiUserSyncChangeEvent),
		alignof(FConcertMultiUserSyncChangeEvent),
		Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertMultiUserSyncChangeEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertMultiUserSyncChangeEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertMultiUserSyncChangeEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertTakeInitializedEvent;
class UScriptStruct* FConcertTakeInitializedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertTakeInitializedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertTakeInitializedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertTakeRecorder(), TEXT("ConcertTakeInitializedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertTakeInitializedEvent.OuterSingleton;
}
template<> CONCERTTAKERECORDER_API UScriptStruct* StaticStruct<FConcertTakeInitializedEvent>()
{
	return FConcertTakeInitializedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakePresetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TakePresetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TakeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TakeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TakeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeMetaDataPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TakeMetaDataPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdentifierState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IdentifierState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertTakeInitializedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakePresetPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakePresetPath = { "TakePresetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertTakeInitializedEvent, TakePresetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakePresetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakePresetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeName = { "TakeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertTakeInitializedEvent, TakeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeData_Inner = { "TakeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeData_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeData = { "TakeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertTakeInitializedEvent, TakeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeMetaDataPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeMetaDataPath = { "TakeMetaDataPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertTakeInitializedEvent, TakeMetaDataPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeMetaDataPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeMetaDataPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_IdentifierState_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_IdentifierState = { "IdentifierState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertTakeInitializedEvent, IdentifierState), Z_Construct_UScriptStruct_FConcertLocalIdentifierState, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_IdentifierState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_IdentifierState_MetaData)) }; // 4033960254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertTakeInitializedEvent, Settings), Z_Construct_UScriptStruct_FTakeRecorderUserParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_Settings_MetaData)) }; // 3708244952
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakePresetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_TakeMetaDataPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_IdentifierState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
		nullptr,
		&NewStructOps,
		"ConcertTakeInitializedEvent",
		sizeof(FConcertTakeInitializedEvent),
		alignof(FConcertTakeInitializedEvent),
		Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertTakeInitializedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertTakeInitializedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertTakeInitializedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertTakeInitializedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertRecordingFinishedEvent;
class UScriptStruct* FConcertRecordingFinishedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertRecordingFinishedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertRecordingFinishedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertTakeRecorder(), TEXT("ConcertRecordingFinishedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertRecordingFinishedEvent.OuterSingleton;
}
template<> CONCERTTAKERECORDER_API UScriptStruct* StaticStruct<FConcertRecordingFinishedEvent>()
{
	return FConcertRecordingFinishedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TakeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertRecordingFinishedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::NewProp_TakeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::NewProp_TakeName = { "TakeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertRecordingFinishedEvent, TakeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::NewProp_TakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::NewProp_TakeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::NewProp_TakeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
		nullptr,
		&NewStructOps,
		"ConcertRecordingFinishedEvent",
		sizeof(FConcertRecordingFinishedEvent),
		alignof(FConcertRecordingFinishedEvent),
		Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertRecordingFinishedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertRecordingFinishedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertRecordingFinishedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertRecordingNamedLevelSequenceEvent;
class UScriptStruct* FConcertRecordingNamedLevelSequenceEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertRecordingNamedLevelSequenceEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertRecordingNamedLevelSequenceEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent, (UObject*)Z_Construct_UPackage__Script_ConcertTakeRecorder(), TEXT("ConcertRecordingNamedLevelSequenceEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertRecordingNamedLevelSequenceEvent.OuterSingleton;
}
template<> CONCERTTAKERECORDER_API UScriptStruct* StaticStruct<FConcertRecordingNamedLevelSequenceEvent>()
{
	return FConcertRecordingNamedLevelSequenceEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequencePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelSequencePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertRecordingNamedLevelSequenceEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::NewProp_LevelSequencePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::NewProp_LevelSequencePath = { "LevelSequencePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertRecordingNamedLevelSequenceEvent, LevelSequencePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::NewProp_LevelSequencePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::NewProp_LevelSequencePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::NewProp_LevelSequencePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
		nullptr,
		&NewStructOps,
		"ConcertRecordingNamedLevelSequenceEvent",
		sizeof(FConcertRecordingNamedLevelSequenceEvent),
		alignof(FConcertRecordingNamedLevelSequenceEvent),
		Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertRecordingNamedLevelSequenceEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertRecordingNamedLevelSequenceEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertRecordingNamedLevelSequenceEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertRecordingCancelledEvent;
class UScriptStruct* FConcertRecordingCancelledEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertRecordingCancelledEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertRecordingCancelledEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent, (UObject*)Z_Construct_UPackage__Script_ConcertTakeRecorder(), TEXT("ConcertRecordingCancelledEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertRecordingCancelledEvent.OuterSingleton;
}
template<> CONCERTTAKERECORDER_API UScriptStruct* StaticStruct<FConcertRecordingCancelledEvent>()
{
	return FConcertRecordingCancelledEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TakeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertRecordingCancelledEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::NewProp_TakeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertTakeRecorderMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::NewProp_TakeName = { "TakeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertRecordingCancelledEvent, TakeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::NewProp_TakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::NewProp_TakeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::NewProp_TakeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTakeRecorder,
		nullptr,
		&NewStructOps,
		"ConcertRecordingCancelledEvent",
		sizeof(FConcertRecordingCancelledEvent),
		alignof(FConcertRecordingCancelledEvent),
		Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertRecordingCancelledEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertRecordingCancelledEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertRecordingCancelledEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_Statics::ScriptStructInfo[] = {
		{ FTakeRecordSettings::StaticStruct, Z_Construct_UScriptStruct_FTakeRecordSettings_Statics::NewStructOps, TEXT("TakeRecordSettings"), &Z_Registration_Info_UScriptStruct_TakeRecordSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTakeRecordSettings), 3939076123U) },
		{ FConcertClientRecordSetting::StaticStruct, Z_Construct_UScriptStruct_FConcertClientRecordSetting_Statics::NewStructOps, TEXT("ConcertClientRecordSetting"), &Z_Registration_Info_UScriptStruct_ConcertClientRecordSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientRecordSetting), 2770060378U) },
		{ FConcertRecordSettingsChangeEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertRecordSettingsChangeEvent_Statics::NewStructOps, TEXT("ConcertRecordSettingsChangeEvent"), &Z_Registration_Info_UScriptStruct_ConcertRecordSettingsChangeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertRecordSettingsChangeEvent), 2882121100U) },
		{ FConcertMultiUserSyncChangeEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertMultiUserSyncChangeEvent_Statics::NewStructOps, TEXT("ConcertMultiUserSyncChangeEvent"), &Z_Registration_Info_UScriptStruct_ConcertMultiUserSyncChangeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertMultiUserSyncChangeEvent), 2819027290U) },
		{ FConcertTakeInitializedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertTakeInitializedEvent_Statics::NewStructOps, TEXT("ConcertTakeInitializedEvent"), &Z_Registration_Info_UScriptStruct_ConcertTakeInitializedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertTakeInitializedEvent), 2270881524U) },
		{ FConcertRecordingFinishedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertRecordingFinishedEvent_Statics::NewStructOps, TEXT("ConcertRecordingFinishedEvent"), &Z_Registration_Info_UScriptStruct_ConcertRecordingFinishedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertRecordingFinishedEvent), 3000201568U) },
		{ FConcertRecordingNamedLevelSequenceEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertRecordingNamedLevelSequenceEvent_Statics::NewStructOps, TEXT("ConcertRecordingNamedLevelSequenceEvent"), &Z_Registration_Info_UScriptStruct_ConcertRecordingNamedLevelSequenceEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertRecordingNamedLevelSequenceEvent), 1851858886U) },
		{ FConcertRecordingCancelledEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertRecordingCancelledEvent_Statics::NewStructOps, TEXT("ConcertRecordingCancelledEvent"), &Z_Registration_Info_UScriptStruct_ConcertRecordingCancelledEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertRecordingCancelledEvent), 3897999837U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertTakeSynchronization, UConcertTakeSynchronization::StaticClass, TEXT("UConcertTakeSynchronization"), &Z_Registration_Info_UClass_UConcertTakeSynchronization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertTakeSynchronization), 1464267520U) },
		{ Z_Construct_UClass_UConcertSessionRecordSettings, UConcertSessionRecordSettings::StaticClass, TEXT("UConcertSessionRecordSettings"), &Z_Registration_Info_UClass_UConcertSessionRecordSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertSessionRecordSettings), 507016780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_1607643177(TEXT("/Script/ConcertTakeRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_MultiUserTakes_Source_ConcertTakeRecorder_Private_ConcertTakeRecorderMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
