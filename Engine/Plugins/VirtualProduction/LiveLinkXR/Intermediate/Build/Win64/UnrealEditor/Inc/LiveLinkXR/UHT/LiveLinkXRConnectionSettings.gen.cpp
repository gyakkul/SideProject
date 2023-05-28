// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkXRConnectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkXRConnectionSettings() {}
// Cross Module References
	LIVELINKXR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkXR();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkXRConnectionSettings;
class UScriptStruct* FLiveLinkXRConnectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkXRConnectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkXRConnectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkXR(), TEXT("LiveLinkXRConnectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkXRConnectionSettings.OuterSingleton;
}
template<> LIVELINKXR_API UScriptStruct* StaticStruct<FLiveLinkXRConnectionSettings>()
{
	return FLiveLinkXRConnectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackTrackers_MetaData[];
#endif
		static void NewProp_bTrackTrackers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackTrackers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackControllers_MetaData[];
#endif
		static void NewProp_bTrackControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackHMDs_MetaData[];
#endif
		static void NewProp_bTrackHMDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackHMDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUpdateRateInHz_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LocalUpdateRateInHz;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkXRConnectionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkXRConnectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackTrackers_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** Track all SteamVR tracker pucks */" },
		{ "ModuleRelativePath", "Public/LiveLinkXRConnectionSettings.h" },
		{ "ToolTip", "Track all SteamVR tracker pucks" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackTrackers_SetBit(void* Obj)
	{
		((FLiveLinkXRConnectionSettings*)Obj)->bTrackTrackers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackTrackers = { "bTrackTrackers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkXRConnectionSettings), &Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackTrackers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackTrackers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackTrackers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackControllers_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** Track all controllers */" },
		{ "ModuleRelativePath", "Public/LiveLinkXRConnectionSettings.h" },
		{ "ToolTip", "Track all controllers" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackControllers_SetBit(void* Obj)
	{
		((FLiveLinkXRConnectionSettings*)Obj)->bTrackControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackControllers = { "bTrackControllers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkXRConnectionSettings), &Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackControllers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackControllers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackHMDs_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** Track all HMDs */" },
		{ "ModuleRelativePath", "Public/LiveLinkXRConnectionSettings.h" },
		{ "ToolTip", "Track all HMDs" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackHMDs_SetBit(void* Obj)
	{
		((FLiveLinkXRConnectionSettings*)Obj)->bTrackHMDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackHMDs = { "bTrackHMDs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkXRConnectionSettings), &Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackHMDs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackHMDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackHMDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Update rate (in Hz) at which to read the tracking data for each device */" },
		{ "ModuleRelativePath", "Public/LiveLinkXRConnectionSettings.h" },
		{ "ToolTip", "Update rate (in Hz) at which to read the tracking data for each device" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_LocalUpdateRateInHz = { "LocalUpdateRateInHz", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkXRConnectionSettings, LocalUpdateRateInHz), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackTrackers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_bTrackHMDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewProp_LocalUpdateRateInHz,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkXR,
		nullptr,
		&NewStructOps,
		"LiveLinkXRConnectionSettings",
		sizeof(FLiveLinkXRConnectionSettings),
		alignof(FLiveLinkXRConnectionSettings),
		Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkXRConnectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkXRConnectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkXRConnectionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRConnectionSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRConnectionSettings_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkXRConnectionSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkXRConnectionSettings_Statics::NewStructOps, TEXT("LiveLinkXRConnectionSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkXRConnectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkXRConnectionSettings), 3002460280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRConnectionSettings_h_1254267434(TEXT("/Script/LiveLinkXR"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRConnectionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRConnectionSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
