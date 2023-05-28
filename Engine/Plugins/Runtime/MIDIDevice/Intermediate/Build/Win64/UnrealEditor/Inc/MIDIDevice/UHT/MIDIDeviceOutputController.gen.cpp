// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MIDIDeviceOutputController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDeviceOutputController() {}
// Cross Module References
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceControllerBase();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceOutputController();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceOutputController_NoRegister();
	MIDIDEVICE_API UEnum* Z_Construct_UEnum_MIDIDevice_EMIDIEventType();
	UPackage* Z_Construct_UPackage__Script_MIDIDevice();
// End Cross Module References
	DEFINE_FUNCTION(UMIDIDeviceOutputController::execSendMIDIChannelAftertouch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMIDIChannelAftertouch(Z_Param_Channel,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceOutputController::execSendMIDIProgramChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_PROPERTY(FIntProperty,Z_Param_ProgramNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMIDIProgramChange(Z_Param_Channel,Z_Param_ProgramNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceOutputController::execSendMIDIControlChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_PROPERTY(FIntProperty,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMIDIControlChange(Z_Param_Channel,Z_Param_Type,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceOutputController::execSendMIDINoteAftertouch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_PROPERTY(FIntProperty,Z_Param_Note);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMIDINoteAftertouch(Z_Param_Channel,Z_Param_Note,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceOutputController::execSendMIDIPitchBend)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_PROPERTY(FIntProperty,Z_Param_Pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMIDIPitchBend(Z_Param_Channel,Z_Param_Pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceOutputController::execSendMIDINoteOff)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_PROPERTY(FIntProperty,Z_Param_Note);
		P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMIDINoteOff(Z_Param_Channel,Z_Param_Note,Z_Param_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceOutputController::execSendMIDINoteOn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_PROPERTY(FIntProperty,Z_Param_Note);
		P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMIDINoteOn(Z_Param_Channel,Z_Param_Note,Z_Param_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIDIDeviceOutputController::execSendMIDIEvent)
	{
		P_GET_ENUM(EMIDIEventType,Z_Param_EventType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_GET_PROPERTY(FIntProperty,Z_Param_data1);
		P_GET_PROPERTY(FIntProperty,Z_Param_data2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMIDIEvent(EMIDIEventType(Z_Param_EventType),Z_Param_Channel,Z_Param_data1,Z_Param_data2);
		P_NATIVE_END;
	}
	void UMIDIDeviceOutputController::StaticRegisterNativesUMIDIDeviceOutputController()
	{
		UClass* Class = UMIDIDeviceOutputController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendMIDIChannelAftertouch", &UMIDIDeviceOutputController::execSendMIDIChannelAftertouch },
			{ "SendMIDIControlChange", &UMIDIDeviceOutputController::execSendMIDIControlChange },
			{ "SendMIDIEvent", &UMIDIDeviceOutputController::execSendMIDIEvent },
			{ "SendMIDINoteAftertouch", &UMIDIDeviceOutputController::execSendMIDINoteAftertouch },
			{ "SendMIDINoteOff", &UMIDIDeviceOutputController::execSendMIDINoteOff },
			{ "SendMIDINoteOn", &UMIDIDeviceOutputController::execSendMIDINoteOn },
			{ "SendMIDIPitchBend", &UMIDIDeviceOutputController::execSendMIDIPitchBend },
			{ "SendMIDIProgramChange", &UMIDIDeviceOutputController::execSendMIDIProgramChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics
	{
		struct MIDIDeviceOutputController_eventSendMIDIChannelAftertouch_Parms
		{
			int32 Channel;
			float Amount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIChannelAftertouch_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIChannelAftertouch_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** Sends MIDI Channel Aftertouch event type \n\x09*\n\x09* @param\x09""Channel\x09\x09\x09\x09The MIDI channel to send\n\x09* @param\x09""Amount\x09\x09\x09\x09The MIDI Amount of aftertouch \n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "Sends MIDI Channel Aftertouch event type\n\n@param        Channel                         The MIDI channel to send\n@param        Amount                          The MIDI Amount of aftertouch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceOutputController, nullptr, "SendMIDIChannelAftertouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::MIDIDeviceOutputController_eventSendMIDIChannelAftertouch_Parms), Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics
	{
		struct MIDIDeviceOutputController_eventSendMIDIControlChange_Parms
		{
			int32 Channel;
			int32 Type;
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIControlChange_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIControlChange_Parms, Type), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIControlChange_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** Sends MIDI Control Change event type \n\x09*\n\x09* @param\x09""Channel\x09\x09\x09The MIDI channel to send\n\x09* @param\x09Type\x09\x09\x09The MIDI control type change\n\x09* @param\x09Value\x09\x09\x09The MIDI Value for the control change\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "Sends MIDI Control Change event type\n\n@param        Channel                 The MIDI channel to send\n@param        Type                    The MIDI control type change\n@param        Value                   The MIDI Value for the control change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceOutputController, nullptr, "SendMIDIControlChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::MIDIDeviceOutputController_eventSendMIDIControlChange_Parms), Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics
	{
		struct MIDIDeviceOutputController_eventSendMIDIEvent_Parms
		{
			EMIDIEventType EventType;
			int32 Channel;
			int32 data1;
			int32 data2;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_data1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_data2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIEvent_Parms, EventType), Z_Construct_UEnum_MIDIDevice_EMIDIEventType, METADATA_PARAMS(nullptr, 0) }; // 1349923991
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIEvent_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_data1 = { "data1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIEvent_Parms, data1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_data2 = { "data2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIEvent_Parms, data2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_data1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::NewProp_data2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** Sends MIDI event raw data for an event type \n\x09*\n\x09* @param\x09""EventType\x09\x09The event type as specified in the EMIDIEventType struct\n\x09* @param\x09""Channel\x09\x09\x09The MIDI channel to send \n\x09* @param\x09""Data1\x09\x09\x09The first part of the MIDI data\n\x09* @param\x09""Data2\x09\x09\x09The second part of the MIDI data\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "Sends MIDI event raw data for an event type\n\n@param        EventType               The event type as specified in the EMIDIEventType struct\n@param        Channel                 The MIDI channel to send\n@param        Data1                   The first part of the MIDI data\n@param        Data2                   The second part of the MIDI data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceOutputController, nullptr, "SendMIDIEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::MIDIDeviceOutputController_eventSendMIDIEvent_Parms), Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics
	{
		struct MIDIDeviceOutputController_eventSendMIDINoteAftertouch_Parms
		{
			int32 Channel;
			int32 Note;
			float Amount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Note;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteAftertouch_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteAftertouch_Parms, Note), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteAftertouch_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** Sends MIDI Note Aftertouch event type \n\x09*\n\x09* @param\x09""Channel\x09\x09\x09The MIDI channel to send\n\x09* @param\x09Note\x09\x09\x09The MIDI Note value\n\x09* @param\x09""Amount\x09\x09\x09The MIDI aftertouch amount\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "Sends MIDI Note Aftertouch event type\n\n@param        Channel                 The MIDI channel to send\n@param        Note                    The MIDI Note value\n@param        Amount                  The MIDI aftertouch amount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceOutputController, nullptr, "SendMIDINoteAftertouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::MIDIDeviceOutputController_eventSendMIDINoteAftertouch_Parms), Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics
	{
		struct MIDIDeviceOutputController_eventSendMIDINoteOff_Parms
		{
			int32 Channel;
			int32 Note;
			int32 Velocity;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Note;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteOff_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteOff_Parms, Note), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteOff_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** Sends MIDI Note Off event type \n\x09*\n\x09* @param\x09""Channel\x09\x09\x09The MIDI channel to send\n\x09* @param\x09Note\x09\x09\x09The MIDI Note value\n\x09* @param\x09Velocity\x09\x09The MIDI Velocity value\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "Sends MIDI Note Off event type\n\n@param        Channel                 The MIDI channel to send\n@param        Note                    The MIDI Note value\n@param        Velocity                The MIDI Velocity value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceOutputController, nullptr, "SendMIDINoteOff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::MIDIDeviceOutputController_eventSendMIDINoteOff_Parms), Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics
	{
		struct MIDIDeviceOutputController_eventSendMIDINoteOn_Parms
		{
			int32 Channel;
			int32 Note;
			int32 Velocity;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Note;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteOn_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteOn_Parms, Note), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDINoteOn_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** Sends MIDI Note On event type \n\x09*\n\x09* @param\x09""Channel\x09\x09\x09The MIDI channel to send\n\x09* @param\x09Note\x09\x09\x09The MIDI Note value\n\x09* @param\x09Velocity\x09\x09The MIDI Velocity value\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "Sends MIDI Note On event type\n\n@param        Channel                 The MIDI channel to send\n@param        Note                    The MIDI Note value\n@param        Velocity                The MIDI Velocity value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceOutputController, nullptr, "SendMIDINoteOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::MIDIDeviceOutputController_eventSendMIDINoteOn_Parms), Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics
	{
		struct MIDIDeviceOutputController_eventSendMIDIPitchBend_Parms
		{
			int32 Channel;
			int32 Pitch;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIPitchBend_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIPitchBend_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::NewProp_Pitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** Sends MIDI Pitch Bend event type\n\x09*\n\x09* @param\x09""Channel\x09\x09\x09The MIDI channel to send\n\x09* @param\x09Pitch\x09\x09\x09The MIDI Pitch Bend value (0-16383)\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "Sends MIDI Pitch Bend event type\n\n@param        Channel                 The MIDI channel to send\n@param        Pitch                   The MIDI Pitch Bend value (0-16383)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceOutputController, nullptr, "SendMIDIPitchBend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::MIDIDeviceOutputController_eventSendMIDIPitchBend_Parms), Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics
	{
		struct MIDIDeviceOutputController_eventSendMIDIProgramChange_Parms
		{
			int32 Channel;
			int32 ProgramNumber;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProgramNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIProgramChange_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::NewProp_ProgramNumber = { "ProgramNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MIDIDeviceOutputController_eventSendMIDIProgramChange_Parms, ProgramNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::NewProp_ProgramNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** Sends MIDI Program Change event type \n\x09*\n\x09* @param\x09""Channel\x09\x09\x09\x09The MIDI channel to send\n\x09* @param\x09ProgramNumberType\x09The MIDI Program Number value\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "Sends MIDI Program Change event type\n\n@param        Channel                         The MIDI channel to send\n@param        ProgramNumberType       The MIDI Program Number value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIDIDeviceOutputController, nullptr, "SendMIDIProgramChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::MIDIDeviceOutputController_eventSendMIDIProgramChange_Parms), Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIDIDeviceOutputController);
	UClass* Z_Construct_UClass_UMIDIDeviceOutputController_NoRegister()
	{
		return UMIDIDeviceOutputController::StaticClass();
	}
	struct Z_Construct_UClass_UMIDIDeviceOutputController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UMIDIDeviceOutputController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMIDIDeviceControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MIDIDevice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMIDIDeviceOutputController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIChannelAftertouch, "SendMIDIChannelAftertouch" }, // 293949295
		{ &Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIControlChange, "SendMIDIControlChange" }, // 1464513679
		{ &Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIEvent, "SendMIDIEvent" }, // 2140695195
		{ &Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteAftertouch, "SendMIDINoteAftertouch" }, // 4225259821
		{ &Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOff, "SendMIDINoteOff" }, // 1279491971
		{ &Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDINoteOn, "SendMIDINoteOn" }, // 3259427752
		{ &Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIPitchBend, "SendMIDIPitchBend" }, // 995677864
		{ &Z_Construct_UFunction_UMIDIDeviceOutputController_SendMIDIProgramChange, "SendMIDIProgramChange" }, // 2649862970
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceOutputController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MIDIDeviceOutputController.h" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** The unique ID of this device */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "The unique ID of this device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceOutputController, DeviceID), METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "MIDI Device Output Controller" },
		{ "Comment", "/** The name of this device.  This name comes from the MIDI hardware, any might not be unique */" },
		{ "ModuleRelativePath", "Public/MIDIDeviceOutputController.h" },
		{ "ToolTip", "The name of this device.  This name comes from the MIDI hardware, any might not be unique" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMIDIDeviceOutputController, DeviceName), METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIDIDeviceOutputController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDeviceOutputController_Statics::NewProp_DeviceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIDIDeviceOutputController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIDIDeviceOutputController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIDIDeviceOutputController_Statics::ClassParams = {
		&UMIDIDeviceOutputController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMIDIDeviceOutputController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceOutputController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceOutputController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceOutputController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIDIDeviceOutputController()
	{
		if (!Z_Registration_Info_UClass_UMIDIDeviceOutputController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIDIDeviceOutputController.OuterSingleton, Z_Construct_UClass_UMIDIDeviceOutputController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIDIDeviceOutputController.OuterSingleton;
	}
	template<> MIDIDEVICE_API UClass* StaticClass<UMIDIDeviceOutputController>()
	{
		return UMIDIDeviceOutputController::StaticClass();
	}
	UMIDIDeviceOutputController::UMIDIDeviceOutputController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIDIDeviceOutputController);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIDIDeviceOutputController, UMIDIDeviceOutputController::StaticClass, TEXT("UMIDIDeviceOutputController"), &Z_Registration_Info_UClass_UMIDIDeviceOutputController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIDIDeviceOutputController), 1858018515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_203631391(TEXT("/Script/MIDIDevice"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceOutputController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
