// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MIDIDeviceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDeviceManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceController_NoRegister();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceInputController_NoRegister();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceManager();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceManager_NoRegister();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceOutputController_NoRegister();
	MIDIDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FFoundMIDIDevice();
	MIDIDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FMIDIDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_MIDIDevice();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoundMIDIDevice;
class UScriptStruct* FFoundMIDIDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoundMIDIDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoundMIDIDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoundMIDIDevice, (UObject*)Z_Construct_UPackage__Script_MIDIDevice(), TEXT("FoundMIDIDevice"));
	}
	return Z_Registration_Info_UScriptStruct_FoundMIDIDevice.OuterSingleton;
}
template<> MIDIDEVICE_API UScriptStruct* StaticStruct<FFoundMIDIDevice>()
{
	return FFoundMIDIDevice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanReceiveFrom_MetaData[];
#endif
		static void NewProp_bCanReceiveFrom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanReceiveFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSendTo_MetaData[];
#endif
		static void NewProp_bCanSendTo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSendTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlreadyInUse_MetaData[];
#endif
		static void NewProp_bIsAlreadyInUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlreadyInUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultInputDevice_MetaData[];
#endif
		static void NewProp_bIsDefaultInputDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultInputDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultOutputDevice_MetaData[];
#endif
		static void NewProp_bIsDefaultOutputDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultOutputDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoundMIDIDevice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** The unique ID of this MIDI device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "The unique ID of this MIDI device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFoundMIDIDevice, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** The name of this device.  This name comes from the MIDI hardware, and might not be unique */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "The name of this device.  This name comes from the MIDI hardware, and might not be unique" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFoundMIDIDevice, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanReceiveFrom_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** True if the device supports sending events to us */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "True if the device supports sending events to us" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanReceiveFrom_SetBit(void* Obj)
	{
		((FFoundMIDIDevice*)Obj)->bCanReceiveFrom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanReceiveFrom = { "bCanReceiveFrom", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFoundMIDIDevice), &Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanReceiveFrom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanReceiveFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanReceiveFrom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanSendTo_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** True if the device supports receiving events from us */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "True if the device supports receiving events from us" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanSendTo_SetBit(void* Obj)
	{
		((FFoundMIDIDevice*)Obj)->bCanSendTo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanSendTo = { "bCanSendTo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFoundMIDIDevice), &Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanSendTo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanSendTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanSendTo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsAlreadyInUse_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** Whether the device is already in use.  You might not want to create a controller for devices that are busy.  Someone else could be using it. */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Whether the device is already in use.  You might not want to create a controller for devices that are busy.  Someone else could be using it." },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsAlreadyInUse_SetBit(void* Obj)
	{
		((FFoundMIDIDevice*)Obj)->bIsAlreadyInUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsAlreadyInUse = { "bIsAlreadyInUse", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFoundMIDIDevice), &Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsAlreadyInUse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsAlreadyInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsAlreadyInUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultInputDevice_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** True if this is the default MIDI device for input on this system */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "True if this is the default MIDI device for input on this system" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultInputDevice_SetBit(void* Obj)
	{
		((FFoundMIDIDevice*)Obj)->bIsDefaultInputDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultInputDevice = { "bIsDefaultInputDevice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFoundMIDIDevice), &Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultInputDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultInputDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultInputDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultOutputDevice_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** True if this is the default MIDI device for output on this system */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "True if this is the default MIDI device for output on this system" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultOutputDevice_SetBit(void* Obj)
	{
		((FFoundMIDIDevice*)Obj)->bIsDefaultOutputDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultOutputDevice = { "bIsDefaultOutputDevice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFoundMIDIDevice), &Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultOutputDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultOutputDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultOutputDevice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanReceiveFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bCanSendTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsAlreadyInUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultInputDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewProp_bIsDefaultOutputDevice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MIDIDevice,
		nullptr,
		&NewStructOps,
		"FoundMIDIDevice",
		sizeof(FFoundMIDIDevice),
		alignof(FFoundMIDIDevice),
		Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoundMIDIDevice()
	{
		if (!Z_Registration_Info_UScriptStruct_FoundMIDIDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoundMIDIDevice.InnerSingleton, Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FoundMIDIDevice.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIDIDeviceInfo;
class UScriptStruct* FMIDIDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIDIDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIDIDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIDIDeviceInfo, (UObject*)Z_Construct_UPackage__Script_MIDIDevice(), TEXT("MIDIDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MIDIDeviceInfo.OuterSingleton;
}
template<> MIDIDEVICE_API UScriptStruct* StaticStruct<FMIDIDeviceInfo>()
{
	return FMIDIDeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlreadyInUse_MetaData[];
#endif
		static void NewProp_bIsAlreadyInUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlreadyInUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultDevice_MetaData[];
#endif
		static void NewProp_bIsDefaultDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIDIDeviceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** The unique ID of this MIDI device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "The unique ID of this MIDI device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMIDIDeviceInfo, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** The name of this device.  This name comes from the MIDI hardware, any might not be unique */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "The name of this device.  This name comes from the MIDI hardware, any might not be unique" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMIDIDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsAlreadyInUse_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** Whether the device is already in use.  You might not want to create a controller for devices that are busy.  Someone else could be using it. */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Whether the device is already in use.  You might not want to create a controller for devices that are busy.  Someone else could be using it." },
	};
#endif
	void Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsAlreadyInUse_SetBit(void* Obj)
	{
		((FMIDIDeviceInfo*)Obj)->bIsAlreadyInUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsAlreadyInUse = { "bIsAlreadyInUse", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMIDIDeviceInfo), &Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsAlreadyInUse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsAlreadyInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsAlreadyInUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsDefaultDevice_MetaData[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/** True if this is the default MIDI device for input on this system */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "True if this is the default MIDI device for input on this system" },
	};
#endif
	void Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsDefaultDevice_SetBit(void* Obj)
	{
		((FMIDIDeviceInfo*)Obj)->bIsDefaultDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsDefaultDevice = { "bIsDefaultDevice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMIDIDeviceInfo), &Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsDefaultDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsDefaultDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsDefaultDevice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsAlreadyInUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewProp_bIsDefaultDevice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MIDIDevice,
		nullptr,
		&NewStructOps,
		"MIDIDeviceInfo",
		sizeof(FMIDIDeviceInfo),
		alignof(FMIDIDeviceInfo),
		Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIDIDeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MIDIDeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIDIDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIDIDeviceInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execCreateMIDIDeviceOutputController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMIDIDeviceOutputController**)Z_Param__Result=UMIDIDeviceManager::CreateMIDIDeviceOutputController(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execCreateMIDIDeviceInputController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_MIDIBufferSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMIDIDeviceInputController**)Z_Param__Result=UMIDIDeviceManager::CreateMIDIDeviceInputController(Z_Param_DeviceID,Z_Param_MIDIBufferSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execCreateMIDIDeviceController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_MIDIBufferSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMIDIDeviceController**)Z_Param__Result=UMIDIDeviceManager::CreateMIDIDeviceController(Z_Param_DeviceID,Z_Param_MIDIBufferSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execGetDefaultMIDIOutputDeviceID)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMIDIDeviceManager::GetDefaultMIDIOutputDeviceID(Z_Param_Out_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execGetMIDIOutputDeviceIDByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMIDIDeviceManager::GetMIDIOutputDeviceIDByName(Z_Param_DeviceName,Z_Param_Out_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execGetDefaultMIDIInputDeviceID)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMIDIDeviceManager::GetDefaultMIDIInputDeviceID(Z_Param_Out_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execGetMIDIInputDeviceIDByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMIDIDeviceManager::GetMIDIInputDeviceIDByName(Z_Param_DeviceName,Z_Param_Out_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execFindAllMIDIDeviceInfo)
	{
		P_GET_TARRAY_REF(FMIDIDeviceInfo,Z_Param_Out_OutMIDIInputDevices);
		P_GET_TARRAY_REF(FMIDIDeviceInfo,Z_Param_Out_OutMIDIOutputDevices);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMIDIDeviceManager::FindAllMIDIDeviceInfo(Z_Param_Out_OutMIDIInputDevices,Z_Param_Out_OutMIDIOutputDevices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceManager::execFindMIDIDevices)
	{
		P_GET_TARRAY_REF(FFoundMIDIDevice,Z_Param_Out_OutMIDIDevices);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMIDIDeviceManager::FindMIDIDevices(Z_Param_Out_OutMIDIDevices);
		P_NATIVE_END;
	}
	void UMIDIDeviceManager::StaticRegisterNativesUMIDIDeviceManager()
	{
		UClass* Class = UMIDIDeviceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMIDIDeviceController", &UMIDIDeviceManager::execCreateMIDIDeviceController },
			{ "CreateMIDIDeviceInputController", &UMIDIDeviceManager::execCreateMIDIDeviceInputController },
			{ "CreateMIDIDeviceOutputController", &UMIDIDeviceManager::execCreateMIDIDeviceOutputController },
			{ "FindAllMIDIDeviceInfo", &UMIDIDeviceManager::execFindAllMIDIDeviceInfo },
			{ "FindMIDIDevices", &UMIDIDeviceManager::execFindMIDIDevices },
			{ "GetDefaultMIDIInputDeviceID", &UMIDIDeviceManager::execGetDefaultMIDIInputDeviceID },
			{ "GetDefaultMIDIOutputDeviceID", &UMIDIDeviceManager::execGetDefaultMIDIOutputDeviceID },
			{ "GetMIDIInputDeviceIDByName", &UMIDIDeviceManager::execGetMIDIInputDeviceIDByName },
			{ "GetMIDIOutputDeviceIDByName", &UMIDIDeviceManager::execGetMIDIOutputDeviceIDByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics
	{
		struct MIDIDeviceManager_eventCreateMIDIDeviceController_Parms
		{
			int32 DeviceID;
			int32 MIDIBufferSize;
			UMIDIDeviceController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MIDIBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MIDIBufferSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventCreateMIDIDeviceController_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_MIDIBufferSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_MIDIBufferSize = { "MIDIBufferSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventCreateMIDIDeviceController_Parms, MIDIBufferSize), METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_MIDIBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_MIDIBufferSize_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventCreateMIDIDeviceController_Parms, ReturnValue), Z_Construct_UClass_UMIDIDeviceController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_MIDIBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Creates an instance of a MIDI device controller that can be used to interact with a connected MIDI device\n\x09 *\n\x09 * @param\x09""DeviceID\x09\x09The ID of the MIDI device you want to talk to.  Call \"Find MIDI Devices\" to enumerate the available devices.\n\x09 * @param\x09MIDIBufferSize\x09How large the buffer size (in number of MIDI events) should be for incoming MIDI data.  Larger values can incur higher latency costs for incoming events, but don't set it too low or you'll miss events and your stuff will sound bad.\n\x09 *\n\x09 * @return\x09If everything goes okay, a valid MIDI device controller object will be returned.  If anything goes wrong, a null reference will be returned.\n\x09 */" },
		{ "CPP_Default_MIDIBufferSize", "1024" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Creates an instance of a MIDI device controller that can be used to interact with a connected MIDI device\n\n@param       DeviceID                The ID of the MIDI device you want to talk to.  Call \"Find MIDI Devices\" to enumerate the available devices.\n@param       MIDIBufferSize  How large the buffer size (in number of MIDI events) should be for incoming MIDI data.  Larger values can incur higher latency costs for incoming events, but don't set it too low or you'll miss events and your stuff will sound bad.\n\n@return      If everything goes okay, a valid MIDI device controller object will be returned.  If anything goes wrong, a null reference will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "CreateMIDIDeviceController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::MIDIDeviceManager_eventCreateMIDIDeviceController_Parms), Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics
	{
		struct MIDIDeviceManager_eventCreateMIDIDeviceInputController_Parms
		{
			int32 DeviceID;
			int32 MIDIBufferSize;
			UMIDIDeviceInputController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MIDIBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MIDIBufferSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventCreateMIDIDeviceInputController_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_MIDIBufferSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_MIDIBufferSize = { "MIDIBufferSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventCreateMIDIDeviceInputController_Parms, MIDIBufferSize), METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_MIDIBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_MIDIBufferSize_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventCreateMIDIDeviceInputController_Parms, ReturnValue), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_MIDIBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Creates an instance of a MIDI device controller that can be used to interact with a connected MIDI device\n\x09 *\n\x09 * @param\x09""DeviceID\x09\x09The ID of the MIDI device you want to talk to.  Call \"Find MIDI Devices\" to enumerate the available devices.\n\x09 * @param\x09MIDIBufferSize\x09How large the buffer size (in number of MIDI events) should be for incoming MIDI data.  Larger values can incur higher latency costs for incoming events, but don't set it too low or you'll miss events and your stuff will sound bad.\n\x09 *\n\x09 * @return\x09If everything goes okay, a valid MIDI device controller object will be returned.  If anything goes wrong, a null reference will be returned.\n\x09 */" },
		{ "CPP_Default_MIDIBufferSize", "1024" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Creates an instance of a MIDI device controller that can be used to interact with a connected MIDI device\n\n@param       DeviceID                The ID of the MIDI device you want to talk to.  Call \"Find MIDI Devices\" to enumerate the available devices.\n@param       MIDIBufferSize  How large the buffer size (in number of MIDI events) should be for incoming MIDI data.  Larger values can incur higher latency costs for incoming events, but don't set it too low or you'll miss events and your stuff will sound bad.\n\n@return      If everything goes okay, a valid MIDI device controller object will be returned.  If anything goes wrong, a null reference will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "CreateMIDIDeviceInputController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::MIDIDeviceManager_eventCreateMIDIDeviceInputController_Parms), Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics
	{
		struct MIDIDeviceManager_eventCreateMIDIDeviceOutputController_Parms
		{
			int32 DeviceID;
			UMIDIDeviceOutputController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventCreateMIDIDeviceOutputController_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::NewProp_DeviceID_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventCreateMIDIDeviceOutputController_Parms, ReturnValue), Z_Construct_UClass_UMIDIDeviceOutputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Creates an instance of a MIDI output device controller that can be used to interact with a connected MIDI device\n\x09 *\n\x09 * @param\x09""DeviceID\x09\x09The ID of the MIDI device you want to talk to.  Call \"Find MIDI Devices\" to enumerate the available devices.\n\x09 *\n\x09 * @return\x09If everything goes okay, a valid MIDI device controller object will be returned.  If anything goes wrong, a null reference will be returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Creates an instance of a MIDI output device controller that can be used to interact with a connected MIDI device\n\n@param       DeviceID                The ID of the MIDI device you want to talk to.  Call \"Find MIDI Devices\" to enumerate the available devices.\n\n@return      If everything goes okay, a valid MIDI device controller object will be returned.  If anything goes wrong, a null reference will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "CreateMIDIDeviceOutputController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::MIDIDeviceManager_eventCreateMIDIDeviceOutputController_Parms), Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics
	{
		struct MIDIDeviceManager_eventFindAllMIDIDeviceInfo_Parms
		{
			TArray<FMIDIDeviceInfo> OutMIDIInputDevices;
			TArray<FMIDIDeviceInfo> OutMIDIOutputDevices;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMIDIInputDevices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMIDIInputDevices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMIDIOutputDevices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMIDIOutputDevices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::NewProp_OutMIDIInputDevices_Inner = { "OutMIDIInputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMIDIDeviceInfo, METADATA_PARAMS(nullptr, 0) }; // 1728109715
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::NewProp_OutMIDIInputDevices = { "OutMIDIInputDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventFindAllMIDIDeviceInfo_Parms, OutMIDIInputDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1728109715
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::NewProp_OutMIDIOutputDevices_Inner = { "OutMIDIOutputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMIDIDeviceInfo, METADATA_PARAMS(nullptr, 0) }; // 1728109715
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::NewProp_OutMIDIOutputDevices = { "OutMIDIOutputDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventFindAllMIDIDeviceInfo_Parms, OutMIDIOutputDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1728109715
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::NewProp_OutMIDIInputDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::NewProp_OutMIDIInputDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::NewProp_OutMIDIOutputDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::NewProp_OutMIDIOutputDevices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Enumerates all of the MIDI input and output devices and reports back useful infos such as IDs and names of those devices. This operation is a little expensive\n\x09 * so only do it once at startup, or if you think that a new device may have been connected.\n\x09 *\n\x09 * @param \x09OutMIDIInputDevices\x09\x09""A list of available MIDI Input devices\n\x09 * @param \x09OutMIDIOutputDevices\x09""A list of available MIDI Output devices\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Enumerates all of the MIDI input and output devices and reports back useful infos such as IDs and names of those devices. This operation is a little expensive\nso only do it once at startup, or if you think that a new device may have been connected.\n\n@param       OutMIDIInputDevices             A list of available MIDI Input devices\n@param       OutMIDIOutputDevices    A list of available MIDI Output devices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "FindAllMIDIDeviceInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::MIDIDeviceManager_eventFindAllMIDIDeviceInfo_Parms), Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics
	{
		struct MIDIDeviceManager_eventFindMIDIDevices_Parms
		{
			TArray<FFoundMIDIDevice> OutMIDIDevices;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMIDIDevices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMIDIDevices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::NewProp_OutMIDIDevices_Inner = { "OutMIDIDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFoundMIDIDevice, METADATA_PARAMS(nullptr, 0) }; // 1806822660
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::NewProp_OutMIDIDevices = { "OutMIDIDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventFindMIDIDevices_Parms, OutMIDIDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1806822660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::NewProp_OutMIDIDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::NewProp_OutMIDIDevices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Enumerates all of the connected MIDI devices and reports back with the IDs and names of those devices.  This operation is a little expensive\n\x09 * so only do it once at startup, or if you think that a new device may have been connected.\n\x09 *\n\x09 * @param\x09OutMIDIDevices\x09""A list of available MIDI devices\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Enumerates all of the connected MIDI devices and reports back with the IDs and names of those devices.  This operation is a little expensive\nso only do it once at startup, or if you think that a new device may have been connected.\n\n@param       OutMIDIDevices  A list of available MIDI devices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "FindMIDIDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::MIDIDeviceManager_eventFindMIDIDevices_Parms), Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics
	{
		struct MIDIDeviceManager_eventGetDefaultMIDIInputDeviceID_Parms
		{
			int32 DeviceID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventGetDefaultMIDIInputDeviceID_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Retrieves the default MIDI input device ID. Call \"Find All MIDI Device Info\" beforehand to enumerate the available input devices.\n\x09 *\n\x09 * @param\x09""DeviceID\x09\x09The Device ID of the MIDI input device with that name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Retrieves the default MIDI input device ID. Call \"Find All MIDI Device Info\" beforehand to enumerate the available input devices.\n\n@param       DeviceID                The Device ID of the MIDI input device with that name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "GetDefaultMIDIInputDeviceID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::MIDIDeviceManager_eventGetDefaultMIDIInputDeviceID_Parms), Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics
	{
		struct MIDIDeviceManager_eventGetDefaultMIDIOutputDeviceID_Parms
		{
			int32 DeviceID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventGetDefaultMIDIOutputDeviceID_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Retrieves the default MIDI output device ID. Call \"Find All MIDI Device Info\" beforehand to enumerate the available input devices.\n\x09 *\n\x09 * @param\x09""DeviceID\x09\x09The Device ID of the MIDI output device with that name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Retrieves the default MIDI output device ID. Call \"Find All MIDI Device Info\" beforehand to enumerate the available input devices.\n\n@param       DeviceID                The Device ID of the MIDI output device with that name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "GetDefaultMIDIOutputDeviceID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::MIDIDeviceManager_eventGetDefaultMIDIOutputDeviceID_Parms), Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics
	{
		struct MIDIDeviceManager_eventGetMIDIInputDeviceIDByName_Parms
		{
			FString DeviceName;
			int32 DeviceID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::NewProp_DeviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventGetMIDIInputDeviceIDByName_Parms, DeviceName), METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::NewProp_DeviceName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventGetMIDIInputDeviceIDByName_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Retrieves the MIDI input device ID by name. Call \"Find All MIDI Device Info\" beforehand to enumerate the available input devices. \n\x09 *\n\x09 * @param\x09""DeviceName\x09\x09The Name of the MIDI device you want to talk to.\n\x09 * @param\x09""DeviceID\x09\x09The Device ID of the MIDI device with that name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Retrieves the MIDI input device ID by name. Call \"Find All MIDI Device Info\" beforehand to enumerate the available input devices.\n\n@param       DeviceName              The Name of the MIDI device you want to talk to.\n@param       DeviceID                The Device ID of the MIDI device with that name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "GetMIDIInputDeviceIDByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::MIDIDeviceManager_eventGetMIDIInputDeviceIDByName_Parms), Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics
	{
		struct MIDIDeviceManager_eventGetMIDIOutputDeviceIDByName_Parms
		{
			FString DeviceName;
			int32 DeviceID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::NewProp_DeviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventGetMIDIOutputDeviceIDByName_Parms, DeviceName), METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::NewProp_DeviceName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceManager_eventGetMIDIOutputDeviceIDByName_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Manager" },
		{ "Comment", "/**\n\x09 * Retrieves the MIDI output device ID by name. Call \"Find All MIDI Device Info\" beforehand to enumerate the available output devices.\n\x09 *\n\x09 * @param\x09""DeviceName\x09\x09The Name of the MIDI device you want to talk to.\n\x09 * @param\x09""DeviceID\x09\x09The Device ID of the MIDI output device associated with that name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
		{ "ToolTip", "Retrieves the MIDI output device ID by name. Call \"Find All MIDI Device Info\" beforehand to enumerate the available output devices.\n\n@param       DeviceName              The Name of the MIDI device you want to talk to.\n@param       DeviceID                The Device ID of the MIDI output device associated with that name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceManager, nullptr, "GetMIDIOutputDeviceIDByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::MIDIDeviceManager_eventGetMIDIOutputDeviceIDByName_Parms), Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIDIDeviceManager);
	UClass* Z_Construct_UClass_UMIDIDeviceManager_NoRegister()
	{
		return UMIDIDeviceManager::StaticClass();
	}
	struct Z_Construct_UClass_UMIDIDeviceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIDIDeviceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MIDIDevice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMIDIDeviceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceController, "CreateMIDIDeviceController" }, // 1668593553
		{ &Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceInputController, "CreateMIDIDeviceInputController" }, // 96286869
		{ &Z_Construct_UFunction_UMIDIDeviceManager_CreateMIDIDeviceOutputController, "CreateMIDIDeviceOutputController" }, // 1133482351
		{ &Z_Construct_UFunction_UMIDIDeviceManager_FindAllMIDIDeviceInfo, "FindAllMIDIDeviceInfo" }, // 178382793
		{ &Z_Construct_UFunction_UMIDIDeviceManager_FindMIDIDevices, "FindMIDIDevices" }, // 282938157
		{ &Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIInputDeviceID, "GetDefaultMIDIInputDeviceID" }, // 2745076545
		{ &Z_Construct_UFunction_UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID, "GetDefaultMIDIOutputDeviceID" }, // 3368948132
		{ &Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIInputDeviceIDByName, "GetMIDIInputDeviceIDByName" }, // 378889426
		{ &Z_Construct_UFunction_UMIDIDeviceManager_GetMIDIOutputDeviceIDByName, "GetMIDIOutputDeviceIDByName" }, // 1113845586
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MIDIDeviceManager.h" },
		{ "ModuleRelativePath", "Public/MIDIDeviceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIDIDeviceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIDIDeviceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIDIDeviceManager_Statics::ClassParams = {
		&UMIDIDeviceManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIDIDeviceManager()
	{
		if (!Z_Registration_Info_UClass_UMIDIDeviceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIDIDeviceManager.OuterSingleton, Z_Construct_UClass_UMIDIDeviceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIDIDeviceManager.OuterSingleton;
	}
	template<> MIDIDEVICE_API UClass* StaticClass<UMIDIDeviceManager>()
	{
		return UMIDIDeviceManager::StaticClass();
	}
	UMIDIDeviceManager::UMIDIDeviceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIDIDeviceManager);
	UMIDIDeviceManager::~UMIDIDeviceManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_Statics::ScriptStructInfo[] = {
		{ FFoundMIDIDevice::StaticStruct, Z_Construct_UScriptStruct_FFoundMIDIDevice_Statics::NewStructOps, TEXT("FoundMIDIDevice"), &Z_Registration_Info_UScriptStruct_FoundMIDIDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoundMIDIDevice), 1806822660U) },
		{ FMIDIDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FMIDIDeviceInfo_Statics::NewStructOps, TEXT("MIDIDeviceInfo"), &Z_Registration_Info_UScriptStruct_MIDIDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIDIDeviceInfo), 1728109715U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIDIDeviceManager, UMIDIDeviceManager::StaticClass, TEXT("UMIDIDeviceManager"), &Z_Registration_Info_UClass_UMIDIDeviceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIDIDeviceManager), 1418020017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_3330945297(TEXT("/Script/MIDIDevice"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
