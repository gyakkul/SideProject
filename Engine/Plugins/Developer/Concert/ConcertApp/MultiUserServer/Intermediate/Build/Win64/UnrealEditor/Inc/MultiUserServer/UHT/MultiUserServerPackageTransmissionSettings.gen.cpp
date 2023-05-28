// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Settings/MultiUserServerPackageTransmissionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiUserServerPackageTransmissionSettings() {}
// Cross Module References
	CONCERTSHAREDSLATE_API UEnum* Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MULTIUSERSERVER_API UClass* Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings();
	MULTIUSERSERVER_API UClass* Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiUserServer();
// End Cross Module References
	void UMultiUserServerPackageTransmissionSettings::StaticRegisterNativesUMultiUserServerPackageTransmissionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiUserServerPackageTransmissionSettings);
	UClass* Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_NoRegister()
	{
		return UMultiUserServerPackageTransmissionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimestampTimeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimestampTimeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimestampTimeFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/MultiUserServerPackageTransmissionSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/MultiUserServerPackageTransmissionSettings.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::NewProp_TimestampTimeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::NewProp_TimestampTimeFormat_MetaData[] = {
		{ "Comment", "/** How to display FPackageTransmissionEntry::Time */" },
		{ "ModuleRelativePath", "Private/Settings/MultiUserServerPackageTransmissionSettings.h" },
		{ "ToolTip", "How to display FPackageTransmissionEntry::Time" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::NewProp_TimestampTimeFormat = { "TimestampTimeFormat", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiUserServerPackageTransmissionSettings, TimestampTimeFormat), Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat, METADATA_PARAMS(Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::NewProp_TimestampTimeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::NewProp_TimestampTimeFormat_MetaData)) }; // 1917496234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::NewProp_TimestampTimeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::NewProp_TimestampTimeFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiUserServerPackageTransmissionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::ClassParams = {
		&UMultiUserServerPackageTransmissionSettings::StaticClass,
		"MultiUserServerUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings()
	{
		if (!Z_Registration_Info_UClass_UMultiUserServerPackageTransmissionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiUserServerPackageTransmissionSettings.OuterSingleton, Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiUserServerPackageTransmissionSettings.OuterSingleton;
	}
	template<> MULTIUSERSERVER_API UClass* StaticClass<UMultiUserServerPackageTransmissionSettings>()
	{
		return UMultiUserServerPackageTransmissionSettings::StaticClass();
	}
	UMultiUserServerPackageTransmissionSettings::UMultiUserServerPackageTransmissionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiUserServerPackageTransmissionSettings);
	UMultiUserServerPackageTransmissionSettings::~UMultiUserServerPackageTransmissionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerPackageTransmissionSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerPackageTransmissionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiUserServerPackageTransmissionSettings, UMultiUserServerPackageTransmissionSettings::StaticClass, TEXT("UMultiUserServerPackageTransmissionSettings"), &Z_Registration_Info_UClass_UMultiUserServerPackageTransmissionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiUserServerPackageTransmissionSettings), 1557862749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerPackageTransmissionSettings_h_3814508967(TEXT("/Script/MultiUserServer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerPackageTransmissionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerPackageTransmissionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
