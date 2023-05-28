// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlProtocolOSCSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlProtocolOSCSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROLPROTOCOLOSC_API UClass* Z_Construct_UClass_URemoteControlProtocolOSCSettings();
	REMOTECONTROLPROTOCOLOSC_API UClass* Z_Construct_UClass_URemoteControlProtocolOSCSettings_NoRegister();
	REMOTECONTROLPROTOCOLOSC_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings();
	UPackage* Z_Construct_UPackage__Script_RemoteControlProtocolOSC();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlOSCServerSettings;
class UScriptStruct* FRemoteControlOSCServerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlOSCServerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlOSCServerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings, (UObject*)Z_Construct_UPackage__Script_RemoteControlProtocolOSC(), TEXT("RemoteControlOSCServerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlOSCServerSettings.OuterSingleton;
}
template<> REMOTECONTROLPROTOCOLOSC_API UScriptStruct* StaticStruct<FRemoteControlOSCServerSettings>()
{
	return FRemoteControlOSCServerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * OSC Remote Control server settings\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlProtocolOSCSettings.h" },
		{ "ToolTip", "OSC Remote Control server settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlOSCServerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::NewProp_ServerAddress_MetaData[] = {
		{ "Category", "OSC" },
		{ "Comment", "/**\n\x09* OSC server IP address\n\x09* \n\x09* The format is IP_ADDRESS:PORT_NUMBER.\n\x09*/" },
		{ "ModuleRelativePath", "Private/RemoteControlProtocolOSCSettings.h" },
		{ "ToolTip", "OSC server IP address\n\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlOSCServerSettings, ServerAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::NewProp_ServerAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::NewProp_ServerAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::NewProp_ServerAddress,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolOSC,
		nullptr,
		&NewStructOps,
		"RemoteControlOSCServerSettings",
		sizeof(FRemoteControlOSCServerSettings),
		alignof(FRemoteControlOSCServerSettings),
		Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlOSCServerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlOSCServerSettings.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlOSCServerSettings.InnerSingleton;
	}
	void URemoteControlProtocolOSCSettings::StaticRegisterNativesURemoteControlProtocolOSCSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlProtocolOSCSettings);
	UClass* Z_Construct_UClass_URemoteControlProtocolOSCSettings_NoRegister()
	{
		return URemoteControlProtocolOSCSettings::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServersSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServersSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ServersSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolOSC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * OSC Remote Control settings\n */" },
		{ "IncludePath", "RemoteControlProtocolOSCSettings.h" },
		{ "Keywords", "OSC" },
		{ "ModuleRelativePath", "Private/RemoteControlProtocolOSCSettings.h" },
		{ "ToolTip", "OSC Remote Control settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::NewProp_ServersSettings_Inner = { "ServersSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings, METADATA_PARAMS(nullptr, 0) }; // 2309556919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::NewProp_ServersSettings_MetaData[] = {
		{ "Category", "OSC" },
		{ "Comment", "/** OSC server pair of server ip and server port */" },
		{ "ModuleRelativePath", "Private/RemoteControlProtocolOSCSettings.h" },
		{ "ToolTip", "OSC server pair of server ip and server port" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::NewProp_ServersSettings = { "ServersSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlProtocolOSCSettings, ServersSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::NewProp_ServersSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::NewProp_ServersSettings_MetaData)) }; // 2309556919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::NewProp_ServersSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::NewProp_ServersSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlProtocolOSCSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::ClassParams = {
		&URemoteControlProtocolOSCSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlProtocolOSCSettings()
	{
		if (!Z_Registration_Info_UClass_URemoteControlProtocolOSCSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlProtocolOSCSettings.OuterSingleton, Z_Construct_UClass_URemoteControlProtocolOSCSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlProtocolOSCSettings.OuterSingleton;
	}
	template<> REMOTECONTROLPROTOCOLOSC_API UClass* StaticClass<URemoteControlProtocolOSCSettings>()
	{
		return URemoteControlProtocolOSCSettings::StaticClass();
	}
	URemoteControlProtocolOSCSettings::URemoteControlProtocolOSCSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlProtocolOSCSettings);
	URemoteControlProtocolOSCSettings::~URemoteControlProtocolOSCSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlOSCServerSettings::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlOSCServerSettings_Statics::NewStructOps, TEXT("RemoteControlOSCServerSettings"), &Z_Registration_Info_UScriptStruct_RemoteControlOSCServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlOSCServerSettings), 2309556919U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlProtocolOSCSettings, URemoteControlProtocolOSCSettings::StaticClass, TEXT("URemoteControlProtocolOSCSettings"), &Z_Registration_Info_UClass_URemoteControlProtocolOSCSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlProtocolOSCSettings), 3568649139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_3704494477(TEXT("/Script/RemoteControlProtocolOSC"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolOSC_Source_RemoteControlProtocolOSC_Private_RemoteControlProtocolOSCSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
