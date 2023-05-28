// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlProtocolMIDISettings.h"
#include "RemoteControlProtocolMIDI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlProtocolMIDISettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROLPROTOCOLMIDI_API UClass* Z_Construct_UClass_URemoteControlProtocolMIDISettings();
	REMOTECONTROLPROTOCOLMIDI_API UClass* Z_Construct_UClass_URemoteControlProtocolMIDISettings_NoRegister();
	REMOTECONTROLPROTOCOLMIDI_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlMIDIDevice();
	UPackage* Z_Construct_UPackage__Script_RemoteControlProtocolMIDI();
// End Cross Module References
	void URemoteControlProtocolMIDISettings::StaticRegisterNativesURemoteControlProtocolMIDISettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlProtocolMIDISettings);
	UClass* Z_Construct_UClass_URemoteControlProtocolMIDISettings_NoRegister()
	{
		return URemoteControlProtocolMIDISettings::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolMIDI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MIDI Remote Control Settings\n */" },
		{ "IncludePath", "RemoteControlProtocolMIDISettings.h" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDISettings.h" },
		{ "ToolTip", "MIDI Remote Control Settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::NewProp_DefaultDevice_MetaData[] = {
		{ "Category", "MIDI" },
		{ "Comment", "/** Midi Default Device */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDISettings.h" },
		{ "ToolTip", "Midi Default Device" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::NewProp_DefaultDevice = { "DefaultDevice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlProtocolMIDISettings, DefaultDevice), Z_Construct_UScriptStruct_FRemoteControlMIDIDevice, METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::NewProp_DefaultDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::NewProp_DefaultDevice_MetaData)) }; // 860383965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::NewProp_DefaultDevice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlProtocolMIDISettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::ClassParams = {
		&URemoteControlProtocolMIDISettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlProtocolMIDISettings()
	{
		if (!Z_Registration_Info_UClass_URemoteControlProtocolMIDISettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlProtocolMIDISettings.OuterSingleton, Z_Construct_UClass_URemoteControlProtocolMIDISettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlProtocolMIDISettings.OuterSingleton;
	}
	template<> REMOTECONTROLPROTOCOLMIDI_API UClass* StaticClass<URemoteControlProtocolMIDISettings>()
	{
		return URemoteControlProtocolMIDISettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlProtocolMIDISettings);
	URemoteControlProtocolMIDISettings::~URemoteControlProtocolMIDISettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDISettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDISettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlProtocolMIDISettings, URemoteControlProtocolMIDISettings::StaticClass, TEXT("URemoteControlProtocolMIDISettings"), &Z_Registration_Info_UClass_URemoteControlProtocolMIDISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlProtocolMIDISettings), 621820952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDISettings_h_327871323(TEXT("/Script/RemoteControlProtocolMIDI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDISettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
