// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkFreeDConnectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFreeDConnectionSettings() {}
// Cross Module References
	LIVELINKFREED_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkFreeD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkFreeDConnectionSettings;
class UScriptStruct* FLiveLinkFreeDConnectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkFreeDConnectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkFreeDConnectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkFreeD(), TEXT("LiveLinkFreeDConnectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkFreeDConnectionSettings.OuterSingleton;
}
template<> LIVELINKFREED_API UScriptStruct* StaticStruct<FLiveLinkFreeDConnectionSettings>()
{
	return FLiveLinkFreeDConnectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UDPPortNumber_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_UDPPortNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LiveLinkFreeDConnectionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkFreeDConnectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_IPAddress_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** IP address of the free-d tracking source */" },
		{ "ModuleRelativePath", "Private/LiveLinkFreeDConnectionSettings.h" },
		{ "ToolTip", "IP address of the free-d tracking source" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkFreeDConnectionSettings, IPAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_UDPPortNumber_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** UDP port number */" },
		{ "ModuleRelativePath", "Private/LiveLinkFreeDConnectionSettings.h" },
		{ "ToolTip", "UDP port number" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_UDPPortNumber = { "UDPPortNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkFreeDConnectionSettings, UDPPortNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_UDPPortNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_UDPPortNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewProp_UDPPortNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkFreeD,
		nullptr,
		&NewStructOps,
		"LiveLinkFreeDConnectionSettings",
		sizeof(FLiveLinkFreeDConnectionSettings),
		alignof(FLiveLinkFreeDConnectionSettings),
		Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkFreeDConnectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkFreeDConnectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkFreeDConnectionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Private_LiveLinkFreeDConnectionSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Private_LiveLinkFreeDConnectionSettings_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkFreeDConnectionSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkFreeDConnectionSettings_Statics::NewStructOps, TEXT("LiveLinkFreeDConnectionSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkFreeDConnectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkFreeDConnectionSettings), 1786608536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Private_LiveLinkFreeDConnectionSettings_h_1423042298(TEXT("/Script/LiveLinkFreeD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Private_LiveLinkFreeDConnectionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Private_LiveLinkFreeDConnectionSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
