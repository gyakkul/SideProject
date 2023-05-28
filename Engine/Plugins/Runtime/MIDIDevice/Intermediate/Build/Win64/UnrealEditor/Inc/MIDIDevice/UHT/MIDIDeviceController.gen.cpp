// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MIDIDeviceController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDeviceController() {}
// Cross Module References
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceController();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceController_NoRegister();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceControllerBase();
	MIDIDEVICE_API UEnum* Z_Construct_UEnum_MIDIDevice_EMIDIEventType();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MIDIDevice();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIDIEventType;
	static UEnum* EMIDIEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIDIEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIDIEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MIDIDevice_EMIDIEventType, (UObject*)Z_Construct_UPackage__Script_MIDIDevice(), TEXT("EMIDIEventType"));
		}
		return Z_Registration_Info_UEnum_EMIDIEventType.OuterSingleton;
	}
	template<> MIDIDEVICE_API UEnum* StaticEnum<EMIDIEventType>()
	{
		return EMIDIEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics::Enumerators[] = {
		{ "EMIDIEventType::Unknown", (int64)EMIDIEventType::Unknown },
		{ "EMIDIEventType::NoteOff", (int64)EMIDIEventType::NoteOff },
		{ "EMIDIEventType::NoteOn", (int64)EMIDIEventType::NoteOn },
		{ "EMIDIEventType::NoteAfterTouch", (int64)EMIDIEventType::NoteAfterTouch },
		{ "EMIDIEventType::ControlChange", (int64)EMIDIEventType::ControlChange },
		{ "EMIDIEventType::ProgramChange", (int64)EMIDIEventType::ProgramChange },
		{ "EMIDIEventType::ChannelAfterTouch", (int64)EMIDIEventType::ChannelAfterTouch },
		{ "EMIDIEventType::PitchBend", (int64)EMIDIEventType::PitchBend },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChannelAfterTouch.Comment", "/** Channel pressure value.  This is sent after a channel button 'bottoms out' for devices that support it.  Velocity will contain the pressure value. */" },
		{ "ChannelAfterTouch.Name", "EMIDIEventType::ChannelAfterTouch" },
		{ "ChannelAfterTouch.ToolTip", "Channel pressure value.  This is sent after a channel button 'bottoms out' for devices that support it.  Velocity will contain the pressure value." },
		{ "ControlChange.Comment", "/** This is sent for things like pedals when their controller state changes.  Velocity will contain the new value for the controller.  This event also is used for 'Channel Mode Changes' (Channels between 120-127), which encompass a variety of different features.  For those events, you'll need to interpret the values yourself. */" },
		{ "ControlChange.Name", "EMIDIEventType::ControlChange" },
		{ "ControlChange.ToolTip", "This is sent for things like pedals when their controller state changes.  Velocity will contain the new value for the controller.  This event also is used for 'Channel Mode Changes' (Channels between 120-127), which encompass a variety of different features.  For those events, you'll need to interpret the values yourself." },
		{ "ModuleRelativePath", "Public/MIDIDeviceController.h" },
		{ "NoteAfterTouch.Comment", "/** Polyphonic key pressure.  This is sent after a key 'bottoms out' for devices that support it.  Velocity will contain the pressure value. */" },
		{ "NoteAfterTouch.Name", "EMIDIEventType::NoteAfterTouch" },
		{ "NoteAfterTouch.ToolTip", "Polyphonic key pressure.  This is sent after a key 'bottoms out' for devices that support it.  Velocity will contain the pressure value." },
		{ "NoteOff.Comment", "/** Note is released.  Velocity will contain the key pressure for devices that support that. */" },
		{ "NoteOff.Name", "EMIDIEventType::NoteOff" },
		{ "NoteOff.ToolTip", "Note is released.  Velocity will contain the key pressure for devices that support that." },
		{ "NoteOn.Comment", "/** Note is pressed down.  Velocity will contain the key pressure for devices that support that. */" },
		{ "NoteOn.Name", "EMIDIEventType::NoteOn" },
		{ "NoteOn.ToolTip", "Note is pressed down.  Velocity will contain the key pressure for devices that support that." },
		{ "PitchBend.Comment", "/** For devices with levers or wheels, this indicates a change of state.  The data is interpreted a bit differently here, where the new value is actually 14-bits that contained within both the Control ID and Velocity */// @todo midi: Ideally set velocity to correct values in this case so Blueprints don't have to\n" },
		{ "PitchBend.Name", "EMIDIEventType::PitchBend" },
		{ "PitchBend.ToolTip", "For devices with levers or wheels, this indicates a change of state.  The data is interpreted a bit differently here, where the new value is actually 14-bits that contained within both the Control ID and Velocity // @todo midi: Ideally set velocity to correct values in this case so Blueprints don't have to" },
		{ "ProgramChange.Comment", "/** This is sent for some devices that support changing patches.  Velocity is usually ignored */" },
		{ "ProgramChange.Name", "EMIDIEventType::ProgramChange" },
		{ "ProgramChange.ToolTip", "This is sent for some devices that support changing patches.  Velocity is usually ignored" },
		{ "Unknown.Comment", "/** Unrecognized MIDI event type.  You can look at Raw Event Type to see what it is. */" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EMIDIEventType::Unknown" },
		{ "Unknown.ToolTip", "Unrecognized MIDI event type.  You can look at Raw Event Type to see what it is." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice,
		nullptr,
		"EMIDIEventType",
		"EMIDIEventType",
		Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MIDIDevice_EMIDIEventType()
	{
		if (!Z_Registration_Info_UEnum_EMIDIEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIDIEventType.InnerSingleton, Z_Construct_UEnum_MIDIDevice_EMIDIEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIDIEventType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics
	{
		struct _Script_MIDIDevice_eventOnMIDIEvent_Parms
		{
			UMIDIDeviceController* MIDIDeviceController;
			int32 Timestamp;
			EMIDIEventType EventType;
			int32 Channel;
			int32 ControlID;
			int32 Velocity;
			int32 RawEventType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDeviceController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RawEventType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_MIDIDeviceController = { "MIDIDeviceController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIEvent_Parms, MIDIDeviceController), Z_Construct_UClass_UMIDIDeviceController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIEvent_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIEvent_Parms, EventType), Z_Construct_UEnum_MIDIDevice_EMIDIEventType, METADATA_PARAMS(nullptr, 0) }; // 1349923991
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIEvent_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_ControlID = { "ControlID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIEvent_Parms, ControlID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIEvent_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_RawEventType = { "RawEventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIEvent_Parms, RawEventType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_MIDIDeviceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::NewProp_RawEventType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback function for received MIDI events */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceController.h" },
		{ "ToolTip", "Callback function for received MIDI events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice, nullptr, "OnMIDIEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::_Script_MIDIDevice_eventOnMIDIEvent_Parms), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMIDIEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIEvent, UMIDIDeviceController* MIDIDeviceController, int32 Timestamp, EMIDIEventType EventType, int32 Channel, int32 ControlID, int32 Velocity, int32 RawEventType)
{
	struct _Script_MIDIDevice_eventOnMIDIEvent_Parms
	{
		UMIDIDeviceController* MIDIDeviceController;
		int32 Timestamp;
		EMIDIEventType EventType;
		int32 Channel;
		int32 ControlID;
		int32 Velocity;
		int32 RawEventType;
	};
	_Script_MIDIDevice_eventOnMIDIEvent_Parms Parms;
	Parms.MIDIDeviceController=MIDIDeviceController;
	Parms.Timestamp=Timestamp;
	Parms.EventType=EventType;
	Parms.Channel=Channel;
	Parms.ControlID=ControlID;
	Parms.Velocity=Velocity;
	Parms.RawEventType=RawEventType;
	OnMIDIEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UMIDIDeviceController::StaticRegisterNativesUMIDIDeviceController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIDIDeviceController);
	UClass* Z_Construct_UClass_UMIDIDeviceController_NoRegister()
	{
		return UMIDIDeviceController::StaticClass();
	}
	struct Z_Construct_UClass_UMIDIDeviceController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDIEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDIEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIDIDeviceController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMIDIDeviceControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MIDIDevice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MIDIDeviceController.h" },
		{ "ModuleRelativePath", "Public/MIDIDeviceController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_OnMIDIEvent_MetaData[] = {
		{ "Category", "MIDI Device Controller" },
		{ "Comment", "/** Register with this to find out about incoming MIDI events from this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceController.h" },
		{ "ToolTip", "Register with this to find out about incoming MIDI events from this device" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_OnMIDIEvent = { "OnMIDIEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceController, OnMIDIEvent), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_OnMIDIEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_OnMIDIEvent_MetaData)) }; // 388492498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "MIDI Device Controller" },
		{ "Comment", "/** The unique ID of this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceController.h" },
		{ "ToolTip", "The unique ID of this device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceController, DeviceID), METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "MIDI Device Controller" },
		{ "Comment", "/** The name of this device.  This name comes from the MIDI hardware, any might not be unique */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceController.h" },
		{ "ToolTip", "The name of this device.  This name comes from the MIDI hardware, any might not be unique" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceController, DeviceName), METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIDIDeviceController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_OnMIDIEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceController_Statics::NewProp_DeviceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIDIDeviceController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIDIDeviceController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIDIDeviceController_Statics::ClassParams = {
		&UMIDIDeviceController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMIDIDeviceController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIDIDeviceController()
	{
		if (!Z_Registration_Info_UClass_UMIDIDeviceController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIDIDeviceController.OuterSingleton, Z_Construct_UClass_UMIDIDeviceController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIDIDeviceController.OuterSingleton;
	}
	template<> MIDIDEVICE_API UClass* StaticClass<UMIDIDeviceController>()
	{
		return UMIDIDeviceController::StaticClass();
	}
	UMIDIDeviceController::UMIDIDeviceController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIDIDeviceController);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_Statics::EnumInfo[] = {
		{ EMIDIEventType_StaticEnum, TEXT("EMIDIEventType"), &Z_Registration_Info_UEnum_EMIDIEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1349923991U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIDIDeviceController, UMIDIDeviceController::StaticClass, TEXT("UMIDIDeviceController"), &Z_Registration_Info_UClass_UMIDIDeviceController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIDIDeviceController), 3686298361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_4011837544(TEXT("/Script/MIDIDevice"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
