// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/AudioComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundWave.h"
#include "AudioParameter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioComponent() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzClockHandle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInitialActiveSoundParams();
	ENGINE_API UClass* Z_Construct_UClass_UInitialActiveSoundParams_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundParameterControllerInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioComponentPlayState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModulationDestination();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModulationRouting();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzQuantizationBoundary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioComponentPlayState;
	static UEnum* EAudioComponentPlayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioComponentPlayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioComponentPlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioComponentPlayState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioComponentPlayState"));
		}
		return Z_Registration_Info_UEnum_EAudioComponentPlayState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioComponentPlayState>()
	{
		return EAudioComponentPlayState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics::Enumerators[] = {
		{ "EAudioComponentPlayState::Playing", (int64)EAudioComponentPlayState::Playing },
		{ "EAudioComponentPlayState::Stopped", (int64)EAudioComponentPlayState::Stopped },
		{ "EAudioComponentPlayState::Paused", (int64)EAudioComponentPlayState::Paused },
		{ "EAudioComponentPlayState::FadingIn", (int64)EAudioComponentPlayState::FadingIn },
		{ "EAudioComponentPlayState::FadingOut", (int64)EAudioComponentPlayState::FadingOut },
		{ "EAudioComponentPlayState::Count", (int64)EAudioComponentPlayState::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enum describing the audio component play state\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EAudioComponentPlayState::Count" },
		{ "FadingIn.Comment", "// If the sound is playing and fading in\n" },
		{ "FadingIn.Name", "EAudioComponentPlayState::FadingIn" },
		{ "FadingIn.ToolTip", "If the sound is playing and fading in" },
		{ "FadingOut.Comment", "// If the sound is playing and fading out\n" },
		{ "FadingOut.Name", "EAudioComponentPlayState::FadingOut" },
		{ "FadingOut.ToolTip", "If the sound is playing and fading out" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "Paused.Comment", "// If the sound is playing but paused\n" },
		{ "Paused.Name", "EAudioComponentPlayState::Paused" },
		{ "Paused.ToolTip", "If the sound is playing but paused" },
		{ "Playing.Comment", "// If the sound is playing (i.e. not fading in, not fading out, not paused)\n" },
		{ "Playing.Name", "EAudioComponentPlayState::Playing" },
		{ "Playing.ToolTip", "If the sound is playing (i.e. not fading in, not fading out, not paused)" },
		{ "Stopped.Comment", "// If the sound is not playing\n" },
		{ "Stopped.Name", "EAudioComponentPlayState::Stopped" },
		{ "Stopped.ToolTip", "If the sound is not playing" },
		{ "ToolTip", "Enum describing the audio component play state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAudioComponentPlayState",
		"EAudioComponentPlayState",
		Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAudioComponentPlayState()
	{
		if (!Z_Registration_Info_UEnum_EAudioComponentPlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioComponentPlayState.InnerSingleton, Z_Construct_UEnum_Engine_EAudioComponentPlayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioComponentPlayState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished)
{
	OnAudioFinished.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnQueueSubtitles_Parms
		{
			TArray<FSubtitleCue> Subtitles;
			float CueDuration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Subtitles;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CueDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_Inner = { "Subtitles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) }; // 1333563461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnQueueSubtitles_Parms, Subtitles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_MetaData)) }; // 1333563461
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_CueDuration = { "CueDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnQueueSubtitles_Parms, CueDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_Subtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::NewProp_CueDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnQueueSubtitles__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::_Script_Engine_eventOnQueueSubtitles_Parms), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQueueSubtitles_DelegateWrapper(const FScriptDelegate& OnQueueSubtitles, TArray<FSubtitleCue> const& Subtitles, float CueDuration)
{
	struct _Script_Engine_eventOnQueueSubtitles_Parms
	{
		TArray<FSubtitleCue> Subtitles;
		float CueDuration;
	};
	_Script_Engine_eventOnQueueSubtitles_Parms Parms;
	Parms.Subtitles=Subtitles;
	Parms.CueDuration=CueDuration;
	OnQueueSubtitles.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioPlayStateChanged_Parms
		{
			EAudioComponentPlayState PlayState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::NewProp_PlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::NewProp_PlayState = { "PlayState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlayStateChanged_Parms, PlayState), Z_Construct_UEnum_Engine_EAudioComponentPlayState, METADATA_PARAMS(nullptr, 0) }; // 1692706153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::NewProp_PlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::NewProp_PlayState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when sound's PlayState changes. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when sound's PlayState changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioPlayStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::_Script_Engine_eventOnAudioPlayStateChanged_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioPlayStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlayStateChanged, EAudioComponentPlayState PlayState)
{
	struct _Script_Engine_eventOnAudioPlayStateChanged_Parms
	{
		EAudioComponentPlayState PlayState;
	};
	_Script_Engine_eventOnAudioPlayStateChanged_Parms Parms;
	Parms.PlayState=PlayState;
	OnAudioPlayStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioVirtualizationChanged_Parms
		{
			bool bIsVirtualized;
		};
		static void NewProp_bIsVirtualized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVirtualized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::NewProp_bIsVirtualized_SetBit(void* Obj)
	{
		((_Script_Engine_eventOnAudioVirtualizationChanged_Parms*)Obj)->bIsVirtualized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::NewProp_bIsVirtualized = { "bIsVirtualized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Engine_eventOnAudioVirtualizationChanged_Parms), &Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::NewProp_bIsVirtualized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::NewProp_bIsVirtualized,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when sound becomes virtualized or realized (resumes playback from virtualization). */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when sound becomes virtualized or realized (resumes playback from virtualization)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioVirtualizationChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::_Script_Engine_eventOnAudioVirtualizationChanged_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioVirtualizationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVirtualizationChanged, bool bIsVirtualized)
{
	struct _Script_Engine_eventOnAudioVirtualizationChanged_Parms
	{
		bool bIsVirtualized;
	};
	_Script_Engine_eventOnAudioVirtualizationChanged_Parms Parms;
	Parms.bIsVirtualized=bIsVirtualized ? true : false;
	OnAudioVirtualizationChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioPlaybackPercent_Parms
		{
			const USoundWave* PlayingSoundWave;
			float PlaybackPercent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave = { "PlayingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlaybackPercent_Parms, PlayingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioPlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlayingSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\n* Computed as samples played divided by total samples, taking into account pitch.\n* Not currently implemented on all platforms.\n*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch.\nNot currently implemented on all platforms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioPlaybackPercent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::_Script_Engine_eventOnAudioPlaybackPercent_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioPlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackPercent, const USoundWave* PlayingSoundWave, const float PlaybackPercent)
{
	struct _Script_Engine_eventOnAudioPlaybackPercent_Parms
	{
		const USoundWave* PlayingSoundWave;
		float PlaybackPercent;
	};
	_Script_Engine_eventOnAudioPlaybackPercent_Parms Parms;
	Parms.PlayingSoundWave=PlayingSoundWave;
	Parms.PlaybackPercent=PlaybackPercent;
	OnAudioPlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioSingleEnvelopeValue_Parms
		{
			const USoundWave* PlayingSoundWave;
			float EnvelopeValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingSoundWave;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave = { "PlayingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms, PlayingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue = { "EnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms, EnvelopeValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_PlayingSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::NewProp_EnvelopeValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called while a sound plays and returns the sound's envelope value (using an envelope follower in the audio renderer).\n* This only works in the audio mixer.\n*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called while a sound plays and returns the sound's envelope value (using an envelope follower in the audio renderer).\nThis only works in the audio mixer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioSingleEnvelopeValue__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioSingleEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSingleEnvelopeValue, const USoundWave* PlayingSoundWave, const float EnvelopeValue)
{
	struct _Script_Engine_eventOnAudioSingleEnvelopeValue_Parms
	{
		const USoundWave* PlayingSoundWave;
		float EnvelopeValue;
	};
	_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms Parms;
	Parms.PlayingSoundWave=PlayingSoundWave;
	Parms.EnvelopeValue=EnvelopeValue;
	OnAudioSingleEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioMultiEnvelopeValue_Parms
		{
			float AverageEnvelopeValue;
			float MaxEnvelope;
			int32 NumWaveInstances;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageEnvelopeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageEnvelopeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnvelope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEnvelope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWaveInstances_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumWaveInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue = { "AverageEnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, AverageEnvelopeValue), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope = { "MaxEnvelope", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, MaxEnvelope), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances = { "NumWaveInstances", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms, NumWaveInstances), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_AverageEnvelopeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_MaxEnvelope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::NewProp_NumWaveInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called while a sound plays and returns the sound's average and max envelope value (using an envelope follower in the audio renderer per wave instance).\n* This only works in the audio mixer.\n*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called while a sound plays and returns the sound's average and max envelope value (using an envelope follower in the audio renderer per wave instance).\nThis only works in the audio mixer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioMultiEnvelopeValue__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioMultiEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMultiEnvelopeValue, const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances)
{
	struct _Script_Engine_eventOnAudioMultiEnvelopeValue_Parms
	{
		float AverageEnvelopeValue;
		float MaxEnvelope;
		int32 NumWaveInstances;
	};
	_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms Parms;
	Parms.AverageEnvelopeValue=AverageEnvelopeValue;
	Parms.MaxEnvelope=MaxEnvelope;
	Parms.NumWaveInstances=NumWaveInstances;
	OnAudioMultiEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioFaderCurve;
	static UEnum* EAudioFaderCurve_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioFaderCurve.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioFaderCurve.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioFaderCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioFaderCurve"));
		}
		return Z_Registration_Info_UEnum_EAudioFaderCurve.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioFaderCurve>()
	{
		return EAudioFaderCurve_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics::Enumerators[] = {
		{ "EAudioFaderCurve::Linear", (int64)EAudioFaderCurve::Linear },
		{ "EAudioFaderCurve::Logarithmic", (int64)EAudioFaderCurve::Logarithmic },
		{ "EAudioFaderCurve::SCurve", (int64)EAudioFaderCurve::SCurve },
		{ "EAudioFaderCurve::Sin", (int64)EAudioFaderCurve::Sin },
		{ "EAudioFaderCurve::Count", (int64)EAudioFaderCurve::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Type of fade to use when adjusting the audio component's volume. */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EAudioFaderCurve::Count" },
		{ "Linear.Comment", "// Linear Fade\n" },
		{ "Linear.Name", "EAudioFaderCurve::Linear" },
		{ "Linear.ToolTip", "Linear Fade" },
		{ "Logarithmic.Comment", "// Logarithmic Fade\n" },
		{ "Logarithmic.Name", "EAudioFaderCurve::Logarithmic" },
		{ "Logarithmic.ToolTip", "Logarithmic Fade" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "SCurve.Comment", "// S-Curve, Sinusoidal Fade\n" },
		{ "SCurve.DisplayName", "Sin (S-Curve)" },
		{ "SCurve.Name", "EAudioFaderCurve::SCurve" },
		{ "SCurve.ToolTip", "S-Curve, Sinusoidal Fade" },
		{ "Sin.Comment", "// Equal Power, Sinusoidal Fade\n" },
		{ "Sin.DisplayName", "Sin (Equal Power)" },
		{ "Sin.Name", "EAudioFaderCurve::Sin" },
		{ "Sin.ToolTip", "Equal Power, Sinusoidal Fade" },
		{ "ToolTip", "Type of fade to use when adjusting the audio component's volume." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAudioFaderCurve",
		"EAudioFaderCurve",
		Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAudioFaderCurve()
	{
		if (!Z_Registration_Info_UEnum_EAudioFaderCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioFaderCurve.InnerSingleton, Z_Construct_UEnum_Engine_EAudioFaderCurve_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioFaderCurve.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModulationDestination;
	static UEnum* EModulationDestination_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EModulationDestination, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EModulationDestination"));
		}
		return Z_Registration_Info_UEnum_EModulationDestination.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EModulationDestination>()
	{
		return EModulationDestination_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EModulationDestination_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enumerators[] = {
		{ "EModulationDestination::Volume", (int64)EModulationDestination::Volume },
		{ "EModulationDestination::Pitch", (int64)EModulationDestination::Pitch },
		{ "EModulationDestination::Lowpass", (int64)EModulationDestination::Lowpass },
		{ "EModulationDestination::Highpass", (int64)EModulationDestination::Highpass },
		{ "EModulationDestination::Count", (int64)EModulationDestination::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EModulationDestination::Count" },
		{ "Highpass.Comment", "/* Cutoff Frequency of a highpass filter */" },
		{ "Highpass.Name", "EModulationDestination::Highpass" },
		{ "Highpass.ToolTip", "Cutoff Frequency of a highpass filter" },
		{ "Lowpass.Comment", "/* Cutoff Frequency of a lowpass filter */" },
		{ "Lowpass.Name", "EModulationDestination::Lowpass" },
		{ "Lowpass.ToolTip", "Cutoff Frequency of a lowpass filter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "Pitch.Comment", "/* Pitch modulation */" },
		{ "Pitch.Name", "EModulationDestination::Pitch" },
		{ "Pitch.ToolTip", "Pitch modulation" },
		{ "Volume.Comment", "/* Volume modulation */" },
		{ "Volume.Name", "EModulationDestination::Volume" },
		{ "Volume.ToolTip", "Volume modulation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EModulationDestination_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EModulationDestination",
		"EModulationDestination",
		Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModulationDestination_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EModulationDestination()
	{
		if (!Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton, Z_Construct_UEnum_Engine_EModulationDestination_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModulationDestination.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAudioComponentParam>() == std::is_polymorphic<FAudioParameter>(), "USTRUCT FAudioComponentParam cannot be polymorphic unless super FAudioParameter is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioComponentParam;
class UScriptStruct* FAudioComponentParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioComponentParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioComponentParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioComponentParam, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioComponentParam"));
	}
	return Z_Registration_Info_UScriptStruct_AudioComponentParam.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioComponentParam>()
{
	return FAudioComponentParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioComponentParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWaveParam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWaveParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Legacy struct used for storing named parameter for a given AudioComponent.\n */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Legacy struct used for storing named parameter for a given AudioComponent." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioComponentParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData[] = {
		{ "Category", "AudioComponentParam" },
		{ "Comment", "// DEPRECATED\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "DEPRECATED" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam = { "SoundWaveParam", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioComponentParam, SoundWaveParam), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewProp_SoundWaveParam,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioComponentParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAudioParameter,
		&NewStructOps,
		"AudioComponentParam",
		sizeof(FAudioComponentParam),
		alignof(FAudioComponentParam),
		Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioComponentParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioComponentParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioComponentParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioComponentParam.InnerSingleton, Z_Construct_UScriptStruct_FAudioComponentParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioComponentParam.InnerSingleton;
	}
	void UInitialActiveSoundParams::StaticRegisterNativesUInitialActiveSoundParams()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInitialActiveSoundParams);
	UClass* Z_Construct_UClass_UInitialActiveSoundParams_NoRegister()
	{
		return UInitialActiveSoundParams::StaticClass();
	}
	struct Z_Construct_UClass_UInitialActiveSoundParams_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInitialActiveSoundParams_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitialActiveSoundParams_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Convenience class to get audio parameters set on an active sound's playback\n */" },
		{ "IncludePath", "Components/AudioComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Convenience class to get audio parameters set on an active sound's playback" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInitialActiveSoundParams_Statics::NewProp_AudioParams_Inner = { "AudioParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(nullptr, 0) }; // 2206304397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitialActiveSoundParams_Statics::NewProp_AudioParams_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "// Collection of parameters to be sent to the active sound\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Collection of parameters to be sent to the active sound" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInitialActiveSoundParams_Statics::NewProp_AudioParams = { "AudioParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInitialActiveSoundParams, AudioParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInitialActiveSoundParams_Statics::NewProp_AudioParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInitialActiveSoundParams_Statics::NewProp_AudioParams_MetaData)) }; // 2206304397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInitialActiveSoundParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInitialActiveSoundParams_Statics::NewProp_AudioParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInitialActiveSoundParams_Statics::NewProp_AudioParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitialActiveSoundParams_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInitialActiveSoundParams>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInitialActiveSoundParams_Statics::ClassParams = {
		&UInitialActiveSoundParams::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInitialActiveSoundParams_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInitialActiveSoundParams_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInitialActiveSoundParams_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitialActiveSoundParams_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitialActiveSoundParams()
	{
		if (!Z_Registration_Info_UClass_UInitialActiveSoundParams.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInitialActiveSoundParams.OuterSingleton, Z_Construct_UClass_UInitialActiveSoundParams_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInitialActiveSoundParams.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInitialActiveSoundParams>()
	{
		return UInitialActiveSoundParams::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitialActiveSoundParams);
	UInitialActiveSoundParams::~UInitialActiveSoundParams() {}
	DEFINE_FUNCTION(UAudioComponent::execBP_GetAttenuationSettingsToApply)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetModulators)
	{
		P_GET_ENUM(EModulationDestination,Z_Param_Destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<USoundModulatorBase*>*)Z_Param__Result=P_THIS->GetModulators(EModulationDestination(Z_Param_Destination));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetModulationRouting)
	{
		P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
		P_GET_ENUM(EModulationDestination,Z_Param_Destination);
		P_GET_ENUM(EModulationRouting,Z_Param_RoutingMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModulationRouting(Z_Param_Out_Modulators,EModulationDestination(Z_Param_Destination),EModulationRouting(Z_Param_RoutingMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetCookedEnvelopeDataForAllPlayingSounds)
	{
		P_GET_TARRAY_REF(FSoundWaveEnvelopeDataPerSound,Z_Param_Out_OutEnvelopeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCookedEnvelopeDataForAllPlayingSounds(Z_Param_Out_OutEnvelopeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetCookedEnvelopeData)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutEnvelopeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCookedEnvelopeData(Z_Param_Out_OutEnvelopeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetCookedFFTDataForAllPlayingSounds)
	{
		P_GET_TARRAY_REF(FSoundWaveSpectralDataPerSound,Z_Param_Out_OutSoundWaveSpectralData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCookedFFTDataForAllPlayingSounds(Z_Param_Out_OutSoundWaveSpectralData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetCookedFFTData)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_FrequenciesToGet);
		P_GET_TARRAY_REF(FSoundWaveSpectralData,Z_Param_Out_OutSoundWaveSpectralData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCookedFFTData(Z_Param_Out_FrequenciesToGet,Z_Param_Out_OutSoundWaveSpectralData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execHasCookedAmplitudeEnvelopeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCookedAmplitudeEnvelopeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execHasCookedFFTData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCookedFFTData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetOutputToBusOnly)
	{
		P_GET_UBOOL(Z_Param_bInOutputToBusOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputToBusOnly(Z_Param_bInOutputToBusOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetLowPassFilterFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLowPassFilterFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterFrequency(Z_Param_InLowPassFilterFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetLowPassFilterEnabled)
	{
		P_GET_UBOOL(Z_Param_InLowPassFilterEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilterEnabled(Z_Param_InLowPassFilterEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetAudioBusSendPostEffect)
	{
		P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AudioBusSendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioBusSendPostEffect(Z_Param_AudioBus,Z_Param_AudioBusSendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetAudioBusSendPreEffect)
	{
		P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AudioBusSendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioBusSendPreEffect(Z_Param_AudioBus,Z_Param_AudioBusSendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetSourceBusSendPostEffect)
	{
		P_GET_OBJECT(USoundSourceBus,Z_Param_SoundSourceBus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SourceBusSendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceBusSendPostEffect(Z_Param_SoundSourceBus,Z_Param_SourceBusSendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetSourceBusSendPreEffect)
	{
		P_GET_OBJECT(USoundSourceBus,Z_Param_SoundSourceBus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SourceBusSendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceBusSendPreEffect(Z_Param_SoundSourceBus,Z_Param_SourceBusSendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetSubmixSend)
	{
		P_GET_OBJECT(USoundSubmixBase,Z_Param_Submix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SendLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execAdjustAttenuation)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_InAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAttenuation(Z_Param_Out_InAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetUISound)
	{
		P_GET_UBOOL(Z_Param_bInUISound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUISound(Z_Param_bInUISound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetPitchMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitchMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchMultiplier(Z_Param_NewPitchMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetVolumeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeMultiplier(Z_Param_NewVolumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetWaveParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_OBJECT(USoundWave,Z_Param_InWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaveParameter(Z_Param_InName,Z_Param_InWave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel,EAudioFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execGetPlayState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAudioComponentPlayState*)Z_Param__Result=P_THIS->GetPlayState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execIsVirtualized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVirtualized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execStopDelayed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDelayed(Z_Param_DelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetFloatParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameter(Z_Param_InName,Z_Param_InFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetIntParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntParameter(Z_Param_InName,Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execSetBoolParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_InBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolParameter(Z_Param_InName,Z_Param_InBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execPlayQuantized)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_InClockHandle);
		P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_InQuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFadeVolumeLevel);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_InFadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayQuantized(Z_Param_WorldContextObject,Z_Param_Out_InClockHandle,Z_Param_Out_InQuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_InDelegate),Z_Param_InStartTime,Z_Param_InFadeInDuration,Z_Param_InFadeVolumeLevel,EAudioFaderCurve(Z_Param_InFadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_ENUM(EAudioFaderCurve,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel,EAudioFaderCurve(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponent::execFadeIn)
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
	DEFINE_FUNCTION(UAudioComponent::execSetSound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	void UAudioComponent::StaticRegisterNativesUAudioComponent()
	{
		UClass* Class = UAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", &UAudioComponent::execAdjustAttenuation },
			{ "AdjustVolume", &UAudioComponent::execAdjustVolume },
			{ "BP_GetAttenuationSettingsToApply", &UAudioComponent::execBP_GetAttenuationSettingsToApply },
			{ "FadeIn", &UAudioComponent::execFadeIn },
			{ "FadeOut", &UAudioComponent::execFadeOut },
			{ "GetCookedEnvelopeData", &UAudioComponent::execGetCookedEnvelopeData },
			{ "GetCookedEnvelopeDataForAllPlayingSounds", &UAudioComponent::execGetCookedEnvelopeDataForAllPlayingSounds },
			{ "GetCookedFFTData", &UAudioComponent::execGetCookedFFTData },
			{ "GetCookedFFTDataForAllPlayingSounds", &UAudioComponent::execGetCookedFFTDataForAllPlayingSounds },
			{ "GetModulators", &UAudioComponent::execGetModulators },
			{ "GetPlayState", &UAudioComponent::execGetPlayState },
			{ "HasCookedAmplitudeEnvelopeData", &UAudioComponent::execHasCookedAmplitudeEnvelopeData },
			{ "HasCookedFFTData", &UAudioComponent::execHasCookedFFTData },
			{ "IsPlaying", &UAudioComponent::execIsPlaying },
			{ "IsVirtualized", &UAudioComponent::execIsVirtualized },
			{ "Play", &UAudioComponent::execPlay },
			{ "PlayQuantized", &UAudioComponent::execPlayQuantized },
			{ "SetAudioBusSendPostEffect", &UAudioComponent::execSetAudioBusSendPostEffect },
			{ "SetAudioBusSendPreEffect", &UAudioComponent::execSetAudioBusSendPreEffect },
			{ "SetBoolParameter", &UAudioComponent::execSetBoolParameter },
			{ "SetFloatParameter", &UAudioComponent::execSetFloatParameter },
			{ "SetIntParameter", &UAudioComponent::execSetIntParameter },
			{ "SetLowPassFilterEnabled", &UAudioComponent::execSetLowPassFilterEnabled },
			{ "SetLowPassFilterFrequency", &UAudioComponent::execSetLowPassFilterFrequency },
			{ "SetModulationRouting", &UAudioComponent::execSetModulationRouting },
			{ "SetOutputToBusOnly", &UAudioComponent::execSetOutputToBusOnly },
			{ "SetPaused", &UAudioComponent::execSetPaused },
			{ "SetPitchMultiplier", &UAudioComponent::execSetPitchMultiplier },
			{ "SetSound", &UAudioComponent::execSetSound },
			{ "SetSourceBusSendPostEffect", &UAudioComponent::execSetSourceBusSendPostEffect },
			{ "SetSourceBusSendPreEffect", &UAudioComponent::execSetSourceBusSendPreEffect },
			{ "SetSubmixSend", &UAudioComponent::execSetSubmixSend },
			{ "SetUISound", &UAudioComponent::execSetUISound },
			{ "SetVolumeMultiplier", &UAudioComponent::execSetVolumeMultiplier },
			{ "SetWaveParameter", &UAudioComponent::execSetWaveParameter },
			{ "Stop", &UAudioComponent::execStop },
			{ "StopDelayed", &UAudioComponent::execStopDelayed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics
	{
		struct AudioComponent_eventAdjustAttenuation_Parms
		{
			FSoundAttenuationSettings InAttenuationSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData)) }; // 895530132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** This function is used to modify the Attenuation Settings on the targeted Audio Component instance. It is worth noting that Attenuation Settings are only passed to new Active Sounds on start, so modified Attenuation data should be set before sound playback. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This function is used to modify the Attenuation Settings on the targeted Audio Component instance. It is worth noting that Attenuation Settings are only passed to new Active Sounds on start, so modified Attenuation data should be set before sound playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "AdjustAttenuation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::AudioComponent_eventAdjustAttenuation_Parms), Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_AdjustAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_AdjustAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics
	{
		struct AudioComponent_eventAdjustVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventAdjustVolume_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_MetaData)) }; // 1730655904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** This function allows designers to trigger an adjustment to the sound instance\xe2\x80\x99s playback Volume with options for smoothly applying a curve over time.\n\x09 * @param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n\x09 * @param AdjustVolumeLevel The new volume to set the Audio Component to.\n\x09 * @param FadeCurve The curve used when interpolating between the old and new volume.\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This function allows designers to trigger an adjustment to the sound instance\xe2\x80\x99s playback Volume with options for smoothly applying a curve over time.\n@param AdjustVolumeDuration The length of time in which to interpolate between the initial volume and the new volume.\n@param AdjustVolumeLevel The new volume to set the Audio Component to.\n@param FadeCurve The curve used when interpolating between the old and new volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::AudioComponent_eventAdjustVolume_Parms), Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FSoundAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(nullptr, 0) }; // 895530132
	void Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Retrieves Attenuation Settings data on the targeted Audio Component. Returns FALSE if no settings were found. \n\x09 *  Because the Attenuation Settings data structure is copied, FALSE returns will return default values. \n\x09 */" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
		{ "ToolTip", "Retrieves Attenuation Settings data on the targeted Audio Component. Returns FALSE if no settings were found.\nBecause the Attenuation Settings data structure is copied, FALSE returns will return default values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::AudioComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_FadeIn_Statics
	{
		struct AudioComponent_eventFadeIn_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeIn_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_MetaData)) }; // 1730655904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * This function allows designers to call Play on an Audio Component instance while applying a volume curve over time. \n\x09 * Parameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\x09 *\n\x09 * @param FadeInDuration How long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel The percentage of the AudioComponents's calculated volume to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This function allows designers to call Play on an Audio Component instance while applying a volume curve over time.\nParameters allow designers to indicate the duration of the fade, the curve shape, and the start time if seeking into the sound.\n\n@param FadeInDuration How long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel The percentage of the AudioComponents's calculated volume to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "FadeIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::AudioComponent_eventFadeIn_Parms), Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_FadeOut_Statics
	{
		struct AudioComponent_eventFadeOut_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventFadeOut_Parms, FadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_MetaData)) }; // 1730655904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::NewProp_FadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * This function allows designers to call a delayed Stop on an Audio Component instance while applying a\n\x09 * volume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\x09 *\n\x09 * @param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n\x09 * @param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n\x09 * @param FadeCurve The curve to use when interpolating between the old and new volume\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This function allows designers to call a delayed Stop on an Audio Component instance while applying a\nvolume curve over time. Parameters allow designers to indicate the duration of the fade and the curve shape.\n\n@param FadeOutDuration how long it should take to reach the FadeVolumeLevel\n@param FadeVolumeLevel the percentage of the AudioComponents's calculated volume in which to fade to\n@param FadeCurve The curve to use when interpolating between the old and new volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "FadeOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::AudioComponent_eventFadeOut_Parms), Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics
	{
		struct AudioComponent_eventGetCookedEnvelopeData_Parms
		{
			float OutEnvelopeData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutEnvelopeData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_OutEnvelopeData = { "OutEnvelopeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventGetCookedEnvelopeData_Parms, OutEnvelopeData), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedEnvelopeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventGetCookedEnvelopeData_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_OutEnvelopeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09 * Retrieves Cooked Amplitude Envelope Data at the current playback time. If there are multiple\n\x09 * SoundWaves playing, data is interpolated and averaged across all playing sound waves.\n\x09 * Returns FALSE if no data was found.\n\x09*/" },
		{ "DisplayName", "Get Cooked Amplitude Envelope Data" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Retrieves Cooked Amplitude Envelope Data at the current playback time. If there are multiple\nSoundWaves playing, data is interpolated and averaged across all playing sound waves.\nReturns FALSE if no data was found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedEnvelopeData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::AudioComponent_eventGetCookedEnvelopeData_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics
	{
		struct AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms
		{
			TArray<FSoundWaveEnvelopeDataPerSound> OutEnvelopeData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutEnvelopeData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutEnvelopeData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_OutEnvelopeData_Inner = { "OutEnvelopeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound, METADATA_PARAMS(nullptr, 0) }; // 2769560215
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_OutEnvelopeData = { "OutEnvelopeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms, OutEnvelopeData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2769560215
	void Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_OutEnvelopeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_OutEnvelopeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Retrieves the current-time amplitude envelope data of the sounds playing on the audio component.\n\x09* Envelope data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.\n\x09* Returns true if there is data and the audio component is playing.\n\x09*/" },
		{ "DisplayName", "Get Cooked Amplitude Envelope Data For All Playing Sounds" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Retrieves the current-time amplitude envelope data of the sounds playing on the audio component.\nEnvelope data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.\nReturns true if there is data and the audio component is playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedEnvelopeDataForAllPlayingSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::AudioComponent_eventGetCookedEnvelopeDataForAllPlayingSounds_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics
	{
		struct AudioComponent_eventGetCookedFFTData_Parms
		{
			TArray<float> FrequenciesToGet;
			TArray<FSoundWaveSpectralData> OutSoundWaveSpectralData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequenciesToGet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequenciesToGet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FrequenciesToGet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSoundWaveSpectralData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSoundWaveSpectralData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_Inner = { "FrequenciesToGet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet = { "FrequenciesToGet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventGetCookedFFTData_Parms, FrequenciesToGet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData_Inner = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralData, METADATA_PARAMS(nullptr, 0) }; // 126735623
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventGetCookedFFTData_Parms, OutSoundWaveSpectralData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 126735623
	void Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedFFTData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventGetCookedFFTData_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_FrequenciesToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_OutSoundWaveSpectralData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Retrieves the current-time cooked spectral data of the sounds playing on the audio component.\n\x09* Spectral data is averaged and interpolated for all playing sounds on this audio component.\n\x09* Returns true if there is data and the audio component is playing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Retrieves the current-time cooked spectral data of the sounds playing on the audio component.\nSpectral data is averaged and interpolated for all playing sounds on this audio component.\nReturns true if there is data and the audio component is playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedFFTData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::AudioComponent_eventGetCookedFFTData_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedFFTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedFFTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics
	{
		struct AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms
		{
			TArray<FSoundWaveSpectralDataPerSound> OutSoundWaveSpectralData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSoundWaveSpectralData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSoundWaveSpectralData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_OutSoundWaveSpectralData_Inner = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound, METADATA_PARAMS(nullptr, 0) }; // 1468441669
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_OutSoundWaveSpectralData = { "OutSoundWaveSpectralData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms, OutSoundWaveSpectralData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1468441669
	void Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms), &Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_OutSoundWaveSpectralData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_OutSoundWaveSpectralData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Retrieves the current-time cooked spectral data of the sounds playing on the audio component.\n\x09* Spectral data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.\n\x09* Returns true if there is data and the audio component is playing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Retrieves the current-time cooked spectral data of the sounds playing on the audio component.\nSpectral data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.\nReturns true if there is data and the audio component is playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetCookedFFTDataForAllPlayingSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::AudioComponent_eventGetCookedFFTDataForAllPlayingSounds_Parms), Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetModulators_Statics
	{
		struct AudioComponent_eventGetModulators_Parms
		{
			EModulationDestination Destination;
			TSet<USoundModulatorBase*> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventGetModulators_Parms, Destination), Z_Construct_UEnum_Engine_EModulationDestination, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_Destination_MetaData)) }; // 1769542277
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Modulators" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventGetModulators_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_Destination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Gets the set of currently active modulators for a given Modulation Destination.\n\x09* @param Destination The Destination to retrieve the Modulators from.\n\x09* @return The set of of Modulators applied to this component for the given Destination.\n\x09*/" },
		{ "DisplayName", "Get Modulators" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Gets the set of currently active modulators for a given Modulation Destination.\n@param Destination The Destination to retrieve the Modulators from.\n@return The set of of Modulators applied to this component for the given Destination." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::AudioComponent_eventGetModulators_Parms), Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics
	{
		struct AudioComponent_eventGetPlayState_Parms
		{
			EAudioComponentPlayState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventGetPlayState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EAudioComponentPlayState, METADATA_PARAMS(nullptr, 0) }; // 1692706153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Returns the enumerated play states of the audio component. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Returns the enumerated play states of the audio component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "GetPlayState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::AudioComponent_eventGetPlayState_Parms), Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_GetPlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_GetPlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics
	{
		struct AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms
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
	void Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms), &Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Queries whether or not the targeted Audio Component instance\xe2\x80\x99s sound has Amplitude Envelope Data, returns FALSE if none found. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Queries whether or not the targeted Audio Component instance\xe2\x80\x99s sound has Amplitude Envelope Data, returns FALSE if none found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "HasCookedAmplitudeEnvelopeData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::AudioComponent_eventHasCookedAmplitudeEnvelopeData_Parms), Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics
	{
		struct AudioComponent_eventHasCookedFFTData_Parms
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
	void Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventHasCookedFFTData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventHasCookedFFTData_Parms), &Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Queries if the sound wave playing in this audio component has cooked FFT data, returns FALSE if none found.  */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Queries if the sound wave playing in this audio component has cooked FFT data, returns FALSE if none found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "HasCookedFFTData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::AudioComponent_eventHasCookedFFTData_Parms), Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_HasCookedFFTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_HasCookedFFTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics
	{
		struct AudioComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Returns TRUE if the targeted Audio Component\xe2\x80\x99s sound is playing.\n\x09 *  Doesn't indicate if the sound is paused or fading in/out. Use GetPlayState() to get the full play state.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Returns TRUE if the targeted Audio Component\xe2\x80\x99s sound is playing.\nDoesn't indicate if the sound is paused or fading in/out. Use GetPlayState() to get the full play state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::AudioComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics
	{
		struct AudioComponent_eventIsVirtualized_Parms
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
	void Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponent_eventIsVirtualized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventIsVirtualized_Parms), &Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Returns if the sound is virtualized. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Returns if the sound is virtualized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "IsVirtualized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::AudioComponent_eventIsVirtualized_Parms), Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_IsVirtualized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_IsVirtualized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_Play_Statics
	{
		struct AudioComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Begins playing the targeted Audio Component's sound at the designated Start Time, seeking into a sound.\n\x09 * @param StartTime The offset, in seconds, to begin reading the sound at\n\x09 */" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Begins playing the targeted Audio Component's sound at the designated Start Time, seeking into a sound.\n@param StartTime The offset, in seconds, to begin reading the sound at" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_Play_Statics::AudioComponent_eventPlay_Parms), Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics
	{
		struct AudioComponent_eventPlayQuantized_Parms
		{
			const UObject* WorldContextObject;
			UQuartzClockHandle* InClockHandle;
			FQuartzQuantizationBoundary InQuantizationBoundary;
			FScriptDelegate InDelegate;
			float InStartTime;
			float InFadeInDuration;
			float InFadeVolumeLevel;
			EAudioFaderCurve InFadeCurve;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InClockHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InQuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFadeInDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFadeVolumeLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFadeCurve_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InFadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlayQuantized_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InClockHandle = { "InClockHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlayQuantized_Parms, InClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlayQuantized_Parms, InQuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(nullptr, 0) }; // 1395895600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlayQuantized_Parms, InDelegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InDelegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InStartTime = { "InStartTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlayQuantized_Parms, InStartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InFadeInDuration = { "InFadeInDuration", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlayQuantized_Parms, InFadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InFadeVolumeLevel = { "InFadeVolumeLevel", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlayQuantized_Parms, InFadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InFadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InFadeCurve = { "InFadeCurve", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventPlayQuantized_Parms, InFadeCurve), Z_Construct_UEnum_Engine_EAudioFaderCurve, METADATA_PARAMS(nullptr, 0) }; // 1730655904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InClockHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InQuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InFadeInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InFadeVolumeLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InFadeCurve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::NewProp_InFadeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Start a sound playing on an audio component on a given quantization boundary with the handle to an existing clock */" },
		{ "CPP_Default_InFadeCurve", "Linear" },
		{ "CPP_Default_InFadeInDuration", "0.000000" },
		{ "CPP_Default_InFadeVolumeLevel", "1.000000" },
		{ "CPP_Default_InStartTime", "0.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Start a sound playing on an audio component on a given quantization boundary with the handle to an existing clock" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "PlayQuantized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::AudioComponent_eventPlayQuantized_Parms), Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_PlayQuantized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_PlayQuantized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics
	{
		struct AudioComponent_eventSetAudioBusSendPostEffect_Parms
		{
			UAudioBus* AudioBus;
			float AudioBusSendLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioBusSendLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetAudioBusSendPostEffect_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::NewProp_AudioBusSendLevel = { "AudioBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetAudioBusSendPostEffect_Parms, AudioBusSendLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::NewProp_AudioBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::NewProp_AudioBusSendLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given Audio Bus (POST Source Effects).\n\x09 *  if the Audio Bus Send doesn't already exist, it will be added to the overrides on the active sound. \n\x09 * @param AudioBus The Bus to send the signal to\n\x09 * @param AudioBusSendLevel The scalar used to alter the volume of the copied signal\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given Audio Bus (POST Source Effects).\nif the Audio Bus Send doesn't already exist, it will be added to the overrides on the active sound.\n@param AudioBus The Bus to send the signal to\n@param AudioBusSendLevel The scalar used to alter the volume of the copied signal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetAudioBusSendPostEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::AudioComponent_eventSetAudioBusSendPostEffect_Parms), Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics
	{
		struct AudioComponent_eventSetAudioBusSendPreEffect_Parms
		{
			UAudioBus* AudioBus;
			float AudioBusSendLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioBusSendLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetAudioBusSendPreEffect_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::NewProp_AudioBusSendLevel = { "AudioBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetAudioBusSendPreEffect_Parms, AudioBusSendLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::NewProp_AudioBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::NewProp_AudioBusSendLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets how much audio the sound should send to the given Audio Bus (PRE Source Effects).\n\x09 *  if the Bus Send doesn't already exist, it will be added to the overrides on the active sound. \n\x09 * @param AudioBus The Bus to send the signal to\n\x09 * @param AudioBusSendLevel The scalar used to alter the volume of the copied signal\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets how much audio the sound should send to the given Audio Bus (PRE Source Effects).\nif the Bus Send doesn't already exist, it will be added to the overrides on the active sound.\n@param AudioBus The Bus to send the signal to\n@param AudioBusSendLevel The scalar used to alter the volume of the copied signal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetAudioBusSendPreEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::AudioComponent_eventSetAudioBusSendPreEffect_Parms), Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics
	{
		struct AudioComponent_eventSetBoolParameter_Parms
		{
			FName InName;
			bool InBool;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static void NewProp_InBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetBoolParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool_SetBit(void* Obj)
	{
		((AudioComponent_eventSetBoolParameter_Parms*)Obj)->InBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool = { "InBool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::NewProp_InBool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Boolean\n" },
		{ "DisplayName", "Set Boolean Parameter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets a named Boolean" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetBoolParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::AudioComponent_eventSetBoolParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics
	{
		struct AudioComponent_eventSetFloatParameter_Parms
		{
			FName InName;
			float InFloat;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetFloatParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetFloatParameter_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::NewProp_InFloat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Float\n" },
		{ "DisplayName", "Set Float Parameter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets a named Float" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetFloatParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::AudioComponent_eventSetFloatParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics
	{
		struct AudioComponent_eventSetIntParameter_Parms
		{
			FName InName;
			int32 InInt;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetIntParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetIntParameter_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::NewProp_InInt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Int32\n" },
		{ "DisplayName", "Set Integer Parameter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets a named Int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetIntParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::AudioComponent_eventSetIntParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetIntParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetIntParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics
	{
		struct AudioComponent_eventSetLowPassFilterEnabled_Parms
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
	void Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit(void* Obj)
	{
		((AudioComponent_eventSetLowPassFilterEnabled_Parms*)Obj)->InLowPassFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled = { "InLowPassFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventSetLowPassFilterEnabled_Parms), &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::NewProp_InLowPassFilterEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** When set to TRUE, enables an additional Low Pass Filter Frequency to be calculated in with the\n\x09 *  sound instance\xe2\x80\x99s LPF total, allowing designers to set filter settings for the targeted Audio Component\xe2\x80\x99s\n\x09 *  sound instance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "When set to TRUE, enables an additional Low Pass Filter Frequency to be calculated in with the\nsound instance\xe2\x80\x99s LPF total, allowing designers to set filter settings for the targeted Audio Component\xe2\x80\x99s\nsound instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetLowPassFilterEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::AudioComponent_eventSetLowPassFilterEnabled_Parms), Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics
	{
		struct AudioComponent_eventSetLowPassFilterFrequency_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency = { "InLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetLowPassFilterFrequency_Parms, InLowPassFilterFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::NewProp_InLowPassFilterFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets a cutoff frequency, in Hz, for the targeted Audio Component\xe2\x80\x99s sound\xe2\x80\x99s Low Pass Filter calculation.\n\x09 *  The lowest cutoff frequency from all of the sound instance\xe2\x80\x99s possible LPF calculations wins.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets a cutoff frequency, in Hz, for the targeted Audio Component\xe2\x80\x99s sound\xe2\x80\x99s Low Pass Filter calculation.\nThe lowest cutoff frequency from all of the sound instance\xe2\x80\x99s possible LPF calculations wins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetLowPassFilterFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::AudioComponent_eventSetLowPassFilterFrequency_Parms), Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics
	{
		struct AudioComponent_eventSetModulationRouting_Parms
		{
			TSet<USoundModulatorBase*> Modulators;
			EModulationDestination Destination;
			EModulationRouting RoutingMethod;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoutingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoutingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoutingMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetModulationRouting_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetModulationRouting_Parms, Destination), Z_Construct_UEnum_Engine_EModulationDestination, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Destination_MetaData)) }; // 1769542277
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_RoutingMethod = { "RoutingMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetModulationRouting_Parms, RoutingMethod), Z_Construct_UEnum_Engine_EModulationRouting, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_MetaData)) }; // 2311259489
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Modulators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Destination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_RoutingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::NewProp_RoutingMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/**\n\x09* Sets the routing for one of the given Audio component's Modulation Destinations.\n\x09* The changes do not apply to any currently active sounds, but will apply to future sounds.\n\x09* @param Modulators The set of modulators to apply to the given destination on the component.\n\x09* @param Destination The destination to assign the modulators to.\n\x09* @param RoutingMethod The routing method to use for the given volume modulator.\n\x09*/" },
		{ "CPP_Default_RoutingMethod", "Inherit" },
		{ "DisplayName", "Set Modulation Routing" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets the routing for one of the given Audio component's Modulation Destinations.\nThe changes do not apply to any currently active sounds, but will apply to future sounds.\n@param Modulators The set of modulators to apply to the given destination on the component.\n@param Destination The destination to assign the modulators to.\n@param RoutingMethod The routing method to use for the given volume modulator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetModulationRouting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::AudioComponent_eventSetModulationRouting_Parms), Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetModulationRouting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetModulationRouting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics
	{
		struct AudioComponent_eventSetOutputToBusOnly_Parms
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
	void Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly_SetBit(void* Obj)
	{
		((AudioComponent_eventSetOutputToBusOnly_Parms*)Obj)->bInOutputToBusOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly = { "bInOutputToBusOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventSetOutputToBusOnly_Parms), &Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::NewProp_bInOutputToBusOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Sets whether or not to output the audio to bus only. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets whether or not to output the audio to bus only." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetOutputToBusOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::AudioComponent_eventSetOutputToBusOnly_Parms), Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetPaused_Statics
	{
		struct AudioComponent_eventSetPaused_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AudioComponent_eventSetPaused_Parms*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Pause an audio component playing its sound cue, issue any delegates if needed */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Pause an audio component playing its sound cue, issue any delegates if needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::AudioComponent_eventSetPaused_Parms), Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics
	{
		struct AudioComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPitchMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier = { "NewPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetPitchMultiplier_Parms, NewPitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set a new pitch multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a new pitch multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetPitchMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::AudioComponent_eventSetPitchMultiplier_Parms), Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSound_Statics
	{
		struct AudioComponent_eventSetSound_Parms
		{
			USoundBase* NewSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSound_Parms, NewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "// Set what sound is played by this component\n" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set what sound is played by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::AudioComponent_eventSetSound_Parms), Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics
	{
		struct AudioComponent_eventSetSourceBusSendPostEffect_Parms
		{
			USoundSourceBus* SoundSourceBus;
			float SourceBusSendLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceBusSendLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::NewProp_SoundSourceBus = { "SoundSourceBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSourceBusSendPostEffect_Parms, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::NewProp_SourceBusSendLevel = { "SourceBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSourceBusSendPostEffect_Parms, SourceBusSendLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::NewProp_SoundSourceBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::NewProp_SourceBusSendLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Allows designers to target a specific Audio Component instance\xe2\x80\x99s sound and set the send level (volume of sound copied)\n\x09 *  to the indicated Source Bus. If the Source Bus is not already part of the sound\xe2\x80\x99s sends, the reference will be added to\n\x09 *  this instance\xe2\x80\x99s Override sends. This particular send occurs after the Source Effect processing chain.\n\x09 * @param SoundSourceBus The Bus to send the signal to\n\x09 * @param SourceBusSendLevel The scalar used to alter the volume of the copied signal\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Allows designers to target a specific Audio Component instance\xe2\x80\x99s sound and set the send level (volume of sound copied)\nto the indicated Source Bus. If the Source Bus is not already part of the sound\xe2\x80\x99s sends, the reference will be added to\nthis instance\xe2\x80\x99s Override sends. This particular send occurs after the Source Effect processing chain.\n@param SoundSourceBus The Bus to send the signal to\n@param SourceBusSendLevel The scalar used to alter the volume of the copied signal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSourceBusSendPostEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::AudioComponent_eventSetSourceBusSendPostEffect_Parms), Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics
	{
		struct AudioComponent_eventSetSourceBusSendPreEffect_Parms
		{
			USoundSourceBus* SoundSourceBus;
			float SourceBusSendLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceBusSendLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::NewProp_SoundSourceBus = { "SoundSourceBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSourceBusSendPreEffect_Parms, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::NewProp_SourceBusSendLevel = { "SourceBusSendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSourceBusSendPreEffect_Parms, SourceBusSendLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::NewProp_SoundSourceBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::NewProp_SourceBusSendLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Allows designers to target a specific Audio Component instance\xe2\x80\x99s sound and set the send level (volume of sound copied)\n\x09 *  to the indicated Source Bus. If the Source Bus is not already part of the sound\xe2\x80\x99s sends, the reference will be added to\n\x09 *  this instance\xe2\x80\x99s Override sends. This particular send occurs before the Source Effect processing chain.\n\x09 * @param SoundSourceBus The Bus to send the signal to.\n\x09 * @param SourceBusSendLevel The scalar used to alter the volume of the copied signal.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Allows designers to target a specific Audio Component instance\xe2\x80\x99s sound and set the send level (volume of sound copied)\nto the indicated Source Bus. If the Source Bus is not already part of the sound\xe2\x80\x99s sends, the reference will be added to\nthis instance\xe2\x80\x99s Override sends. This particular send occurs before the Source Effect processing chain.\n@param SoundSourceBus The Bus to send the signal to.\n@param SourceBusSendLevel The scalar used to alter the volume of the copied signal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSourceBusSendPreEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::AudioComponent_eventSetSourceBusSendPreEffect_Parms), Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics
	{
		struct AudioComponent_eventSetSubmixSend_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSubmixSend_Parms, Submix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetSubmixSend_Parms, SendLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_Submix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::NewProp_SendLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Allows designers to target a specific Audio Component instance\xe2\x80\x99s sound set the send level (volume of sound copied) to the indicated Submix.\n\x09 * @param Submix The Submix to send the signal to.\n\x09 * @param SendLevel The scalar used to alter the volume of the copied signal.*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Allows designers to target a specific Audio Component instance\xe2\x80\x99s sound set the send level (volume of sound copied) to the indicated Submix.\n@param Submix The Submix to send the signal to.\n@param SendLevel The scalar used to alter the volume of the copied signal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetSubmixSend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::AudioComponent_eventSetSubmixSend_Parms), Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetSubmixSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetSubmixSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetUISound_Statics
	{
		struct AudioComponent_eventSetUISound_Parms
		{
			bool bInUISound;
		};
		static void NewProp_bInUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUISound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound_SetBit(void* Obj)
	{
		((AudioComponent_eventSetUISound_Parms*)Obj)->bInUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound = { "bInUISound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioComponent_eventSetUISound_Parms), &Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::NewProp_bInUISound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set whether sounds generated by this audio component should be considered UI sounds */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set whether sounds generated by this audio component should be considered UI sounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetUISound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::AudioComponent_eventSetUISound_Parms), Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetUISound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetUISound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics
	{
		struct AudioComponent_eventSetVolumeMultiplier_Parms
		{
			float NewVolumeMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolumeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::NewProp_NewVolumeMultiplier = { "NewVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetVolumeMultiplier_Parms, NewVolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::NewProp_NewVolumeMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Set a new volume multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Set a new volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetVolumeMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::AudioComponent_eventSetVolumeMultiplier_Parms), Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics
	{
		struct AudioComponent_eventSetWaveParameter_Parms
		{
			FName InName;
			USoundWave* InWave;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetWaveParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InWave = { "InWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventSetWaveParameter_Parms, InWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::NewProp_InWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "/** Sets the parameter matching the name indicated to the provided Wave. Provided for convenience/backward compatibility\n\x09 * with SoundCues (The parameter interface supports any object and is up to the system querying it to determine whether\n\x09 * it is a valid type).\n\x09 * @param InName The name of the parameter to assign the wave to.\n\x09 * @param InWave The wave value to set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Sets the parameter matching the name indicated to the provided Wave. Provided for convenience/backward compatibility\nwith SoundCues (The parameter interface supports any object and is up to the system querying it to determine whether\nit is a valid type).\n@param InName The name of the parameter to assign the wave to.\n@param InWave The wave value to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "SetWaveParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::AudioComponent_eventSetWaveParameter_Parms), Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_SetWaveParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_SetWaveParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Stop an audio component's sound, issue any delegates if needed */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Stop an audio component's sound, issue any delegates if needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics
	{
		struct AudioComponent_eventStopDelayed_Parms
		{
			float DelayTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioComponent_eventStopDelayed_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::NewProp_DelayTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|Audio" },
		{ "Comment", "/** Cues request to stop sound after the provided delay (in seconds), stopping immediately if delay is zero or negative */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Cues request to stop sound after the provided delay (in seconds), stopping immediately if delay is zero or negative" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponent, nullptr, "StopDelayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::AudioComponent_eventStopDelayed_Parms), Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioComponent_StopDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponent_StopDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioComponent);
	UClass* Z_Construct_UClass_UAudioComponent_NoRegister()
	{
		return UAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClassOverride;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRemainActiveIfDropped_MetaData[];
#endif
		static void NewProp_bShouldRemainActiveIfDropped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRemainActiveIfDropped;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubtitlePriority_MetaData[];
#endif
		static void NewProp_bOverrideSubtitlePriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubtitlePriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLowPassFilter_MetaData[];
#endif
		static void NewProp_bEnableLowPassFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLowPassFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePriority_MetaData[];
#endif
		static void NewProp_bOverridePriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanPlayMultipleInstances_MetaData[];
#endif
		static void NewProp_bCanPlayMultipleInstances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPlayMultipleInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableParameterUpdatesWhilePlaying_MetaData[];
#endif
		static void NewProp_bDisableParameterUpdatesWhilePlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableParameterUpdatesWhilePlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[];
#endif
		static void NewProp_bAutoManageAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponentUserID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AudioComponentUserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchModulationMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchModulationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeModulationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceEffectChain;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeWeightedPriorityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeWeightedPriorityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighFrequencyGainMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighFrequencyGainMultiplier;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationRouting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationRouting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlayStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlayStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioVirtualizationChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioVirtualizationChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioSingleEnvelopeValue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioSingleEnvelopeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioMultiEnvelopeValue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioMultiEnvelopeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioComponent_AdjustAttenuation, "AdjustAttenuation" }, // 204797962
		{ &Z_Construct_UFunction_UAudioComponent_AdjustVolume, "AdjustVolume" }, // 2821613826
		{ &Z_Construct_UFunction_UAudioComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 3607008296
		{ &Z_Construct_UFunction_UAudioComponent_FadeIn, "FadeIn" }, // 479017711
		{ &Z_Construct_UFunction_UAudioComponent_FadeOut, "FadeOut" }, // 735978178
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeData, "GetCookedEnvelopeData" }, // 3595857434
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedEnvelopeDataForAllPlayingSounds, "GetCookedEnvelopeDataForAllPlayingSounds" }, // 2777028097
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedFFTData, "GetCookedFFTData" }, // 2787231350
		{ &Z_Construct_UFunction_UAudioComponent_GetCookedFFTDataForAllPlayingSounds, "GetCookedFFTDataForAllPlayingSounds" }, // 2245085065
		{ &Z_Construct_UFunction_UAudioComponent_GetModulators, "GetModulators" }, // 2356649815
		{ &Z_Construct_UFunction_UAudioComponent_GetPlayState, "GetPlayState" }, // 2419338038
		{ &Z_Construct_UFunction_UAudioComponent_HasCookedAmplitudeEnvelopeData, "HasCookedAmplitudeEnvelopeData" }, // 2476526900
		{ &Z_Construct_UFunction_UAudioComponent_HasCookedFFTData, "HasCookedFFTData" }, // 3820719564
		{ &Z_Construct_UFunction_UAudioComponent_IsPlaying, "IsPlaying" }, // 4265381232
		{ &Z_Construct_UFunction_UAudioComponent_IsVirtualized, "IsVirtualized" }, // 2617066644
		{ &Z_Construct_UFunction_UAudioComponent_Play, "Play" }, // 2040780682
		{ &Z_Construct_UFunction_UAudioComponent_PlayQuantized, "PlayQuantized" }, // 3636476922
		{ &Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPostEffect, "SetAudioBusSendPostEffect" }, // 2578088013
		{ &Z_Construct_UFunction_UAudioComponent_SetAudioBusSendPreEffect, "SetAudioBusSendPreEffect" }, // 318977517
		{ &Z_Construct_UFunction_UAudioComponent_SetBoolParameter, "SetBoolParameter" }, // 2984332839
		{ &Z_Construct_UFunction_UAudioComponent_SetFloatParameter, "SetFloatParameter" }, // 664996779
		{ &Z_Construct_UFunction_UAudioComponent_SetIntParameter, "SetIntParameter" }, // 3802713637
		{ &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterEnabled, "SetLowPassFilterEnabled" }, // 2928071316
		{ &Z_Construct_UFunction_UAudioComponent_SetLowPassFilterFrequency, "SetLowPassFilterFrequency" }, // 901365016
		{ &Z_Construct_UFunction_UAudioComponent_SetModulationRouting, "SetModulationRouting" }, // 2399283587
		{ &Z_Construct_UFunction_UAudioComponent_SetOutputToBusOnly, "SetOutputToBusOnly" }, // 3113946179
		{ &Z_Construct_UFunction_UAudioComponent_SetPaused, "SetPaused" }, // 3886128968
		{ &Z_Construct_UFunction_UAudioComponent_SetPitchMultiplier, "SetPitchMultiplier" }, // 3556174407
		{ &Z_Construct_UFunction_UAudioComponent_SetSound, "SetSound" }, // 1860863484
		{ &Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPostEffect, "SetSourceBusSendPostEffect" }, // 2976230466
		{ &Z_Construct_UFunction_UAudioComponent_SetSourceBusSendPreEffect, "SetSourceBusSendPreEffect" }, // 4172939711
		{ &Z_Construct_UFunction_UAudioComponent_SetSubmixSend, "SetSubmixSend" }, // 21353286
		{ &Z_Construct_UFunction_UAudioComponent_SetUISound, "SetUISound" }, // 3278973002
		{ &Z_Construct_UFunction_UAudioComponent_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 1480938828
		{ &Z_Construct_UFunction_UAudioComponent_SetWaveParameter, "SetWaveParameter" }, // 1879953184
		{ &Z_Construct_UFunction_UAudioComponent_Stop, "Stop" }, // 1473468318
		{ &Z_Construct_UFunction_UAudioComponent_StopDelayed, "StopDelayed" }, // 2776648728
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio Common" },
		{ "Comment", "/**\n * AudioComponent is used to play a Sound\n *\n * @see https://docs.unrealengine.com/WorkingWithAudio/Overview\n * @see USoundBase\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/AudioComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "AudioComponent is used to play a Sound\n\n@see https://docs.unrealengine.com/WorkingWithAudio/Overview\n@see USoundBase" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The sound to be played */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The sound to be played" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_DefaultParameters_Inner = { "DefaultParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(nullptr, 0) }; // 2206304397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_DefaultParameters_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Array of parameters for this AudioComponent. Changes to this array directly will\n\x09  * not be forwarded to the sound if the component is actively playing, and will be superseded\n\x09  * by parameters set via the actor interface if set, or the instance parameters.\n\x09  */" },
		{ "DisplayAfter", "bDisableParameterUpdatesWhilePlaying" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Array of parameters for this AudioComponent. Changes to this array directly will\nnot be forwarded to the sound if the component is actively playing, and will be superseded\nby parameters set via the actor interface if set, or the instance parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_DefaultParameters = { "DefaultParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, DefaultParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_DefaultParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_DefaultParameters_MetaData)) }; // 2206304397
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_Inner = { "InstanceParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(nullptr, 0) }; // 2206304397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData[] = {
		{ "Comment", "/** Array of transient parameters for this AudioComponent instance. Not serialized and can be set by code or BP.\n\x09  * Changes to this array directly will not be forwarded to the sound if the component is actively playing.\n\x09  * This should be done via the 'SetParameterX' calls implemented by the ISoundParameterControllerInterface.\n\x09  * Instance parameter values superseded the parameters set by the actor interface & the component's default\n\x09  * parameters.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Array of transient parameters for this AudioComponent instance. Not serialized and can be set by code or BP.\nChanges to this array directly will not be forwarded to the sound if the component is actively playing.\nThis should be done via the 'SetParameterX' calls implemented by the ISoundParameterControllerInterface.\nInstance parameter values superseded the parameters set by the actor interface & the component's default\nparameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters = { "InstanceParameters", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, InstanceParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_MetaData)) }; // 2206304397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** SoundClass that overrides that set on the referenced SoundBase when component is played. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "SoundClass that overrides that set on the referenced SoundBase when component is played." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride = { "SoundClassOverride", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, SoundClassOverride), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop sound when owner is destroyed */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData[] = {
		{ "Comment", "/** Whether the wave instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether the wave instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bShouldRemainActiveIfDropped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped = { "bShouldRemainActiveIfDropped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Overrides spatialization enablement in either the attenuation asset or on this audio component's attenuation settings override. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Overrides spatialization enablement in either the attenuation asset or on this audio component's attenuation settings override." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAllowSpatialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization = { "bAllowSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Allows defining attenuation settings directly on this audio component without using an attenuation settings asset. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Allows defining attenuation settings directly on this audio component without using an attenuation settings asset." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** Whether or not to override the sound's subtitle priority. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not to override the sound's subtitle priority." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverrideSubtitlePriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority = { "bOverrideSubtitlePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not to apply a low-pass filter to the sound that plays in this audio component. */" },
		{ "DisplayAfter", "PitchMultiplier" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not to apply a low-pass filter to the sound that plays in this audio component." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bEnableLowPassFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter = { "bEnableLowPassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not to override the priority of the given sound with the value provided. */" },
		{ "DisplayAfter", "LowPassFilterFrequency" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Whether or not to override the priority of the given sound with the value provided." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bOverridePriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority = { "bOverridePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/** If true, subtitles in the sound data will be ignored. */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If true, subtitles in the sound data will be ignored." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bSuppressSubtitles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bCanPlayMultipleInstances_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** If true, the Audio Component will play multiple sound instances at once. Switching sounds or calling play while already playing\n\x09  * will not stop already active instances. Virtualization for all played sounds will be disabled. Disabling while sound(s) are playing\n\x09  * will not take effect until the AudioComponent is stopped and restarted. */" },
		{ "DisplayAfter", "Priority" },
		{ "DisplayName", "Play Multiple Instances" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If true, the Audio Component will play multiple sound instances at once. Switching sounds or calling play while already playing\nwill not stop already active instances. Virtualization for all played sounds will be disabled. Disabling while sound(s) are playing\nwill not take effect until the AudioComponent is stopped and restarted." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bCanPlayMultipleInstances_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bCanPlayMultipleInstances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bCanPlayMultipleInstances = { "bCanPlayMultipleInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bCanPlayMultipleInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bCanPlayMultipleInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bCanPlayMultipleInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** If true, the Audio Component will ignore parameter updates for already-playing sound(s). */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If true, the Audio Component will ignore parameter updates for already-playing sound(s)." },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bDisableParameterUpdatesWhilePlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying = { "bDisableParameterUpdatesWhilePlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09* True if we should automatically attach to AutoAttachParent when Played, and detach from our parent when playback is completed.\n\x09* This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09* If enabled, this AudioComponent's WorldLocation will no longer be reliable when not currently playing audio, and any attach children will also be\n\x09* detached/attached along with it.\n\x09* When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09* This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09* @see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "True if we should automatically attach to AutoAttachParent when Played, and detach from our parent when playback is completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nIf enabled, this AudioComponent's WorldLocation will no longer be reliable when not currently playing audio, and any attach children will also be\ndetached/attached along with it.\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
#endif
	void Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_SetBit(void* Obj)
	{
		((UAudioComponent*)Obj)->bAutoManageAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment = { "bAutoManageAttachment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioComponent), &Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData[] = {
		{ "Comment", "/** Configurable, serialized ID for audio plugins */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Configurable, serialized ID for audio plugins" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID = { "AudioComponentUserID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, AudioComponentUserID), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData[] = {
		{ "Category", "Randomization|Pitch" },
		{ "Comment", "/** The lower bound to use when randomly determining a pitch multiplier */" },
		{ "DisplayName", "Pitch (Min)" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The lower bound to use when randomly determining a pitch multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin = { "PitchModulationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, PitchModulationMin), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData[] = {
		{ "Category", "Randomization|Pitch" },
		{ "Comment", "/** The upper bound to use when randomly determining a pitch multiplier */" },
		{ "DisplayName", "Pitch (Max)" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The upper bound to use when randomly determining a pitch multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax = { "PitchModulationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, PitchModulationMax), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData[] = {
		{ "Category", "Randomization|Volume" },
		{ "Comment", "/** The lower bound to use when randomly determining a volume multiplier */" },
		{ "DisplayName", "Volume (Min)" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The lower bound to use when randomly determining a volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin = { "VolumeModulationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, VolumeModulationMin), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData[] = {
		{ "Category", "Randomization|Volume" },
		{ "Comment", "/** The upper bound to use when randomly determining a volume multiplier */" },
		{ "DisplayName", "Volume (Max)" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The upper bound to use when randomly determining a volume multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax = { "VolumeModulationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, VolumeModulationMax), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** A volume multiplier to apply to sounds generated by this component */" },
		{ "DisplayAfter", "Sound" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "A volume multiplier to apply to sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the \n\x09 *  envelope value of sounds played with this audio component.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\nenvelope value of sounds played with this audio component." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "Analysis" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\n\x09 *  envelope value of sounds played with this audio component.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the\nenvelope value of sounds played with this audio component." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If enabled, overrides the priority of the selected sound with the value provided. */" },
		{ "DisplayAfter", "LowPassFilterFrequency" },
		{ "EditCondition", "bOverridePriority" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If enabled, overrides the priority of the selected sound with the value provided." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Used by the subtitle manager to prioritize subtitles wave instances spawned by this component. */" },
		{ "DisplayAfter", "SuppressSubtitles" },
		{ "EditCondition", "bOverrideSubtitlePriority" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Used by the subtitle manager to prioritize subtitles wave instances spawned by this component." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority = { "SubtitlePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, SubtitlePriority), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The chain of Source Effects to apply to the sounds playing on the Audio Component */" },
		{ "DisplayAfter", "CanPlayMultipleInstances" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "The chain of Source Effects to apply to the sounds playing on the Audio Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale = { "VolumeWeightedPriorityScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, VolumeWeightedPriorityScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier = { "HighFrequencyGainMultiplier", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, HighFrequencyGainMultiplier_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** A pitch multiplier to apply to sounds generated by this component */" },
		{ "DisplayAfter", "VolumeMultiplier" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "A pitch multiplier to apply to sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If enabled, the frequency of the Lowpass Filter (in Hz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter. */" },
		{ "DisplayAfter", "PitchMultiplier" },
		{ "EditCondition", "bEnableLowPassFilter" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If enabled, the frequency of the Lowpass Filter (in Hz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component */" },
		{ "DisplayAfter", "bOverrideAttenuation" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component */" },
		{ "DisplayAfter", "bOverrideAttenuation" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 895530132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData[] = {
		{ "Comment", "/** What sound concurrency to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "What sound concurrency to use for sounds generated by this audio component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, ConcurrencySettings_DEPRECATED), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "Comment", "/** What sound concurrency rules to use for sounds generated by this audio component */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "What sound concurrency rules to use for sounds generated by this audio component" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule = { "AutoAttachLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule = { "AutoAttachRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule = { "AutoAttachScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_MetaData)) }; // 1532071077
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_ModulationRouting_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_ModulationRouting = { "ModulationRouting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, ModulationRouting), Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ModulationRouting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_ModulationRouting_MetaData)) }; // 2328967796
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlayStateChanged_MetaData[] = {
		{ "Comment", "/** This function returns the Targeted Audio Component's current Play State.\n\x09  * Playing, if the sound is currently playing.\n\x09  * Stopped, if the sound is stopped.\n\x09  * Paused, if the sound is currently playing, but paused.\n\x09  * Fading In, if the sound is in the process of Fading In.\n\x09  * Fading Out, if the sound is in the process of Fading Out.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "This function returns the Targeted Audio Component's current Play State.\nPlaying, if the sound is currently playing.\nStopped, if the sound is stopped.\nPaused, if the sound is currently playing, but paused.\nFading In, if the sound is in the process of Fading In.\nFading Out, if the sound is in the process of Fading Out." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlayStateChanged = { "OnAudioPlayStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, OnAudioPlayStateChanged), Z_Construct_UDelegateFunction_Engine_OnAudioPlayStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlayStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlayStateChanged_MetaData)) }; // 1686982389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioVirtualizationChanged_MetaData[] = {
		{ "Comment", "/** Called when virtualization state changes */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when virtualization state changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioVirtualizationChanged = { "OnAudioVirtualizationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, OnAudioVirtualizationChanged), Z_Construct_UDelegateFunction_Engine_OnAudioVirtualizationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioVirtualizationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioVirtualizationChanged_MetaData)) }; // 3257862890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData[] = {
		{ "Comment", "/** Called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished_MetaData)) }; // 1676964744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData[] = {
		{ "Comment", "/** Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\n\x09 *  Computed as samples played divided by total samples, taking into account pitch.\n\x09 *  Not currently implemented on all platforms.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch.\nNot currently implemented on all platforms." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent = { "OnAudioPlaybackPercent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent_MetaData)) }; // 4279184691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue = { "OnAudioSingleEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, OnAudioSingleEnvelopeValue), Z_Construct_UDelegateFunction_Engine_OnAudioSingleEnvelopeValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue_MetaData)) }; // 2383796100
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue = { "OnAudioMultiEnvelopeValue", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, OnAudioMultiEnvelopeValue), Z_Construct_UDelegateFunction_Engine_OnAudioMultiEnvelopeValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue_MetaData)) }; // 131069069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData[] = {
		{ "Comment", "/** Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes */" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles = { "OnQueueSubtitles", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles_MetaData)) }; // 2150454995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Component we automatically attach to when activated, if bAutoManageAttachment is true.\n\x09 * If null during registration, we assign the existing AttachParent and defer attachment until we activate.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent = { "AutoAttachParent", nullptr, (EPropertyFlags)0x00140000000a080d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Components/AudioComponent.h" },
		{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName = { "AutoAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioComponent, AutoAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_DefaultParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_DefaultParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_InstanceParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_SoundClassOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bShouldRemainActiveIfDropped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAllowSpatialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverrideSubtitlePriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bIsUISound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bEnableLowPassFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bOverridePriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bSuppressSubtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bCanPlayMultipleInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bDisableParameterUpdatesWhilePlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_bAutoManageAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AudioComponentUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchModulationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeModulationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_SubtitlePriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_SourceEffectChain,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_VolumeWeightedPriorityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_HighFrequencyGainMultiplier,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_LowPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AttenuationOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ConcurrencySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachLocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachRotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_ModulationRouting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlayStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioVirtualizationChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioPlaybackPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioSingleEnvelopeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnAudioMultiEnvelopeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_OnQueueSubtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponent_Statics::NewProp_AutoAttachSocketName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAudioComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USoundParameterControllerInterface_NoRegister, (int32)VTABLE_OFFSET(UAudioComponent, ISoundParameterControllerInterface), false },  // 2023819281
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioComponent_Statics::ClassParams = {
		&UAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioComponent()
	{
		if (!Z_Registration_Info_UClass_UAudioComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioComponent.OuterSingleton, Z_Construct_UClass_UAudioComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAudioComponent>()
	{
		return UAudioComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioComponent);
	UAudioComponent::~UAudioComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::EnumInfo[] = {
		{ EAudioComponentPlayState_StaticEnum, TEXT("EAudioComponentPlayState"), &Z_Registration_Info_UEnum_EAudioComponentPlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1692706153U) },
		{ EAudioFaderCurve_StaticEnum, TEXT("EAudioFaderCurve"), &Z_Registration_Info_UEnum_EAudioFaderCurve, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1730655904U) },
		{ EModulationDestination_StaticEnum, TEXT("EModulationDestination"), &Z_Registration_Info_UEnum_EModulationDestination, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1769542277U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::ScriptStructInfo[] = {
		{ FAudioComponentParam::StaticStruct, Z_Construct_UScriptStruct_FAudioComponentParam_Statics::NewStructOps, TEXT("AudioComponentParam"), &Z_Registration_Info_UScriptStruct_AudioComponentParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioComponentParam), 2667414472U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInitialActiveSoundParams, UInitialActiveSoundParams::StaticClass, TEXT("UInitialActiveSoundParams"), &Z_Registration_Info_UClass_UInitialActiveSoundParams, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInitialActiveSoundParams), 1711531556U) },
		{ Z_Construct_UClass_UAudioComponent, UAudioComponent::StaticClass, TEXT("UAudioComponent"), &Z_Registration_Info_UClass_UAudioComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioComponent), 436453712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_2169583747(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
