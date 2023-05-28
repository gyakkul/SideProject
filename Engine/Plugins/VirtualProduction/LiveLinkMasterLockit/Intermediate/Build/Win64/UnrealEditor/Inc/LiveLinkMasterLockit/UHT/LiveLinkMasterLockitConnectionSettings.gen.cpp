// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMasterLockitConnectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMasterLockitConnectionSettings() {}
// Cross Module References
	LIVELINKMASTERLOCKIT_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMasterLockit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkMasterLockitConnectionSettings;
class UScriptStruct* FLiveLinkMasterLockitConnectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkMasterLockitConnectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkMasterLockitConnectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkMasterLockit(), TEXT("LiveLinkMasterLockitConnectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkMasterLockitConnectionSettings.OuterSingleton;
}
template<> LIVELINKMASTERLOCKIT_API UScriptStruct* StaticStruct<FLiveLinkMasterLockitConnectionSettings>()
{
	return FLiveLinkMasterLockitConnectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMasterLockitConnectionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkMasterLockitConnectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_IPAddress_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkMasterLockitConnectionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkMasterLockitConnectionSettings, IPAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkMasterLockitConnectionSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkMasterLockitConnectionSettings, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_SubjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewProp_SubjectName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMasterLockit,
		nullptr,
		&NewStructOps,
		"LiveLinkMasterLockitConnectionSettings",
		sizeof(FLiveLinkMasterLockitConnectionSettings),
		alignof(FLiveLinkMasterLockitConnectionSettings),
		Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkMasterLockitConnectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkMasterLockitConnectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkMasterLockitConnectionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitConnectionSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitConnectionSettings_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkMasterLockitConnectionSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkMasterLockitConnectionSettings_Statics::NewStructOps, TEXT("LiveLinkMasterLockitConnectionSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkMasterLockitConnectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkMasterLockitConnectionSettings), 2967036895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitConnectionSettings_h_3548774409(TEXT("/Script/LiveLinkMasterLockit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitConnectionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitConnectionSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
