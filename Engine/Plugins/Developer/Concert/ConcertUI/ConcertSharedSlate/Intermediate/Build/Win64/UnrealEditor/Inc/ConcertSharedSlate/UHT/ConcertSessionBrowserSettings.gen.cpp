// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Session/Browser/ConcertSessionBrowserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertSessionBrowserSettings() {}
// Cross Module References
	CONCERTSHAREDSLATE_API UClass* Z_Construct_UClass_UConcertSessionBrowserSettings();
	CONCERTSHAREDSLATE_API UClass* Z_Construct_UClass_UConcertSessionBrowserSettings_NoRegister();
	CONCERTSHAREDSLATE_API UEnum* Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ConcertSharedSlate();
// End Cross Module References
	void UConcertSessionBrowserSettings::StaticRegisterNativesUConcertSessionBrowserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertSessionBrowserSettings);
	UClass* Z_Construct_UClass_UConcertSessionBrowserSettings_NoRegister()
	{
		return UConcertSessionBrowserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UConcertSessionBrowserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LastModifiedTimeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastModifiedTimeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastModifiedTimeFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowActiveSessions_MetaData[];
#endif
		static void NewProp_bShowActiveSessions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowActiveSessions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowArchivedSessions_MetaData[];
#endif
		static void NewProp_bShowArchivedSessions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowArchivedSessions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDefaultServerSessionsOnly_MetaData[];
#endif
		static void NewProp_bShowDefaultServerSessionsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDefaultServerSessionsOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSharedSlate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Serializes the multi-user session browser settings like the active filters. */" },
		{ "IncludePath", "Session/Browser/ConcertSessionBrowserSettings.h" },
		{ "ModuleRelativePath", "Public/Session/Browser/ConcertSessionBrowserSettings.h" },
		{ "ToolTip", "Serializes the multi-user session browser settings like the active filters." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_LastModifiedTimeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_LastModifiedTimeFormat_MetaData[] = {
		{ "Category", "Multi-User Session Browser" },
		{ "ModuleRelativePath", "Public/Session/Browser/ConcertSessionBrowserSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_LastModifiedTimeFormat = { "LastModifiedTimeFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertSessionBrowserSettings, LastModifiedTimeFormat), Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat, METADATA_PARAMS(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_LastModifiedTimeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_LastModifiedTimeFormat_MetaData)) }; // 1917496234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowActiveSessions_MetaData[] = {
		{ "Category", "Multi-User Session Browser" },
		{ "ModuleRelativePath", "Public/Session/Browser/ConcertSessionBrowserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowActiveSessions_SetBit(void* Obj)
	{
		((UConcertSessionBrowserSettings*)Obj)->bShowActiveSessions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowActiveSessions = { "bShowActiveSessions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertSessionBrowserSettings), &Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowActiveSessions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowActiveSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowActiveSessions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowArchivedSessions_MetaData[] = {
		{ "Category", "Multi-User Session Browser" },
		{ "ModuleRelativePath", "Public/Session/Browser/ConcertSessionBrowserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowArchivedSessions_SetBit(void* Obj)
	{
		((UConcertSessionBrowserSettings*)Obj)->bShowArchivedSessions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowArchivedSessions = { "bShowArchivedSessions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertSessionBrowserSettings), &Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowArchivedSessions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowArchivedSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowArchivedSessions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowDefaultServerSessionsOnly_MetaData[] = {
		{ "Category", "Multi-User Session Browser" },
		{ "ModuleRelativePath", "Public/Session/Browser/ConcertSessionBrowserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowDefaultServerSessionsOnly_SetBit(void* Obj)
	{
		((UConcertSessionBrowserSettings*)Obj)->bShowDefaultServerSessionsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowDefaultServerSessionsOnly = { "bShowDefaultServerSessionsOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertSessionBrowserSettings), &Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowDefaultServerSessionsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowDefaultServerSessionsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowDefaultServerSessionsOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_LastModifiedTimeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_LastModifiedTimeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowActiveSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowArchivedSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::NewProp_bShowDefaultServerSessionsOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertSessionBrowserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::ClassParams = {
		&UConcertSessionBrowserSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertSessionBrowserSettings()
	{
		if (!Z_Registration_Info_UClass_UConcertSessionBrowserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertSessionBrowserSettings.OuterSingleton, Z_Construct_UClass_UConcertSessionBrowserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertSessionBrowserSettings.OuterSingleton;
	}
	template<> CONCERTSHAREDSLATE_API UClass* StaticClass<UConcertSessionBrowserSettings>()
	{
		return UConcertSessionBrowserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertSessionBrowserSettings);
	UConcertSessionBrowserSettings::~UConcertSessionBrowserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_Session_Browser_ConcertSessionBrowserSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_Session_Browser_ConcertSessionBrowserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertSessionBrowserSettings, UConcertSessionBrowserSettings::StaticClass, TEXT("UConcertSessionBrowserSettings"), &Z_Registration_Info_UClass_UConcertSessionBrowserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertSessionBrowserSettings), 1576542415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_Session_Browser_ConcertSessionBrowserSettings_h_1220491543(TEXT("/Script/ConcertSharedSlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_Session_Browser_ConcertSessionBrowserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_Session_Browser_ConcertSessionBrowserSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
