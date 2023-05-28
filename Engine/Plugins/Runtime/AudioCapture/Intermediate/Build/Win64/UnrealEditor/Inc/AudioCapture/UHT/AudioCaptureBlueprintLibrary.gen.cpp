// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioCaptureBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureBlueprintLibrary() {}
// Cross Module References
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary();
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary_NoRegister();
	AUDIOCAPTURE_API UFunction* Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature();
	AUDIOCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AudioCapture();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo;
class UScriptStruct* FAudioInputDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioInputDeviceInfo, (UObject*)Z_Construct_UPackage__Script_AudioCapture(), TEXT("AudioInputDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo.OuterSingleton;
}
template<> AUDIOCAPTURE_API UScriptStruct* StaticStruct<FAudioInputDeviceInfo>()
{
	return FAudioInputDeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsHardwareAEC_MetaData[];
#endif
		static void NewProp_bSupportsHardwareAEC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsHardwareAEC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Platform audio input device info, in a Blueprint-readable format\n */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "Platform audio input device info, in a Blueprint-readable format" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioInputDeviceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The name of the audio device */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "The name of the audio device" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioInputDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** ID of the device. */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "ID of the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioInputDeviceInfo, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_InputChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The number of channels supported by the audio device */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "The number of channels supported by the audio device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_InputChannels = { "InputChannels", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioInputDeviceInfo, InputChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_InputChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_InputChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The preferred sample rate of the audio device */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "The preferred sample rate of the audio device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate = { "PreferredSampleRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioInputDeviceInfo, PreferredSampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Whether or not the device supports Acoustic Echo Canceling */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "Whether or not the device supports Acoustic Echo Canceling" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_SetBit(void* Obj)
	{
		((FAudioInputDeviceInfo*)Obj)->bSupportsHardwareAEC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC = { "bSupportsHardwareAEC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAudioInputDeviceInfo), &Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_InputChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_PreferredSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
		nullptr,
		&NewStructOps,
		"AudioInputDeviceInfo",
		sizeof(FAudioInputDeviceInfo),
		alignof(FAudioInputDeviceInfo),
		Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics
	{
		struct _Script_AudioCapture_eventOnAudioInputDevicesObtained_Parms
		{
			TArray<FAudioInputDeviceInfo> AvailableDevices;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableDevices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDevices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDevices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_Inner = { "AvailableDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioInputDeviceInfo, METADATA_PARAMS(nullptr, 0) }; // 4165211880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices = { "AvailableDevices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioCapture_eventOnAudioInputDevicesObtained_Parms, AvailableDevices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_MetaData)) }; // 4165211880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Called when a list of all available audio devices is retrieved\n */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "Called when a list of all available audio devices is retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioCapture, nullptr, "OnAudioInputDevicesObtained__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::_Script_AudioCapture_eventOnAudioInputDevicesObtained_Parms), Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioInputDevicesObtained_DelegateWrapper(const FScriptDelegate& OnAudioInputDevicesObtained, TArray<FAudioInputDeviceInfo> const& AvailableDevices)
{
	struct _Script_AudioCapture_eventOnAudioInputDevicesObtained_Parms
	{
		TArray<FAudioInputDeviceInfo> AvailableDevices;
	};
	_Script_AudioCapture_eventOnAudioInputDevicesObtained_Parms Parms;
	Parms.AvailableDevices=AvailableDevices;
	OnAudioInputDevicesObtained.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAudioCaptureBlueprintLibrary::execGetAvailableAudioInputDevices)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnObtainDevicesEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices(Z_Param_WorldContextObject,FOnAudioInputDevicesObtained(Z_Param_Out_OnObtainDevicesEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioCaptureBlueprintLibrary::execConv_AudioInputDeviceInfoToString)
	{
		P_GET_STRUCT_REF(FAudioInputDeviceInfo,Z_Param_Out_info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAudioCaptureBlueprintLibrary::Conv_AudioInputDeviceInfoToString(Z_Param_Out_info);
		P_NATIVE_END;
	}
	void UAudioCaptureBlueprintLibrary::StaticRegisterNativesUAudioCaptureBlueprintLibrary()
	{
		UClass* Class = UAudioCaptureBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_AudioInputDeviceInfoToString", &UAudioCaptureBlueprintLibrary::execConv_AudioInputDeviceInfoToString },
			{ "GetAvailableAudioInputDevices", &UAudioCaptureBlueprintLibrary::execGetAvailableAudioInputDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics
	{
		struct AudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms
		{
			FAudioInputDeviceInfo info;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms, info), Z_Construct_UScriptStruct_FAudioInputDeviceInfo, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info_MetaData)) }; // 4165211880
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Returns the device info in a human readable format\n\x09 * @param info - The audio device data to print\n\x09 * @return The data in a string format\n\x09 */" },
		{ "CompactNodeTitle", "To String" },
		{ "DisplayName", "Audio Input Device Info To String" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "Returns the device info in a human readable format\n@param info - The audio device data to print\n@return The data in a string format" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureBlueprintLibrary, nullptr, "Conv_AudioInputDeviceInfoToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::AudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms), Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics
	{
		struct AudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate OnObtainDevicesEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnObtainDevicesEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnObtainDevicesEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent = { "OnObtainDevicesEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms, OnObtainDevicesEvent), Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent_MetaData)) }; // 3932341071
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * Gets information about all audio output devices available in the system\n\x09 * @param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved\n\x09 */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ToolTip", "Gets information about all audio output devices available in the system\n@param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureBlueprintLibrary, nullptr, "GetAvailableAudioInputDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::AudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms), Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCaptureBlueprintLibrary);
	UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary_NoRegister()
	{
		return UAudioCaptureBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString, "Conv_AudioInputDeviceInfoToString" }, // 2774256622
		{ &Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices, "GetAvailableAudioInputDevices" }, // 330102794
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioCaptureBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary.h" },
		{ "ScriptName", "AudioCaptureLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCaptureBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::ClassParams = {
		&UAudioCaptureBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.OuterSingleton;
	}
	template<> AUDIOCAPTURE_API UClass* StaticClass<UAudioCaptureBlueprintLibrary>()
	{
		return UAudioCaptureBlueprintLibrary::StaticClass();
	}
	UAudioCaptureBlueprintLibrary::UAudioCaptureBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCaptureBlueprintLibrary);
	UAudioCaptureBlueprintLibrary::~UAudioCaptureBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FAudioInputDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewStructOps, TEXT("AudioInputDeviceInfo"), &Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioInputDeviceInfo), 4165211880U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioCaptureBlueprintLibrary, UAudioCaptureBlueprintLibrary::StaticClass, TEXT("UAudioCaptureBlueprintLibrary"), &Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCaptureBlueprintLibrary), 2213029584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_3867115669(TEXT("/Script/AudioCapture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
