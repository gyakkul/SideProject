// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Quartz/AudioMixerClockHandle.h"
#include "../../Source/Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerClockHandle() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzClockHandle();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzClockHandle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandQuantization();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzQuantizationBoundary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References
	DEFINE_FUNCTION(UQuartzClockHandle::execGetBeatsPerMinute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBeatsPerMinute(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execGetThirtySecondNotesPerMinute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetThirtySecondNotesPerMinute(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execGetSecondsPerTick)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSecondsPerTick(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execGetTicksPerSecond)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTicksPerSecond(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execGetMillisecondsPerTick)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMillisecondsPerTick(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execSetBeatsPerMinute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BeatsPerMinute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeatsPerMinute(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),Z_Param_Out_ClockHandle,Z_Param_BeatsPerMinute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execSetThirtySecondNotesPerMinute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThirtySecondsNotesPerMinute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThirtySecondNotesPerMinute(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),Z_Param_Out_ClockHandle,Z_Param_ThirtySecondsNotesPerMinute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execSetSecondsPerTick)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SecondsPerTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSecondsPerTick(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),Z_Param_Out_ClockHandle,Z_Param_SecondsPerTick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execSetTicksPerSecond)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TicksPerSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTicksPerSecond(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),Z_Param_Out_ClockHandle,Z_Param_TicksPerSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execSetMillisecondsPerTick)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FQuartzQuantizationBoundary,Z_Param_Out_QuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MillisecondsPerTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMillisecondsPerTick(Z_Param_WorldContextObject,Z_Param_Out_QuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_Delegate),Z_Param_Out_ClockHandle,Z_Param_MillisecondsPerTick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execUnsubscribeFromAllTimeDivisions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeFromAllTimeDivisions(Z_Param_WorldContextObject,Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execUnsubscribeFromTimeDivision)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EQuartzCommandQuantization,Z_Param_InQuantizationBoundary);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeFromTimeDivision(Z_Param_WorldContextObject,EQuartzCommandQuantization(Z_Param_InQuantizationBoundary),Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execSubscribeToAllQuantizationEvents)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnQuantizationEvent);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeToAllQuantizationEvents(Z_Param_WorldContextObject,FOnQuartzMetronomeEventBP(Z_Param_Out_OnQuantizationEvent),Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execSubscribeToQuantizationEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EQuartzCommandQuantization,Z_Param_InQuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnQuantizationEvent);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeToQuantizationEvent(Z_Param_WorldContextObject,EQuartzCommandQuantization(Z_Param_InQuantizationBoundary),FOnQuartzMetronomeEventBP(Z_Param_Out_OnQuantizationEvent),Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execStartOtherClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_OtherClockName);
		P_GET_STRUCT(FQuartzQuantizationBoundary,Z_Param_InQuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartOtherClock(Z_Param_WorldContextObject,Z_Param_OtherClockName,Z_Param_InQuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execGetEstimatedRunTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEstimatedRunTime(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execGetCurrentTimestamp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuartzTransportTimeStamp*)Z_Param__Result=P_THIS->GetCurrentTimestamp(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execGetDurationOfQuantizationTypeInSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(EQuartzCommandQuantization,Z_Param_Out_QuantizationType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDurationOfQuantizationTypeInSeconds(Z_Param_WorldContextObject,(EQuartzCommandQuantization&)(Z_Param_Out_QuantizationType),Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execIsClockRunning)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClockRunning(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execResetTransportQuantized)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FQuartzQuantizationBoundary,Z_Param_InQuantizationBoundary);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTransportQuantized(Z_Param_WorldContextObject,Z_Param_InQuantizationBoundary,FOnQuartzCommandEventBP(Z_Param_Out_InDelegate),Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execResetTransport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTransport(Z_Param_WorldContextObject,FOnQuartzCommandEventBP(Z_Param_Out_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execResumeClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeClock(Z_Param_WorldContextObject,Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execPauseClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseClock(Z_Param_WorldContextObject,Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execStopClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_CancelPendingEvents);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopClock(Z_Param_WorldContextObject,Z_Param_CancelPendingEvents,Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzClockHandle::execStartClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_ClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartClock(Z_Param_WorldContextObject,Z_Param_Out_ClockHandle);
		P_NATIVE_END;
	}
	void UQuartzClockHandle::StaticRegisterNativesUQuartzClockHandle()
	{
		UClass* Class = UQuartzClockHandle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBeatsPerMinute", &UQuartzClockHandle::execGetBeatsPerMinute },
			{ "GetCurrentTimestamp", &UQuartzClockHandle::execGetCurrentTimestamp },
			{ "GetDurationOfQuantizationTypeInSeconds", &UQuartzClockHandle::execGetDurationOfQuantizationTypeInSeconds },
			{ "GetEstimatedRunTime", &UQuartzClockHandle::execGetEstimatedRunTime },
			{ "GetMillisecondsPerTick", &UQuartzClockHandle::execGetMillisecondsPerTick },
			{ "GetSecondsPerTick", &UQuartzClockHandle::execGetSecondsPerTick },
			{ "GetThirtySecondNotesPerMinute", &UQuartzClockHandle::execGetThirtySecondNotesPerMinute },
			{ "GetTicksPerSecond", &UQuartzClockHandle::execGetTicksPerSecond },
			{ "IsClockRunning", &UQuartzClockHandle::execIsClockRunning },
			{ "PauseClock", &UQuartzClockHandle::execPauseClock },
			{ "ResetTransport", &UQuartzClockHandle::execResetTransport },
			{ "ResetTransportQuantized", &UQuartzClockHandle::execResetTransportQuantized },
			{ "ResumeClock", &UQuartzClockHandle::execResumeClock },
			{ "SetBeatsPerMinute", &UQuartzClockHandle::execSetBeatsPerMinute },
			{ "SetMillisecondsPerTick", &UQuartzClockHandle::execSetMillisecondsPerTick },
			{ "SetSecondsPerTick", &UQuartzClockHandle::execSetSecondsPerTick },
			{ "SetThirtySecondNotesPerMinute", &UQuartzClockHandle::execSetThirtySecondNotesPerMinute },
			{ "SetTicksPerSecond", &UQuartzClockHandle::execSetTicksPerSecond },
			{ "StartClock", &UQuartzClockHandle::execStartClock },
			{ "StartOtherClock", &UQuartzClockHandle::execStartOtherClock },
			{ "StopClock", &UQuartzClockHandle::execStopClock },
			{ "SubscribeToAllQuantizationEvents", &UQuartzClockHandle::execSubscribeToAllQuantizationEvents },
			{ "SubscribeToQuantizationEvent", &UQuartzClockHandle::execSubscribeToQuantizationEvent },
			{ "UnsubscribeFromAllTimeDivisions", &UQuartzClockHandle::execUnsubscribeFromAllTimeDivisions },
			{ "UnsubscribeFromTimeDivision", &UQuartzClockHandle::execUnsubscribeFromTimeDivision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics
	{
		struct QuartzClockHandle_eventGetBeatsPerMinute_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetBeatsPerMinute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetBeatsPerMinute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetBeatsPerMinute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::QuartzClockHandle_eventGetBeatsPerMinute_Parms), Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics
	{
		struct QuartzClockHandle_eventGetCurrentTimestamp_Parms
		{
			const UObject* WorldContextObject;
			FQuartzTransportTimeStamp ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetCurrentTimestamp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetCurrentTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuartzTransportTimeStamp, METADATA_PARAMS(nullptr, 0) }; // 3271576865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "//Retrieves a timestamp for the clock\n" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Retrieves a timestamp for the clock" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetCurrentTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::QuartzClockHandle_eventGetCurrentTimestamp_Parms), Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics
	{
		struct QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms
		{
			const UObject* WorldContextObject;
			EQuartzCommandQuantization QuantizationType;
			float Multiplier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuantizationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuantizationType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType = { "QuantizationType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms, QuantizationType), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_MetaData)) }; // 607654323
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "Comment", "/** Returns the duration in seconds of the given Quantization Type\n\x09 *\n\x09 * @param The Quantization type to measure\n\x09 * @param The quantity of the Quantization Type to calculate the time of\n\x09 * @return The duration, in seconds, of a multiplier amount of the Quantization Type, or -1 in the case the clock is invalid\n\x09 */" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Returns the duration in seconds of the given Quantization Type\n\n@param The Quantization type to measure\n@param The quantity of the Quantization Type to calculate the time of\n@return The duration, in seconds, of a multiplier amount of the Quantization Type, or -1 in the case the clock is invalid" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetDurationOfQuantizationTypeInSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::QuartzClockHandle_eventGetDurationOfQuantizationTypeInSeconds_Parms), Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics
	{
		struct QuartzClockHandle_eventGetEstimatedRunTime_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetEstimatedRunTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetEstimatedRunTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate\n" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetEstimatedRunTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::QuartzClockHandle_eventGetEstimatedRunTime_Parms), Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics
	{
		struct QuartzClockHandle_eventGetMillisecondsPerTick_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetMillisecondsPerTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetMillisecondsPerTick_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Comment", "// Metronome getters\n" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Metronome getters" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetMillisecondsPerTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::QuartzClockHandle_eventGetMillisecondsPerTick_Parms), Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics
	{
		struct QuartzClockHandle_eventGetSecondsPerTick_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetSecondsPerTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetSecondsPerTick_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetSecondsPerTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::QuartzClockHandle_eventGetSecondsPerTick_Parms), Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics
	{
		struct QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetThirtySecondNotesPerMinute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::QuartzClockHandle_eventGetThirtySecondNotesPerMinute_Parms), Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics
	{
		struct QuartzClockHandle_eventGetTicksPerSecond_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetTicksPerSecond_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventGetTicksPerSecond_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quantization" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "GetTicksPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::QuartzClockHandle_eventGetTicksPerSecond_Parms), Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics
	{
		struct QuartzClockHandle_eventIsClockRunning_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventIsClockRunning_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuartzClockHandle_eventIsClockRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuartzClockHandle_eventIsClockRunning_Parms), &Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "IsClockRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::QuartzClockHandle_eventIsClockRunning_Parms), Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics
	{
		struct QuartzClockHandle_eventPauseClock_Parms
		{
			const UObject* WorldContextObject;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventPauseClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventPauseClock_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "PauseClock", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::QuartzClockHandle_eventPauseClock_Parms), Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_PauseClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_PauseClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics
	{
		struct QuartzClockHandle_eventResetTransport_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate InDelegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventResetTransport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventResetTransport_Parms, InDelegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_InDelegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quartz Clock" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "ResetTransport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::QuartzClockHandle_eventResetTransport_Parms), Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_ResetTransport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_ResetTransport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics
	{
		struct QuartzClockHandle_eventResetTransportQuantized_Parms
		{
			const UObject* WorldContextObject;
			FQuartzQuantizationBoundary InQuantizationBoundary;
			FScriptDelegate InDelegate;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InQuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventResetTransportQuantized_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventResetTransportQuantized_Parms, InQuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(nullptr, 0) }; // 1395895600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventResetTransportQuantized_Parms, InDelegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InDelegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventResetTransportQuantized_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InQuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_InDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quartz Clock" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "ResetTransportQuantized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::QuartzClockHandle_eventResetTransportQuantized_Parms), Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics
	{
		struct QuartzClockHandle_eventResumeClock_Parms
		{
			const UObject* WorldContextObject;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventResumeClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventResumeClock_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "ResumeClock", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::QuartzClockHandle_eventResumeClock_Parms), Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_ResumeClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_ResumeClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics
	{
		struct QuartzClockHandle_eventSetBeatsPerMinute_Parms
		{
			const UObject* WorldContextObject;
			FQuartzQuantizationBoundary QuantizationBoundary;
			FScriptDelegate Delegate;
			UQuartzClockHandle* ClockHandle;
			float BeatsPerMinute;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatsPerMinute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_QuantizationBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_QuantizationBoundary_MetaData)) }; // 1395895600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_Delegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_BeatsPerMinute = { "BeatsPerMinute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetBeatsPerMinute_Parms, BeatsPerMinute), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_QuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_ClockHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::NewProp_BeatsPerMinute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "CPP_Default_BeatsPerMinute", "60.000000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetBeatsPerMinute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::QuartzClockHandle_eventSetBeatsPerMinute_Parms), Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics
	{
		struct QuartzClockHandle_eventSetMillisecondsPerTick_Parms
		{
			const UObject* WorldContextObject;
			FQuartzQuantizationBoundary QuantizationBoundary;
			FScriptDelegate Delegate;
			UQuartzClockHandle* ClockHandle;
			float MillisecondsPerTick;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MillisecondsPerTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_QuantizationBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_QuantizationBoundary_MetaData)) }; // 1395895600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_Delegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_MillisecondsPerTick = { "MillisecondsPerTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetMillisecondsPerTick_Parms, MillisecondsPerTick), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_QuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_ClockHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::NewProp_MillisecondsPerTick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "Comment", "// Metronome Alteration (setters)\n" },
		{ "CPP_Default_MillisecondsPerTick", "100.000000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Metronome Alteration (setters)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetMillisecondsPerTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::QuartzClockHandle_eventSetMillisecondsPerTick_Parms), Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics
	{
		struct QuartzClockHandle_eventSetSecondsPerTick_Parms
		{
			const UObject* WorldContextObject;
			FQuartzQuantizationBoundary QuantizationBoundary;
			FScriptDelegate Delegate;
			UQuartzClockHandle* ClockHandle;
			float SecondsPerTick;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsPerTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_QuantizationBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_QuantizationBoundary_MetaData)) }; // 1395895600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_Delegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_SecondsPerTick = { "SecondsPerTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetSecondsPerTick_Parms, SecondsPerTick), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_QuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_ClockHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::NewProp_SecondsPerTick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "CPP_Default_SecondsPerTick", "0.250000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetSecondsPerTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::QuartzClockHandle_eventSetSecondsPerTick_Parms), Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics
	{
		struct QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms
		{
			const UObject* WorldContextObject;
			FQuartzQuantizationBoundary QuantizationBoundary;
			FScriptDelegate Delegate;
			UQuartzClockHandle* ClockHandle;
			float ThirtySecondsNotesPerMinute;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirtySecondsNotesPerMinute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_QuantizationBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_QuantizationBoundary_MetaData)) }; // 1395895600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_Delegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_ThirtySecondsNotesPerMinute = { "ThirtySecondsNotesPerMinute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms, ThirtySecondsNotesPerMinute), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_QuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_ClockHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::NewProp_ThirtySecondsNotesPerMinute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "CPP_Default_ThirtySecondsNotesPerMinute", "960.000000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetThirtySecondNotesPerMinute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::QuartzClockHandle_eventSetThirtySecondNotesPerMinute_Parms), Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics
	{
		struct QuartzClockHandle_eventSetTicksPerSecond_Parms
		{
			const UObject* WorldContextObject;
			FQuartzQuantizationBoundary QuantizationBoundary;
			FScriptDelegate Delegate;
			UQuartzClockHandle* ClockHandle;
			float TicksPerSecond;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationBoundary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TicksPerSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_QuantizationBoundary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_QuantizationBoundary = { "QuantizationBoundary", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, QuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_QuantizationBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_QuantizationBoundary_MetaData)) }; // 1395895600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_Delegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_TicksPerSecond = { "TicksPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSetTicksPerSecond_Parms, TicksPerSecond), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_QuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_ClockHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::NewProp_TicksPerSecond,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "QuantizationBoundary, Delegate" },
		{ "AutoCreateRefTerm", "QuantizationBoundary, Delegate" },
		{ "Category", "Quantization" },
		{ "CPP_Default_TicksPerSecond", "10.000000" },
		{ "Keywords", "BPM, Tempo" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SetTicksPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::QuartzClockHandle_eventSetTicksPerSecond_Parms), Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics
	{
		struct QuartzClockHandle_eventStartClock_Parms
		{
			const UObject* WorldContextObject;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventStartClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventStartClock_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "Comment", "// Clock manipulation\n" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Clock manipulation" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "StartClock", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::QuartzClockHandle_eventStartClock_Parms), Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_StartClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_StartClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics
	{
		struct QuartzClockHandle_eventStartOtherClock_Parms
		{
			const UObject* WorldContextObject;
			FName OtherClockName;
			FQuartzQuantizationBoundary InQuantizationBoundary;
			FScriptDelegate InDelegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OtherClockName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InQuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventStartOtherClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_OtherClockName = { "OtherClockName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventStartOtherClock_Parms, OtherClockName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventStartOtherClock_Parms, InQuantizationBoundary), Z_Construct_UScriptStruct_FQuartzQuantizationBoundary, METADATA_PARAMS(nullptr, 0) }; // 1395895600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventStartOtherClock_Parms, InDelegate), Z_Construct_UDelegateFunction_Engine_OnQuartzCommandEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InDelegate_MetaData)) }; // 70651629
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_OtherClockName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InQuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InDelegate" },
		{ "Category", "Quartz Clock" },
		{ "Comment", "// \"other\" clock manipulation\n" },
		{ "Keywords", "Transport, Counter" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "\"other\" clock manipulation" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "StartOtherClock", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::QuartzClockHandle_eventStartOtherClock_Parms), Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics
	{
		struct QuartzClockHandle_eventStopClock_Parms
		{
			const UObject* WorldContextObject;
			bool CancelPendingEvents;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_CancelPendingEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CancelPendingEvents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventStopClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents_SetBit(void* Obj)
	{
		((QuartzClockHandle_eventStopClock_Parms*)Obj)->CancelPendingEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents = { "CancelPendingEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuartzClockHandle_eventStopClock_Parms), &Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventStopClock_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_CancelPendingEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "StopClock", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::QuartzClockHandle_eventStopClock_Parms), Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_StopClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_StopClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics
	{
		struct QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate OnQuantizationEvent;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuantizationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnQuantizationEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_OnQuantizationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_OnQuantizationEvent = { "OnQuantizationEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms, OnQuantizationEvent), Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_OnQuantizationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_OnQuantizationEvent_MetaData)) }; // 1088338216
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_OnQuantizationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SubscribeToAllQuantizationEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::QuartzClockHandle_eventSubscribeToAllQuantizationEvents_Parms), Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics
	{
		struct QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms
		{
			const UObject* WorldContextObject;
			EQuartzCommandQuantization InQuantizationBoundary;
			FScriptDelegate OnQuantizationEvent;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQuantizationBoundary_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InQuantizationBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuantizationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnQuantizationEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_InQuantizationBoundary_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms, InQuantizationBoundary), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(nullptr, 0) }; // 607654323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_OnQuantizationEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_OnQuantizationEvent = { "OnQuantizationEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms, OnQuantizationEvent), Z_Construct_UDelegateFunction_Engine_OnQuartzMetronomeEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_OnQuantizationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_OnQuantizationEvent_MetaData)) }; // 1088338216
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_InQuantizationBoundary_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_InQuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_OnQuantizationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "Comment", "// Metronome subscription\n" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "Metronome subscription" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "SubscribeToQuantizationEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::QuartzClockHandle_eventSubscribeToQuantizationEvent_Parms), Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics
	{
		struct QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms
		{
			const UObject* WorldContextObject;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "UnsubscribeFromAllTimeDivisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::QuartzClockHandle_eventUnsubscribeFromAllTimeDivisions_Parms), Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics
	{
		struct QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms
		{
			const UObject* WorldContextObject;
			EQuartzCommandQuantization InQuantizationBoundary;
			UQuartzClockHandle* ClockHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQuantizationBoundary_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InQuantizationBoundary;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClockHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_InQuantizationBoundary_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_InQuantizationBoundary = { "InQuantizationBoundary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms, InQuantizationBoundary), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(nullptr, 0) }; // 607654323
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_ClockHandle = { "ClockHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms, ClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_InQuantizationBoundary_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_InQuantizationBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::NewProp_ClockHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzClockHandle, nullptr, "UnsubscribeFromTimeDivision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::QuartzClockHandle_eventUnsubscribeFromTimeDivision_Parms), Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuartzClockHandle);
	UClass* Z_Construct_UClass_UQuartzClockHandle_NoRegister()
	{
		return UQuartzClockHandle::StaticClass();
	}
	struct Z_Construct_UClass_UQuartzClockHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuartzClockHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuartzClockHandle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetBeatsPerMinute, "GetBeatsPerMinute" }, // 1708398018
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetCurrentTimestamp, "GetCurrentTimestamp" }, // 2541773186
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds, "GetDurationOfQuantizationTypeInSeconds" }, // 907531957
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetEstimatedRunTime, "GetEstimatedRunTime" }, // 1717058980
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetMillisecondsPerTick, "GetMillisecondsPerTick" }, // 978279515
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetSecondsPerTick, "GetSecondsPerTick" }, // 2997616297
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetThirtySecondNotesPerMinute, "GetThirtySecondNotesPerMinute" }, // 3799651103
		{ &Z_Construct_UFunction_UQuartzClockHandle_GetTicksPerSecond, "GetTicksPerSecond" }, // 480588237
		{ &Z_Construct_UFunction_UQuartzClockHandle_IsClockRunning, "IsClockRunning" }, // 3261016366
		{ &Z_Construct_UFunction_UQuartzClockHandle_PauseClock, "PauseClock" }, // 2137899634
		{ &Z_Construct_UFunction_UQuartzClockHandle_ResetTransport, "ResetTransport" }, // 1281073175
		{ &Z_Construct_UFunction_UQuartzClockHandle_ResetTransportQuantized, "ResetTransportQuantized" }, // 837901927
		{ &Z_Construct_UFunction_UQuartzClockHandle_ResumeClock, "ResumeClock" }, // 2988061846
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetBeatsPerMinute, "SetBeatsPerMinute" }, // 1688724242
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetMillisecondsPerTick, "SetMillisecondsPerTick" }, // 1221938886
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetSecondsPerTick, "SetSecondsPerTick" }, // 3090862734
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetThirtySecondNotesPerMinute, "SetThirtySecondNotesPerMinute" }, // 3574913408
		{ &Z_Construct_UFunction_UQuartzClockHandle_SetTicksPerSecond, "SetTicksPerSecond" }, // 728280169
		{ &Z_Construct_UFunction_UQuartzClockHandle_StartClock, "StartClock" }, // 3656709884
		{ &Z_Construct_UFunction_UQuartzClockHandle_StartOtherClock, "StartOtherClock" }, // 3116236702
		{ &Z_Construct_UFunction_UQuartzClockHandle_StopClock, "StopClock" }, // 3616734323
		{ &Z_Construct_UFunction_UQuartzClockHandle_SubscribeToAllQuantizationEvents, "SubscribeToAllQuantizationEvents" }, // 41723092
		{ &Z_Construct_UFunction_UQuartzClockHandle_SubscribeToQuantizationEvent, "SubscribeToQuantizationEvent" }, // 3013486330
		{ &Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromAllTimeDivisions, "UnsubscribeFromAllTimeDivisions" }, // 2491821741
		{ &Z_Construct_UFunction_UQuartzClockHandle_UnsubscribeFromTimeDivision, "UnsubscribeFromTimeDivision" }, // 619087310
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuartzClockHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Quartz" },
		{ "Comment", "/**\n *  This class is a BP / Game thread wrapper around FQuartzClockProxy\n *\x09(to talk to the underlying clock)\n \n *  ...and inherits from FQuartzTickableObject\n *\x09(to listen to the underlying clock)\n *  \n *  It can subscribe to Quantized Event & Metronome delegates to synchronize\n *  gameplay & VFX to Quartz events fired from the Audio Engine\n */" },
		{ "IncludePath", "Quartz/AudioMixerClockHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quartz/AudioMixerClockHandle.h" },
		{ "ToolTip", "This class is a BP / Game thread wrapper around FQuartzClockProxy\n   (to talk to the underlying clock)\n\n...and inherits from FQuartzTickableObject\n   (to listen to the underlying clock)\n\nIt can subscribe to Quantized Event & Metronome delegates to synchronize\ngameplay & VFX to Quartz events fired from the Audio Engine" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuartzClockHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuartzClockHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuartzClockHandle_Statics::ClassParams = {
		&UQuartzClockHandle::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UQuartzClockHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuartzClockHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuartzClockHandle()
	{
		if (!Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton, Z_Construct_UClass_UQuartzClockHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuartzClockHandle.OuterSingleton;
	}
	template<> AUDIOMIXER_API UClass* StaticClass<UQuartzClockHandle>()
	{
		return UQuartzClockHandle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuartzClockHandle);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuartzClockHandle, UQuartzClockHandle::StaticClass, TEXT("UQuartzClockHandle"), &Z_Registration_Info_UClass_UQuartzClockHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuartzClockHandle), 1919613557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_736887177(TEXT("/Script/AudioMixer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
