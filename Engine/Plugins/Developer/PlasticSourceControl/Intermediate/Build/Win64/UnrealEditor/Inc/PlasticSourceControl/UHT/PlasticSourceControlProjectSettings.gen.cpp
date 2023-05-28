// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlasticSourceControlProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlasticSourceControlProjectSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	PLASTICSOURCECONTROL_API UClass* Z_Construct_UClass_UPlasticSourceControlProjectSettings();
	PLASTICSOURCECONTROL_API UClass* Z_Construct_UClass_UPlasticSourceControlProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlasticSourceControl();
// End Cross Module References
	void UPlasticSourceControlProjectSettings::StaticRegisterNativesUPlasticSourceControlProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlasticSourceControlProjectSettings);
	UClass* Z_Construct_UClass_UPlasticSourceControlProjectSettings_NoRegister()
	{
		return UPlasticSourceControlProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserNameToDisplayName_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserNameToDisplayName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserNameToDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UserNameToDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideEmailDomainInUsername_MetaData[];
#endif
		static void NewProp_bHideEmailDomainInUsername_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideEmailDomainInUsername;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptForCheckoutOnChange_MetaData[];
#endif
		static void NewProp_bPromptForCheckoutOnChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptForCheckoutOnChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitNumberOfRevisionsInHistory_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LimitNumberOfRevisionsInHistory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PlasticSourceControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Project Settings for Plastic SCM Source Control. Saved in Config/DefaultEditor.ini */" },
		{ "DisplayName", "Source Control - Plastic SCM" },
		{ "IncludePath", "PlasticSourceControlProjectSettings.h" },
		{ "ModuleRelativePath", "Private/PlasticSourceControlProjectSettings.h" },
		{ "ToolTip", "Project Settings for Plastic SCM Source Control. Saved in Config/DefaultEditor.ini" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName_ValueProp = { "UserNameToDisplayName", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName_Key_KeyProp = { "UserNameToDisplayName_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName_MetaData[] = {
		{ "Category", "Plastic SCM" },
		{ "Comment", "/** Map Plastic SCM user names (typically e-mail addresses or company domain names) to display names for brevity. */" },
		{ "ModuleRelativePath", "Private/PlasticSourceControlProjectSettings.h" },
		{ "ToolTip", "Map Plastic SCM user names (typically e-mail addresses or company domain names) to display names for brevity." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName = { "UserNameToDisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlasticSourceControlProjectSettings, UserNameToDisplayName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bHideEmailDomainInUsername_MetaData[] = {
		{ "Category", "Plastic SCM" },
		{ "Comment", "/** Hide the domain part of an username e-mail address (eg @gmail.com) if the UserNameToDisplayName map didn't match (enabled by default). */" },
		{ "ModuleRelativePath", "Private/PlasticSourceControlProjectSettings.h" },
		{ "ToolTip", "Hide the domain part of an username e-mail address (eg @gmail.com) if the UserNameToDisplayName map didn't match (enabled by default)." },
	};
#endif
	void Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bHideEmailDomainInUsername_SetBit(void* Obj)
	{
		((UPlasticSourceControlProjectSettings*)Obj)->bHideEmailDomainInUsername = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bHideEmailDomainInUsername = { "bHideEmailDomainInUsername", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlasticSourceControlProjectSettings), &Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bHideEmailDomainInUsername_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bHideEmailDomainInUsername_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bHideEmailDomainInUsername_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bPromptForCheckoutOnChange_MetaData[] = {
		{ "Category", "Plastic SCM" },
		{ "Comment", "/** If enabled, you'll be prompted to check out changed files (enabled by default). Checkout is needed to work with Changelists. */" },
		{ "ModuleRelativePath", "Private/PlasticSourceControlProjectSettings.h" },
		{ "ToolTip", "If enabled, you'll be prompted to check out changed files (enabled by default). Checkout is needed to work with Changelists." },
	};
#endif
	void Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bPromptForCheckoutOnChange_SetBit(void* Obj)
	{
		((UPlasticSourceControlProjectSettings*)Obj)->bPromptForCheckoutOnChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bPromptForCheckoutOnChange = { "bPromptForCheckoutOnChange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlasticSourceControlProjectSettings), &Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bPromptForCheckoutOnChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bPromptForCheckoutOnChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bPromptForCheckoutOnChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_LimitNumberOfRevisionsInHistory_MetaData[] = {
		{ "Category", "Plastic SCM" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If a non-null value is set, limit the maximum number of revisions requested to Plastic SCM to display in the \"History\" window. */" },
		{ "ModuleRelativePath", "Private/PlasticSourceControlProjectSettings.h" },
		{ "ToolTip", "If a non-null value is set, limit the maximum number of revisions requested to Plastic SCM to display in the \"History\" window." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_LimitNumberOfRevisionsInHistory = { "LimitNumberOfRevisionsInHistory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlasticSourceControlProjectSettings, LimitNumberOfRevisionsInHistory), METADATA_PARAMS(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_LimitNumberOfRevisionsInHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_LimitNumberOfRevisionsInHistory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_UserNameToDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bHideEmailDomainInUsername,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_bPromptForCheckoutOnChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::NewProp_LimitNumberOfRevisionsInHistory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlasticSourceControlProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::ClassParams = {
		&UPlasticSourceControlProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlasticSourceControlProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UPlasticSourceControlProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlasticSourceControlProjectSettings.OuterSingleton, Z_Construct_UClass_UPlasticSourceControlProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlasticSourceControlProjectSettings.OuterSingleton;
	}
	template<> PLASTICSOURCECONTROL_API UClass* StaticClass<UPlasticSourceControlProjectSettings>()
	{
		return UPlasticSourceControlProjectSettings::StaticClass();
	}
	UPlasticSourceControlProjectSettings::UPlasticSourceControlProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlasticSourceControlProjectSettings);
	UPlasticSourceControlProjectSettings::~UPlasticSourceControlProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlasticSourceControlProjectSettings, UPlasticSourceControlProjectSettings::StaticClass, TEXT("UPlasticSourceControlProjectSettings"), &Z_Registration_Info_UClass_UPlasticSourceControlProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlasticSourceControlProjectSettings), 2149134302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_684677664(TEXT("/Script/PlasticSourceControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_PlasticSourceControl_Source_PlasticSourceControl_Private_PlasticSourceControlProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
