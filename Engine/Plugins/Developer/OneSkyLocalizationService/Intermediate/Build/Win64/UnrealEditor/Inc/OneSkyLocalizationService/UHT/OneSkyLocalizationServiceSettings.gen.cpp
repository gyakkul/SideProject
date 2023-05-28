// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneSkyLocalizationServiceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOneSkyLocalizationServiceSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ONESKYLOCALIZATIONSERVICE_API UClass* Z_Construct_UClass_UOneSkyLocalizationTargetSettings();
	ONESKYLOCALIZATIONSERVICE_API UClass* Z_Construct_UClass_UOneSkyLocalizationTargetSettings_NoRegister();
	ONESKYLOCALIZATIONSERVICE_API UScriptStruct* Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting();
	UPackage* Z_Construct_UPackage__Script_OneSkyLocalizationService();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OneSkyLocalizationTargetSetting;
class UScriptStruct* FOneSkyLocalizationTargetSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OneSkyLocalizationTargetSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OneSkyLocalizationTargetSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting, (UObject*)Z_Construct_UPackage__Script_OneSkyLocalizationService(), TEXT("OneSkyLocalizationTargetSetting"));
	}
	return Z_Registration_Info_UScriptStruct_OneSkyLocalizationTargetSetting.OuterSingleton;
}
template<> ONESKYLOCALIZATIONSERVICE_API UScriptStruct* StaticStruct<FOneSkyLocalizationTargetSetting>()
{
	return FOneSkyLocalizationTargetSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OneSkyProjectId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OneSkyProjectId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OneSkyFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OneSkyFileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds the OneSky settings for a Localization Target.\n*/" },
		{ "ModuleRelativePath", "Private/OneSkyLocalizationServiceSettings.h" },
		{ "ToolTip", "Holds the OneSky settings for a Localization Target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOneSkyLocalizationTargetSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_TargetGuid_MetaData[] = {
		{ "Comment", "/**\n\x09* The GUID of the LocalizationTarget that these OneSky settings are for\n\x09*/" },
		{ "ModuleRelativePath", "Private/OneSkyLocalizationServiceSettings.h" },
		{ "ToolTip", "The GUID of the LocalizationTarget that these OneSky settings are for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_TargetGuid = { "TargetGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOneSkyLocalizationTargetSetting, TargetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_TargetGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_TargetGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyProjectId_MetaData[] = {
		{ "Comment", "/**\n\x09* The id of the OneSky Project  this target belongs to\n\x09*/" },
		{ "ModuleRelativePath", "Private/OneSkyLocalizationServiceSettings.h" },
		{ "ToolTip", "The id of the OneSky Project  this target belongs to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyProjectId = { "OneSkyProjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOneSkyLocalizationTargetSetting, OneSkyProjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyProjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyProjectId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyFileName_MetaData[] = {
		{ "Comment", "/**\n\x09* The name of the file that corresponds to this target\n\x09*/" },
		{ "ModuleRelativePath", "Private/OneSkyLocalizationServiceSettings.h" },
		{ "ToolTip", "The name of the file that corresponds to this target" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyFileName = { "OneSkyFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOneSkyLocalizationTargetSetting, OneSkyFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyFileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_TargetGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyProjectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewProp_OneSkyFileName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OneSkyLocalizationService,
		nullptr,
		&NewStructOps,
		"OneSkyLocalizationTargetSetting",
		sizeof(FOneSkyLocalizationTargetSetting),
		alignof(FOneSkyLocalizationTargetSetting),
		Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_OneSkyLocalizationTargetSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OneSkyLocalizationTargetSetting.InnerSingleton, Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OneSkyLocalizationTargetSetting.InnerSingleton;
	}
	void UOneSkyLocalizationTargetSettings::StaticRegisterNativesUOneSkyLocalizationTargetSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOneSkyLocalizationTargetSettings);
	UClass* Z_Construct_UClass_UOneSkyLocalizationTargetSettings_NoRegister()
	{
		return UOneSkyLocalizationTargetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OneSkyLocalizationService,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OneSkyLocalizationServiceSettings.h" },
		{ "ModuleRelativePath", "Private/OneSkyLocalizationServiceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::NewProp_TargetSettings_Inner = { "TargetSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting, METADATA_PARAMS(nullptr, 0) }; // 3533272101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::NewProp_TargetSettings_MetaData[] = {
		{ "Comment", "/**\n\x09* The array of settings for each target of this project \n\x09*/" },
		{ "ModuleRelativePath", "Private/OneSkyLocalizationServiceSettings.h" },
		{ "ToolTip", "The array of settings for each target of this project" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::NewProp_TargetSettings = { "TargetSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOneSkyLocalizationTargetSettings, TargetSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::NewProp_TargetSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::NewProp_TargetSettings_MetaData)) }; // 3533272101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::NewProp_TargetSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::NewProp_TargetSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOneSkyLocalizationTargetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::ClassParams = {
		&UOneSkyLocalizationTargetSettings::StaticClass,
		"LocalizationServiceSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOneSkyLocalizationTargetSettings()
	{
		if (!Z_Registration_Info_UClass_UOneSkyLocalizationTargetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOneSkyLocalizationTargetSettings.OuterSingleton, Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOneSkyLocalizationTargetSettings.OuterSingleton;
	}
	template<> ONESKYLOCALIZATIONSERVICE_API UClass* StaticClass<UOneSkyLocalizationTargetSettings>()
	{
		return UOneSkyLocalizationTargetSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOneSkyLocalizationTargetSettings);
	UOneSkyLocalizationTargetSettings::~UOneSkyLocalizationTargetSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_Statics::ScriptStructInfo[] = {
		{ FOneSkyLocalizationTargetSetting::StaticStruct, Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics::NewStructOps, TEXT("OneSkyLocalizationTargetSetting"), &Z_Registration_Info_UScriptStruct_OneSkyLocalizationTargetSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOneSkyLocalizationTargetSetting), 3533272101U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOneSkyLocalizationTargetSettings, UOneSkyLocalizationTargetSettings::StaticClass, TEXT("UOneSkyLocalizationTargetSettings"), &Z_Registration_Info_UClass_UOneSkyLocalizationTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOneSkyLocalizationTargetSettings), 3139968400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_308553277(TEXT("/Script/OneSkyLocalizationService"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
