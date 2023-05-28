// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MIDIDeviceInputController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDeviceInputController() {}
// Cross Module References
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceControllerBase();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceInputController();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceInputController_NoRegister();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MIDIDevice();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics
	{
		struct _Script_MIDIDevice_eventOnMIDINoteOn_Parms
		{
			UMIDIDeviceInputController* MIDIDeviceController;
			int32 Timestamp;
			int32 Channel;
			int32 Note;
			int32 Velocity;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDeviceController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Note;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_MIDIDeviceController = { "MIDIDeviceController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOn_Parms, MIDIDeviceController), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOn_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOn_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOn_Parms, Note), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOn_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_MIDIDeviceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback function for received MIDI Note On event */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Callback function for received MIDI Note On event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice, nullptr, "OnMIDINoteOn__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::_Script_MIDIDevice_eventOnMIDINoteOn_Parms), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMIDINoteOn_DelegateWrapper(const FMulticastScriptDelegate& OnMIDINoteOn, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity)
{
	struct _Script_MIDIDevice_eventOnMIDINoteOn_Parms
	{
		UMIDIDeviceInputController* MIDIDeviceController;
		int32 Timestamp;
		int32 Channel;
		int32 Note;
		int32 Velocity;
	};
	_Script_MIDIDevice_eventOnMIDINoteOn_Parms Parms;
	Parms.MIDIDeviceController=MIDIDeviceController;
	Parms.Timestamp=Timestamp;
	Parms.Channel=Channel;
	Parms.Note=Note;
	Parms.Velocity=Velocity;
	OnMIDINoteOn.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics
	{
		struct _Script_MIDIDevice_eventOnMIDINoteOff_Parms
		{
			UMIDIDeviceInputController* MIDIDeviceController;
			int32 Timestamp;
			int32 Channel;
			int32 Note;
			int32 Velocity;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDeviceController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Note;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_MIDIDeviceController = { "MIDIDeviceController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOff_Parms, MIDIDeviceController), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOff_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOff_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOff_Parms, Note), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDINoteOff_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_MIDIDeviceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback function for received MIDI Note Off event */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Callback function for received MIDI Note Off event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice, nullptr, "OnMIDINoteOff__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::_Script_MIDIDevice_eventOnMIDINoteOff_Parms), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMIDINoteOff_DelegateWrapper(const FMulticastScriptDelegate& OnMIDINoteOff, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity)
{
	struct _Script_MIDIDevice_eventOnMIDINoteOff_Parms
	{
		UMIDIDeviceInputController* MIDIDeviceController;
		int32 Timestamp;
		int32 Channel;
		int32 Note;
		int32 Velocity;
	};
	_Script_MIDIDevice_eventOnMIDINoteOff_Parms Parms;
	Parms.MIDIDeviceController=MIDIDeviceController;
	Parms.Timestamp=Timestamp;
	Parms.Channel=Channel;
	Parms.Note=Note;
	Parms.Velocity=Velocity;
	OnMIDINoteOff.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics
	{
		struct _Script_MIDIDevice_eventOnMIDIPitchBend_Parms
		{
			UMIDIDeviceInputController* MIDIDeviceController;
			int32 Timestamp;
			int32 Channel;
			int32 Pitch;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDeviceController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::NewProp_MIDIDeviceController = { "MIDIDeviceController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIPitchBend_Parms, MIDIDeviceController), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIPitchBend_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIPitchBend_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIPitchBend_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::NewProp_MIDIDeviceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::NewProp_Pitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback function for received MIDI Pitch Bend event */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Callback function for received MIDI Pitch Bend event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice, nullptr, "OnMIDIPitchBend__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::_Script_MIDIDevice_eventOnMIDIPitchBend_Parms), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMIDIPitchBend_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIPitchBend, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Pitch)
{
	struct _Script_MIDIDevice_eventOnMIDIPitchBend_Parms
	{
		UMIDIDeviceInputController* MIDIDeviceController;
		int32 Timestamp;
		int32 Channel;
		int32 Pitch;
	};
	_Script_MIDIDevice_eventOnMIDIPitchBend_Parms Parms;
	Parms.MIDIDeviceController=MIDIDeviceController;
	Parms.Timestamp=Timestamp;
	Parms.Channel=Channel;
	Parms.Pitch=Pitch;
	OnMIDIPitchBend.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics
	{
		struct _Script_MIDIDevice_eventOnMIDIAftertouch_Parms
		{
			UMIDIDeviceInputController* MIDIDeviceController;
			int32 Timestamp;
			int32 Channel;
			int32 Note;
			int32 Amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDeviceController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Note;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_MIDIDeviceController = { "MIDIDeviceController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIAftertouch_Parms, MIDIDeviceController), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIAftertouch_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIAftertouch_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIAftertouch_Parms, Note), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIAftertouch_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_MIDIDeviceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback function for received MIDI Aftertouch event */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Callback function for received MIDI Aftertouch event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice, nullptr, "OnMIDIAftertouch__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::_Script_MIDIDevice_eventOnMIDIAftertouch_Parms), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMIDIAftertouch_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIAftertouch, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Amount)
{
	struct _Script_MIDIDevice_eventOnMIDIAftertouch_Parms
	{
		UMIDIDeviceInputController* MIDIDeviceController;
		int32 Timestamp;
		int32 Channel;
		int32 Note;
		int32 Amount;
	};
	_Script_MIDIDevice_eventOnMIDIAftertouch_Parms Parms;
	Parms.MIDIDeviceController=MIDIDeviceController;
	Parms.Timestamp=Timestamp;
	Parms.Channel=Channel;
	Parms.Note=Note;
	Parms.Amount=Amount;
	OnMIDIAftertouch.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics
	{
		struct _Script_MIDIDevice_eventOnMIDIControlChange_Parms
		{
			UMIDIDeviceInputController* MIDIDeviceController;
			int32 Timestamp;
			int32 Channel;
			int32 Type;
			int32 Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDeviceController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_MIDIDeviceController = { "MIDIDeviceController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIControlChange_Parms, MIDIDeviceController), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIControlChange_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIControlChange_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIControlChange_Parms, Type), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIControlChange_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_MIDIDeviceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback function for received MIDI Control Change event */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Callback function for received MIDI Control Change event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice, nullptr, "OnMIDIControlChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::_Script_MIDIDevice_eventOnMIDIControlChange_Parms), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMIDIControlChange_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIControlChange, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Type, int32 Value)
{
	struct _Script_MIDIDevice_eventOnMIDIControlChange_Parms
	{
		UMIDIDeviceInputController* MIDIDeviceController;
		int32 Timestamp;
		int32 Channel;
		int32 Type;
		int32 Value;
	};
	_Script_MIDIDevice_eventOnMIDIControlChange_Parms Parms;
	Parms.MIDIDeviceController=MIDIDeviceController;
	Parms.Timestamp=Timestamp;
	Parms.Channel=Channel;
	Parms.Type=Type;
	Parms.Value=Value;
	OnMIDIControlChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics
	{
		struct _Script_MIDIDevice_eventOnMIDIProgramChange_Parms
		{
			UMIDIDeviceInputController* MIDIDeviceController;
			int32 Timestamp;
			int32 Channel;
			int32 ControlID;
			int32 Velocity;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDeviceController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_MIDIDeviceController = { "MIDIDeviceController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIProgramChange_Parms, MIDIDeviceController), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIProgramChange_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIProgramChange_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_ControlID = { "ControlID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIProgramChange_Parms, ControlID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIProgramChange_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_MIDIDeviceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_ControlID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback function for received MIDI Program Change event */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Callback function for received MIDI Program Change event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice, nullptr, "OnMIDIProgramChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::_Script_MIDIDevice_eventOnMIDIProgramChange_Parms), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMIDIProgramChange_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIProgramChange, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 ControlID, int32 Velocity)
{
	struct _Script_MIDIDevice_eventOnMIDIProgramChange_Parms
	{
		UMIDIDeviceInputController* MIDIDeviceController;
		int32 Timestamp;
		int32 Channel;
		int32 ControlID;
		int32 Velocity;
	};
	_Script_MIDIDevice_eventOnMIDIProgramChange_Parms Parms;
	Parms.MIDIDeviceController=MIDIDeviceController;
	Parms.Timestamp=Timestamp;
	Parms.Channel=Channel;
	Parms.ControlID=ControlID;
	Parms.Velocity=Velocity;
	OnMIDIProgramChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics
	{
		struct _Script_MIDIDevice_eventOnMIDIChannelAftertouch_Parms
		{
			UMIDIDeviceInputController* MIDIDeviceController;
			int32 Timestamp;
			int32 Channel;
			int32 Amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDeviceController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::NewProp_MIDIDeviceController = { "MIDIDeviceController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIChannelAftertouch_Parms, MIDIDeviceController), Z_Construct_UClass_UMIDIDeviceInputController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIChannelAftertouch_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIChannelAftertouch_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MIDIDevice_eventOnMIDIChannelAftertouch_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::NewProp_MIDIDeviceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback function for received MIDI Channel Aftertouch event */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Callback function for received MIDI Channel Aftertouch event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MIDIDevice, nullptr, "OnMIDIChannelAftertouch__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::_Script_MIDIDevice_eventOnMIDIChannelAftertouch_Parms), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMIDIChannelAftertouch_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIChannelAftertouch, UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Amount)
{
	struct _Script_MIDIDevice_eventOnMIDIChannelAftertouch_Parms
	{
		UMIDIDeviceInputController* MIDIDeviceController;
		int32 Timestamp;
		int32 Channel;
		int32 Amount;
	};
	_Script_MIDIDevice_eventOnMIDIChannelAftertouch_Parms Parms;
	Parms.MIDIDeviceController=MIDIDeviceController;
	Parms.Timestamp=Timestamp;
	Parms.Channel=Channel;
	Parms.Amount=Amount;
	OnMIDIChannelAftertouch.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UMIDIDeviceInputController::StaticRegisterNativesUMIDIDeviceInputController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIDIDeviceInputController);
	UClass* Z_Construct_UClass_UMIDIDeviceInputController_NoRegister()
	{
		return UMIDIDeviceInputController::StaticClass();
	}
	struct Z_Construct_UClass_UMIDIDeviceInputController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDINoteOn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDINoteOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDINoteOff_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDINoteOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDIPitchBend_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDIPitchBend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDIAftertouch_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDIAftertouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDIControlChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDIControlChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDIProgramChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDIProgramChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDIChannelAftertouch_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDIChannelAftertouch;
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
	UObject* (*const Z_Construct_UClass_UMIDIDeviceInputController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMIDIDeviceControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MIDIDevice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MIDIDeviceInputController.h" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOn_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** Register with this to receive incoming MIDI Note On events from this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Register with this to receive incoming MIDI Note On events from this device" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOn = { "OnMIDINoteOn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, OnMIDINoteOn), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOn_MetaData)) }; // 2992498028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOff_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** Register with this to receive incoming MIDI Note Off events from this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Register with this to receive incoming MIDI Note Off events from this device" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOff = { "OnMIDINoteOff", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, OnMIDINoteOff), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOff_MetaData)) }; // 2419095734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIPitchBend_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** Register with this to receive incoming MIDI Pitch Bend events from this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Register with this to receive incoming MIDI Pitch Bend events from this device" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIPitchBend = { "OnMIDIPitchBend", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, OnMIDIPitchBend), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIPitchBend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIPitchBend_MetaData)) }; // 1714704225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIAftertouch_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** Register with this to receive incoming MIDI Aftertouch events from this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Register with this to receive incoming MIDI Aftertouch events from this device" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIAftertouch = { "OnMIDIAftertouch", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, OnMIDIAftertouch), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIAftertouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIAftertouch_MetaData)) }; // 103775501
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIControlChange_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** Register with this to receive incoming MIDI Control Change events from this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Register with this to receive incoming MIDI Control Change events from this device" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIControlChange = { "OnMIDIControlChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, OnMIDIControlChange), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIControlChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIControlChange_MetaData)) }; // 880760510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIProgramChange_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** Register with this to receive incoming MIDI Program Change events from this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Register with this to receive incoming MIDI Program Change events from this device" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIProgramChange = { "OnMIDIProgramChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, OnMIDIProgramChange), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIProgramChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIProgramChange_MetaData)) }; // 3535937520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIChannelAftertouch_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** Register with this to receive incoming MIDI Channel Aftertouch events from this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "Register with this to receive incoming MIDI Channel Aftertouch events from this device" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIChannelAftertouch = { "OnMIDIChannelAftertouch", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, OnMIDIChannelAftertouch), Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIChannelAftertouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIChannelAftertouch_MetaData)) }; // 1197524494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** The unique ID of this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "The unique ID of this device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, DeviceID), METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "MIDI Device Input Controller" },
		{ "Comment", "/** The name of this device.  This name comes from the MIDI hardware, any might not be unique */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceInputController.h" },
		{ "ToolTip", "The name of this device.  This name comes from the MIDI hardware, any might not be unique" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceInputController, DeviceName), METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIDIDeviceInputController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDINoteOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIPitchBend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIAftertouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIControlChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIProgramChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_OnMIDIChannelAftertouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceInputController_Statics::NewProp_DeviceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIDIDeviceInputController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIDIDeviceInputController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIDIDeviceInputController_Statics::ClassParams = {
		&UMIDIDeviceInputController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMIDIDeviceInputController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceInputController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceInputController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIDIDeviceInputController()
	{
		if (!Z_Registration_Info_UClass_UMIDIDeviceInputController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIDIDeviceInputController.OuterSingleton, Z_Construct_UClass_UMIDIDeviceInputController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIDIDeviceInputController.OuterSingleton;
	}
	template<> MIDIDEVICE_API UClass* StaticClass<UMIDIDeviceInputController>()
	{
		return UMIDIDeviceInputController::StaticClass();
	}
	UMIDIDeviceInputController::UMIDIDeviceInputController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIDIDeviceInputController);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIDIDeviceInputController, UMIDIDeviceInputController::StaticClass, TEXT("UMIDIDeviceInputController"), &Z_Registration_Info_UClass_UMIDIDeviceInputController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIDIDeviceInputController), 2663415213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_1001684665(TEXT("/Script/MIDIDevice"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceInputController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
