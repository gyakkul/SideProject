// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkPrestonMDRConnectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPrestonMDRConnectionSettings() {}
// Cross Module References
	LIVELINKPRESTONMDR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkPrestonMDR();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRConnectionSettings;
class UScriptStruct* FLiveLinkPrestonMDRConnectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRConnectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRConnectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkPrestonMDR(), TEXT("LiveLinkPrestonMDRConnectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRConnectionSettings.OuterSingleton;
}
template<> LIVELINKPRESTONMDR_API UScriptStruct* StaticStruct<FLiveLinkPrestonMDRConnectionSettings>()
{
	return FLiveLinkPrestonMDRConnectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_PortNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkPrestonMDRConnectionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPrestonMDRConnectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_IPAddress_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkPrestonMDRConnectionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPrestonMDRConnectionSettings, IPAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_PortNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkPrestonMDRConnectionSettings.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPrestonMDRConnectionSettings, PortNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_PortNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_PortNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkPrestonMDRConnectionSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPrestonMDRConnectionSettings, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_SubjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_PortNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewProp_SubjectName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
		nullptr,
		&NewStructOps,
		"LiveLinkPrestonMDRConnectionSettings",
		sizeof(FLiveLinkPrestonMDRConnectionSettings),
		alignof(FLiveLinkPrestonMDRConnectionSettings),
		Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRConnectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRConnectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRConnectionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRConnectionSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRConnectionSettings_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkPrestonMDRConnectionSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPrestonMDRConnectionSettings_Statics::NewStructOps, TEXT("LiveLinkPrestonMDRConnectionSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRConnectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPrestonMDRConnectionSettings), 954630965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRConnectionSettings_h_846896609(TEXT("/Script/LiveLinkPrestonMDR"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRConnectionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRConnectionSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
