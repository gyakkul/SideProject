// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MultiUser/ConsoleVariableSyncData.h"
#include "ConcertMessageData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleVariableSyncData() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionClientInfo();
	CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConcertCVarConfig();
	CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConcertCVarConfig_NoRegister();
	CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConcertCVarSynchronization();
	CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConcertCVarSynchronization_NoRegister();
	CONSOLEVARIABLESEDITOR_API UEnum* Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType();
	CONSOLEVARIABLESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConcertCVarChangeEvent();
	CONSOLEVARIABLESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConcertCVarDetails();
	CONSOLEVARIABLESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConcertCVarSettings();
	CONSOLEVARIABLESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent();
	CONSOLEVARIABLESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent();
	CONSOLEVARIABLESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	UPackage* Z_Construct_UPackage__Script_ConsoleVariablesEditor();
// End Cross Module References
	void UConcertCVarSynchronization::StaticRegisterNativesUConcertCVarSynchronization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertCVarSynchronization);
	UClass* Z_Construct_UClass_UConcertCVarSynchronization_NoRegister()
	{
		return UConcertCVarSynchronization::StaticClass();
	}
	struct Z_Construct_UClass_UConcertCVarSynchronization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncCVarTransactions_MetaData[];
#endif
		static void NewProp_bSyncCVarTransactions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncCVarTransactions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertCVarSynchronization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertCVarSynchronization_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Multi-user Console Variable Synchronization" },
		{ "IncludePath", "MultiUser/ConsoleVariableSyncData.h" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertCVarSynchronization_Statics::NewProp_bSyncCVarTransactions_MetaData[] = {
		{ "Category", "Multi-user" },
		{ "DisplayName", "Multi-user Console Variables Synchronization" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	void Z_Construct_UClass_UConcertCVarSynchronization_Statics::NewProp_bSyncCVarTransactions_SetBit(void* Obj)
	{
		((UConcertCVarSynchronization*)Obj)->bSyncCVarTransactions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertCVarSynchronization_Statics::NewProp_bSyncCVarTransactions = { "bSyncCVarTransactions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertCVarSynchronization), &Z_Construct_UClass_UConcertCVarSynchronization_Statics::NewProp_bSyncCVarTransactions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertCVarSynchronization_Statics::NewProp_bSyncCVarTransactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertCVarSynchronization_Statics::NewProp_bSyncCVarTransactions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertCVarSynchronization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertCVarSynchronization_Statics::NewProp_bSyncCVarTransactions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertCVarSynchronization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertCVarSynchronization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertCVarSynchronization_Statics::ClassParams = {
		&UConcertCVarSynchronization::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertCVarSynchronization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertCVarSynchronization_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertCVarSynchronization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertCVarSynchronization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertCVarSynchronization()
	{
		if (!Z_Registration_Info_UClass_UConcertCVarSynchronization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertCVarSynchronization.OuterSingleton, Z_Construct_UClass_UConcertCVarSynchronization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertCVarSynchronization.OuterSingleton;
	}
	template<> CONSOLEVARIABLESEDITOR_API UClass* StaticClass<UConcertCVarSynchronization>()
	{
		return UConcertCVarSynchronization::StaticClass();
	}
	UConcertCVarSynchronization::UConcertCVarSynchronization(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertCVarSynchronization);
	UConcertCVarSynchronization::~UConcertCVarSynchronization() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertCVarSettings;
class UScriptStruct* FConcertCVarSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertCVarSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertCVarSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertCVarSettings, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditor(), TEXT("ConcertCVarSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertCVarSettings.OuterSingleton;
}
template<> CONSOLEVARIABLESEDITOR_API UScriptStruct* StaticStruct<FConcertCVarSettings>()
{
	return FConcertCVarSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertCVarSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveCVarChanges_MetaData[];
#endif
		static void NewProp_bReceiveCVarChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveCVarChanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertCVarSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewProp_bReceiveCVarChanges_MetaData[] = {
		{ "Category", "Multi-user Console Variable Settings" },
		{ "Comment", "/** Indicates if the given node can receive console variable values from other clients. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "Indicates if the given node can receive console variable values from other clients." },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewProp_bReceiveCVarChanges_SetBit(void* Obj)
	{
		((FConcertCVarSettings*)Obj)->bReceiveCVarChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewProp_bReceiveCVarChanges = { "bReceiveCVarChanges", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertCVarSettings), &Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewProp_bReceiveCVarChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewProp_bReceiveCVarChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewProp_bReceiveCVarChanges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewProp_bReceiveCVarChanges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
		nullptr,
		&NewStructOps,
		"ConcertCVarSettings",
		sizeof(FConcertCVarSettings),
		alignof(FConcertCVarSettings),
		Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertCVarSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertCVarSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertCVarSettings.InnerSingleton, Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertCVarSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertCVarDetails;
class UScriptStruct* FConcertCVarDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertCVarDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertCVarDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertCVarDetails, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditor(), TEXT("ConcertCVarDetails"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertCVarDetails.OuterSingleton;
}
template<> CONSOLEVARIABLESEDITOR_API UScriptStruct* StaticStruct<FConcertCVarDetails>()
{
	return FConcertCVarDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertCVarDetails_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCVarSyncEnabled_MetaData[];
#endif
		static void NewProp_bCVarSyncEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCVarSyncEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertCVarDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Details_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertCVarDetails, Details), Z_Construct_UScriptStruct_FConcertSessionClientInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Details_MetaData)) }; // 2103458102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_bCVarSyncEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_bCVarSyncEnabled_SetBit(void* Obj)
	{
		((FConcertCVarDetails*)Obj)->bCVarSyncEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_bCVarSyncEnabled = { "bCVarSyncEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertCVarDetails), &Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_bCVarSyncEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_bCVarSyncEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_bCVarSyncEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertCVarDetails, Settings), Z_Construct_UScriptStruct_FConcertCVarSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Settings_MetaData)) }; // 488613269
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_bCVarSyncEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
		nullptr,
		&NewStructOps,
		"ConcertCVarDetails",
		sizeof(FConcertCVarDetails),
		alignof(FConcertCVarDetails),
		Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertCVarDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertCVarDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertCVarDetails.InnerSingleton, Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertCVarDetails.InnerSingleton;
	}
	void UConcertCVarConfig::StaticRegisterNativesUConcertCVarConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertCVarConfig);
	UClass* Z_Construct_UClass_UConcertCVarConfig_NoRegister()
	{
		return UConcertCVarConfig::StaticClass();
	}
	struct Z_Construct_UClass_UConcertCVarConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteDetails_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteDetails_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoteDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertCVarConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertCVarConfig_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Multi-user Console Variable Settings" },
		{ "IncludePath", "MultiUser/ConsoleVariableSyncData.h" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_LocalSettings_MetaData[] = {
		{ "Category", "Multi-user Console Variable Settings" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_LocalSettings = { "LocalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertCVarConfig, LocalSettings), Z_Construct_UScriptStruct_FConcertCVarSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_LocalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_LocalSettings_MetaData)) }; // 488613269
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_RemoteDetails_Inner = { "RemoteDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConcertCVarDetails, METADATA_PARAMS(nullptr, 0) }; // 207535558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_RemoteDetails_MetaData[] = {
		{ "Category", "Multi-user Console Variable Settings" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_RemoteDetails = { "RemoteDetails", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertCVarConfig, RemoteDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_RemoteDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_RemoteDetails_MetaData)) }; // 207535558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertCVarConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_LocalSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_RemoteDetails_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertCVarConfig_Statics::NewProp_RemoteDetails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertCVarConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertCVarConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertCVarConfig_Statics::ClassParams = {
		&UConcertCVarConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertCVarConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertCVarConfig_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertCVarConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertCVarConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertCVarConfig()
	{
		if (!Z_Registration_Info_UClass_UConcertCVarConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertCVarConfig.OuterSingleton, Z_Construct_UClass_UConcertCVarConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertCVarConfig.OuterSingleton;
	}
	template<> CONSOLEVARIABLESEDITOR_API UClass* StaticClass<UConcertCVarConfig>()
	{
		return UConcertCVarConfig::StaticClass();
	}
	UConcertCVarConfig::UConcertCVarConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertCVarConfig);
	UConcertCVarConfig::~UConcertCVarConfig() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertCVarChangeEvent;
class UScriptStruct* FConcertCVarChangeEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertCVarChangeEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertCVarChangeEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertCVarChangeEvent, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditor(), TEXT("ConcertCVarChangeEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertCVarChangeEvent.OuterSingleton;
}
template<> CONSOLEVARIABLESEDITOR_API UScriptStruct* StaticStruct<FConcertCVarChangeEvent>()
{
	return FConcertCVarChangeEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertCVarChangeEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_EndpointId_MetaData[] = {
		{ "Comment", "/** The endpoint id sending this event. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "The endpoint id sending this event." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertCVarChangeEvent, EndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_EndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_EndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/** The Console Variable multi-user settings for the given EndpointId. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "The Console Variable multi-user settings for the given EndpointId." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertCVarChangeEvent, Settings), Z_Construct_UScriptStruct_FConcertCVarSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_Settings_MetaData)) }; // 488613269
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
		nullptr,
		&NewStructOps,
		"ConcertCVarChangeEvent",
		sizeof(FConcertCVarChangeEvent),
		alignof(FConcertCVarChangeEvent),
		Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertCVarChangeEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertCVarChangeEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertCVarChangeEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertCVarChangeEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertCVarSyncChangeEvent;
class UScriptStruct* FConcertCVarSyncChangeEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertCVarSyncChangeEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertCVarSyncChangeEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditor(), TEXT("ConcertCVarSyncChangeEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertCVarSyncChangeEvent.OuterSingleton;
}
template<> CONSOLEVARIABLESEDITOR_API UScriptStruct* StaticStruct<FConcertCVarSyncChangeEvent>()
{
	return FConcertCVarSyncChangeEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncCVarChanges_MetaData[];
#endif
		static void NewProp_bSyncCVarChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncCVarChanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertCVarSyncChangeEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_EndpointId_MetaData[] = {
		{ "Comment", "/** The endpoint id sending this event. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "The endpoint id sending this event." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertCVarSyncChangeEvent, EndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_EndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_EndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_bSyncCVarChanges_MetaData[] = {
		{ "Comment", "/** The value of the console variable mult-user sync for the above EndpointId. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "The value of the console variable mult-user sync for the above EndpointId." },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_bSyncCVarChanges_SetBit(void* Obj)
	{
		((FConcertCVarSyncChangeEvent*)Obj)->bSyncCVarChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_bSyncCVarChanges = { "bSyncCVarChanges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertCVarSyncChangeEvent), &Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_bSyncCVarChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_bSyncCVarChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_bSyncCVarChanges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewProp_bSyncCVarChanges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
		nullptr,
		&NewStructOps,
		"ConcertCVarSyncChangeEvent",
		sizeof(FConcertCVarSyncChangeEvent),
		alignof(FConcertCVarSyncChangeEvent),
		Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertCVarSyncChangeEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertCVarSyncChangeEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertCVarSyncChangeEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConsoleVariableChangeType;
	static UEnum* EConsoleVariableChangeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConsoleVariableChangeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConsoleVariableChangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditor(), TEXT("EConsoleVariableChangeType"));
		}
		return Z_Registration_Info_UEnum_EConsoleVariableChangeType.OuterSingleton;
	}
	template<> CONSOLEVARIABLESEDITOR_API UEnum* StaticEnum<EConsoleVariableChangeType>()
	{
		return EConsoleVariableChangeType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics::Enumerators[] = {
		{ "EConsoleVariableChangeType::Modify", (int64)EConsoleVariableChangeType::Modify },
		{ "EConsoleVariableChangeType::Add", (int64)EConsoleVariableChangeType::Add },
		{ "EConsoleVariableChangeType::Remove", (int64)EConsoleVariableChangeType::Remove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics::Enum_MetaDataParams[] = {
		{ "Add.Comment", "/** A console variable was added to the CVE asset */" },
		{ "Add.Name", "EConsoleVariableChangeType::Add" },
		{ "Add.ToolTip", "A console variable was added to the CVE asset" },
		{ "Modify.Comment", "/** The console variable was modified */" },
		{ "Modify.Name", "EConsoleVariableChangeType::Modify" },
		{ "Modify.ToolTip", "The console variable was modified" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "Remove.Comment", "/** A console variable was removed to the CVE asset */" },
		{ "Remove.Name", "EConsoleVariableChangeType::Remove" },
		{ "Remove.ToolTip", "A console variable was removed to the CVE asset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
		nullptr,
		"EConsoleVariableChangeType",
		"EConsoleVariableChangeType",
		Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType()
	{
		if (!Z_Registration_Info_UEnum_EConsoleVariableChangeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConsoleVariableChangeType.InnerSingleton, Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConsoleVariableChangeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSetConsoleVariableEvent;
class UScriptStruct* FConcertSetConsoleVariableEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSetConsoleVariableEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSetConsoleVariableEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditor(), TEXT("ConcertSetConsoleVariableEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSetConsoleVariableEvent.OuterSingleton;
}
template<> CONSOLEVARIABLESEDITOR_API UScriptStruct* StaticStruct<FConcertSetConsoleVariableEvent>()
{
	return FConcertSetConsoleVariableEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSetConsoleVariableEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_ChangeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_ChangeType_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_ChangeType = { "ChangeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSetConsoleVariableEvent, ChangeType), Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariableChangeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_ChangeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_ChangeType_MetaData)) }; // 3621825137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Variable_MetaData[] = {
		{ "Comment", "/** Console variable name to apply value change. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "Console variable name to apply value change." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSetConsoleVariableEvent, Variable), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Variable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** The value to set the named console variable. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "The value to set the named console variable." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSetConsoleVariableEvent, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_ChangeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_ChangeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
		nullptr,
		&NewStructOps,
		"ConcertSetConsoleVariableEvent",
		sizeof(FConcertSetConsoleVariableEvent),
		alignof(FConcertSetConsoleVariableEvent),
		Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSetConsoleVariableEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSetConsoleVariableEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSetConsoleVariableEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSetListItemCheckStateEvent;
class UScriptStruct* FConcertSetListItemCheckStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSetListItemCheckStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSetListItemCheckStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditor(), TEXT("ConcertSetListItemCheckStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSetListItemCheckStateEvent.OuterSingleton;
}
template<> CONSOLEVARIABLESEDITOR_API UScriptStruct* StaticStruct<FConcertSetListItemCheckStateEvent>()
{
	return FConcertSetListItemCheckStateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSetListItemCheckStateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_Variable_MetaData[] = {
		{ "Comment", "/** Console variable name to apply the checked state change. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "Console variable name to apply the checked state change." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSetListItemCheckStateEvent, Variable), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_Variable_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_CheckState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_CheckState_MetaData[] = {
		{ "Comment", "/** The checked state of the list item. */" },
		{ "ModuleRelativePath", "Private/MultiUser/ConsoleVariableSyncData.h" },
		{ "ToolTip", "The checked state of the list item." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_CheckState = { "CheckState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSetListItemCheckStateEvent, CheckState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_CheckState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_CheckState_MetaData)) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_CheckState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewProp_CheckState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
		nullptr,
		&NewStructOps,
		"ConcertSetListItemCheckStateEvent",
		sizeof(FConcertSetListItemCheckStateEvent),
		alignof(FConcertSetListItemCheckStateEvent),
		Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSetListItemCheckStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSetListItemCheckStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSetListItemCheckStateEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::EnumInfo[] = {
		{ EConsoleVariableChangeType_StaticEnum, TEXT("EConsoleVariableChangeType"), &Z_Registration_Info_UEnum_EConsoleVariableChangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3621825137U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::ScriptStructInfo[] = {
		{ FConcertCVarSettings::StaticStruct, Z_Construct_UScriptStruct_FConcertCVarSettings_Statics::NewStructOps, TEXT("ConcertCVarSettings"), &Z_Registration_Info_UScriptStruct_ConcertCVarSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertCVarSettings), 488613269U) },
		{ FConcertCVarDetails::StaticStruct, Z_Construct_UScriptStruct_FConcertCVarDetails_Statics::NewStructOps, TEXT("ConcertCVarDetails"), &Z_Registration_Info_UScriptStruct_ConcertCVarDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertCVarDetails), 207535558U) },
		{ FConcertCVarChangeEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertCVarChangeEvent_Statics::NewStructOps, TEXT("ConcertCVarChangeEvent"), &Z_Registration_Info_UScriptStruct_ConcertCVarChangeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertCVarChangeEvent), 3827128429U) },
		{ FConcertCVarSyncChangeEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertCVarSyncChangeEvent_Statics::NewStructOps, TEXT("ConcertCVarSyncChangeEvent"), &Z_Registration_Info_UScriptStruct_ConcertCVarSyncChangeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertCVarSyncChangeEvent), 4016984037U) },
		{ FConcertSetConsoleVariableEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSetConsoleVariableEvent_Statics::NewStructOps, TEXT("ConcertSetConsoleVariableEvent"), &Z_Registration_Info_UScriptStruct_ConcertSetConsoleVariableEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSetConsoleVariableEvent), 2761788412U) },
		{ FConcertSetListItemCheckStateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSetListItemCheckStateEvent_Statics::NewStructOps, TEXT("ConcertSetListItemCheckStateEvent"), &Z_Registration_Info_UScriptStruct_ConcertSetListItemCheckStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSetListItemCheckStateEvent), 1150457479U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertCVarSynchronization, UConcertCVarSynchronization::StaticClass, TEXT("UConcertCVarSynchronization"), &Z_Registration_Info_UClass_UConcertCVarSynchronization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertCVarSynchronization), 2820712367U) },
		{ Z_Construct_UClass_UConcertCVarConfig, UConcertCVarConfig::StaticClass, TEXT("UConcertCVarConfig"), &Z_Registration_Info_UClass_UConcertCVarConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertCVarConfig), 730579165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_3871094810(TEXT("/Script/ConsoleVariablesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Private_MultiUser_ConsoleVariableSyncData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
