// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetworkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings();
	ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription;
class UScriptStruct* FNetworkEmulationProfileDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkEmulationProfileDescription"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkEmulationProfileDescription>()
{
	return FNetworkEmulationProfileDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkEmulationProfileDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkEmulationProfileDescription, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkEmulationProfileDescription, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ToolTip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewProp_ToolTip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NetworkEmulationProfileDescription",
		sizeof(FNetworkEmulationProfileDescription),
		alignof(FNetworkEmulationProfileDescription),
		Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.InnerSingleton, Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription.InnerSingleton;
	}
	void UNetworkSettings::StaticRegisterNativesUNetworkSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkSettings);
	UClass* Z_Construct_UClass_UNetworkSettings_NoRegister()
	{
		return UNetworkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVerifyPeer_MetaData[];
#endif
		static void NewProp_bVerifyPeer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerifyPeer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData[];
#endif
		static void NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiplayerWorldOriginRebasing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkEmulationProfiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkEmulationProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NetworkEmulationProfiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Network settings.\n */" },
		{ "DisplayName", "Network" },
		{ "IncludePath", "Engine/NetworkSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "Network settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_MetaData[] = {
		{ "Category", "libcurl" },
		{ "ConsoleVariable", "n.VerifyPeer" },
		{ "DisplayName", "Verify Peer" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "If true, libcurl authenticates the peer's certificate. Disable to allow self-signed certificates." },
	};
#endif
	void Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_SetBit(void* Obj)
	{
		((UNetworkSettings*)Obj)->bVerifyPeer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer = { "bVerifyPeer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNetworkSettings), &Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData[] = {
		{ "Category", "World" },
		{ "ConsoleVariable", "p.EnableMultiplayerWorldOriginRebasing" },
		{ "DisplayName", "Enable Multiplayer World Origin Rebasing" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "If true, origin rebasing is enabled in multiplayer games, meaning that servers and clients can have different local world origins." },
	};
#endif
	void Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit(void* Obj)
	{
		((UNetworkSettings*)Obj)->bEnableMultiplayerWorldOriginRebasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing = { "bEnableMultiplayerWorldOriginRebasing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNetworkSettings), &Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles_Inner = { "NetworkEmulationProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription, METADATA_PARAMS(nullptr, 0) }; // 1612871746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles_MetaData[] = {
		{ "Comment", "/** This lists the common network emulation profiles that will be selectable in PIE settings */" },
		{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
		{ "ToolTip", "This lists the common network emulation profiles that will be selectable in PIE settings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles = { "NetworkEmulationProfiles", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkSettings, NetworkEmulationProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles_MetaData)) }; // 1612871746
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkSettings_Statics::NewProp_NetworkEmulationProfiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkSettings_Statics::ClassParams = {
		&UNetworkSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetworkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkSettings()
	{
		if (!Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton, Z_Construct_UClass_UNetworkSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNetworkSettings>()
	{
		return UNetworkSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkSettings);
	UNetworkSettings::~UNetworkSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ScriptStructInfo[] = {
		{ FNetworkEmulationProfileDescription::StaticStruct, Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewStructOps, TEXT("NetworkEmulationProfileDescription"), &Z_Registration_Info_UScriptStruct_NetworkEmulationProfileDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkEmulationProfileDescription), 1612871746U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkSettings, UNetworkSettings::StaticClass, TEXT("UNetworkSettings"), &Z_Registration_Info_UClass_UNetworkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkSettings), 1591285037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_274978347(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
