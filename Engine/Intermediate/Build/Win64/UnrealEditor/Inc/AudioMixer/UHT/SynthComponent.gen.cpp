// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Components/SynthComponent.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponent() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthSound();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthSound_NoRegister();
	AUDIOMIXER_API UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics
	{
		struct _Script_AudioMixer_eventOnSynthEnvelopeValue_Parms
		{
			float EnvelopeValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvelopeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms, EnvelopeValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called by a synth component and returns the sound's envelope value (using an envelope follower in the audio renderer).\n* This only works in the audio mixer.\n*/" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Called by a synth component and returns the sound's envelope value (using an envelope follower in the audio renderer).\nThis only works in the audio mixer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioMixer, nullptr, "OnSynthEnvelopeValue__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms), Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSynthEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnSynthEnvelopeValue, const float EnvelopeValue)
{
	struct _Script_AudioMixer_eventOnSynthEnvelopeValue_Parms
	{
		float EnvelopeValue;
	};
	_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms Parms;
	Parms.EnvelopeValue=EnvelopeValue;
	OnSynthEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms);
}
	void USynthSound::StaticRegisterNativesUSynthSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthSound);
	UClass* Z_Construct_UClass_USynthSound_NoRegister()
	{
		return USynthSound::StaticClass();
	}
	struct Z_Construct_UClass_USynthSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSynthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningSynthComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSound_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Components/SynthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent = { "OwningSynthComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthSound, OwningSynthComponent), Z_Construct_UClass_USynthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSound_Statics::NewProp_OwningSynthComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthSound_Statics::ClassParams = {
		&USynthSound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USynthSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USynthSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthSound()
	{
		if (!Z_Registration_Info_UClass_USynthSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthSound.OuterSingleton, Z_Construct_UClass_USynthSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USynthSound.OuterSingleton;
	}
	template<> AUDIOMIXER_API UClass* StaticClass<USynthSound>()
	{
		return USynthSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthSound);
	USynthSound::~USynthSound() {}
	DEFINE_FUNCTION(USynthComponent::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel,EAudioFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel,EAudioFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execFadeIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel,Z_Param_StartTime,EAudioFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execSetOutputToBusOnly)
	{
		P_GET_UBOOL(Z_Param_bInOutputToBusOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputToBusOnly(Z_Param_bInOutputToBusOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execSetLowPassFilterFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLowPassFilterFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterFrequency(Z_Param_InLowPassFilterFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execSetLowPassFilterEnabled)
	{
		P_GET_UBOOL(Z_Param_InLowPassFilterEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterEnabled(Z_Param_InLowPassFilterEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execSetSubmixSend)
	{
		P_GET_OBJECT(USoundSubmixBase,Z_Param_Submix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execSetVolumeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeMultiplier(Z_Param_VolumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void USynthComponent::StaticRegisterNativesUSynthComponent()
	{
		UClass* Class = USynthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustVolume", &USynthComponent::execAdjustVolume },
			{ "FadeIn", &USynthComponent::execFadeIn },
			{ "FadeOut", &USynthComponent::execFadeOut },
			{ "IsPlaying", &USynthComponent::execIsPlaying },
			{ "SetLowPassFilterEnabled", &USynthComponent::execSetLowPassFilterEnabled },
			{ "SetLowPassFilterFrequency", &USynthComponent::execSetLowPassFilterFrequency },
			{ "SetOutputToBusOnly", &USynthComponent::execSetOutputToBusOnly },
			{ "SetSubmixSend", &USynthComponent::execSetSubmixSend },
			{ "SetVolumeMultiplier", &USynthComponent::execSetVolumeMultiplier },
			{ "Start", &USynthComponent::execStart },
			{ "Stop", &USynthComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics
	{
		struct SynthComponent_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
			EAudioFaderCurve FadeCurve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventAdjustVolume_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData)) }; // 1730655904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** This function allows designers to trigger an adjustment to the sound instance\xe2\x80\x99s playback Volume with options for smoothly applying a curve over time.\n     * @param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n     * @param AdjustVolumeLevel The new volume to set the Audio Component to.\n     * @param FadeCurve The curve used when interpolating between the old and new volume.\n     */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This function allows designers to trigger an adjustment to the sound instance\xe2\x80\x99s playback Volume with options for smoothly applying a curve over time.\n@param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n@param AdjustVolumeLevel The new volume to set the Audio Component to.\n@param FadeCurve The curve used when interpolating between the old and new volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::SynthComponent_eventAdjustVolume_Parms), Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_FadeIn_Statics
	{
		struct SynthComponent_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
			float StartTime;
			EAudioFaderCurve FadeCurve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventFadeIn_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData)) }; // 1730655904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_FadeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeIn_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * This function allows designers to call Play on an Audio Component instance while applying a volume curve over time. \n\x09 * Parameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\x09 *\n\x09 * @param FadeInDuration How long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel The percentage of the AudioComponents's calculated volume to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This function allows designers to call Play on an Audio Component instance while applying a volume curve over time.\nParameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\n@param FadeInDuration How long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel The percentage of the AudioComponents's calculated volume to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "FadeIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::SynthComponent_eventFadeIn_Parms), Z_Construct_UFunction_USynthComponent_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_FadeOut_Statics
	{
		struct SynthComponent_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
			EAudioFaderCurve FadeCurve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventFadeOut_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData)) }; // 1730655904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_FadeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_FadeOut_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * This function allows designers to call a delayed Stop on an Audio Component instance while applying a\n\x09 * volume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\x09 *\n\x09 * @param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This function allows designers to call a delayed Stop on an Audio Component instance while applying a\nvolume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\n@param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "FadeOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::SynthComponent_eventFadeOut_Parms), Z_Construct_UFunction_USynthComponent_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_IsPlaying_Statics
	{
		struct SynthComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SynthComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SynthComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "/** Returns true if this component is currently playing. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Returns true if this component is currently playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::SynthComponent_eventIsPlaying_Parms), Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics
	{
		struct SynthComponent_eventSetLowPassFilterEnabled_Parms
		{
			bool InLowPassFilterEnabled;
		};
		static void NewProp_InLowPassFilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InLowPassFilterEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit(void* Obj)
	{
		((SynthComponent_eventSetLowPassFilterEnabled_Parms*)Obj)->InLowPassFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled = { "InLowPassFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SynthComponent_eventSetLowPassFilterEnabled_Parms), &Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets whether or not the low pass filter is enabled on the audio component. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets whether or not the low pass filter is enabled on the audio component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetLowPassFilterEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::SynthComponent_eventSetLowPassFilterEnabled_Parms), Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics
	{
		struct SynthComponent_eventSetLowPassFilterFrequency_Parms
		{
			float InLowPassFilterFrequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLowPassFilterFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency = { "InLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventSetLowPassFilterFrequency_Parms, InLowPassFilterFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets lowpass filter frequency of the audio component. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets lowpass filter frequency of the audio component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetLowPassFilterFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::SynthComponent_eventSetLowPassFilterFrequency_Parms), Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics
	{
		struct SynthComponent_eventSetOutputToBusOnly_Parms
		{
			bool bInOutputToBusOnly;
		};
		static void NewProp_bInOutputToBusOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInOutputToBusOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly_SetBit(void* Obj)
	{
		((SynthComponent_eventSetOutputToBusOnly_Parms*)Obj)->bInOutputToBusOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly = { "bInOutputToBusOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SynthComponent_eventSetOutputToBusOnly_Parms), &Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets whether or not the synth component outputs its audio to any source or audio buses. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets whether or not the synth component outputs its audio to any source or audio buses." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetOutputToBusOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::SynthComponent_eventSetOutputToBusOnly_Parms), Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics
	{
		struct SynthComponent_eventSetSubmixSend_Parms
		{
			USoundSubmixBase* Submix;
			float SendLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventSetSubmixSend_Parms, Submix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventSetSubmixSend_Parms, SendLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_Submix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::NewProp_SendLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given submix. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given submix." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetSubmixSend", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::SynthComponent_eventSetSubmixSend_Parms), Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_SetSubmixSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetSubmixSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics
	{
		struct SynthComponent_eventSetVolumeMultiplier_Parms
		{
			float VolumeMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponent_eventSetVolumeMultiplier_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::NewProp_VolumeMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set a new volume multiplier */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Set a new volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "SetVolumeMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::SynthComponent_eventSetVolumeMultiplier_Parms), Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_Start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Starts the synth generating audio.\n" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Starts the synth generating audio." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Stops the synth generating audio.\n" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Stops the synth generating audio." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthComponent);
	UClass* Z_Construct_UClass_USynthComponent_NoRegister()
	{
		return USynthComponent::StaticClass();
	}
	struct Z_Construct_UClass_USynthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpatialization_MetaData[];
#endif
		static void NewProp_bAllowSpatialization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpatialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputToBusOnly_MetaData[];
#endif
		static void NewProp_bOutputToBusOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputToBusOnly;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBusSends_MetaData[];
#endif
		static void NewProp_bEnableBusSends_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBusSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBaseSubmix_MetaData[];
#endif
		static void NewProp_bEnableBaseSubmix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBaseSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubmixSends_MetaData[];
#endif
		static void NewProp_bEnableSubmixSends_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubmixSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConcurrencySettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConcurrencySet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ConcurrencySet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceEffectChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSubmixSends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixSends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundSubmixSends;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSends;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreEffectBusSends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreEffectBusSends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreEffectBusSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreviewSound_MetaData[];
#endif
		static void NewProp_bIsPreviewSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreviewSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioEnvelopeValue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioEnvelopeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Synth_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Synth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponent_AdjustVolume, "AdjustVolume" }, // 3096020450
		{ &Z_Construct_UFunction_USynthComponent_FadeIn, "FadeIn" }, // 1442285622
		{ &Z_Construct_UFunction_USynthComponent_FadeOut, "FadeOut" }, // 2030915052
		{ &Z_Construct_UFunction_USynthComponent_IsPlaying, "IsPlaying" }, // 2797593918
		{ &Z_Construct_UFunction_USynthComponent_SetLowPassFilterEnabled, "SetLowPassFilterEnabled" }, // 2733920708
		{ &Z_Construct_UFunction_USynthComponent_SetLowPassFilterFrequency, "SetLowPassFilterFrequency" }, // 3837277722
		{ &Z_Construct_UFunction_USynthComponent_SetOutputToBusOnly, "SetOutputToBusOnly" }, // 15874355
		{ &Z_Construct_UFunction_USynthComponent_SetSubmixSend, "SetSubmixSend" }, // 1803146757
		{ &Z_Construct_UFunction_USynthComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 3467388175
		{ &Z_Construct_UFunction_USynthComponent_Start, "Start" }, // 4103366492
		{ &Z_Construct_UFunction_USynthComponent_Stop, "Stop" }, // 1397627741
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SynthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop sound when owner is destroyed */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Is this audio component allowed to be spatialized? */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Is this audio component allowed to be spatialized?" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bAllowSpatialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization = { "bAllowSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_MetaData[] = {
		{ "Comment", "/** Whether or not to only send this audio's output to a bus. If true, this sound will not be audible except through bus sends. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not to only send this audio's output to a bus. If true, this sound will not be audible except through bus sends." },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bOutputToBusOnly_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly = { "bOutputToBusOnly", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Whether or not to enable sending this audio's output to buses.  */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not to enable sending this audio's output to buses." },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bEnableBusSends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends = { "bEnableBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bEnableBaseSubmix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix = { "bEnableBaseSubmix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Whether or not to enable Submix Sends other than the Base Submix.*/" },
		{ "DisplayAfter", "SoundSubmixObject" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not to enable Submix Sends other than the Base Submix." },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bEnableSubmixSends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends = { "bEnableSubmixSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component */" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component */" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 895530132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings_MetaData[] = {
		{ "Comment", "/** What sound concurrency to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, ConcurrencySettings_DEPRECATED), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** What sound concurrency to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "Comment", "/** Sound class this sound belongs to */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Sound class this sound belongs to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** The source effect chain to use for this sound. */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The source effect chain to use for this sound." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Submix this sound belongs to */" },
		{ "DisplayName", "Base Submix" },
		{ "EditCondition", "bEnableBaseSubmix" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Submix this sound belongs to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, SoundSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_Inner = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(nullptr, 0) }; // 3442815224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** An array of submix sends. Audio from this sound will send a portion of its audio to these effects.  */" },
		{ "EditCondition", "bEnableSubmixSends" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "An array of submix sends. Audio from this sound will send a portion of its audio to these effects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, SoundSubmixSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_MetaData)) }; // 3442815224
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_Inner = { "BusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) }; // 1550761377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed.  */" },
		{ "DisplayName", "Post-Effect Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends = { "BusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, BusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_MetaData)) }; // 1550761377
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_Inner = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) }; // 1550761377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed.  */" },
		{ "DisplayName", "Pre-Effect Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, PreEffectBusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_MetaData)) }; // 1550761377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_MetaData[] = {
		{ "Comment", "/** Whether or not this synth is playing as a preview sound */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "Whether or not this synth is playing as a preview sound" },
	};
#endif
	void Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_SetBit(void* Obj)
	{
		((USynthComponent*)Obj)->bIsPreviewSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound = { "bIsPreviewSound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthComponent), &Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\n\x09 *  envelope value of sounds played with this audio component. Only used in audio mixer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\nenvelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\n\x09 *  envelope value of sounds played with this audio component. Only used in audio mixer. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\nenvelope value of sounds played with this audio component. Only used in audio mixer." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue = { "OnAudioEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, OnAudioEnvelopeValue), Z_Construct_UDelegateFunction_AudioMixer_OnSynthEnvelopeValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue_MetaData)) }; // 2530525485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth = { "Synth", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, Synth), Z_Construct_UClass_USynthSound_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SynthComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bAllowSpatialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bOverrideAttenuation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bOutputToBusOnly,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableBaseSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bEnableSubmixSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AttenuationOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_ConcurrencySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SourceEffectChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_SoundSubmixSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_BusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_PreEffectBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsUISound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_bIsPreviewSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_OnAudioEnvelopeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_Synth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponent_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthComponent_Statics::ClassParams = {
		&USynthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_USynthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthComponent()
	{
		if (!Z_Registration_Info_UClass_USynthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthComponent.OuterSingleton, Z_Construct_UClass_USynthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USynthComponent.OuterSingleton;
	}
	template<> AUDIOMIXER_API UClass* StaticClass<USynthComponent>()
	{
		return USynthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponent);
	USynthComponent::~USynthComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USynthComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USynthSound, USynthSound::StaticClass, TEXT("USynthSound"), &Z_Registration_Info_UClass_USynthSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthSound), 4268504243U) },
		{ Z_Construct_UClass_USynthComponent, USynthComponent::StaticClass, TEXT("USynthComponent"), &Z_Registration_Info_UClass_USynthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthComponent), 2116602463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_4126142974(TEXT("/Script/AudioMixer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
