// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AudioMixerBlueprintLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerBlueprintLibrary() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EMusicalNoteName();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FAudioOutputDeviceInfo();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSwapAudioOutputResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTSize();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTWindowType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics
	{
		struct _Script_AudioMixer_eventOnSoundLoadComplete_Parms
		{
			const USoundWave* LoadedSoundWave;
			bool WasCancelled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasCancelled_MetaData[];
#endif
		static void NewProp_WasCancelled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasCancelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave = { "LoadedSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioMixer_eventOnSoundLoadComplete_Parms, LoadedSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit(void* Obj)
	{
		((_Script_AudioMixer_eventOnSoundLoadComplete_Parms*)Obj)->WasCancelled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled = { "WasCancelled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_AudioMixer_eventOnSoundLoadComplete_Parms), &Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_LoadedSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::NewProp_WasCancelled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n* Called when a load request for a sound has completed.\n*/" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Called when a load request for a sound has completed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnSoundLoadComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::_Script_AudioMixer_eventOnSoundLoadComplete_Parms), Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSoundLoadComplete_DelegateWrapper(const FScriptDelegate& OnSoundLoadComplete, const USoundWave* LoadedSoundWave, bool WasCancelled)
{
	struct _Script_AudioMixer_eventOnSoundLoadComplete_Parms
	{
		const USoundWave* LoadedSoundWave;
		bool WasCancelled;
	};
	_Script_AudioMixer_eventOnSoundLoadComplete_Parms Parms;
	Parms.LoadedSoundWave=LoadedSoundWave;
	Parms.WasCancelled=WasCancelled ? true : false;
	OnSoundLoadComplete.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMusicalNoteName;
	static UEnum* EMusicalNoteName_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EMusicalNoteName, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("EMusicalNoteName"));
		}
		return Z_Registration_Info_UEnum_EMusicalNoteName.OuterSingleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EMusicalNoteName>()
	{
		return EMusicalNoteName_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::Enumerators[] = {
		{ "EMusicalNoteName::C", (int64)EMusicalNoteName::C },
		{ "EMusicalNoteName::Db", (int64)EMusicalNoteName::Db },
		{ "EMusicalNoteName::D", (int64)EMusicalNoteName::D },
		{ "EMusicalNoteName::Eb", (int64)EMusicalNoteName::Eb },
		{ "EMusicalNoteName::E", (int64)EMusicalNoteName::E },
		{ "EMusicalNoteName::F", (int64)EMusicalNoteName::F },
		{ "EMusicalNoteName::Gb", (int64)EMusicalNoteName::Gb },
		{ "EMusicalNoteName::G", (int64)EMusicalNoteName::G },
		{ "EMusicalNoteName::Ab", (int64)EMusicalNoteName::Ab },
		{ "EMusicalNoteName::A", (int64)EMusicalNoteName::A },
		{ "EMusicalNoteName::Bb", (int64)EMusicalNoteName::Bb },
		{ "EMusicalNoteName::B", (int64)EMusicalNoteName::B },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "EMusicalNoteName::A" },
		{ "Ab.Name", "EMusicalNoteName::Ab" },
		{ "B.Name", "EMusicalNoteName::B" },
		{ "Bb.Name", "EMusicalNoteName::Bb" },
		{ "BlueprintType", "true" },
		{ "C.Name", "EMusicalNoteName::C" },
		{ "D.Name", "EMusicalNoteName::D" },
		{ "Db.Name", "EMusicalNoteName::Db" },
		{ "E.Name", "EMusicalNoteName::E" },
		{ "Eb.Name", "EMusicalNoteName::Eb" },
		{ "F.Name", "EMusicalNoteName::F" },
		{ "G.Name", "EMusicalNoteName::G" },
		{ "Gb.Name", "EMusicalNoteName::Gb" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		"EMusicalNoteName",
		"EMusicalNoteName",
		Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioMixer_EMusicalNoteName()
	{
		if (!Z_Registration_Info_UEnum_EMusicalNoteName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMusicalNoteName.InnerSingleton, Z_Construct_UEnum_AudioMixer_EMusicalNoteName_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMusicalNoteName.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType;
	static UEnum* EAudioMixerStreamDataFormatType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("EAudioMixerStreamDataFormatType"));
		}
		return Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.OuterSingleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioMixerStreamDataFormatType>()
	{
		return EAudioMixerStreamDataFormatType_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::Enumerators[] = {
		{ "EAudioMixerStreamDataFormatType::Unknown", (int64)EAudioMixerStreamDataFormatType::Unknown },
		{ "EAudioMixerStreamDataFormatType::Float", (int64)EAudioMixerStreamDataFormatType::Float },
		{ "EAudioMixerStreamDataFormatType::Int16", (int64)EAudioMixerStreamDataFormatType::Int16 },
		{ "EAudioMixerStreamDataFormatType::Unsupported", (int64)EAudioMixerStreamDataFormatType::Unsupported },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//Duplicate of Audio::EAudioMixerStreamDataFormat::Type, to get around UHT's lack of namespace support\n" },
		{ "Float.Name", "EAudioMixerStreamDataFormatType::Float" },
		{ "Int16.Name", "EAudioMixerStreamDataFormatType::Int16" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Duplicate of Audio::EAudioMixerStreamDataFormat::Type, to get around UHT's lack of namespace support" },
		{ "Unknown.Name", "EAudioMixerStreamDataFormatType::Unknown" },
		{ "Unsupported.Name", "EAudioMixerStreamDataFormatType::Unsupported" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		"EAudioMixerStreamDataFormatType",
		"EAudioMixerStreamDataFormatType",
		Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType()
	{
		if (!Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.InnerSingleton, Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioMixerChannelType;
	static UEnum* EAudioMixerChannelType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("EAudioMixerChannelType"));
		}
		return Z_Registration_Info_UEnum_EAudioMixerChannelType.OuterSingleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioMixerChannelType>()
	{
		return EAudioMixerChannelType_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::Enumerators[] = {
		{ "EAudioMixerChannelType::FrontLeft", (int64)EAudioMixerChannelType::FrontLeft },
		{ "EAudioMixerChannelType::FrontRight", (int64)EAudioMixerChannelType::FrontRight },
		{ "EAudioMixerChannelType::FrontCenter", (int64)EAudioMixerChannelType::FrontCenter },
		{ "EAudioMixerChannelType::LowFrequency", (int64)EAudioMixerChannelType::LowFrequency },
		{ "EAudioMixerChannelType::BackLeft", (int64)EAudioMixerChannelType::BackLeft },
		{ "EAudioMixerChannelType::BackRight", (int64)EAudioMixerChannelType::BackRight },
		{ "EAudioMixerChannelType::FrontLeftOfCenter", (int64)EAudioMixerChannelType::FrontLeftOfCenter },
		{ "EAudioMixerChannelType::FrontRightOfCenter", (int64)EAudioMixerChannelType::FrontRightOfCenter },
		{ "EAudioMixerChannelType::BackCenter", (int64)EAudioMixerChannelType::BackCenter },
		{ "EAudioMixerChannelType::SideLeft", (int64)EAudioMixerChannelType::SideLeft },
		{ "EAudioMixerChannelType::SideRight", (int64)EAudioMixerChannelType::SideRight },
		{ "EAudioMixerChannelType::TopCenter", (int64)EAudioMixerChannelType::TopCenter },
		{ "EAudioMixerChannelType::TopFrontLeft", (int64)EAudioMixerChannelType::TopFrontLeft },
		{ "EAudioMixerChannelType::TopFrontCenter", (int64)EAudioMixerChannelType::TopFrontCenter },
		{ "EAudioMixerChannelType::TopFrontRight", (int64)EAudioMixerChannelType::TopFrontRight },
		{ "EAudioMixerChannelType::TopBackLeft", (int64)EAudioMixerChannelType::TopBackLeft },
		{ "EAudioMixerChannelType::TopBackCenter", (int64)EAudioMixerChannelType::TopBackCenter },
		{ "EAudioMixerChannelType::TopBackRight", (int64)EAudioMixerChannelType::TopBackRight },
		{ "EAudioMixerChannelType::Unknown", (int64)EAudioMixerChannelType::Unknown },
		{ "EAudioMixerChannelType::ChannelTypeCount", (int64)EAudioMixerChannelType::ChannelTypeCount },
		{ "EAudioMixerChannelType::DefaultChannel", (int64)EAudioMixerChannelType::DefaultChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::Enum_MetaDataParams[] = {
		{ "BackCenter.Name", "EAudioMixerChannelType::BackCenter" },
		{ "BackLeft.Name", "EAudioMixerChannelType::BackLeft" },
		{ "BackRight.Name", "EAudioMixerChannelType::BackRight" },
		{ "ChannelTypeCount.Name", "EAudioMixerChannelType::ChannelTypeCount" },
		{ "Comment", "//A copy of Audio::EAudioMixerChannel::Type to get around UHT's refusal of namespaces\n" },
		{ "DefaultChannel.Name", "EAudioMixerChannelType::DefaultChannel" },
		{ "FrontCenter.Name", "EAudioMixerChannelType::FrontCenter" },
		{ "FrontLeft.Name", "EAudioMixerChannelType::FrontLeft" },
		{ "FrontLeftOfCenter.Name", "EAudioMixerChannelType::FrontLeftOfCenter" },
		{ "FrontRight.Name", "EAudioMixerChannelType::FrontRight" },
		{ "FrontRightOfCenter.Name", "EAudioMixerChannelType::FrontRightOfCenter" },
		{ "LowFrequency.Name", "EAudioMixerChannelType::LowFrequency" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "SideLeft.Name", "EAudioMixerChannelType::SideLeft" },
		{ "SideRight.Name", "EAudioMixerChannelType::SideRight" },
		{ "ToolTip", "A copy of Audio::EAudioMixerChannel::Type to get around UHT's refusal of namespaces" },
		{ "TopBackCenter.Name", "EAudioMixerChannelType::TopBackCenter" },
		{ "TopBackLeft.Name", "EAudioMixerChannelType::TopBackLeft" },
		{ "TopBackRight.Name", "EAudioMixerChannelType::TopBackRight" },
		{ "TopCenter.Name", "EAudioMixerChannelType::TopCenter" },
		{ "TopFrontCenter.Name", "EAudioMixerChannelType::TopFrontCenter" },
		{ "TopFrontLeft.Name", "EAudioMixerChannelType::TopFrontLeft" },
		{ "TopFrontRight.Name", "EAudioMixerChannelType::TopFrontRight" },
		{ "Unknown.Name", "EAudioMixerChannelType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		"EAudioMixerChannelType",
		"EAudioMixerChannelType",
		Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType()
	{
		if (!Z_Registration_Info_UEnum_EAudioMixerChannelType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioMixerChannelType.InnerSingleton, Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioMixerChannelType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState;
	static UEnum* ESwapAudioOutputDeviceResultState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESwapAudioOutputDeviceResultState"));
		}
		return Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.OuterSingleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESwapAudioOutputDeviceResultState>()
	{
		return ESwapAudioOutputDeviceResultState_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::Enumerators[] = {
		{ "ESwapAudioOutputDeviceResultState::Failure", (int64)ESwapAudioOutputDeviceResultState::Failure },
		{ "ESwapAudioOutputDeviceResultState::Success", (int64)ESwapAudioOutputDeviceResultState::Success },
		{ "ESwapAudioOutputDeviceResultState::None", (int64)ESwapAudioOutputDeviceResultState::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Resulting State of SwapAudioOutputDevice call\n" },
		{ "Failure.Name", "ESwapAudioOutputDeviceResultState::Failure" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "None.Name", "ESwapAudioOutputDeviceResultState::None" },
		{ "Success.Name", "ESwapAudioOutputDeviceResultState::Success" },
		{ "ToolTip", "Resulting State of SwapAudioOutputDevice call" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		"ESwapAudioOutputDeviceResultState",
		"ESwapAudioOutputDeviceResultState",
		Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState()
	{
		if (!Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwapAudioOutputResult;
class UScriptStruct* FSwapAudioOutputResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwapAudioOutputResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwapAudioOutputResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwapAudioOutputResult, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SwapAudioOutputResult"));
	}
	return Z_Registration_Info_UScriptStruct_SwapAudioOutputResult.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSwapAudioOutputResult>()
{
	return FSwapAudioOutputResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentDeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestedDeviceId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Out structure for use with AudioMixerBlueprintLibrary::SwapAudioOutputDevice\n */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Out structure for use with AudioMixerBlueprintLibrary::SwapAudioOutputDevice" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwapAudioOutputResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_CurrentDeviceId_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** ID of the currently set device.  This is the device at the time of the call, NOT the resulting deviceId */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "ID of the currently set device.  This is the device at the time of the call, NOT the resulting deviceId" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_CurrentDeviceId = { "CurrentDeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwapAudioOutputResult, CurrentDeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_CurrentDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_CurrentDeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_RequestedDeviceId_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** ID of the requested device. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "ID of the requested device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_RequestedDeviceId = { "RequestedDeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwapAudioOutputResult, RequestedDeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_RequestedDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_RequestedDeviceId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Result of the call */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Result of the call" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwapAudioOutputResult, Result), Z_Construct_UEnum_AudioMixer_ESwapAudioOutputDeviceResultState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_Result_MetaData)) }; // 395246892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_CurrentDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_RequestedDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SwapAudioOutputResult",
		sizeof(FSwapAudioOutputResult),
		alignof(FSwapAudioOutputResult),
		Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwapAudioOutputResult()
	{
		if (!Z_Registration_Info_UScriptStruct_SwapAudioOutputResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwapAudioOutputResult.InnerSingleton, Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwapAudioOutputResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioOutputDeviceInfo;
class UScriptStruct* FAudioOutputDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioOutputDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioOutputDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("AudioOutputDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AudioOutputDeviceInfo.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FAudioOutputDeviceInfo>()
{
	return FAudioOutputDeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputChannelArray_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputChannelArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputChannelArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputChannelArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSystemDefault_MetaData[];
#endif
		static void NewProp_bIsSystemDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentDevice_MetaData[];
#endif
		static void NewProp_bIsCurrentDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Platform audio output device info, in a Blueprint-readable format\n */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Platform audio output device info, in a Blueprint-readable format" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioOutputDeviceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The name of the audio device */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "The name of the audio device" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioOutputDeviceInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** ID of the device. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "ID of the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioOutputDeviceInfo, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_DeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The number of channels supported by the audio device */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "The number of channels supported by the audio device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioOutputDeviceInfo, NumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The sample rate of the audio device */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "The sample rate of the audio device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioOutputDeviceInfo, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The data format of the audio stream */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "The data format of the audio stream" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioOutputDeviceInfo, Format), Z_Construct_UEnum_AudioMixer_EAudioMixerStreamDataFormatType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Format_MetaData)) }; // 450467776
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray_Inner = { "OutputChannelArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AudioMixer_EAudioMixerChannelType, METADATA_PARAMS(nullptr, 0) }; // 1028391890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The output channel array of the audio device */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "The output channel array of the audio device" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray = { "OutputChannelArray", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioOutputDeviceInfo, OutputChannelArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray_MetaData)) }; // 1028391890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsSystemDefault_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Whether or not this device is the system default */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Whether or not this device is the system default" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsSystemDefault_SetBit(void* Obj)
	{
		((FAudioOutputDeviceInfo*)Obj)->bIsSystemDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsSystemDefault = { "bIsSystemDefault", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAudioOutputDeviceInfo), &Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsSystemDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsSystemDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsSystemDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsCurrentDevice_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Whether or not this device is the device currently in use */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Whether or not this device is the device currently in use" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsCurrentDevice_SetBit(void* Obj)
	{
		((FAudioOutputDeviceInfo*)Obj)->bIsCurrentDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsCurrentDevice = { "bIsCurrentDevice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAudioOutputDeviceInfo), &Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsCurrentDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsCurrentDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsCurrentDevice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_NumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_OutputChannelArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsSystemDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewProp_bIsCurrentDevice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"AudioOutputDeviceInfo",
		sizeof(FAudioOutputDeviceInfo),
		alignof(FAudioOutputDeviceInfo),
		Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioOutputDeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioOutputDeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioOutputDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioOutputDeviceInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics
	{
		struct _Script_AudioMixer_eventOnAudioOutputDevicesObtained_Parms
		{
			TArray<FAudioOutputDeviceInfo> AvailableDevices;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_Inner = { "AvailableDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioOutputDeviceInfo, METADATA_PARAMS(nullptr, 0) }; // 4030926374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices = { "AvailableDevices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioMixer_eventOnAudioOutputDevicesObtained_Parms, AvailableDevices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_MetaData)) }; // 4030926374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::NewProp_AvailableDevices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Called when a list of all available audio devices is retrieved\n */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Called when a list of all available audio devices is retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnAudioOutputDevicesObtained__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::_Script_AudioMixer_eventOnAudioOutputDevicesObtained_Parms), Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioOutputDevicesObtained_DelegateWrapper(const FScriptDelegate& OnAudioOutputDevicesObtained, TArray<FAudioOutputDeviceInfo> const& AvailableDevices)
{
	struct _Script_AudioMixer_eventOnAudioOutputDevicesObtained_Parms
	{
		TArray<FAudioOutputDeviceInfo> AvailableDevices;
	};
	_Script_AudioMixer_eventOnAudioOutputDevicesObtained_Parms Parms;
	Parms.AvailableDevices=AvailableDevices;
	OnAudioOutputDevicesObtained.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics
	{
		struct _Script_AudioMixer_eventOnMainAudioOutputDeviceObtained_Parms
		{
			FString CurrentDevice;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::NewProp_CurrentDevice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::NewProp_CurrentDevice = { "CurrentDevice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioMixer_eventOnMainAudioOutputDeviceObtained_Parms, CurrentDevice), METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::NewProp_CurrentDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::NewProp_CurrentDevice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::NewProp_CurrentDevice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Called when a list of all available audio devices is retrieved\n */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Called when a list of all available audio devices is retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnMainAudioOutputDeviceObtained__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::_Script_AudioMixer_eventOnMainAudioOutputDeviceObtained_Parms), Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMainAudioOutputDeviceObtained_DelegateWrapper(const FScriptDelegate& OnMainAudioOutputDeviceObtained, const FString& CurrentDevice)
{
	struct _Script_AudioMixer_eventOnMainAudioOutputDeviceObtained_Parms
	{
		FString CurrentDevice;
	};
	_Script_AudioMixer_eventOnMainAudioOutputDeviceObtained_Parms Parms;
	Parms.CurrentDevice=CurrentDevice;
	OnMainAudioOutputDeviceObtained.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics
	{
		struct _Script_AudioMixer_eventOnCompletedDeviceSwap_Parms
		{
			FSwapAudioOutputResult SwapResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwapResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::NewProp_SwapResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::NewProp_SwapResult = { "SwapResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioMixer_eventOnCompletedDeviceSwap_Parms, SwapResult), Z_Construct_UScriptStruct_FSwapAudioOutputResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::NewProp_SwapResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::NewProp_SwapResult_MetaData)) }; // 1166732641
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::NewProp_SwapResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Called when the system has swapped to another audio output device\n */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Called when the system has swapped to another audio output device" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnCompletedDeviceSwap__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::_Script_AudioMixer_eventOnCompletedDeviceSwap_Parms), Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCompletedDeviceSwap_DelegateWrapper(const FScriptDelegate& OnCompletedDeviceSwap, FSwapAudioOutputResult const& SwapResult)
{
	struct _Script_AudioMixer_eventOnCompletedDeviceSwap_Parms
	{
		FSwapAudioOutputResult SwapResult;
	};
	_Script_AudioMixer_eventOnCompletedDeviceSwap_Parms Parms;
	Parms.SwapResult=SwapResult;
	OnCompletedDeviceSwap.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execSwapAudioOutputDevice)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewDeviceId);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnCompletedDeviceSwap);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(Z_Param_WorldContextObject,Z_Param_NewDeviceId,FOnCompletedDeviceSwap(Z_Param_Out_OnCompletedDeviceSwap));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execGetCurrentAudioOutputDeviceName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnObtainCurrentDeviceEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName(Z_Param_WorldContextObject,FOnMainAudioOutputDeviceObtained(Z_Param_Out_OnObtainCurrentDeviceEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execGetAvailableAudioOutputDevices)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnObtainDevicesEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices(Z_Param_WorldContextObject,FOnAudioOutputDevicesObtained(Z_Param_Out_OnObtainDevicesEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execIsAudioBusActive)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAudioMixerBlueprintLibrary::IsAudioBusActive(Z_Param_WorldContextObject,Z_Param_AudioBus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStopAudioBus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::StopAudioBus(Z_Param_WorldContextObject,Z_Param_AudioBus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStartAudioBus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::StartAudioBus(Z_Param_WorldContextObject,Z_Param_AudioBus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execTrimAudioCache)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMegabytesToFree);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAudioMixerBlueprintLibrary::TrimAudioCache(Z_Param_InMegabytesToFree);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execPrimeSoundCueForPlayback)
	{
		P_GET_OBJECT(USoundCue,Z_Param_SoundCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(Z_Param_SoundCue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execPrimeSoundForPlayback)
	{
		P_GET_OBJECT(USoundWave,Z_Param_SoundWave);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLoadCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(Z_Param_SoundWave,FOnSoundLoadComplete(Z_Param_OnLoadCompletion));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(Z_Param_WorldContextObject,Z_Param_PresetChain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain);
		P_GET_PROPERTY(FIntProperty,Z_Param_EntryIndex);
		P_GET_UBOOL(Z_Param_bBypassed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex,Z_Param_bBypassed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveSourceEffectFromPresetChain)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain);
		P_GET_PROPERTY(FIntProperty,Z_Param_EntryIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain);
		P_GET_STRUCT(FSourceEffectChainEntry,Z_Param_Entry);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_Entry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execGetPhaseForFrequencies)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies);
		P_GET_TARRAY_REF(float,Z_Param_Out_Phases);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(Z_Param_WorldContextObject,Z_Param_Out_Frequencies,Z_Param_Out_Phases,Z_Param_SubmixToAnalyze);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execGetMagnitudeForFrequencies)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies);
		P_GET_TARRAY_REF(float,Z_Param_Out_Magnitudes);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(Z_Param_WorldContextObject,Z_Param_Out_Frequencies,Z_Param_Out_Magnitudes,Z_Param_SubmixToAnalyze);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execMakePresetSpectralAnalysisBandSettings)
	{
		P_GET_ENUM(EAudioSpectrumBandPresetType,Z_Param_InBandPresetType);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumBands);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAttackTimeMsec);
		P_GET_PROPERTY(FIntProperty,Z_Param_InReleaseTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoundSubmixSpectralAnalysisBandSettings>*)Z_Param__Result=UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType(Z_Param_InBandPresetType),Z_Param_InNumBands,Z_Param_InAttackTimeMsec,Z_Param_InReleaseTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execMakeFullSpectrumSpectralAnalysisBandSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumBands);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinimumFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaximumFrequency);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAttackTimeMsec);
		P_GET_PROPERTY(FIntProperty,Z_Param_InReleaseTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoundSubmixSpectralAnalysisBandSettings>*)Z_Param__Result=UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(Z_Param_InNumBands,Z_Param_InMinimumFrequency,Z_Param_InMaximumFrequency,Z_Param_InAttackTimeMsec,Z_Param_InReleaseTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execMakeMusicalSpectralAnalysisBandSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumSemitones);
		P_GET_ENUM(EMusicalNoteName,Z_Param_InStartingMusicalNote);
		P_GET_PROPERTY(FIntProperty,Z_Param_InStartingOctave);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAttackTimeMsec);
		P_GET_PROPERTY(FIntProperty,Z_Param_InReleaseTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoundSubmixSpectralAnalysisBandSettings>*)Z_Param__Result=UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(Z_Param_InNumSemitones,EMusicalNoteName(Z_Param_InStartingMusicalNote),Z_Param_InStartingOctave,Z_Param_InAttackTimeMsec,Z_Param_InReleaseTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStopAnalyzingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToStopAnalyzing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::StopAnalyzingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToStopAnalyzing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStartAnalyzingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze);
		P_GET_ENUM(EFFTSize,Z_Param_FFTSize);
		P_GET_ENUM(EFFTPeakInterpolationMethod,Z_Param_InterpolationMethod);
		P_GET_ENUM(EFFTWindowType,Z_Param_WindowType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HopSize);
		P_GET_ENUM(EAudioSpectrumType,Z_Param_SpectrumType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::StartAnalyzingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToAnalyze,EFFTSize(Z_Param_FFTSize),EFFTPeakInterpolationMethod(Z_Param_InterpolationMethod),EFFTWindowType(Z_Param_WindowType),Z_Param_HopSize,EAudioSpectrumType(Z_Param_SpectrumType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execResumeRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ResumeRecordingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execPauseRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::PauseRecordingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStopRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToRecord);
		P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=UAudioMixerBlueprintLibrary::StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_SubmixToRecord,Z_Param_ExistingSoundWaveToOverwrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execStartRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedDuration);
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration,Z_Param_SubmixToRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execClearSubmixEffectChainOverride)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_FadeTimeSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execSetSubmixEffectChainOverride)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_TARRAY(USoundEffectSubmixPreset*,Z_Param_SubmixEffectPresetChain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixEffectPresetChain,Z_Param_FadeTimeSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execClearSubmixEffects)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ClearSubmixEffects(Z_Param_WorldContextObject,Z_Param_SoundSubmix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execReplaceSubmixEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_InSoundSubmix);
		P_GET_PROPERTY(FIntProperty,Z_Param_SubmixChainIndex);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ReplaceSubmixEffect(Z_Param_WorldContextObject,Z_Param_InSoundSubmix,Z_Param_SubmixChainIndex,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execReplaceSoundEffectSubmix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_InSoundSubmix);
		P_GET_PROPERTY(FIntProperty,Z_Param_SubmixChainIndex);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(Z_Param_WorldContextObject,Z_Param_InSoundSubmix,Z_Param_SubmixChainIndex,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveSubmixEffectAtIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_PROPERTY(FIntProperty,Z_Param_SubmixChainIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixChainIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPresetAtIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_PROPERTY(FIntProperty,Z_Param_SubmixChainIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixChainIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveSubmixEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveSubmixEffect(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execAddSubmixEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundSubmix,Z_Param_SoundSubmix);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAudioMixerBlueprintLibrary::AddSubmixEffect(Z_Param_WorldContextObject,Z_Param_SoundSubmix,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execClearMasterSubmixEffects)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execRemoveMasterSubmixEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execAddMasterSubmixEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMixerBlueprintLibrary::execConv_AudioOutputDeviceInfoToString)
	{
		P_GET_STRUCT_REF(FAudioOutputDeviceInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAudioMixerBlueprintLibrary::Conv_AudioOutputDeviceInfoToString(Z_Param_Out_Info);
		P_NATIVE_END;
	}
	void UAudioMixerBlueprintLibrary::StaticRegisterNativesUAudioMixerBlueprintLibrary()
	{
		UClass* Class = UAudioMixerBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMasterSubmixEffect", &UAudioMixerBlueprintLibrary::execAddMasterSubmixEffect },
			{ "AddSourceEffectToPresetChain", &UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain },
			{ "AddSubmixEffect", &UAudioMixerBlueprintLibrary::execAddSubmixEffect },
			{ "ClearMasterSubmixEffects", &UAudioMixerBlueprintLibrary::execClearMasterSubmixEffects },
			{ "ClearSubmixEffectChainOverride", &UAudioMixerBlueprintLibrary::execClearSubmixEffectChainOverride },
			{ "ClearSubmixEffects", &UAudioMixerBlueprintLibrary::execClearSubmixEffects },
			{ "Conv_AudioOutputDeviceInfoToString", &UAudioMixerBlueprintLibrary::execConv_AudioOutputDeviceInfoToString },
			{ "GetAvailableAudioOutputDevices", &UAudioMixerBlueprintLibrary::execGetAvailableAudioOutputDevices },
			{ "GetCurrentAudioOutputDeviceName", &UAudioMixerBlueprintLibrary::execGetCurrentAudioOutputDeviceName },
			{ "GetMagnitudeForFrequencies", &UAudioMixerBlueprintLibrary::execGetMagnitudeForFrequencies },
			{ "GetNumberOfEntriesInSourceEffectChain", &UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain },
			{ "GetPhaseForFrequencies", &UAudioMixerBlueprintLibrary::execGetPhaseForFrequencies },
			{ "IsAudioBusActive", &UAudioMixerBlueprintLibrary::execIsAudioBusActive },
			{ "MakeFullSpectrumSpectralAnalysisBandSettings", &UAudioMixerBlueprintLibrary::execMakeFullSpectrumSpectralAnalysisBandSettings },
			{ "MakeMusicalSpectralAnalysisBandSettings", &UAudioMixerBlueprintLibrary::execMakeMusicalSpectralAnalysisBandSettings },
			{ "MakePresetSpectralAnalysisBandSettings", &UAudioMixerBlueprintLibrary::execMakePresetSpectralAnalysisBandSettings },
			{ "PauseRecordingOutput", &UAudioMixerBlueprintLibrary::execPauseRecordingOutput },
			{ "PrimeSoundCueForPlayback", &UAudioMixerBlueprintLibrary::execPrimeSoundCueForPlayback },
			{ "PrimeSoundForPlayback", &UAudioMixerBlueprintLibrary::execPrimeSoundForPlayback },
			{ "RemoveMasterSubmixEffect", &UAudioMixerBlueprintLibrary::execRemoveMasterSubmixEffect },
			{ "RemoveSourceEffectFromPresetChain", &UAudioMixerBlueprintLibrary::execRemoveSourceEffectFromPresetChain },
			{ "RemoveSubmixEffect", &UAudioMixerBlueprintLibrary::execRemoveSubmixEffect },
			{ "RemoveSubmixEffectAtIndex", &UAudioMixerBlueprintLibrary::execRemoveSubmixEffectAtIndex },
			{ "RemoveSubmixEffectPreset", &UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPreset },
			{ "RemoveSubmixEffectPresetAtIndex", &UAudioMixerBlueprintLibrary::execRemoveSubmixEffectPresetAtIndex },
			{ "ReplaceSoundEffectSubmix", &UAudioMixerBlueprintLibrary::execReplaceSoundEffectSubmix },
			{ "ReplaceSubmixEffect", &UAudioMixerBlueprintLibrary::execReplaceSubmixEffect },
			{ "ResumeRecordingOutput", &UAudioMixerBlueprintLibrary::execResumeRecordingOutput },
			{ "SetBypassSourceEffectChainEntry", &UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry },
			{ "SetSubmixEffectChainOverride", &UAudioMixerBlueprintLibrary::execSetSubmixEffectChainOverride },
			{ "StartAnalyzingOutput", &UAudioMixerBlueprintLibrary::execStartAnalyzingOutput },
			{ "StartAudioBus", &UAudioMixerBlueprintLibrary::execStartAudioBus },
			{ "StartRecordingOutput", &UAudioMixerBlueprintLibrary::execStartRecordingOutput },
			{ "StopAnalyzingOutput", &UAudioMixerBlueprintLibrary::execStopAnalyzingOutput },
			{ "StopAudioBus", &UAudioMixerBlueprintLibrary::execStopAudioBus },
			{ "StopRecordingOutput", &UAudioMixerBlueprintLibrary::execStopRecordingOutput },
			{ "SwapAudioOutputDevice", &UAudioMixerBlueprintLibrary::execSwapAudioOutputDevice },
			{ "TrimAudioCache", &UAudioMixerBlueprintLibrary::execTrimAudioCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds a submix effect preset to the master submix. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds a submix effect preset to the master submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "AddMasterSubmixEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			FSourceEffectChainEntry Entry;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, Entry), Z_Construct_UScriptStruct_FSourceEffectChainEntry, METADATA_PARAMS(nullptr, 0) }; // 454931370
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_PresetChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_Entry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds source effect entry to preset chain. Only effects the instance of the preset chain */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds source effect entry to preset chain. Only effects the instance of the preset chain" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "AddSourceEffectToPresetChain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			USoundEffectSubmixPreset* SubmixEffectPreset;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_SubmixEffectPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Adds a submix effect preset to the given submix at the end of its submix effect chain. Returns the number of submix effects. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds a submix effect preset to the given submix at the end of its submix effect chain. Returns the number of submix effects." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "AddSubmixEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::AudioMixerBlueprintLibrary_eventAddSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics
	{
		struct AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Clears all master submix effects. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Clears all master submix effects." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ClearMasterSubmixEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics
	{
		struct AudioMixerBlueprintLibrary_eventClearSubmixEffectChainOverride_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			float FadeTimeSec;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTimeSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearSubmixEffectChainOverride_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearSubmixEffectChainOverride_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_FadeTimeSec = { "FadeTimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearSubmixEffectChainOverride_Parms, FadeTimeSec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::NewProp_FadeTimeSec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Clears all submix effect overrides on the given submix and returns it to the default effect chain. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Clears all submix effect overrides on the given submix and returns it to the default effect chain." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ClearSubmixEffectChainOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::AudioMixerBlueprintLibrary_eventClearSubmixEffectChainOverride_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics
	{
		struct AudioMixerBlueprintLibrary_eventClearSubmixEffects_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearSubmixEffects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearSubmixEffects_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::NewProp_SoundSubmix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Clears all submix effects on the given submix. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Clears all submix effects on the given submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ClearSubmixEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::AudioMixerBlueprintLibrary_eventClearSubmixEffects_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics
	{
		struct AudioMixerBlueprintLibrary_eventConv_AudioOutputDeviceInfoToString_Parms
		{
			FAudioOutputDeviceInfo Info;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventConv_AudioOutputDeviceInfoToString_Parms, Info), Z_Construct_UScriptStruct_FAudioOutputDeviceInfo, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::NewProp_Info_MetaData)) }; // 4030926374
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventConv_AudioOutputDeviceInfoToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::NewProp_Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09* Returns the device info in a human readable format\n\x09* @param info - The audio device data to print\n\x09* @return The data in a string format\n\x09*/" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Audio Output Device Info To String" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Returns the device info in a human readable format\n@param info - The audio device data to print\n@return The data in a string format" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "Conv_AudioOutputDeviceInfoToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::AudioMixerBlueprintLibrary_eventConv_AudioOutputDeviceInfoToString_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetAvailableAudioOutputDevices_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetAvailableAudioOutputDevices_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_OnObtainDevicesEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_OnObtainDevicesEvent = { "OnObtainDevicesEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetAvailableAudioOutputDevices_Parms, OnObtainDevicesEvent), Z_Construct_UDelegateFunction_AudioMixer_OnAudioOutputDevicesObtained__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_OnObtainDevicesEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_OnObtainDevicesEvent_MetaData)) }; // 2918374178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::NewProp_OnObtainDevicesEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09* Gets information about all audio output devices available in the system\n\x09* @param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Gets information about all audio output devices available in the system\n@param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetAvailableAudioOutputDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::AudioMixerBlueprintLibrary_eventGetAvailableAudioOutputDevices_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetCurrentAudioOutputDeviceName_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate OnObtainCurrentDeviceEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnObtainCurrentDeviceEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnObtainCurrentDeviceEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetCurrentAudioOutputDeviceName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_OnObtainCurrentDeviceEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_OnObtainCurrentDeviceEvent = { "OnObtainCurrentDeviceEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetCurrentAudioOutputDeviceName_Parms, OnObtainCurrentDeviceEvent), Z_Construct_UDelegateFunction_AudioMixer_OnMainAudioOutputDeviceObtained__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_OnObtainCurrentDeviceEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_OnObtainCurrentDeviceEvent_MetaData)) }; // 951224426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::NewProp_OnObtainCurrentDeviceEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09* Gets information about the currently used audio output device\n\x09* @param OnObtainCurrentDeviceEvent - the event to fire when the audio endpoint devices have been retrieved\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Gets information about the currently used audio output device\n@param OnObtainCurrentDeviceEvent - the event to fire when the audio endpoint devices have been retrieved" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetCurrentAudioOutputDeviceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::AudioMixerBlueprintLibrary_eventGetCurrentAudioOutputDeviceName_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms
		{
			const UObject* WorldContextObject;
			TArray<float> Frequencies;
			TArray<float> Magnitudes;
			USoundSubmix* SubmixToAnalyze;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frequencies;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitudes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Magnitudes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_Inner = { "Frequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies = { "Frequencies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, Frequencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes_Inner = { "Magnitudes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes = { "Magnitudes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, Magnitudes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_SubmixToAnalyze,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Retrieve the magnitudes for the given frequencies. */" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Retrieve the magnitudes for the given frequencies." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetMagnitudeForFrequencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_PresetChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Returns the number of effect chain entries in the given source effect chain. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Returns the number of effect chain entries in the given source effect chain." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetNumberOfEntriesInSourceEffectChain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms
		{
			const UObject* WorldContextObject;
			TArray<float> Frequencies;
			TArray<float> Phases;
			USoundSubmix* SubmixToAnalyze;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frequencies;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Phases_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Phases;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_Inner = { "Frequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies = { "Frequencies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, Frequencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases_Inner = { "Phases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases = { "Phases", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, Phases), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_SubmixToAnalyze,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Retrieve the phases for the given frequencies. */" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Retrieve the phases for the given frequencies." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetPhaseForFrequencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics
	{
		struct AudioMixerBlueprintLibrary_eventIsAudioBusActive_Parms
		{
			const UObject* WorldContextObject;
			UAudioBus* AudioBus;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventIsAudioBusActive_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventIsAudioBusActive_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioMixerBlueprintLibrary_eventIsAudioBusActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioMixerBlueprintLibrary_eventIsAudioBusActive_Parms), &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_AudioBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bus" },
		{ "Comment", "/** Queries if the given audio bus is active (and audio can be mixed to it). */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Queries if the given audio bus is active (and audio can be mixed to it)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "IsAudioBusActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::AudioMixerBlueprintLibrary_eventIsAudioBusActive_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics
	{
		struct AudioMixerBlueprintLibrary_eventMakeFullSpectrumSpectralAnalysisBandSettings_Parms
		{
			int32 InNumBands;
			float InMinimumFrequency;
			float InMaximumFrequency;
			int32 InAttackTimeMsec;
			int32 InReleaseTimeMsec;
			TArray<FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumBands;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinimumFrequency;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaximumFrequency;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAttackTimeMsec;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InReleaseTimeMsec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InNumBands = { "InNumBands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeFullSpectrumSpectralAnalysisBandSettings_Parms, InNumBands), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InMinimumFrequency = { "InMinimumFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeFullSpectrumSpectralAnalysisBandSettings_Parms, InMinimumFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InMaximumFrequency = { "InMaximumFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeFullSpectrumSpectralAnalysisBandSettings_Parms, InMaximumFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InAttackTimeMsec = { "InAttackTimeMsec", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeFullSpectrumSpectralAnalysisBandSettings_Parms, InAttackTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InReleaseTimeMsec = { "InReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeFullSpectrumSpectralAnalysisBandSettings_Parms, InReleaseTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings, METADATA_PARAMS(nullptr, 0) }; // 3766543794
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeFullSpectrumSpectralAnalysisBandSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3766543794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InNumBands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InMinimumFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InMaximumFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InAttackTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_InReleaseTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Make an array of logarithmically spaced bands. \n\x09 *\n\x09 *  @param InNumBands - The number of bands to used to represent the spectrum.\n\x09 *  @param InMinimumFrequency - The center frequency of the first band.\n\x09 *  @param InMaximumFrequency - The center frequency of the last band.\n\x09 *  @param InAttackTimeMsec - The attack time (in milliseconds) to apply to each band's envelope tracker.\n\x09 *  @param InReleaseTimeMsec - The release time (in milliseconds) to apply to each band's envelope tracker.\n\x09 */" },
		{ "CPP_Default_InAttackTimeMsec", "10" },
		{ "CPP_Default_InMaximumFrequency", "16000.000000" },
		{ "CPP_Default_InMinimumFrequency", "40.000000" },
		{ "CPP_Default_InNumBands", "30" },
		{ "CPP_Default_InReleaseTimeMsec", "10" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Make an array of logarithmically spaced bands.\n\n@param InNumBands - The number of bands to used to represent the spectrum.\n@param InMinimumFrequency - The center frequency of the first band.\n@param InMaximumFrequency - The center frequency of the last band.\n@param InAttackTimeMsec - The attack time (in milliseconds) to apply to each band's envelope tracker.\n@param InReleaseTimeMsec - The release time (in milliseconds) to apply to each band's envelope tracker." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "MakeFullSpectrumSpectralAnalysisBandSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::AudioMixerBlueprintLibrary_eventMakeFullSpectrumSpectralAnalysisBandSettings_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics
	{
		struct AudioMixerBlueprintLibrary_eventMakeMusicalSpectralAnalysisBandSettings_Parms
		{
			int32 InNumSemitones;
			EMusicalNoteName InStartingMusicalNote;
			int32 InStartingOctave;
			int32 InAttackTimeMsec;
			int32 InReleaseTimeMsec;
			TArray<FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumSemitones;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InStartingMusicalNote_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InStartingMusicalNote;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InStartingOctave;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAttackTimeMsec;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InReleaseTimeMsec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InNumSemitones = { "InNumSemitones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeMusicalSpectralAnalysisBandSettings_Parms, InNumSemitones), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InStartingMusicalNote_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InStartingMusicalNote = { "InStartingMusicalNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeMusicalSpectralAnalysisBandSettings_Parms, InStartingMusicalNote), Z_Construct_UEnum_AudioMixer_EMusicalNoteName, METADATA_PARAMS(nullptr, 0) }; // 1291595062
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InStartingOctave = { "InStartingOctave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeMusicalSpectralAnalysisBandSettings_Parms, InStartingOctave), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InAttackTimeMsec = { "InAttackTimeMsec", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeMusicalSpectralAnalysisBandSettings_Parms, InAttackTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InReleaseTimeMsec = { "InReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeMusicalSpectralAnalysisBandSettings_Parms, InReleaseTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings, METADATA_PARAMS(nullptr, 0) }; // 3766543794
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakeMusicalSpectralAnalysisBandSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3766543794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InNumSemitones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InStartingMusicalNote_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InStartingMusicalNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InStartingOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InAttackTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_InReleaseTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Make an array of musically spaced bands with ascending frequency.\n\x09 *\n\x09 *  @param InNumSemitones - The number of semitones to represent.\n\x09 *  @param InStartingMuiscalNote - The name of the first note in the array.\n\x09 *  @param InStartingOctave - The octave of the first note in the array.\n\x09 *  @param InAttackTimeMsec - The attack time (in milliseconds) to apply to each band's envelope tracker.\n\x09 *  @param InReleaseTimeMsec - The release time (in milliseconds) to apply to each band's envelope tracker.\n\x09 */" },
		{ "CPP_Default_InAttackTimeMsec", "10" },
		{ "CPP_Default_InNumSemitones", "60" },
		{ "CPP_Default_InReleaseTimeMsec", "10" },
		{ "CPP_Default_InStartingMusicalNote", "C" },
		{ "CPP_Default_InStartingOctave", "2" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Make an array of musically spaced bands with ascending frequency.\n\n@param InNumSemitones - The number of semitones to represent.\n@param InStartingMuiscalNote - The name of the first note in the array.\n@param InStartingOctave - The octave of the first note in the array.\n@param InAttackTimeMsec - The attack time (in milliseconds) to apply to each band's envelope tracker.\n@param InReleaseTimeMsec - The release time (in milliseconds) to apply to each band's envelope tracker." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "MakeMusicalSpectralAnalysisBandSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::AudioMixerBlueprintLibrary_eventMakeMusicalSpectralAnalysisBandSettings_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics
	{
		struct AudioMixerBlueprintLibrary_eventMakePresetSpectralAnalysisBandSettings_Parms
		{
			EAudioSpectrumBandPresetType InBandPresetType;
			int32 InNumBands;
			int32 InAttackTimeMsec;
			int32 InReleaseTimeMsec;
			TArray<FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBandPresetType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBandPresetType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumBands;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAttackTimeMsec;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InReleaseTimeMsec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InBandPresetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InBandPresetType = { "InBandPresetType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakePresetSpectralAnalysisBandSettings_Parms, InBandPresetType), Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType, METADATA_PARAMS(nullptr, 0) }; // 2146996583
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InNumBands = { "InNumBands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakePresetSpectralAnalysisBandSettings_Parms, InNumBands), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InAttackTimeMsec = { "InAttackTimeMsec", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakePresetSpectralAnalysisBandSettings_Parms, InAttackTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InReleaseTimeMsec = { "InReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakePresetSpectralAnalysisBandSettings_Parms, InReleaseTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings, METADATA_PARAMS(nullptr, 0) }; // 3766543794
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventMakePresetSpectralAnalysisBandSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3766543794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InBandPresetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InBandPresetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InNumBands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InAttackTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_InReleaseTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Make an array of bands which span the frequency range of a given EAudioSpectrumBandPresetType. \n\x09 *\n\x09 *  @param InBandPresetType - The type audio content which the bands encompass.\n\x09 *  @param InNumBands - The number of bands used to represent the spectrum.\n\x09 *  @param InAttackTimeMsec - The attack time (in milliseconds) to apply to each band's envelope tracker.\n\x09 *  @param InReleaseTimeMsec - The release time (in milliseconds) to apply to each band's envelope tracker.\n\x09 */" },
		{ "CPP_Default_InAttackTimeMsec", "10" },
		{ "CPP_Default_InNumBands", "10" },
		{ "CPP_Default_InReleaseTimeMsec", "10" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Make an array of bands which span the frequency range of a given EAudioSpectrumBandPresetType.\n\n@param InBandPresetType - The type audio content which the bands encompass.\n@param InNumBands - The number of bands used to represent the spectrum.\n@param InAttackTimeMsec - The attack time (in milliseconds) to apply to each band's envelope tracker.\n@param InReleaseTimeMsec - The release time (in milliseconds) to apply to each band's envelope tracker." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "MakePresetSpectralAnalysisBandSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::AudioMixerBlueprintLibrary_eventMakePresetSpectralAnalysisBandSettings_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToPause;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToPause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_SubmixToPause = { "SubmixToPause", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms, SubmixToPause), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_SubmixToPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Recording" },
		{ "Comment", "/** Pause recording audio, without finalizing the recording to disk. By leaving the Submix To Record field blank, you can record the master output of the game. */" },
		{ "CPP_Default_SubmixToPause", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Pause recording audio, without finalizing the recording to disk. By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "PauseRecordingOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics
	{
		struct AudioMixerBlueprintLibrary_eventPrimeSoundCueForPlayback_Parms
		{
			USoundCue* SoundCue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::NewProp_SoundCue = { "SoundCue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPrimeSoundCueForPlayback_Parms, SoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::NewProp_SoundCue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Cache" },
		{ "Comment", "/** Begin loading any sounds referenced by a sound cue into the cache so that it can be played immediately. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Begin loading any sounds referenced by a sound cue into the cache so that it can be played immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "PrimeSoundCueForPlayback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::AudioMixerBlueprintLibrary_eventPrimeSoundCueForPlayback_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics
	{
		struct AudioMixerBlueprintLibrary_eventPrimeSoundForPlayback_Parms
		{
			USoundWave* SoundWave;
			FScriptDelegate OnLoadCompletion;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnLoadCompletion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPrimeSoundForPlayback_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion = { "OnLoadCompletion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPrimeSoundForPlayback_Parms, OnLoadCompletion), Z_Construct_UDelegateFunction_AudioMixer_OnSoundLoadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion_MetaData)) }; // 681771283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::NewProp_OnLoadCompletion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Cache" },
		{ "Comment", "/** Begin loading a sound into the cache so that it can be played immediately. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Begin loading a sound into the cache so that it can be played immediately." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "PrimeSoundForPlayback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::AudioMixerBlueprintLibrary_eventPrimeSoundForPlayback_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Removes a submix effect preset from the master submix. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Removes a submix effect preset from the master submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveMasterSubmixEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntryIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_EntryIndex = { "EntryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, EntryIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_PresetChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_EntryIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Removes source effect entry from preset chain. Only affects the instance of preset chain. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Removes source effect entry from preset chain. Only affects the instance of preset chain." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSourceEffectFromPresetChain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffect_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::NewProp_SubmixEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Removes all instances of a submix effect preset from the given submix. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Removes all instances of a submix effect preset from the given submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSubmixEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::AudioMixerBlueprintLibrary_eventRemoveSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSubmixEffectAtIndex_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			int32 SubmixChainIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubmixChainIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectAtIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectAtIndex_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_SubmixChainIndex = { "SubmixChainIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectAtIndex_Parms, SubmixChainIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::NewProp_SubmixChainIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Removes the submix effect at the given submix chain index, if there is a submix effect at that index. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Removes the submix effect at the given submix chain index, if there is a submix effect at that index." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSubmixEffectAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::AudioMixerBlueprintLibrary_eventRemoveSubmixEffectAtIndex_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::NewProp_SubmixEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSubmixEffectPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPreset_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			int32 SubmixChainIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubmixChainIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_SubmixChainIndex = { "SubmixChainIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms, SubmixChainIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::NewProp_SubmixChainIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSubmixEffectPresetAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::AudioMixerBlueprintLibrary_eventRemoveSubmixEffectPresetAtIndex_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics
	{
		struct AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* InSoundSubmix;
			int32 SubmixChainIndex;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundSubmix;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubmixChainIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_InSoundSubmix = { "InSoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms, InSoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_SubmixChainIndex = { "SubmixChainIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms, SubmixChainIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_InSoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_SubmixChainIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::NewProp_SubmixEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ReplaceSoundEffectSubmix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::AudioMixerBlueprintLibrary_eventReplaceSoundEffectSubmix_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventReplaceSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* InSoundSubmix;
			int32 SubmixChainIndex;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundSubmix;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubmixChainIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_InSoundSubmix = { "InSoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSubmixEffect_Parms, InSoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_SubmixChainIndex = { "SubmixChainIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSubmixEffect_Parms, SubmixChainIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventReplaceSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_InSoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_SubmixChainIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::NewProp_SubmixEffectPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Replaces the submix effect at the given submix chain index, adds the effect if there is none at that index. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Replaces the submix effect at the given submix chain index, adds the effect if there is none at that index." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ReplaceSubmixEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::AudioMixerBlueprintLibrary_eventReplaceSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToPause;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToPause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_SubmixToPause = { "SubmixToPause", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms, SubmixToPause), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_SubmixToPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Recording" },
		{ "Comment", "/** Resume recording audio after pausing. By leaving the Submix To Pause field blank, you can record the master output of the game. */" },
		{ "CPP_Default_SubmixToPause", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Resume recording audio after pausing. By leaving the Submix To Pause field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ResumeRecordingOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics
	{
		struct AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
			bool bBypassed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntryIndex;
		static void NewProp_bBypassed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_EntryIndex = { "EntryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, EntryIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed_SetBit(void* Obj)
	{
		((AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms*)Obj)->bBypassed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed = { "bBypassed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_PresetChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_EntryIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set whether or not to bypass the effect at the source effect chain index. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Set whether or not to bypass the effect at the source effect chain index." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "SetBypassSourceEffectChainEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics
	{
		struct AudioMixerBlueprintLibrary_eventSetSubmixEffectChainOverride_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SoundSubmix;
			TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain;
			float FadeTimeSec;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPresetChain_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectPresetChain;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTimeSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetSubmixEffectChainOverride_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetSubmixEffectChainOverride_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_SubmixEffectPresetChain_Inner = { "SubmixEffectPresetChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_SubmixEffectPresetChain = { "SubmixEffectPresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetSubmixEffectChainOverride_Parms, SubmixEffectPresetChain), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_FadeTimeSec = { "FadeTimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetSubmixEffectChainOverride_Parms, FadeTimeSec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_SubmixEffectPresetChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_SubmixEffectPresetChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::NewProp_FadeTimeSec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Sets a submix effect chain override on the given submix. The effect chain will cross fade from the base effect chain or current override to the new override. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Sets a submix effect chain override on the given submix. The effect chain will cross fade from the base effect chain or current override to the new override." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "SetSubmixEffectChainOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::AudioMixerBlueprintLibrary_eventSetSubmixEffectChainOverride_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToAnalyze;
			EFFTSize FFTSize;
			EFFTPeakInterpolationMethod InterpolationMethod;
			EFFTWindowType WindowType;
			float HopSize;
			EAudioSpectrumType SpectrumType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HopSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpectrumType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpectrumType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, FFTSize), Z_Construct_UEnum_Engine_EFFTSize, METADATA_PARAMS(nullptr, 0) }; // 2209915647
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod = { "InterpolationMethod", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, InterpolationMethod), Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod, METADATA_PARAMS(nullptr, 0) }; // 3139256748
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, WindowType), Z_Construct_UEnum_Engine_EFFTWindowType, METADATA_PARAMS(nullptr, 0) }; // 3488179203
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_HopSize = { "HopSize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, HopSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SpectrumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SpectrumType = { "SpectrumType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, SpectrumType), Z_Construct_UEnum_Engine_EAudioSpectrumType, METADATA_PARAMS(nullptr, 0) }; // 1915632009
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SubmixToAnalyze,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_HopSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SpectrumType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SpectrumType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game. */" },
		{ "CPP_Default_FFTSize", "DefaultSize" },
		{ "CPP_Default_HopSize", "0.000000" },
		{ "CPP_Default_InterpolationMethod", "Linear" },
		{ "CPP_Default_SpectrumType", "MagnitudeSpectrum" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "CPP_Default_WindowType", "Hann" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StartAnalyzingOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStartAudioBus_Parms
		{
			const UObject* WorldContextObject;
			UAudioBus* AudioBus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAudioBus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAudioBus_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::NewProp_AudioBus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bus" },
		{ "Comment", "/** Starts the given audio bus. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Starts the given audio bus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StartAudioBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::AudioMixerBlueprintLibrary_eventStartAudioBus_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			float ExpectedDuration;
			USoundSubmix* SubmixToRecord;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedDuration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_ExpectedDuration = { "ExpectedDuration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, ExpectedDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_ExpectedDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_SubmixToRecord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Recording" },
		{ "Comment", "/** Start recording audio. By leaving the Submix To Record field blank, you can record the master output of the game. */" },
		{ "CPP_Default_SubmixToRecord", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start recording audio. By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StartRecordingOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToStopAnalyzing;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToStopAnalyzing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_SubmixToStopAnalyzing = { "SubmixToStopAnalyzing", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms, SubmixToStopAnalyzing), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_SubmixToStopAnalyzing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Stop spectrum analysis. */" },
		{ "CPP_Default_SubmixToStopAnalyzing", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Stop spectrum analysis." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StopAnalyzingOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStopAudioBus_Parms
		{
			const UObject* WorldContextObject;
			UAudioBus* AudioBus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopAudioBus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopAudioBus_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::NewProp_AudioBus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bus" },
		{ "Comment", "/** Stops the given audio bus. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Stops the given audio bus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StopAudioBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::AudioMixerBlueprintLibrary_eventStopAudioBus_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			EAudioRecordingExportType ExportType;
			FString Name;
			FString Path;
			USoundSubmix* SubmixToRecord;
			USoundWave* ExistingSoundWaveToOverwrite;
			USoundWave* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExportType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExistingSoundWaveToOverwrite;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType = { "ExportType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ExportType), Z_Construct_UEnum_Engine_EAudioRecordingExportType, METADATA_PARAMS(nullptr, 0) }; // 3384381609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite = { "ExistingSoundWaveToOverwrite", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ExistingSoundWaveToOverwrite), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_SubmixToRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Audio|Recording" },
		{ "Comment", "/** Stop recording audio. Path can be absolute, or relative (to the /Saved/BouncedWavFiles folder). By leaving the Submix To Record field blank, you can record the master output of the game.  */" },
		{ "CPP_Default_ExistingSoundWaveToOverwrite", "None" },
		{ "CPP_Default_SubmixToRecord", "None" },
		{ "DisplayName", "Finish Recording Output" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Stop recording audio. Path can be absolute, or relative (to the /Saved/BouncedWavFiles folder). By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StopRecordingOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics
	{
		struct AudioMixerBlueprintLibrary_eventSwapAudioOutputDevice_Parms
		{
			const UObject* WorldContextObject;
			FString NewDeviceId;
			FScriptDelegate OnCompletedDeviceSwap;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewDeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompletedDeviceSwap_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCompletedDeviceSwap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSwapAudioOutputDevice_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_NewDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_NewDeviceId = { "NewDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSwapAudioOutputDevice_Parms, NewDeviceId), METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_NewDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_NewDeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_OnCompletedDeviceSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_OnCompletedDeviceSwap = { "OnCompletedDeviceSwap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSwapAudioOutputDevice_Parms, OnCompletedDeviceSwap), Z_Construct_UDelegateFunction_AudioMixer_OnCompletedDeviceSwap__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_OnCompletedDeviceSwap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_OnCompletedDeviceSwap_MetaData)) }; // 962999899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_NewDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::NewProp_OnCompletedDeviceSwap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09* Hotswaps to the requested audio output device\n\x09* @param NewDeviceId - the device Id to swap to\n\x09* @param OnCompletedDeviceSwap - the event to fire when the audio endpoint devices have been retrieved\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Hotswaps to the requested audio output device\n@param NewDeviceId - the device Id to swap to\n@param OnCompletedDeviceSwap - the event to fire when the audio endpoint devices have been retrieved" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "SwapAudioOutputDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::AudioMixerBlueprintLibrary_eventSwapAudioOutputDevice_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics
	{
		struct AudioMixerBlueprintLibrary_eventTrimAudioCache_Parms
		{
			float InMegabytesToFree;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMegabytesToFree;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::NewProp_InMegabytesToFree = { "InMegabytesToFree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventTrimAudioCache_Parms, InMegabytesToFree), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventTrimAudioCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::NewProp_InMegabytesToFree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Cache" },
		{ "Comment", "/** Trim memory used by the audio cache. Returns the number of megabytes freed. */" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Trim memory used by the audio cache. Returns the number of megabytes freed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "TrimAudioCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::AudioMixerBlueprintLibrary_eventTrimAudioCache_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMixerBlueprintLibrary);
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister()
	{
		return UAudioMixerBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect, "AddMasterSubmixEffect" }, // 1569164741
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, "AddSourceEffectToPresetChain" }, // 2983059862
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSubmixEffect, "AddSubmixEffect" }, // 1138834338
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects, "ClearMasterSubmixEffects" }, // 1804862534
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride, "ClearSubmixEffectChainOverride" }, // 891929810
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearSubmixEffects, "ClearSubmixEffects" }, // 2403512259
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString, "Conv_AudioOutputDeviceInfoToString" }, // 2631446981
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices, "GetAvailableAudioOutputDevices" }, // 3665301216
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName, "GetCurrentAudioOutputDeviceName" }, // 2884181489
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies, "GetMagnitudeForFrequencies" }, // 1490910093
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, "GetNumberOfEntriesInSourceEffectChain" }, // 50229130
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies, "GetPhaseForFrequencies" }, // 1186730949
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_IsAudioBusActive, "IsAudioBusActive" }, // 2860987980
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings, "MakeFullSpectrumSpectralAnalysisBandSettings" }, // 2509230268
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings, "MakeMusicalSpectralAnalysisBandSettings" }, // 2867152843
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings, "MakePresetSpectralAnalysisBandSettings" }, // 1358234083
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput, "PauseRecordingOutput" }, // 1742946971
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback, "PrimeSoundCueForPlayback" }, // 2066398262
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PrimeSoundForPlayback, "PrimeSoundForPlayback" }, // 3986543099
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect, "RemoveMasterSubmixEffect" }, // 322340188
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, "RemoveSourceEffectFromPresetChain" }, // 749234813
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffect, "RemoveSubmixEffect" }, // 3066303744
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex, "RemoveSubmixEffectAtIndex" }, // 3989421271
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset, "RemoveSubmixEffectPreset" }, // 193777576
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex, "RemoveSubmixEffectPresetAtIndex" }, // 291388672
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix, "ReplaceSoundEffectSubmix" }, // 2244208731
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ReplaceSubmixEffect, "ReplaceSubmixEffect" }, // 3218218220
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput, "ResumeRecordingOutput" }, // 2428444114
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, "SetBypassSourceEffectChainEntry" }, // 3476140378
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride, "SetSubmixEffectChainOverride" }, // 1959277910
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput, "StartAnalyzingOutput" }, // 1920432837
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAudioBus, "StartAudioBus" }, // 2178101508
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput, "StartRecordingOutput" }, // 1583629870
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput, "StopAnalyzingOutput" }, // 3750060645
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAudioBus, "StopAudioBus" }, // 61275410
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput, "StopRecordingOutput" }, // 1150112888
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SwapAudioOutputDevice, "SwapAudioOutputDevice" }, // 1902349635
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_TrimAudioCache, "TrimAudioCache" }, // 2565315812
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioMixerBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ScriptName", "AudioMixerLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMixerBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::ClassParams = {
		&UAudioMixerBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary.OuterSingleton;
	}
	template<> AUDIOMIXER_API UClass* StaticClass<UAudioMixerBlueprintLibrary>()
	{
		return UAudioMixerBlueprintLibrary::StaticClass();
	}
	UAudioMixerBlueprintLibrary::UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMixerBlueprintLibrary);
	UAudioMixerBlueprintLibrary::~UAudioMixerBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::EnumInfo[] = {
		{ EMusicalNoteName_StaticEnum, TEXT("EMusicalNoteName"), &Z_Registration_Info_UEnum_EMusicalNoteName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1291595062U) },
		{ EAudioMixerStreamDataFormatType_StaticEnum, TEXT("EAudioMixerStreamDataFormatType"), &Z_Registration_Info_UEnum_EAudioMixerStreamDataFormatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 450467776U) },
		{ EAudioMixerChannelType_StaticEnum, TEXT("EAudioMixerChannelType"), &Z_Registration_Info_UEnum_EAudioMixerChannelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1028391890U) },
		{ ESwapAudioOutputDeviceResultState_StaticEnum, TEXT("ESwapAudioOutputDeviceResultState"), &Z_Registration_Info_UEnum_ESwapAudioOutputDeviceResultState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 395246892U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSwapAudioOutputResult::StaticStruct, Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics::NewStructOps, TEXT("SwapAudioOutputResult"), &Z_Registration_Info_UScriptStruct_SwapAudioOutputResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwapAudioOutputResult), 1166732641U) },
		{ FAudioOutputDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics::NewStructOps, TEXT("AudioOutputDeviceInfo"), &Z_Registration_Info_UScriptStruct_AudioOutputDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioOutputDeviceInfo), 4030926374U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMixerBlueprintLibrary, UAudioMixerBlueprintLibrary::StaticClass, TEXT("UAudioMixerBlueprintLibrary"), &Z_Registration_Info_UClass_UAudioMixerBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMixerBlueprintLibrary), 1681654154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_2609175941(TEXT("/Script/AudioMixer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
