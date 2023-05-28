// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Analytics/AnalyticsPrivacySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalyticsPrivacySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAnalyticsPrivacySettings();
	UNREALED_API UClass* Z_Construct_UClass_UAnalyticsPrivacySettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnalyticsPrivacySettings::StaticRegisterNativesUAnalyticsPrivacySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnalyticsPrivacySettings);
	UClass* Z_Construct_UClass_UAnalyticsPrivacySettings_NoRegister()
	{
		return UAnalyticsPrivacySettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnalyticsPrivacySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendUsageData_MetaData[];
#endif
		static void NewProp_bSendUsageData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendUsageData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressIndustryPopup_MetaData[];
#endif
		static void NewProp_bSuppressIndustryPopup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressIndustryPopup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Analytics/AnalyticsPrivacySettings.h" },
		{ "ModuleRelativePath", "Classes/Analytics/AnalyticsPrivacySettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Determines whether the editor sends usage information to Epic Games in order to improve Unreal Engine. Your information will never be shared with 3rd parties. */" },
		{ "ModuleRelativePath", "Classes/Analytics/AnalyticsPrivacySettings.h" },
		{ "ToolTip", "Determines whether the editor sends usage information to Epic Games in order to improve Unreal Engine. Your information will never be shared with 3rd parties." },
	};
#endif
	void Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_SetBit(void* Obj)
	{
		((UAnalyticsPrivacySettings*)Obj)->bSendUsageData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData = { "bSendUsageData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnalyticsPrivacySettings), &Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSuppressIndustryPopup_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Determines whether the editor asks for your industry and sends that information to Epic Games in order to improve Unreal Engine. Your information will never be shared with 3rd parties. \n\x09* As Unreal Engine is used across a range of industries, we want to make sure we are addressing the needs of those verticals. A one-time prompt will show up for a user asking if they \n\x09* are using the editor for the field of: Game Development, Film & TV, Architecture, Automotive & Manufacturing, Broadcasting & Live Events, Advertising & Marketing, Simulation & Training, or Other.\n\x09* \n\x09* If you would like to block the prompt from showing up for members of your team, but otherwise send usage data back to Epic Games, you can add the following to your BaseEditorSettings.ini:\n\x09* [/Script/UnrealEd.AnalyticsPrivacySettings]\n\x09* bSuppressIndustryPopup=True\n\x09* \n\x09* Additionally, for users who do not wish to send this information back, simply close the pop-up and it will not be shown again.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Analytics/AnalyticsPrivacySettings.h" },
		{ "ToolTip", "Determines whether the editor asks for your industry and sends that information to Epic Games in order to improve Unreal Engine. Your information will never be shared with 3rd parties.\nAs Unreal Engine is used across a range of industries, we want to make sure we are addressing the needs of those verticals. A one-time prompt will show up for a user asking if they\nare using the editor for the field of: Game Development, Film & TV, Architecture, Automotive & Manufacturing, Broadcasting & Live Events, Advertising & Marketing, Simulation & Training, or Other.\n\nIf you would like to block the prompt from showing up for members of your team, but otherwise send usage data back to Epic Games, you can add the following to your BaseEditorSettings.ini:\n[/Script/UnrealEd.AnalyticsPrivacySettings]\nbSuppressIndustryPopup=True\n\nAdditionally, for users who do not wish to send this information back, simply close the pop-up and it will not be shown again." },
	};
#endif
	void Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSuppressIndustryPopup_SetBit(void* Obj)
	{
		((UAnalyticsPrivacySettings*)Obj)->bSuppressIndustryPopup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSuppressIndustryPopup = { "bSuppressIndustryPopup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnalyticsPrivacySettings), &Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSuppressIndustryPopup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSuppressIndustryPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSuppressIndustryPopup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSendUsageData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::NewProp_bSuppressIndustryPopup,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister, (int32)VTABLE_OFFSET(UAnalyticsPrivacySettings, IImportantToggleSettingInterface), false },  // 336613340
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalyticsPrivacySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::ClassParams = {
		&UAnalyticsPrivacySettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalyticsPrivacySettings()
	{
		if (!Z_Registration_Info_UClass_UAnalyticsPrivacySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnalyticsPrivacySettings.OuterSingleton, Z_Construct_UClass_UAnalyticsPrivacySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnalyticsPrivacySettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnalyticsPrivacySettings>()
	{
		return UAnalyticsPrivacySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalyticsPrivacySettings);
	UAnalyticsPrivacySettings::~UAnalyticsPrivacySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnalyticsPrivacySettings, UAnalyticsPrivacySettings::StaticClass, TEXT("UAnalyticsPrivacySettings"), &Z_Registration_Info_UClass_UAnalyticsPrivacySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnalyticsPrivacySettings), 3252089668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_3861521437(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_AnalyticsPrivacySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
