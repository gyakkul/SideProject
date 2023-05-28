// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SynthComponents/SynthComponentWaveTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentWaveTable() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthSamplePlayer();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthSamplePlayer_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType();
	SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature();
	SYNTHESIS_API UFunction* Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESamplePlayerSeekType;
	static UEnum* ESamplePlayerSeekType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESamplePlayerSeekType"));
		}
		return Z_Registration_Info_UEnum_ESamplePlayerSeekType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESamplePlayerSeekType>()
	{
		return ESamplePlayerSeekType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::Enumerators[] = {
		{ "ESamplePlayerSeekType::FromBeginning", (int64)ESamplePlayerSeekType::FromBeginning },
		{ "ESamplePlayerSeekType::FromCurrentPosition", (int64)ESamplePlayerSeekType::FromCurrentPosition },
		{ "ESamplePlayerSeekType::FromEnd", (int64)ESamplePlayerSeekType::FromEnd },
		{ "ESamplePlayerSeekType::Count", (int64)ESamplePlayerSeekType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESamplePlayerSeekType::Count" },
		{ "FromBeginning.Name", "ESamplePlayerSeekType::FromBeginning" },
		{ "FromCurrentPosition.Name", "ESamplePlayerSeekType::FromCurrentPosition" },
		{ "FromEnd.Name", "ESamplePlayerSeekType::FromEnd" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESamplePlayerSeekType",
		"ESamplePlayerSeekType",
		Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType()
	{
		if (!Z_Registration_Info_UEnum_ESamplePlayerSeekType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESamplePlayerSeekType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESamplePlayerSeekType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when a sample has finished loading into the sample player\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
		{ "ToolTip", "Called when a sample has finished loading into the sample player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnSampleLoaded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSampleLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnSampleLoaded)
{
	OnSampleLoaded.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics
	{
		struct _Script_Synthesis_eventOnSamplePlaybackProgress_Parms
		{
			float ProgressPercent;
			float ProgressTimeSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressPercent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::NewProp_ProgressPercent = { "ProgressPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Synthesis_eventOnSamplePlaybackProgress_Parms, ProgressPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::NewProp_ProgressTimeSeconds = { "ProgressTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Synthesis_eventOnSamplePlaybackProgress_Parms, ProgressTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::NewProp_ProgressPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::NewProp_ProgressTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called while a sample player is playing back. Indicates the playhead progress in percent and as absolute time value (within the file).\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
		{ "ToolTip", "Called while a sample player is playing back. Indicates the playhead progress in percent and as absolute time value (within the file)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Synthesis, nullptr, "OnSamplePlaybackProgress__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::_Script_Synthesis_eventOnSamplePlaybackProgress_Parms), Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSamplePlaybackProgress_DelegateWrapper(const FMulticastScriptDelegate& OnSamplePlaybackProgress, float ProgressPercent, float ProgressTimeSeconds)
{
	struct _Script_Synthesis_eventOnSamplePlaybackProgress_Parms
	{
		float ProgressPercent;
		float ProgressTimeSeconds;
	};
	_Script_Synthesis_eventOnSamplePlaybackProgress_Parms Parms;
	Parms.ProgressPercent=ProgressPercent;
	Parms.ProgressTimeSeconds=ProgressTimeSeconds;
	OnSamplePlaybackProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USynthSamplePlayer::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execGetCurrentPlaybackProgressPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPlaybackProgressPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execGetCurrentPlaybackProgressTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPlaybackProgressTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execGetSampleDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSampleDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSetScrubTimeWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InScrubTimeWidthSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrubTimeWidth(Z_Param_InScrubTimeWidthSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSetScrubMode)
	{
		P_GET_UBOOL(Z_Param_bScrubMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScrubMode(Z_Param_bScrubMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSeekToTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSec);
		P_GET_ENUM(ESamplePlayerSeekType,Z_Param_SeekType);
		P_GET_UBOOL(Z_Param_bWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeekToTime(Z_Param_TimeSec,ESamplePlayerSeekType(Z_Param_SeekType),Z_Param_bWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSetPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitch(Z_Param_InPitch,Z_Param_TimeSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthSamplePlayer::execSetSoundWave)
	{
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundWave(Z_Param_InSoundWave);
		P_NATIVE_END;
	}
	void USynthSamplePlayer::StaticRegisterNativesUSynthSamplePlayer()
	{
		UClass* Class = USynthSamplePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPlaybackProgressPercent", &USynthSamplePlayer::execGetCurrentPlaybackProgressPercent },
			{ "GetCurrentPlaybackProgressTime", &USynthSamplePlayer::execGetCurrentPlaybackProgressTime },
			{ "GetSampleDuration", &USynthSamplePlayer::execGetSampleDuration },
			{ "IsLoaded", &USynthSamplePlayer::execIsLoaded },
			{ "SeekToTime", &USynthSamplePlayer::execSeekToTime },
			{ "SetPitch", &USynthSamplePlayer::execSetPitch },
			{ "SetScrubMode", &USynthSamplePlayer::execSetScrubMode },
			{ "SetScrubTimeWidth", &USynthSamplePlayer::execSetScrubTimeWidth },
			{ "SetSoundWave", &USynthSamplePlayer::execSetSoundWave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics
	{
		struct SynthSamplePlayer_eventGetCurrentPlaybackProgressPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventGetCurrentPlaybackProgressPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "GetCurrentPlaybackProgressPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::SynthSamplePlayer_eventGetCurrentPlaybackProgressPercent_Parms), Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics
	{
		struct SynthSamplePlayer_eventGetCurrentPlaybackProgressTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventGetCurrentPlaybackProgressTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "GetCurrentPlaybackProgressTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::SynthSamplePlayer_eventGetCurrentPlaybackProgressTime_Parms), Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics
	{
		struct SynthSamplePlayer_eventGetSampleDuration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventGetSampleDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "GetSampleDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::SynthSamplePlayer_eventGetSampleDuration_Parms), Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics
	{
		struct SynthSamplePlayer_eventIsLoaded_Parms
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
	void Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SynthSamplePlayer_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SynthSamplePlayer_eventIsLoaded_Parms), &Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "IsLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::SynthSamplePlayer_eventIsLoaded_Parms), Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics
	{
		struct SynthSamplePlayer_eventSeekToTime_Parms
		{
			float TimeSec;
			ESamplePlayerSeekType SeekType;
			bool bWrap;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SeekType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SeekType;
		static void NewProp_bWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventSeekToTime_Parms, TimeSec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_SeekType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_SeekType = { "SeekType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventSeekToTime_Parms, SeekType), Z_Construct_UEnum_Synthesis_ESamplePlayerSeekType, METADATA_PARAMS(nullptr, 0) }; // 4176681154
	void Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap_SetBit(void* Obj)
	{
		((SynthSamplePlayer_eventSeekToTime_Parms*)Obj)->bWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap = { "bWrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SynthSamplePlayer_eventSeekToTime_Parms), &Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_TimeSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_SeekType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_SeekType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::NewProp_bWrap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "CPP_Default_bWrap", "true" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SeekToTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::SynthSamplePlayer_eventSeekToTime_Parms), Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SeekToTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SeekToTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics
	{
		struct SynthSamplePlayer_eventSetPitch_Parms
		{
			float InPitch;
			float TimeSec;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::NewProp_InPitch = { "InPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventSetPitch_Parms, InPitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventSetPitch_Parms, TimeSec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::NewProp_InPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::NewProp_TimeSec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SetPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::SynthSamplePlayer_eventSetPitch_Parms), Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics
	{
		struct SynthSamplePlayer_eventSetScrubMode_Parms
		{
			bool bScrubMode;
		};
		static void NewProp_bScrubMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScrubMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode_SetBit(void* Obj)
	{
		((SynthSamplePlayer_eventSetScrubMode_Parms*)Obj)->bScrubMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode = { "bScrubMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SynthSamplePlayer_eventSetScrubMode_Parms), &Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::NewProp_bScrubMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SetScrubMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::SynthSamplePlayer_eventSetScrubMode_Parms), Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics
	{
		struct SynthSamplePlayer_eventSetScrubTimeWidth_Parms
		{
			float InScrubTimeWidthSec;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InScrubTimeWidthSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::NewProp_InScrubTimeWidthSec = { "InScrubTimeWidthSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventSetScrubTimeWidth_Parms, InScrubTimeWidthSec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::NewProp_InScrubTimeWidthSec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SetScrubTimeWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::SynthSamplePlayer_eventSetScrubTimeWidth_Parms), Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics
	{
		struct SynthSamplePlayer_eventSetSoundWave_Parms
		{
			USoundWave* InSoundWave;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthSamplePlayer_eventSetSoundWave_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::NewProp_InSoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// This will override the current sound wave if one is set, stop audio, and reload the new sound wave\n" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
		{ "ToolTip", "This will override the current sound wave if one is set, stop audio, and reload the new sound wave" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthSamplePlayer, nullptr, "SetSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::SynthSamplePlayer_eventSetSoundWave_Parms), Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthSamplePlayer);
	UClass* Z_Construct_UClass_USynthSamplePlayer_NoRegister()
	{
		return USynthSamplePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USynthSamplePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSampleLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSampleLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSamplePlaybackProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSamplePlaybackProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthSamplePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthSamplePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressPercent, "GetCurrentPlaybackProgressPercent" }, // 2171874114
		{ &Z_Construct_UFunction_USynthSamplePlayer_GetCurrentPlaybackProgressTime, "GetCurrentPlaybackProgressTime" }, // 4139624101
		{ &Z_Construct_UFunction_USynthSamplePlayer_GetSampleDuration, "GetSampleDuration" }, // 1530074019
		{ &Z_Construct_UFunction_USynthSamplePlayer_IsLoaded, "IsLoaded" }, // 2555880142
		{ &Z_Construct_UFunction_USynthSamplePlayer_SeekToTime, "SeekToTime" }, // 2680425946
		{ &Z_Construct_UFunction_USynthSamplePlayer_SetPitch, "SetPitch" }, // 2319427689
		{ &Z_Construct_UFunction_USynthSamplePlayer_SetScrubMode, "SetScrubMode" }, // 284472628
		{ &Z_Construct_UFunction_USynthSamplePlayer_SetScrubTimeWidth, "SetScrubTimeWidth" }, // 4079808002
		{ &Z_Construct_UFunction_USynthSamplePlayer_SetSoundWave, "SetSoundWave" }, // 3429027972
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSamplePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentWaveTable.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthSamplePlayer, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded_MetaData[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded = { "OnSampleLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthSamplePlayer, OnSampleLoaded), Z_Construct_UDelegateFunction_Synthesis_OnSampleLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded_MetaData)) }; // 169951323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress_MetaData[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentWaveTable.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress = { "OnSamplePlaybackProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthSamplePlayer, OnSamplePlaybackProgress), Z_Construct_UDelegateFunction_Synthesis_OnSamplePlaybackProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress_MetaData)) }; // 1263505774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthSamplePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSampleLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthSamplePlayer_Statics::NewProp_OnSamplePlaybackProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthSamplePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthSamplePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthSamplePlayer_Statics::ClassParams = {
		&USynthSamplePlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthSamplePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USynthSamplePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthSamplePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthSamplePlayer()
	{
		if (!Z_Registration_Info_UClass_USynthSamplePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthSamplePlayer.OuterSingleton, Z_Construct_UClass_USynthSamplePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USynthSamplePlayer.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USynthSamplePlayer>()
	{
		return USynthSamplePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthSamplePlayer);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_Statics::EnumInfo[] = {
		{ ESamplePlayerSeekType_StaticEnum, TEXT("ESamplePlayerSeekType"), &Z_Registration_Info_UEnum_ESamplePlayerSeekType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4176681154U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USynthSamplePlayer, USynthSamplePlayer::StaticClass, TEXT("USynthSamplePlayer"), &Z_Registration_Info_UClass_USynthSamplePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthSamplePlayer), 3270932725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_3047103210(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
