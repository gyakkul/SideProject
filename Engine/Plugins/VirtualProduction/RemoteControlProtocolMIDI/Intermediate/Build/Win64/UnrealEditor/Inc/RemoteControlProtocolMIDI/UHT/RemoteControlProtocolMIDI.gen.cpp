// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlProtocolMIDI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlProtocolMIDI() {}
// Cross Module References
	MIDIDEVICE_API UEnum* Z_Construct_UEnum_MIDIDevice_EMIDIEventType();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolEntity();
	REMOTECONTROLPROTOCOLMIDI_API UEnum* Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector();
	REMOTECONTROLPROTOCOLMIDI_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlMIDIDevice();
	REMOTECONTROLPROTOCOLMIDI_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity();
	UPackage* Z_Construct_UPackage__Script_RemoteControlProtocolMIDI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemoteControlMIDIDeviceSelector;
	static UEnum* ERemoteControlMIDIDeviceSelector_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlMIDIDeviceSelector.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemoteControlMIDIDeviceSelector.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector, (UObject*)Z_Construct_UPackage__Script_RemoteControlProtocolMIDI(), TEXT("ERemoteControlMIDIDeviceSelector"));
		}
		return Z_Registration_Info_UEnum_ERemoteControlMIDIDeviceSelector.OuterSingleton;
	}
	template<> REMOTECONTROLPROTOCOLMIDI_API UEnum* StaticEnum<ERemoteControlMIDIDeviceSelector>()
	{
		return ERemoteControlMIDIDeviceSelector_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics::Enumerators[] = {
		{ "ERemoteControlMIDIDeviceSelector::ProjectSettings", (int64)ERemoteControlMIDIDeviceSelector::ProjectSettings },
		{ "ERemoteControlMIDIDeviceSelector::DeviceName", (int64)ERemoteControlMIDIDeviceSelector::DeviceName },
		{ "ERemoteControlMIDIDeviceSelector::DeviceId", (int64)ERemoteControlMIDIDeviceSelector::DeviceId },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * MIDI protocol device selector type\n */" },
		{ "DeviceId.DisplayName", "Device Id" },
		{ "DeviceId.Name", "ERemoteControlMIDIDeviceSelector::DeviceId" },
		{ "DeviceId.ToolTip", "User-specified device id." },
		{ "DeviceName.DisplayName", "Device Name" },
		{ "DeviceName.Name", "ERemoteControlMIDIDeviceSelector::DeviceName" },
		{ "DeviceName.ToolTip", "User-specified device name." },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ProjectSettings.DisplayName", "Use Project Settings" },
		{ "ProjectSettings.Name", "ERemoteControlMIDIDeviceSelector::ProjectSettings" },
		{ "ProjectSettings.ToolTip", "Uses the Default MIDI Device specified in Project Settings." },
		{ "ToolTip", "MIDI protocol device selector type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControlProtocolMIDI,
		nullptr,
		"ERemoteControlMIDIDeviceSelector",
		"ERemoteControlMIDIDeviceSelector",
		Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlMIDIDeviceSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemoteControlMIDIDeviceSelector.InnerSingleton, Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemoteControlMIDIDeviceSelector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlMIDIDevice;
class UScriptStruct* FRemoteControlMIDIDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlMIDIDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlMIDIDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice, (UObject*)Z_Construct_UPackage__Script_RemoteControlProtocolMIDI(), TEXT("RemoteControlMIDIDevice"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlMIDIDevice.OuterSingleton;
}
template<> REMOTECONTROLPROTOCOLMIDI_API UScriptStruct* StaticStruct<FRemoteControlMIDIDevice>()
{
	return FRemoteControlMIDIDevice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DeviceSelector_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceSelector_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolvedDeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeviceIsAvailable_MetaData[];
#endif
		static void NewProp_bDeviceIsAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeviceIsAvailable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * MIDI protocol device identifier\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "MIDI protocol device identifier" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlMIDIDevice>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceSelector_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceSelector_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Midi Device Selector */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "Midi Device Selector" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceSelector = { "DeviceSelector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIDevice, DeviceSelector), Z_Construct_UEnum_RemoteControlProtocolMIDI_ERemoteControlMIDIDeviceSelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceSelector_MetaData)) }; // 2103542537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_ResolvedDeviceId_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Midi Resolved Device Id. Distinct from the user specified Device Id. */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "Midi Resolved Device Id. Distinct from the user specified Device Id." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_ResolvedDeviceId = { "ResolvedDeviceId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIDevice, ResolvedDeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_ResolvedDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_ResolvedDeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Midi Device Name. If specified, takes priority over DeviceId. */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "Midi Device Name. If specified, takes priority over DeviceId." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIDevice, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ClampMin", "0" },
		{ "Comment", "/** User-specified Midi Device Id */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "User-specified Midi Device Id" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIDevice, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_bDeviceIsAvailable_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** If device available for use. */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "If device available for use." },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_bDeviceIsAvailable_SetBit(void* Obj)
	{
		((FRemoteControlMIDIDevice*)Obj)->bDeviceIsAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_bDeviceIsAvailable = { "bDeviceIsAvailable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlMIDIDevice), &Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_bDeviceIsAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_bDeviceIsAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_bDeviceIsAvailable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceSelector_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_ResolvedDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewProp_bDeviceIsAvailable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolMIDI,
		nullptr,
		&NewStructOps,
		"RemoteControlMIDIDevice",
		sizeof(FRemoteControlMIDIDevice),
		alignof(FRemoteControlMIDIDevice),
		Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlMIDIDevice()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlMIDIDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlMIDIDevice.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlMIDIDevice.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRemoteControlMIDIProtocolEntity>() == std::is_polymorphic<FRemoteControlProtocolEntity>(), "USTRUCT FRemoteControlMIDIProtocolEntity cannot be polymorphic unless super FRemoteControlProtocolEntity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlMIDIProtocolEntity;
class UScriptStruct* FRemoteControlMIDIProtocolEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlMIDIProtocolEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlMIDIProtocolEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity, (UObject*)Z_Construct_UPackage__Script_RemoteControlProtocolMIDI(), TEXT("RemoteControlMIDIProtocolEntity"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlMIDIProtocolEntity.OuterSingleton;
}
template<> REMOTECONTROLPROTOCOLMIDI_API UScriptStruct* StaticStruct<FRemoteControlMIDIProtocolEntity>()
{
	return FRemoteControlMIDIProtocolEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageData1_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageData1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeInputTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RangeInputTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * MIDI protocol entity for remote control binding\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "MIDI protocol entity for remote control binding" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlMIDIProtocolEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Device_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Midi Device */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "Midi Device" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIProtocolEntity, Device), Z_Construct_UScriptStruct_FRemoteControlMIDIDevice, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Device_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Device_MetaData)) }; // 860383965
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_EventType_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Midi Event type */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "Midi Event type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIProtocolEntity, EventType), Z_Construct_UEnum_MIDIDevice_EMIDIEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_EventType_MetaData)) }; // 1349923991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_MessageData1_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Midi button event message data id for binding */" },
		{ "DisplayName", "Mapped channel Id" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "Midi button event message data id for binding" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_MessageData1 = { "MessageData1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIProtocolEntity, MessageData1), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_MessageData1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_MessageData1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Midi device channel */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "Midi device channel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIProtocolEntity, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_RangeInputTemplate_MetaData[] = {
		{ "ClampMax", "127" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Midi range input property template, used for binding. */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolMIDI.h" },
		{ "ToolTip", "Midi range input property template, used for binding." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_RangeInputTemplate = { "RangeInputTemplate", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlMIDIProtocolEntity, RangeInputTemplate), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_RangeInputTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_RangeInputTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_MessageData1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewProp_RangeInputTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolMIDI,
		Z_Construct_UScriptStruct_FRemoteControlProtocolEntity,
		&NewStructOps,
		"RemoteControlMIDIProtocolEntity",
		sizeof(FRemoteControlMIDIProtocolEntity),
		alignof(FRemoteControlMIDIProtocolEntity),
		Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlMIDIProtocolEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlMIDIProtocolEntity.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlMIDIProtocolEntity.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_Statics::EnumInfo[] = {
		{ ERemoteControlMIDIDeviceSelector_StaticEnum, TEXT("ERemoteControlMIDIDeviceSelector"), &Z_Registration_Info_UEnum_ERemoteControlMIDIDeviceSelector, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2103542537U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlMIDIDevice::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlMIDIDevice_Statics::NewStructOps, TEXT("RemoteControlMIDIDevice"), &Z_Registration_Info_UScriptStruct_RemoteControlMIDIDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlMIDIDevice), 860383965U) },
		{ FRemoteControlMIDIProtocolEntity::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlMIDIProtocolEntity_Statics::NewStructOps, TEXT("RemoteControlMIDIProtocolEntity"), &Z_Registration_Info_UScriptStruct_RemoteControlMIDIProtocolEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlMIDIProtocolEntity), 4060291038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_3162408807(TEXT("/Script/RemoteControlProtocolMIDI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolMIDI_Source_RemoteControlProtocolMIDI_Public_RemoteControlProtocolMIDI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
