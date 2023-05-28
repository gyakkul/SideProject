// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimedDataMonitorSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "ITimedDataInput.h"
#include "TimedDataMonitorCalibration.h"
#include "TimedDataMonitorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimedDataMonitorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderEventMessage();
	TIMEDDATAMONITOR_API UClass* Z_Construct_UClass_UTimedDataMonitorSubsystem();
	TIMEDDATAMONITOR_API UClass* Z_Construct_UClass_UTimedDataMonitorSubsystem_NoRegister();
	TIMEDDATAMONITOR_API UEnum* Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState();
	TIMEDDATAMONITOR_API UEnum* Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled();
	TIMEDDATAMONITOR_API UFunction* Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult();
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType();
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputState();
	TIMEMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataChannelSampleTime();
	TIMEMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataInputEvaluationData();
	UPackage* Z_Construct_UPackage__Script_TimedDataMonitor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimedDataMonitorInputEnabled;
	static UEnum* ETimedDataMonitorInputEnabled_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorInputEnabled.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimedDataMonitorInputEnabled.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("ETimedDataMonitorInputEnabled"));
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorInputEnabled.OuterSingleton;
	}
	template<> TIMEDDATAMONITOR_API UEnum* StaticEnum<ETimedDataMonitorInputEnabled>()
	{
		return ETimedDataMonitorInputEnabled_StaticEnum();
	}
	struct Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics::Enumerators[] = {
		{ "ETimedDataMonitorInputEnabled::Disabled", (int64)ETimedDataMonitorInputEnabled::Disabled },
		{ "ETimedDataMonitorInputEnabled::Enabled", (int64)ETimedDataMonitorInputEnabled::Enabled },
		{ "ETimedDataMonitorInputEnabled::MultipleValues", (int64)ETimedDataMonitorInputEnabled::MultipleValues },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Name", "ETimedDataMonitorInputEnabled::Disabled" },
		{ "Enabled.Name", "ETimedDataMonitorInputEnabled::Enabled" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "MultipleValues.Name", "ETimedDataMonitorInputEnabled::MultipleValues" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		"ETimedDataMonitorInputEnabled",
		"ETimedDataMonitorInputEnabled",
		Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorInputEnabled.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimedDataMonitorInputEnabled.InnerSingleton, Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorInputEnabled.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimedDataMonitorEvaluationState;
	static UEnum* ETimedDataMonitorEvaluationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorEvaluationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimedDataMonitorEvaluationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("ETimedDataMonitorEvaluationState"));
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorEvaluationState.OuterSingleton;
	}
	template<> TIMEDDATAMONITOR_API UEnum* StaticEnum<ETimedDataMonitorEvaluationState>()
	{
		return ETimedDataMonitorEvaluationState_StaticEnum();
	}
	struct Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics::Enumerators[] = {
		{ "ETimedDataMonitorEvaluationState::NoSample", (int64)ETimedDataMonitorEvaluationState::NoSample },
		{ "ETimedDataMonitorEvaluationState::OutsideRange", (int64)ETimedDataMonitorEvaluationState::OutsideRange },
		{ "ETimedDataMonitorEvaluationState::InsideRange", (int64)ETimedDataMonitorEvaluationState::InsideRange },
		{ "ETimedDataMonitorEvaluationState::Disabled", (int64)ETimedDataMonitorEvaluationState::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Name", "ETimedDataMonitorEvaluationState::Disabled" },
		{ "InsideRange.Name", "ETimedDataMonitorEvaluationState::InsideRange" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "NoSample.Name", "ETimedDataMonitorEvaluationState::NoSample" },
		{ "OutsideRange.Name", "ETimedDataMonitorEvaluationState::OutsideRange" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		"ETimedDataMonitorEvaluationState",
		"ETimedDataMonitorEvaluationState",
		Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorEvaluationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimedDataMonitorEvaluationState.InnerSingleton, Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorEvaluationState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTimedDataMonitorChannelConnectionStateEvent>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FTimedDataMonitorChannelConnectionStateEvent cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelConnectionStateEvent;
class UScriptStruct* FTimedDataMonitorChannelConnectionStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelConnectionStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelConnectionStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("TimedDataMonitorChannelConnectionStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelConnectionStateEvent.OuterSingleton;
}
template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<FTimedDataMonitorChannelConnectionStateEvent>()
{
	return FTimedDataMonitorChannelConnectionStateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "TimedSourcesConnectionEvent" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataMonitorChannelConnectionStateEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_NewState_MetaData[] = {
		{ "Category", "Timed Data State" },
		{ "Comment", "/** New state of the channel */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "New state of the channel" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorChannelConnectionStateEvent, NewState), Z_Construct_UEnum_TimeManagement_ETimedDataInputState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_NewState_MetaData)) }; // 4186540132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "Timed Data State" },
		{ "Comment", "/** Input owning that channel */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Input owning that channel" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorChannelConnectionStateEvent, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_ChannelName_MetaData[] = {
		{ "Category", "Timed Data State" },
		{ "Comment", "/** Channel which had a state change */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Channel which had a state change" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorChannelConnectionStateEvent, ChannelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_ChannelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewProp_ChannelName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"TimedDataMonitorChannelConnectionStateEvent",
		sizeof(FTimedDataMonitorChannelConnectionStateEvent),
		alignof(FTimedDataMonitorChannelConnectionStateEvent),
		Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelConnectionStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelConnectionStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelConnectionStateEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTimedDataMonitorChannelEvaluationStateEvent>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FTimedDataMonitorChannelEvaluationStateEvent cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelEvaluationStateEvent;
class UScriptStruct* FTimedDataMonitorChannelEvaluationStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelEvaluationStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelEvaluationStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("TimedDataMonitorChannelEvaluationStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelEvaluationStateEvent.OuterSingleton;
}
template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<FTimedDataMonitorChannelEvaluationStateEvent>()
{
	return FTimedDataMonitorChannelEvaluationStateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "TimedSourcesEvaluationEvent" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataMonitorChannelEvaluationStateEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_NewState_MetaData[] = {
		{ "Category", "Timed Data State" },
		{ "Comment", "/** New state of the channel */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "New state of the channel" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorChannelEvaluationStateEvent, NewState), Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_NewState_MetaData)) }; // 2069583695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "Timed Data State" },
		{ "Comment", "/** Input owning that channel */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Input owning that channel" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorChannelEvaluationStateEvent, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_ChannelName_MetaData[] = {
		{ "Category", "Timed Data State" },
		{ "Comment", "/** Channel which had a state change */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Channel which had a state change" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorChannelEvaluationStateEvent, ChannelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_ChannelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewProp_ChannelName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"TimedDataMonitorChannelEvaluationStateEvent",
		sizeof(FTimedDataMonitorChannelEvaluationStateEvent),
		alignof(FTimedDataMonitorChannelEvaluationStateEvent),
		Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelEvaluationStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelEvaluationStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelEvaluationStateEvent.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TimedDataMonitor, nullptr, "TimedDataIdentifierListChangedSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTimedDataIdentifierListChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& TimedDataIdentifierListChangedSignature)
{
	TimedDataIdentifierListChangedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelEvaluationDistanceToOldestSampleStandardDeviation)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChannelEvaluationDistanceToOldestSampleStandardDeviation(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelEvaluationDistanceToNewestSampleStandardDeviation)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChannelEvaluationDistanceToNewestSampleStandardDeviation(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelEvaluationDistanceToOldestSampleMean)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChannelEvaluationDistanceToOldestSampleMean(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelEvaluationDistanceToNewestSampleMean)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChannelEvaluationDistanceToNewestSampleMean(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelLastEvaluationDataStat)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_GET_STRUCT_REF(FTimedDataInputEvaluationData,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChannelLastEvaluationDataStat(Z_Param_Out_Identifier,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelFrameDroppedStat)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChannelFrameDroppedStat(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelBufferOverflowStat)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChannelBufferOverflowStat(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelBufferUnderflowStat)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChannelBufferUnderflowStat(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execSetChannelDataBufferSize)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_GET_PROPERTY(FIntProperty,Z_Param_BufferSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChannelDataBufferSize(Z_Param_Out_Identifier,Z_Param_BufferSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelDataBufferSize)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChannelDataBufferSize(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelNumberOfSamples)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChannelNumberOfSamples(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelFrameDataTimes)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimedDataChannelSampleTime>*)Z_Param__Result=P_THIS->GetChannelFrameDataTimes(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelNewestDataTime)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimedDataChannelSampleTime*)Z_Param__Result=P_THIS->GetChannelNewestDataTime(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelOldestDataTime)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimedDataChannelSampleTime*)Z_Param__Result=P_THIS->GetChannelOldestDataTime(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelEvaluationState)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimedDataMonitorEvaluationState*)Z_Param__Result=P_THIS->GetChannelEvaluationState(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelConnectionState)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimedDataInputState*)Z_Param__Result=P_THIS->GetChannelConnectionState(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelDisplayName)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetChannelDisplayName(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetChannelInput)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimedDataMonitorInputIdentifier*)Z_Param__Result=P_THIS->GetChannelInput(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execSetChannelEnabled)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChannelEnabled(Z_Param_Out_Identifier,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execIsChannelEnabled)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChannelEnabled(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execDoesChannelExist)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorChannelIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesChannelExist(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEvaluationDistanceToOldestSampleStandardDeviation)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputEvaluationDistanceToOldestSampleStandardDeviation(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEvaluationDistanceToNewestSampleStandardDeviation)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputEvaluationDistanceToNewestSampleStandardDeviation(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEvaluationDistanceToOldestSampleMean)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputEvaluationDistanceToOldestSampleMean(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEvaluationDistanceToNewestSampleMean)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputEvaluationDistanceToNewestSampleMean(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEvaluationState)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimedDataMonitorEvaluationState*)Z_Param__Result=P_THIS->GetInputEvaluationState(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputConnectionState)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimedDataInputState*)Z_Param__Result=P_THIS->GetInputConnectionState(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execSetInputDataBufferSize)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_GET_PROPERTY(FIntProperty,Z_Param_BufferSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputDataBufferSize(Z_Param_Out_Identifier,Z_Param_BufferSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputDataBufferSize)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInputDataBufferSize(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execIsDataBufferSizeControlledByInput)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDataBufferSizeControlledByInput(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputNewestDataTime)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimedDataChannelSampleTime*)Z_Param__Result=P_THIS->GetInputNewestDataTime(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputOldestDataTime)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimedDataChannelSampleTime*)Z_Param__Result=P_THIS->GetInputOldestDataTime(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputFrameRate)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetInputFrameRate(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execSetInputEvaluationOffsetInFrames)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputEvaluationOffsetInFrames(Z_Param_Out_Identifier,Z_Param_Frames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEvaluationOffsetInFrames)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputEvaluationOffsetInFrames(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execSetInputEvaluationOffsetInSeconds)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputEvaluationOffsetInSeconds(Z_Param_Out_Identifier,Z_Param_Seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEvaluationOffsetInSeconds)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputEvaluationOffsetInSeconds(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execSetInputEvaluationType)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_GET_ENUM(ETimedDataInputEvaluationType,Z_Param_Evaluation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputEvaluationType(Z_Param_Out_Identifier,ETimedDataInputEvaluationType(Z_Param_Evaluation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEvaluationType)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimedDataInputEvaluationType*)Z_Param__Result=P_THIS->GetInputEvaluationType(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputChannels)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimedDataMonitorChannelIdentifier>*)Z_Param__Result=P_THIS->GetInputChannels(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputDisplayName)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInputDisplayName(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execSetInputEnabled)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputEnabled(Z_Param_Out_Identifier,Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetInputEnabled)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimedDataMonitorInputEnabled*)Z_Param__Result=P_THIS->GetInputEnabled(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execDoesInputExist)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesInputExist(Z_Param_Out_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetEvaluationState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimedDataMonitorEvaluationState*)Z_Param__Result=P_THIS->GetEvaluationState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execResetAllBufferStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllBufferStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execApplyTimeCorrection)
	{
		P_GET_STRUCT_REF(FTimedDataMonitorInputIdentifier,Z_Param_Out_Identifier);
		P_GET_STRUCT_REF(FTimedDataMonitorTimeCorrectionParameters,Z_Param_Out_TimeCorrectionParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimedDataMonitorTimeCorrectionResult*)Z_Param__Result=P_THIS->ApplyTimeCorrection(Z_Param_Out_Identifier,Z_Param_Out_TimeCorrectionParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execCalibrateLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FTimedDataMonitorCalibrationParameters,Z_Param_Out_CalibrationParameters);
		P_GET_STRUCT_REF(FTimedDataMonitorCalibrationResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalibrateLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_CalibrationParameters,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetAllEnabledChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimedDataMonitorChannelIdentifier>*)Z_Param__Result=P_THIS->GetAllEnabledChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetAllChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimedDataMonitorChannelIdentifier>*)Z_Param__Result=P_THIS->GetAllChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimedDataMonitorSubsystem::execGetAllInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimedDataMonitorInputIdentifier>*)Z_Param__Result=P_THIS->GetAllInputs();
		P_NATIVE_END;
	}
	void UTimedDataMonitorSubsystem::StaticRegisterNativesUTimedDataMonitorSubsystem()
	{
		UClass* Class = UTimedDataMonitorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyTimeCorrection", &UTimedDataMonitorSubsystem::execApplyTimeCorrection },
			{ "CalibrateLatent", &UTimedDataMonitorSubsystem::execCalibrateLatent },
			{ "DoesChannelExist", &UTimedDataMonitorSubsystem::execDoesChannelExist },
			{ "DoesInputExist", &UTimedDataMonitorSubsystem::execDoesInputExist },
			{ "GetAllChannels", &UTimedDataMonitorSubsystem::execGetAllChannels },
			{ "GetAllEnabledChannels", &UTimedDataMonitorSubsystem::execGetAllEnabledChannels },
			{ "GetAllInputs", &UTimedDataMonitorSubsystem::execGetAllInputs },
			{ "GetChannelBufferOverflowStat", &UTimedDataMonitorSubsystem::execGetChannelBufferOverflowStat },
			{ "GetChannelBufferUnderflowStat", &UTimedDataMonitorSubsystem::execGetChannelBufferUnderflowStat },
			{ "GetChannelConnectionState", &UTimedDataMonitorSubsystem::execGetChannelConnectionState },
			{ "GetChannelDataBufferSize", &UTimedDataMonitorSubsystem::execGetChannelDataBufferSize },
			{ "GetChannelDisplayName", &UTimedDataMonitorSubsystem::execGetChannelDisplayName },
			{ "GetChannelEvaluationDistanceToNewestSampleMean", &UTimedDataMonitorSubsystem::execGetChannelEvaluationDistanceToNewestSampleMean },
			{ "GetChannelEvaluationDistanceToNewestSampleStandardDeviation", &UTimedDataMonitorSubsystem::execGetChannelEvaluationDistanceToNewestSampleStandardDeviation },
			{ "GetChannelEvaluationDistanceToOldestSampleMean", &UTimedDataMonitorSubsystem::execGetChannelEvaluationDistanceToOldestSampleMean },
			{ "GetChannelEvaluationDistanceToOldestSampleStandardDeviation", &UTimedDataMonitorSubsystem::execGetChannelEvaluationDistanceToOldestSampleStandardDeviation },
			{ "GetChannelEvaluationState", &UTimedDataMonitorSubsystem::execGetChannelEvaluationState },
			{ "GetChannelFrameDataTimes", &UTimedDataMonitorSubsystem::execGetChannelFrameDataTimes },
			{ "GetChannelFrameDroppedStat", &UTimedDataMonitorSubsystem::execGetChannelFrameDroppedStat },
			{ "GetChannelInput", &UTimedDataMonitorSubsystem::execGetChannelInput },
			{ "GetChannelLastEvaluationDataStat", &UTimedDataMonitorSubsystem::execGetChannelLastEvaluationDataStat },
			{ "GetChannelNewestDataTime", &UTimedDataMonitorSubsystem::execGetChannelNewestDataTime },
			{ "GetChannelNumberOfSamples", &UTimedDataMonitorSubsystem::execGetChannelNumberOfSamples },
			{ "GetChannelOldestDataTime", &UTimedDataMonitorSubsystem::execGetChannelOldestDataTime },
			{ "GetEvaluationState", &UTimedDataMonitorSubsystem::execGetEvaluationState },
			{ "GetInputChannels", &UTimedDataMonitorSubsystem::execGetInputChannels },
			{ "GetInputConnectionState", &UTimedDataMonitorSubsystem::execGetInputConnectionState },
			{ "GetInputDataBufferSize", &UTimedDataMonitorSubsystem::execGetInputDataBufferSize },
			{ "GetInputDisplayName", &UTimedDataMonitorSubsystem::execGetInputDisplayName },
			{ "GetInputEnabled", &UTimedDataMonitorSubsystem::execGetInputEnabled },
			{ "GetInputEvaluationDistanceToNewestSampleMean", &UTimedDataMonitorSubsystem::execGetInputEvaluationDistanceToNewestSampleMean },
			{ "GetInputEvaluationDistanceToNewestSampleStandardDeviation", &UTimedDataMonitorSubsystem::execGetInputEvaluationDistanceToNewestSampleStandardDeviation },
			{ "GetInputEvaluationDistanceToOldestSampleMean", &UTimedDataMonitorSubsystem::execGetInputEvaluationDistanceToOldestSampleMean },
			{ "GetInputEvaluationDistanceToOldestSampleStandardDeviation", &UTimedDataMonitorSubsystem::execGetInputEvaluationDistanceToOldestSampleStandardDeviation },
			{ "GetInputEvaluationOffsetInFrames", &UTimedDataMonitorSubsystem::execGetInputEvaluationOffsetInFrames },
			{ "GetInputEvaluationOffsetInSeconds", &UTimedDataMonitorSubsystem::execGetInputEvaluationOffsetInSeconds },
			{ "GetInputEvaluationState", &UTimedDataMonitorSubsystem::execGetInputEvaluationState },
			{ "GetInputEvaluationType", &UTimedDataMonitorSubsystem::execGetInputEvaluationType },
			{ "GetInputFrameRate", &UTimedDataMonitorSubsystem::execGetInputFrameRate },
			{ "GetInputNewestDataTime", &UTimedDataMonitorSubsystem::execGetInputNewestDataTime },
			{ "GetInputOldestDataTime", &UTimedDataMonitorSubsystem::execGetInputOldestDataTime },
			{ "IsChannelEnabled", &UTimedDataMonitorSubsystem::execIsChannelEnabled },
			{ "IsDataBufferSizeControlledByInput", &UTimedDataMonitorSubsystem::execIsDataBufferSizeControlledByInput },
			{ "ResetAllBufferStats", &UTimedDataMonitorSubsystem::execResetAllBufferStats },
			{ "SetChannelDataBufferSize", &UTimedDataMonitorSubsystem::execSetChannelDataBufferSize },
			{ "SetChannelEnabled", &UTimedDataMonitorSubsystem::execSetChannelEnabled },
			{ "SetInputDataBufferSize", &UTimedDataMonitorSubsystem::execSetInputDataBufferSize },
			{ "SetInputEnabled", &UTimedDataMonitorSubsystem::execSetInputEnabled },
			{ "SetInputEvaluationOffsetInFrames", &UTimedDataMonitorSubsystem::execSetInputEvaluationOffsetInFrames },
			{ "SetInputEvaluationOffsetInSeconds", &UTimedDataMonitorSubsystem::execSetInputEvaluationOffsetInSeconds },
			{ "SetInputEvaluationType", &UTimedDataMonitorSubsystem::execSetInputEvaluationType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics
	{
		struct TimedDataMonitorSubsystem_eventApplyTimeCorrection_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			FTimedDataMonitorTimeCorrectionParameters TimeCorrectionParameters;
			FTimedDataMonitorTimeCorrectionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeCorrectionParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeCorrectionParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventApplyTimeCorrection_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_TimeCorrectionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_TimeCorrectionParameters = { "TimeCorrectionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventApplyTimeCorrection_Parms, TimeCorrectionParameters), Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_TimeCorrectionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_TimeCorrectionParameters_MetaData)) }; // 2301313525
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventApplyTimeCorrection_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult, METADATA_PARAMS(nullptr, 0) }; // 1547459021
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_TimeCorrectionParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor" },
		{ "Comment", "/** Assume all data samples were produce at the same time and align them with the current platform's time */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Assume all data samples were produce at the same time and align them with the current platform's time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "ApplyTimeCorrection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::TimedDataMonitorSubsystem_eventApplyTimeCorrection_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics
	{
		struct TimedDataMonitorSubsystem_eventCalibrateLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FTimedDataMonitorCalibrationParameters CalibrationParameters;
			FTimedDataMonitorCalibrationResult Result;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibrationParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibrationParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventCalibrateLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventCalibrateLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_CalibrationParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_CalibrationParameters = { "CalibrationParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventCalibrateLatent_Parms, CalibrationParameters), Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_CalibrationParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_CalibrationParameters_MetaData)) }; // 3900017550
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventCalibrateLatent_Parms, Result), Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult, METADATA_PARAMS(nullptr, 0) }; // 262186
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_CalibrationParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor" },
		{ "Comment", "/** Change the Timecode Provider offset to align all inputs and channels. */" },
		{ "DisplayName", "Calibrate" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Change the Timecode Provider offset to align all inputs and channels." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "CalibrateLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::TimedDataMonitorSubsystem_eventCalibrateLatent_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics
	{
		struct TimedDataMonitorSubsystem_eventDoesChannelExist_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventDoesChannelExist_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	void Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimedDataMonitorSubsystem_eventDoesChannelExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimedDataMonitorSubsystem_eventDoesChannelExist_Parms), &Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Return true if the identifier is a valid channel. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Return true if the identifier is a valid channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "DoesChannelExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::TimedDataMonitorSubsystem_eventDoesChannelExist_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics
	{
		struct TimedDataMonitorSubsystem_eventDoesInputExist_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventDoesInputExist_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	void Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimedDataMonitorSubsystem_eventDoesInputExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimedDataMonitorSubsystem_eventDoesInputExist_Parms), &Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Return true if the identifier is a valid input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Return true if the identifier is a valid input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "DoesInputExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::TimedDataMonitorSubsystem_eventDoesInputExist_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetAllChannels_Parms
		{
			TArray<FTimedDataMonitorChannelIdentifier> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3757870906
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetAllChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3757870906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor" },
		{ "Comment", "/** Get the list of all the channels. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the list of all the channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetAllChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::TimedDataMonitorSubsystem_eventGetAllChannels_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetAllEnabledChannels_Parms
		{
			TArray<FTimedDataMonitorChannelIdentifier> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3757870906
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetAllEnabledChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3757870906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor" },
		{ "Comment", "/** Get the list of all the channels that are enabled. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the list of all the channels that are enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetAllEnabledChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::TimedDataMonitorSubsystem_eventGetAllEnabledChannels_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetAllInputs_Parms
		{
			TArray<FTimedDataMonitorInputIdentifier> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3525741413
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetAllInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3525741413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor" },
		{ "Comment", "/** Get the list of all the inputs. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the list of all the inputs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetAllInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::TimedDataMonitorSubsystem_eventGetAllInputs_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelBufferOverflowStat_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelBufferOverflowStat_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelBufferOverflowStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Returns the number of buffer overflows detected by that input since the last reset. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the number of buffer overflows detected by that input since the last reset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelBufferOverflowStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::TimedDataMonitorSubsystem_eventGetChannelBufferOverflowStat_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelBufferUnderflowStat_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelBufferUnderflowStat_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelBufferUnderflowStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Returns the number of buffer underflows detected by that input since the last reset. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the number of buffer underflows detected by that input since the last reset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelBufferUnderflowStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::TimedDataMonitorSubsystem_eventGetChannelBufferUnderflowStat_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelConnectionState_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			ETimedDataInputState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelConnectionState_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelConnectionState_Parms, ReturnValue), Z_Construct_UEnum_TimeManagement_ETimedDataInputState, METADATA_PARAMS(nullptr, 0) }; // 4186540132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Get the state the channel. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the state the channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelConnectionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::TimedDataMonitorSubsystem_eventGetChannelConnectionState_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelDataBufferSize_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelDataBufferSize_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelDataBufferSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** If the channel does support it, get the current maximum sample count of channel. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "If the channel does support it, get the current maximum sample count of channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelDataBufferSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::TimedDataMonitorSubsystem_eventGetChannelDataBufferSize_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelDisplayName_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelDisplayName_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Return the display name of an input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Return the display name of an input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::TimedDataMonitorSubsystem_eventGetChannelDisplayName_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToNewestSampleMean_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToNewestSampleMean_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToNewestSampleMean_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Returns the average distance, in seconds, between evaluation time and newest sample */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the average distance, in seconds, between evaluation time and newest sample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelEvaluationDistanceToNewestSampleMean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToNewestSampleMean_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToNewestSampleStandardDeviation_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToNewestSampleStandardDeviation_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToNewestSampleStandardDeviation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Returns the standard deviation of the distance, in seconds, between evaluation time and newest sample */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the standard deviation of the distance, in seconds, between evaluation time and newest sample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelEvaluationDistanceToNewestSampleStandardDeviation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToNewestSampleStandardDeviation_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToOldestSampleMean_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToOldestSampleMean_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToOldestSampleMean_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Returns the average distance, in seconds, between evaluation time and oldest sample */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the average distance, in seconds, between evaluation time and oldest sample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelEvaluationDistanceToOldestSampleMean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToOldestSampleMean_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToOldestSampleStandardDeviation_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToOldestSampleStandardDeviation_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToOldestSampleStandardDeviation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Returns the standard deviation of the distance, in seconds, between evaluation time and oldest sample */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the standard deviation of the distance, in seconds, between evaluation time and oldest sample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelEvaluationDistanceToOldestSampleStandardDeviation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::TimedDataMonitorSubsystem_eventGetChannelEvaluationDistanceToOldestSampleStandardDeviation_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelEvaluationState_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			ETimedDataMonitorEvaluationState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationState_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelEvaluationState_Parms, ReturnValue), Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState, METADATA_PARAMS(nullptr, 0) }; // 2069583695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Get the evaluation state of the channel. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the evaluation state of the channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelEvaluationState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::TimedDataMonitorSubsystem_eventGetChannelEvaluationState_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelFrameDataTimes_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			TArray<FTimedDataChannelSampleTime> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelFrameDataTimes_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimedDataChannelSampleTime, METADATA_PARAMS(nullptr, 0) }; // 787291596
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelFrameDataTimes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 787291596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Get the sample times for every frame in the channel */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the sample times for every frame in the channel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelFrameDataTimes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::TimedDataMonitorSubsystem_eventGetChannelFrameDataTimes_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelFrameDroppedStat_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelFrameDroppedStat_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelFrameDroppedStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Returns the number of frames dropped by that input since the last reset. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the number of frames dropped by that input since the last reset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelFrameDroppedStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::TimedDataMonitorSubsystem_eventGetChannelFrameDroppedStat_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelInput_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			FTimedDataMonitorInputIdentifier ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelInput_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3525741413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Return the input of this channel. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Return the input of this channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::TimedDataMonitorSubsystem_eventGetChannelInput_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelLastEvaluationDataStat_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			FTimedDataInputEvaluationData Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelLastEvaluationDataStat_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelLastEvaluationDataStat_Parms, Result), Z_Construct_UScriptStruct_FTimedDataInputEvaluationData, METADATA_PARAMS(nullptr, 0) }; // 1841397576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** \n\x09 * Retrieves information about last evaluation \n\x09 * Returns true if identifier was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Retrieves information about last evaluation\nReturns true if identifier was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelLastEvaluationDataStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::TimedDataMonitorSubsystem_eventGetChannelLastEvaluationDataStat_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelNewestDataTime_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			FTimedDataChannelSampleTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelNewestDataTime_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelNewestDataTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimedDataChannelSampleTime, METADATA_PARAMS(nullptr, 0) }; // 787291596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Get the channel latest sample time. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the channel latest sample time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelNewestDataTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::TimedDataMonitorSubsystem_eventGetChannelNewestDataTime_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelNumberOfSamples_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelNumberOfSamples_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelNumberOfSamples_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Get the number of data samples available. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the number of data samples available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelNumberOfSamples", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::TimedDataMonitorSubsystem_eventGetChannelNumberOfSamples_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetChannelOldestDataTime_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			FTimedDataChannelSampleTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelOldestDataTime_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetChannelOldestDataTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimedDataChannelSampleTime, METADATA_PARAMS(nullptr, 0) }; // 787291596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Get the channel oldest sample time. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the channel oldest sample time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetChannelOldestDataTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::TimedDataMonitorSubsystem_eventGetChannelOldestDataTime_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetEvaluationState_Parms
		{
			ETimedDataMonitorEvaluationState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetEvaluationState_Parms, ReturnValue), Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState, METADATA_PARAMS(nullptr, 0) }; // 2069583695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor" },
		{ "Comment", "/** Get the worst evaluation state of all the inputs. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the worst evaluation state of all the inputs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetEvaluationState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::TimedDataMonitorSubsystem_eventGetEvaluationState_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputChannels_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			TArray<FTimedDataMonitorChannelIdentifier> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputChannels_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3757870906
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3757870906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Return the list of all channels that are part of the input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Return the list of all channels that are part of the input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::TimedDataMonitorSubsystem_eventGetInputChannels_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputConnectionState_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			ETimedDataInputState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputConnectionState_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputConnectionState_Parms, ReturnValue), Z_Construct_UEnum_TimeManagement_ETimedDataInputState, METADATA_PARAMS(nullptr, 0) }; // 4186540132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get the worst state of all the channels of that input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the worst state of all the channels of that input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputConnectionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::TimedDataMonitorSubsystem_eventGetInputConnectionState_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputDataBufferSize_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputDataBufferSize_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputDataBufferSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get the size of the buffer used by the input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the size of the buffer used by the input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputDataBufferSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::TimedDataMonitorSubsystem_eventGetInputDataBufferSize_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputDisplayName_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputDisplayName_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Return the display name of an input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Return the display name of an input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::TimedDataMonitorSubsystem_eventGetInputDisplayName_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEnabled_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			ETimedDataMonitorInputEnabled ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEnabled_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEnabled_Parms, ReturnValue), Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorInputEnabled, METADATA_PARAMS(nullptr, 0) }; // 2945684150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Is the input enabled in the monitor. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Is the input enabled in the monitor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::TimedDataMonitorSubsystem_eventGetInputEnabled_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToNewestSampleMean_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToNewestSampleMean_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToNewestSampleMean_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Returns the max average distance, in seconds, between evaluation time and newest sample */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the max average distance, in seconds, between evaluation time and newest sample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEvaluationDistanceToNewestSampleMean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToNewestSampleMean_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToNewestSampleStandardDeviation_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToNewestSampleStandardDeviation_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToNewestSampleStandardDeviation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Returns the standard deviation of the distance, in seconds, between evaluation time and newest sample */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the standard deviation of the distance, in seconds, between evaluation time and newest sample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEvaluationDistanceToNewestSampleStandardDeviation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToNewestSampleStandardDeviation_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToOldestSampleMean_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToOldestSampleMean_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToOldestSampleMean_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Returns the min average distance, in seconds, between evaluation time and oldest sample */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the min average distance, in seconds, between evaluation time and oldest sample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEvaluationDistanceToOldestSampleMean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToOldestSampleMean_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToOldestSampleStandardDeviation_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToOldestSampleStandardDeviation_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToOldestSampleStandardDeviation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Returns the standard deviation of the distance, in seconds, between evaluation time and oldest sample */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Returns the standard deviation of the distance, in seconds, between evaluation time and oldest sample" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEvaluationDistanceToOldestSampleStandardDeviation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::TimedDataMonitorSubsystem_eventGetInputEvaluationDistanceToOldestSampleStandardDeviation_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEvaluationOffsetInFrames_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationOffsetInFrames_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationOffsetInFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get the offset in frames (see GetEvaluationType) used at evaluation. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the offset in frames (see GetEvaluationType) used at evaluation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEvaluationOffsetInFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::TimedDataMonitorSubsystem_eventGetInputEvaluationOffsetInFrames_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEvaluationOffsetInSeconds_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationOffsetInSeconds_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationOffsetInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get the offset in seconds or frames (see GetEvaluationType) used at evaluation. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the offset in seconds or frames (see GetEvaluationType) used at evaluation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEvaluationOffsetInSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::TimedDataMonitorSubsystem_eventGetInputEvaluationOffsetInSeconds_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEvaluationState_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			ETimedDataMonitorEvaluationState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationState_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationState_Parms, ReturnValue), Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorEvaluationState, METADATA_PARAMS(nullptr, 0) }; // 2069583695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get the worst evaluation state of all the channels of that input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the worst evaluation state of all the channels of that input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEvaluationState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::TimedDataMonitorSubsystem_eventGetInputEvaluationState_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputEvaluationType_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			ETimedDataInputEvaluationType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationType_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputEvaluationType_Parms, ReturnValue), Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType, METADATA_PARAMS(nullptr, 0) }; // 3412469861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get how the input is evaluated type. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get how the input is evaluated type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputEvaluationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::TimedDataMonitorSubsystem_eventGetInputEvaluationType_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimedDataMonitorSubsystem_eventGetInputFrameRate_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			FFrameRate ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputFrameRate_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get the frame rate at which the samples is produce. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the frame rate at which the samples is produce." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::TimedDataMonitorSubsystem_eventGetInputFrameRate_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputNewestDataTime_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			FTimedDataChannelSampleTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputNewestDataTime_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputNewestDataTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimedDataChannelSampleTime, METADATA_PARAMS(nullptr, 0) }; // 787291596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get the latest sample time of all the channel in this input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the latest sample time of all the channel in this input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputNewestDataTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::TimedDataMonitorSubsystem_eventGetInputNewestDataTime_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics
	{
		struct TimedDataMonitorSubsystem_eventGetInputOldestDataTime_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			FTimedDataChannelSampleTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputOldestDataTime_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventGetInputOldestDataTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimedDataChannelSampleTime, METADATA_PARAMS(nullptr, 0) }; // 787291596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Get the oldest sample time of all the channel in this input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Get the oldest sample time of all the channel in this input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "GetInputOldestDataTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::TimedDataMonitorSubsystem_eventGetInputOldestDataTime_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics
	{
		struct TimedDataMonitorSubsystem_eventIsChannelEnabled_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventIsChannelEnabled_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	void Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimedDataMonitorSubsystem_eventIsChannelEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimedDataMonitorSubsystem_eventIsChannelEnabled_Parms), &Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** Is the channel enabled in the monitor. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Is the channel enabled in the monitor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "IsChannelEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::TimedDataMonitorSubsystem_eventIsChannelEnabled_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics
	{
		struct TimedDataMonitorSubsystem_eventIsDataBufferSizeControlledByInput_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventIsDataBufferSizeControlledByInput_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	void Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimedDataMonitorSubsystem_eventIsDataBufferSizeControlledByInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimedDataMonitorSubsystem_eventIsDataBufferSizeControlledByInput_Parms), &Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Does the channel support a different buffer size than it's input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Does the channel support a different buffer size than it's input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "IsDataBufferSizeControlledByInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::TimedDataMonitorSubsystem_eventIsDataBufferSizeControlledByInput_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_ResetAllBufferStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_ResetAllBufferStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor" },
		{ "Comment", "/** Reset the stat of all the inputs. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Reset the stat of all the inputs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_ResetAllBufferStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "ResetAllBufferStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ResetAllBufferStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_ResetAllBufferStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_ResetAllBufferStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_ResetAllBufferStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics
	{
		struct TimedDataMonitorSubsystem_eventSetChannelDataBufferSize_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			int32 BufferSize;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetChannelDataBufferSize_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetChannelDataBufferSize_Parms, BufferSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::NewProp_BufferSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/** If the channel does support it, set the maximum sample count of the channel. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "If the channel does support it, set the maximum sample count of the channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "SetChannelDataBufferSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::TimedDataMonitorSubsystem_eventSetChannelDataBufferSize_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics
	{
		struct TimedDataMonitorSubsystem_eventSetChannelEnabled_Parms
		{
			FTimedDataMonitorChannelIdentifier Identifier;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetChannelEnabled_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_Identifier_MetaData)) }; // 3757870906
	void Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((TimedDataMonitorSubsystem_eventSetChannelEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimedDataMonitorSubsystem_eventSetChannelEnabled_Parms), &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Channel" },
		{ "Comment", "/**\n\x09 * Enable or disable an input from the monitor.\n\x09 * The input will still be evaluated but stats will not be tracked and the will not be used for calibration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Enable or disable an input from the monitor.\nThe input will still be evaluated but stats will not be tracked and the will not be used for calibration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "SetChannelEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::TimedDataMonitorSubsystem_eventSetChannelEnabled_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics
	{
		struct TimedDataMonitorSubsystem_eventSetInputDataBufferSize_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			int32 BufferSize;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputDataBufferSize_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputDataBufferSize_Parms, BufferSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::NewProp_BufferSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Set the size of the buffer used by the input. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Set the size of the buffer used by the input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "SetInputDataBufferSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::TimedDataMonitorSubsystem_eventSetInputDataBufferSize_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics
	{
		struct TimedDataMonitorSubsystem_eventSetInputEnabled_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			bool bInEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputEnabled_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	void Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((TimedDataMonitorSubsystem_eventSetInputEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimedDataMonitorSubsystem_eventSetInputEnabled_Parms), &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Set all channels for the input enabled in the monitor. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Set all channels for the input enabled in the monitor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "SetInputEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::TimedDataMonitorSubsystem_eventSetInputEnabled_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics
	{
		struct TimedDataMonitorSubsystem_eventSetInputEvaluationOffsetInFrames_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			float Frames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputEvaluationOffsetInFrames_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputEvaluationOffsetInFrames_Parms, Frames), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::NewProp_Frames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Set the offset in frames (see GetEvaluationType) used at evaluation. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Set the offset in frames (see GetEvaluationType) used at evaluation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "SetInputEvaluationOffsetInFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::TimedDataMonitorSubsystem_eventSetInputEvaluationOffsetInFrames_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics
	{
		struct TimedDataMonitorSubsystem_eventSetInputEvaluationOffsetInSeconds_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			float Seconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputEvaluationOffsetInSeconds_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputEvaluationOffsetInSeconds_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Set the offset in seconds or frames (see GetEvaluationType) used at evaluation. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Set the offset in seconds or frames (see GetEvaluationType) used at evaluation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "SetInputEvaluationOffsetInSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::TimedDataMonitorSubsystem_eventSetInputEvaluationOffsetInSeconds_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics
	{
		struct TimedDataMonitorSubsystem_eventSetInputEvaluationType_Parms
		{
			FTimedDataMonitorInputIdentifier Identifier;
			ETimedDataInputEvaluationType Evaluation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Evaluation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Evaluation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputEvaluationType_Parms, Identifier), Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Identifier_MetaData)) }; // 3525741413
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Evaluation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Evaluation = { "Evaluation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimedDataMonitorSubsystem_eventSetInputEvaluationType_Parms, Evaluation), Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType, METADATA_PARAMS(nullptr, 0) }; // 3412469861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Evaluation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::NewProp_Evaluation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Timed Data Monitor|Input" },
		{ "Comment", "/** Set how the input is evaluated type. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Set how the input is evaluated type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimedDataMonitorSubsystem, nullptr, "SetInputEvaluationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::TimedDataMonitorSubsystem_eventSetInputEvaluationType_Parms), Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimedDataMonitorSubsystem);
	UClass* Z_Construct_UClass_UTimedDataMonitorSubsystem_NoRegister()
	{
		return UTimedDataMonitorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIdentifierListChanged_Dynamic_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIdentifierListChanged_Dynamic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_ApplyTimeCorrection, "ApplyTimeCorrection" }, // 666047130
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_CalibrateLatent, "CalibrateLatent" }, // 2929846938
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesChannelExist, "DoesChannelExist" }, // 1915932851
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_DoesInputExist, "DoesInputExist" }, // 390495978
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllChannels, "GetAllChannels" }, // 3133042048
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllEnabledChannels, "GetAllEnabledChannels" }, // 2498245007
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetAllInputs, "GetAllInputs" }, // 1194080337
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferOverflowStat, "GetChannelBufferOverflowStat" }, // 3361221028
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelBufferUnderflowStat, "GetChannelBufferUnderflowStat" }, // 658242056
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelConnectionState, "GetChannelConnectionState" }, // 3826286094
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDataBufferSize, "GetChannelDataBufferSize" }, // 3443776886
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelDisplayName, "GetChannelDisplayName" }, // 2459556278
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleMean, "GetChannelEvaluationDistanceToNewestSampleMean" }, // 3043232932
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToNewestSampleStandardDeviation, "GetChannelEvaluationDistanceToNewestSampleStandardDeviation" }, // 783672332
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleMean, "GetChannelEvaluationDistanceToOldestSampleMean" }, // 1334821439
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationDistanceToOldestSampleStandardDeviation, "GetChannelEvaluationDistanceToOldestSampleStandardDeviation" }, // 1064536653
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelEvaluationState, "GetChannelEvaluationState" }, // 3450670853
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDataTimes, "GetChannelFrameDataTimes" }, // 3059357907
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelFrameDroppedStat, "GetChannelFrameDroppedStat" }, // 397652806
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelInput, "GetChannelInput" }, // 3024132347
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelLastEvaluationDataStat, "GetChannelLastEvaluationDataStat" }, // 2236659507
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNewestDataTime, "GetChannelNewestDataTime" }, // 1294447582
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelNumberOfSamples, "GetChannelNumberOfSamples" }, // 2483764328
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetChannelOldestDataTime, "GetChannelOldestDataTime" }, // 2402939129
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetEvaluationState, "GetEvaluationState" }, // 1615798196
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputChannels, "GetInputChannels" }, // 1358590596
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputConnectionState, "GetInputConnectionState" }, // 2285387914
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDataBufferSize, "GetInputDataBufferSize" }, // 387356571
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputDisplayName, "GetInputDisplayName" }, // 3299529765
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEnabled, "GetInputEnabled" }, // 2109275065
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleMean, "GetInputEvaluationDistanceToNewestSampleMean" }, // 870227722
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToNewestSampleStandardDeviation, "GetInputEvaluationDistanceToNewestSampleStandardDeviation" }, // 2125313879
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleMean, "GetInputEvaluationDistanceToOldestSampleMean" }, // 1976190600
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationDistanceToOldestSampleStandardDeviation, "GetInputEvaluationDistanceToOldestSampleStandardDeviation" }, // 4181842796
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInFrames, "GetInputEvaluationOffsetInFrames" }, // 1662300283
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationOffsetInSeconds, "GetInputEvaluationOffsetInSeconds" }, // 3512049188
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationState, "GetInputEvaluationState" }, // 622105136
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputEvaluationType, "GetInputEvaluationType" }, // 3520221868
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputFrameRate, "GetInputFrameRate" }, // 1306546481
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputNewestDataTime, "GetInputNewestDataTime" }, // 3043450888
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_GetInputOldestDataTime, "GetInputOldestDataTime" }, // 4097290119
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsChannelEnabled, "IsChannelEnabled" }, // 3617829887
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_IsDataBufferSizeControlledByInput, "IsDataBufferSizeControlledByInput" }, // 2357399387
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_ResetAllBufferStats, "ResetAllBufferStats" }, // 3110020816
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelDataBufferSize, "SetChannelDataBufferSize" }, // 1546573846
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetChannelEnabled, "SetChannelEnabled" }, // 2457707776
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputDataBufferSize, "SetInputDataBufferSize" }, // 4229722810
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEnabled, "SetInputEnabled" }, // 3477060897
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInFrames, "SetInputEvaluationOffsetInFrames" }, // 2696164104
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationOffsetInSeconds, "SetInputEvaluationOffsetInSeconds" }, // 118341940
		{ &Z_Construct_UFunction_UTimedDataMonitorSubsystem_SetInputEvaluationType, "SetInputEvaluationType" }, // 1475014576
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TimedDataMonitorSubsystem.h" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::NewProp_OnIdentifierListChanged_Dynamic_MetaData[] = {
		{ "Category", "Timed Data Monitor" },
		{ "Comment", "/** Delegate of when an element is added or removed. */" },
		{ "DisplayName", "OnSourceIdentifierListChanged" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorSubsystem.h" },
		{ "ToolTip", "Delegate of when an element is added or removed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::NewProp_OnIdentifierListChanged_Dynamic = { "OnIdentifierListChanged_Dynamic", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimedDataMonitorSubsystem, OnIdentifierListChanged_Dynamic), Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::NewProp_OnIdentifierListChanged_Dynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::NewProp_OnIdentifierListChanged_Dynamic_MetaData)) }; // 2286385247
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::NewProp_OnIdentifierListChanged_Dynamic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimedDataMonitorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::ClassParams = {
		&UTimedDataMonitorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimedDataMonitorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTimedDataMonitorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimedDataMonitorSubsystem.OuterSingleton, Z_Construct_UClass_UTimedDataMonitorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimedDataMonitorSubsystem.OuterSingleton;
	}
	template<> TIMEDDATAMONITOR_API UClass* StaticClass<UTimedDataMonitorSubsystem>()
	{
		return UTimedDataMonitorSubsystem::StaticClass();
	}
	UTimedDataMonitorSubsystem::UTimedDataMonitorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimedDataMonitorSubsystem);
	UTimedDataMonitorSubsystem::~UTimedDataMonitorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::EnumInfo[] = {
		{ ETimedDataMonitorInputEnabled_StaticEnum, TEXT("ETimedDataMonitorInputEnabled"), &Z_Registration_Info_UEnum_ETimedDataMonitorInputEnabled, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2945684150U) },
		{ ETimedDataMonitorEvaluationState_StaticEnum, TEXT("ETimedDataMonitorEvaluationState"), &Z_Registration_Info_UEnum_ETimedDataMonitorEvaluationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2069583695U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FTimedDataMonitorChannelConnectionStateEvent::StaticStruct, Z_Construct_UScriptStruct_FTimedDataMonitorChannelConnectionStateEvent_Statics::NewStructOps, TEXT("TimedDataMonitorChannelConnectionStateEvent"), &Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelConnectionStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataMonitorChannelConnectionStateEvent), 2344729351U) },
		{ FTimedDataMonitorChannelEvaluationStateEvent::StaticStruct, Z_Construct_UScriptStruct_FTimedDataMonitorChannelEvaluationStateEvent_Statics::NewStructOps, TEXT("TimedDataMonitorChannelEvaluationStateEvent"), &Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelEvaluationStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataMonitorChannelEvaluationStateEvent), 1374938065U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimedDataMonitorSubsystem, UTimedDataMonitorSubsystem::StaticClass, TEXT("UTimedDataMonitorSubsystem"), &Z_Registration_Info_UClass_UTimedDataMonitorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimedDataMonitorSubsystem), 4226009128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_1664053585(TEXT("/Script/TimedDataMonitor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
