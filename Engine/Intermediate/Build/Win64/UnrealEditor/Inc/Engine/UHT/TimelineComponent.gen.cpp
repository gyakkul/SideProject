// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/TimelineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineFloatTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineLinearColorTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineVectorTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signature of function to handle a timeline 'event' */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle a timeline 'event'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnTimelineEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTimelineEvent_DelegateWrapper(const FScriptDelegate& OnTimelineEvent)
{
	OnTimelineEvent.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnTimelineFloat_Parms
		{
			float Output;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineFloat_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signature of function to handle timeline float track */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle timeline float track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnTimelineFloat__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::_Script_Engine_eventOnTimelineFloat_Parms), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTimelineFloat_DelegateWrapper(const FScriptDelegate& OnTimelineFloat, float Output)
{
	struct _Script_Engine_eventOnTimelineFloat_Parms
	{
		float Output;
	};
	_Script_Engine_eventOnTimelineFloat_Parms Parms;
	Parms.Output=Output;
	OnTimelineFloat.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnTimelineVector_Parms
		{
			FVector Output;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineVector_Parms, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signature of function to handle timeline vector track */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle timeline vector track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnTimelineVector__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::_Script_Engine_eventOnTimelineVector_Parms), Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTimelineVector_DelegateWrapper(const FScriptDelegate& OnTimelineVector, FVector Output)
{
	struct _Script_Engine_eventOnTimelineVector_Parms
	{
		FVector Output;
	};
	_Script_Engine_eventOnTimelineVector_Parms Parms;
	Parms.Output=Output;
	OnTimelineVector.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnTimelineLinearColor_Parms
		{
			FLinearColor Output;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineLinearColor_Parms, Output), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signature of function to handle linear color track */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle linear color track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnTimelineLinearColor__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::_Script_Engine_eventOnTimelineLinearColor_Parms), Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTimelineLinearColor_DelegateWrapper(const FScriptDelegate& OnTimelineLinearColor, FLinearColor Output)
{
	struct _Script_Engine_eventOnTimelineLinearColor_Parms
	{
		FLinearColor Output;
	};
	_Script_Engine_eventOnTimelineLinearColor_Parms Parms;
	Parms.Output=Output;
	OnTimelineLinearColor.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimelineLengthMode;
	static UEnum* ETimelineLengthMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineLengthMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETimelineLengthMode"));
		}
		return Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETimelineLengthMode>()
	{
		return ETimelineLengthMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enumerators[] = {
		{ "TL_TimelineLength", (int64)TL_TimelineLength },
		{ "TL_LastKeyFrame", (int64)TL_LastKeyFrame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Whether or not the timeline should be finished after the specified length, or the last keyframe in the tracks */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "TL_LastKeyFrame.Name", "TL_LastKeyFrame" },
		{ "TL_TimelineLength.Name", "TL_TimelineLength" },
		{ "ToolTip", "Whether or not the timeline should be finished after the specified length, or the last keyframe in the tracks" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETimelineLengthMode",
		"ETimelineLengthMode",
		Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode()
	{
		if (!Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton, Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimelineDirection;
	static UEnum* ETimelineDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineDirection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETimelineDirection"));
		}
		return Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETimelineDirection::Type>()
	{
		return ETimelineDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETimelineDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enumerators[] = {
		{ "ETimelineDirection::Forward", (int64)ETimelineDirection::Forward },
		{ "ETimelineDirection::Backward", (int64)ETimelineDirection::Backward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enum_MetaDataParams[] = {
		{ "Backward.Name", "ETimelineDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Does timeline play or reverse ? */" },
		{ "Forward.Name", "ETimelineDirection::Forward" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Does timeline play or reverse ?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETimelineDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETimelineDirection",
		"ETimelineDirection::Type",
		Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETimelineDirection()
	{
		if (!Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton, Z_Construct_UEnum_Engine_ETimelineDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimelineEventEntry;
class UScriptStruct* FTimelineEventEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineEventEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimelineEventEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineEventEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimelineEventEntry"));
	}
	return Z_Registration_Info_UScriptStruct_TimelineEventEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimelineEventEntry>()
{
	return FTimelineEventEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimelineEventEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventFunc_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_EventFunc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that contains one entry for an 'event' during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for an 'event' during the timeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineEventEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** Time at which event should fire */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Time at which event should fire" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineEventEntry, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc_MetaData[] = {
		{ "Comment", "/** Function to execute when Time is reached */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function to execute when Time is reached" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc = { "EventFunc", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineEventEntry, EventFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc_MetaData)) }; // 2021314998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimelineEventEntry",
		sizeof(FTimelineEventEntry),
		alignof(FTimelineEventEntry),
		Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_TimelineEventEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimelineEventEntry.InnerSingleton, Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimelineEventEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimelineVectorTrack;
class UScriptStruct* FTimelineVectorTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineVectorTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimelineVectorTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineVectorTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimelineVectorTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TimelineVectorTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimelineVectorTrack>()
{
	return FTimelineVectorTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VectorCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VectorPropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that contains one entry for each vector interpolation performed by the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each vector interpolation performed by the timeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineVectorTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve_MetaData[] = {
		{ "Comment", "/** Vector curve to be evaluated */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Vector curve to be evaluated" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve = { "VectorCurve", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, VectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc_MetaData[] = {
		{ "Comment", "/** Function that the output from ValueCurve will be passed to */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc_MetaData)) }; // 2620892437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Name of track, usually set in Timeline Editor. Used by SetInterpVectorCurve function. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpVectorCurve function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName_MetaData[] = {
		{ "Comment", "/** Name of property that we should update from this curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName = { "VectorPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, VectorPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimelineVectorTrack",
		sizeof(FTimelineVectorTrack),
		alignof(FTimelineVectorTrack),
		Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineVectorTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TimelineVectorTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimelineVectorTrack.InnerSingleton, Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimelineVectorTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimelineFloatTrack;
class UScriptStruct* FTimelineFloatTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineFloatTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimelineFloatTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineFloatTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimelineFloatTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TimelineFloatTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimelineFloatTrack>()
{
	return FTimelineFloatTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloatCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FloatPropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that contains one entry for each vector interpolation performed by the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each vector interpolation performed by the timeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineFloatTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Float curve to be evaluated */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Float curve to be evaluated" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc_MetaData[] = {
		{ "Comment", "/** Function that the output from ValueCurve will be passed to */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc_MetaData)) }; // 2032650658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Name of track, usually set in Timeline Editor. Used by SetInterpFloatCurve function. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpFloatCurve function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName_MetaData[] = {
		{ "Comment", "/** Name of property that we should update from this curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName = { "FloatPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, FloatPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimelineFloatTrack",
		sizeof(FTimelineFloatTrack),
		alignof(FTimelineFloatTrack),
		Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineFloatTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TimelineFloatTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimelineFloatTrack.InnerSingleton, Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimelineFloatTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack;
class UScriptStruct* FTimelineLinearColorTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineLinearColorTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimelineLinearColorTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimelineLinearColorTrack>()
{
	return FTimelineLinearColorTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearColorCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinearColorCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearColorPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LinearColorPropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that contains one entry for each linear color interpolation performed by the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each linear color interpolation performed by the timeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineLinearColorTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve_MetaData[] = {
		{ "Comment", "/** Float curve to be evaluated */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Float curve to be evaluated" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve = { "LinearColorCurve", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc_MetaData[] = {
		{ "Comment", "/** Function that the output from ValueCurve will be passed to */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc_MetaData)) }; // 942220452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Name of track, usually set in Timeline Editor. Used by SetInterpLinearColorCurve function. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpLinearColorCurve function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName_MetaData[] = {
		{ "Comment", "/** Name of property that we should update from this curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName = { "LinearColorPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimelineLinearColorTrack",
		sizeof(FTimelineLinearColorTrack),
		alignof(FTimelineLinearColorTrack),
		Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineLinearColorTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.InnerSingleton, Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Timeline;
class UScriptStruct* FTimeline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Timeline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Timeline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeline, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Timeline"));
	}
	return Z_Registration_Info_UScriptStruct_Timeline.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimeline>()
{
	return FTimeline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimeline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LengthMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[];
#endif
		static void NewProp_bReversePlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[];
#endif
		static void NewProp_bPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpVectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpVectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpVectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpFloats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpFloats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpFloats;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpLinearColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpLinearColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpLinearColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelinePostUpdateFunc_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_TimelinePostUpdateFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineFinishedFunc_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_TimelineFinishedFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertySetObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PropertySetObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionPropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode_MetaData[] = {
		{ "Comment", "/** Specified how the timeline determines its own length (e.g. specified length, last keyframe) */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Specified how the timeline determines its own length (e.g. specified length, last keyframe)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode = { "LengthMode", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode_MetaData)) }; // 2372454209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_MetaData[] = {
		{ "Comment", "/** Whether timeline should loop when it reaches the end, or stop */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Whether timeline should loop when it reaches the end, or stop" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FTimeline*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_MetaData[] = {
		{ "Comment", "/** If playback should move the current position backwards instead of forwards */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "If playback should move the current position backwards instead of forwards" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
	{
		((FTimeline*)Obj)->bReversePlayback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_MetaData[] = {
		{ "Comment", "/** Are we currently playing (moving Position) */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Are we currently playing (moving Position)" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_SetBit(void* Obj)
	{
		((FTimeline*)Obj)->bPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length_MetaData[] = {
		{ "Comment", "/** How long the timeline is, will stop or loop at the end */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "How long the timeline is, will stop or loop at the end" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Comment", "/** How fast we should play through the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "How fast we should play through the timeline" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Current position in the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Current position in the timeline" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimelineEventEntry, METADATA_PARAMS(nullptr, 0) }; // 1231136402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_MetaData[] = {
		{ "Comment", "/** Array of events that are fired at various times during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of events that are fired at various times during the timeline" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_MetaData)) }; // 1231136402
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_Inner = { "InterpVectors", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimelineVectorTrack, METADATA_PARAMS(nullptr, 0) }; // 783780170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_MetaData[] = {
		{ "Comment", "/** Array of vector interpolations performed during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of vector interpolations performed during the timeline" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors = { "InterpVectors", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, InterpVectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_MetaData)) }; // 783780170
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_Inner = { "InterpFloats", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimelineFloatTrack, METADATA_PARAMS(nullptr, 0) }; // 2966723885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_MetaData[] = {
		{ "Comment", "/** Array of float interpolations performed during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of float interpolations performed during the timeline" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats = { "InterpFloats", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, InterpFloats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_MetaData)) }; // 2966723885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_Inner = { "InterpLinearColors", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimelineLinearColorTrack, METADATA_PARAMS(nullptr, 0) }; // 1004742750
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_MetaData[] = {
		{ "Comment", "/** Array of linear color interpolations performed during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of linear color interpolations performed during the timeline" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors = { "InterpLinearColors", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, InterpLinearColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_MetaData)) }; // 1004742750
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc_MetaData[] = {
		{ "Comment", "/** Called whenever this timeline is playing and updates - done after all delegates are executed and variables updated  */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Called whenever this timeline is playing and updates - done after all delegates are executed and variables updated" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc = { "TimelinePostUpdateFunc", nullptr, (EPropertyFlags)0x0040000080080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, TimelinePostUpdateFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc_MetaData)) }; // 2021314998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc_MetaData[] = {
		{ "Comment", "/** Called whenever this timeline is finished. Is not called if 'stop' is used to terminate timeline early  */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Called whenever this timeline is finished. Is not called if 'stop' is used to terminate timeline early" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc = { "TimelineFinishedFunc", nullptr, (EPropertyFlags)0x0040000080080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, TimelineFinishedFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc_MetaData)) }; // 2021314998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject_MetaData[] = {
		{ "Comment", "/**\x09Optional. If set, Timeline will also set float/vector properties on this object using the PropertyName set in the tracks. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Optional. If set, Timeline will also set float/vector properties on this object using the PropertyName set in the tracks." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject = { "PropertySetObject", nullptr, (EPropertyFlags)0x0044000080000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, PropertySetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName_MetaData[] = {
		{ "Comment", "/**\x09Optional. If set, Timeline will also set ETimelineDirection property on PropertySetObject using the name. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Optional. If set, Timeline will also set ETimelineDirection property on PropertySetObject using the name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName = { "DirectionPropertyName", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeline, DirectionPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"Timeline",
		sizeof(FTimeline),
		alignof(FTimeline),
		Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeline()
	{
		if (!Z_Registration_Info_UScriptStruct_Timeline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Timeline.InnerSingleton, Z_Construct_UScriptStruct_FTimeline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Timeline.InnerSingleton;
	}
	DEFINE_FUNCTION(UTimelineComponent::execOnRep_Timeline)
	{
		P_GET_STRUCT_REF(FTimeline,Z_Param_Out_OldTimeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Timeline(Z_Param_Out_OldTimeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetLinearColorCurve)
	{
		P_GET_OBJECT(UCurveLinearColor,Z_Param_NewLinearColorCurve);
		P_GET_PROPERTY(FNameProperty,Z_Param_LinearColorTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearColorCurve(Z_Param_NewLinearColorCurve,Z_Param_LinearColorTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetVectorCurve)
	{
		P_GET_OBJECT(UCurveVector,Z_Param_NewVectorCurve);
		P_GET_PROPERTY(FNameProperty,Z_Param_VectorTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorCurve(Z_Param_NewVectorCurve,Z_Param_VectorTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetFloatCurve)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_NewFloatCurve);
		P_GET_PROPERTY(FNameProperty,Z_Param_FloatTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatCurve(Z_Param_NewFloatCurve,Z_Param_FloatTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execGetIgnoreTimeDilation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIgnoreTimeDilation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetIgnoreTimeDilation)
	{
		P_GET_UBOOL(Z_Param_bNewIgnoreTimeDilation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreTimeDilation(Z_Param_bNewIgnoreTimeDilation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetTimelineLengthMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewLengthMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimelineLengthMode(ETimelineLengthMode(Z_Param_NewLengthMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetTimelineLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimelineLength(Z_Param_NewLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execGetScaledTimelineLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScaledTimelineLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execGetTimelineLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimelineLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetNewTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewTime(Z_Param_NewTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_NewRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bNewLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bNewLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execGetPlaybackPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execSetPlaybackPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPosition);
		P_GET_UBOOL(Z_Param_bFireEvents);
		P_GET_UBOOL(Z_Param_bFireUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackPosition(Z_Param_NewPosition,Z_Param_bFireEvents,Z_Param_bFireUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execIsReversing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReversing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execReverseFromEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReverseFromEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execPlayFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFromStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimelineComponent::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	void UTimelineComponent::StaticRegisterNativesUTimelineComponent()
	{
		UClass* Class = UTimelineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIgnoreTimeDilation", &UTimelineComponent::execGetIgnoreTimeDilation },
			{ "GetPlaybackPosition", &UTimelineComponent::execGetPlaybackPosition },
			{ "GetPlayRate", &UTimelineComponent::execGetPlayRate },
			{ "GetScaledTimelineLength", &UTimelineComponent::execGetScaledTimelineLength },
			{ "GetTimelineLength", &UTimelineComponent::execGetTimelineLength },
			{ "IsLooping", &UTimelineComponent::execIsLooping },
			{ "IsPlaying", &UTimelineComponent::execIsPlaying },
			{ "IsReversing", &UTimelineComponent::execIsReversing },
			{ "OnRep_Timeline", &UTimelineComponent::execOnRep_Timeline },
			{ "Play", &UTimelineComponent::execPlay },
			{ "PlayFromStart", &UTimelineComponent::execPlayFromStart },
			{ "Reverse", &UTimelineComponent::execReverse },
			{ "ReverseFromEnd", &UTimelineComponent::execReverseFromEnd },
			{ "SetFloatCurve", &UTimelineComponent::execSetFloatCurve },
			{ "SetIgnoreTimeDilation", &UTimelineComponent::execSetIgnoreTimeDilation },
			{ "SetLinearColorCurve", &UTimelineComponent::execSetLinearColorCurve },
			{ "SetLooping", &UTimelineComponent::execSetLooping },
			{ "SetNewTime", &UTimelineComponent::execSetNewTime },
			{ "SetPlaybackPosition", &UTimelineComponent::execSetPlaybackPosition },
			{ "SetPlayRate", &UTimelineComponent::execSetPlayRate },
			{ "SetTimelineLength", &UTimelineComponent::execSetTimelineLength },
			{ "SetTimelineLengthMode", &UTimelineComponent::execSetTimelineLengthMode },
			{ "SetVectorCurve", &UTimelineComponent::execSetVectorCurve },
			{ "Stop", &UTimelineComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics
	{
		struct TimelineComponent_eventGetIgnoreTimeDilation_Parms
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
	void Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimelineComponent_eventGetIgnoreTimeDilation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimelineComponent_eventGetIgnoreTimeDilation_Parms), &Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get whether to ignore time dilation. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether to ignore time dilation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetIgnoreTimeDilation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::TimelineComponent_eventGetIgnoreTimeDilation_Parms), Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics
	{
		struct TimelineComponent_eventGetPlaybackPosition_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get the current playback position of the Timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get the current playback position of the Timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetPlaybackPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::TimelineComponent_eventGetPlaybackPosition_Parms), Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics
	{
		struct TimelineComponent_eventGetPlayRate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get the current play rate for this timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get the current play rate for this timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::TimelineComponent_eventGetPlayRate_Parms), Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics
	{
		struct TimelineComponent_eventGetScaledTimelineLength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetScaledTimelineLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get length of the timeline divided by the play rate */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get length of the timeline divided by the play rate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetScaledTimelineLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::TimelineComponent_eventGetScaledTimelineLength_Parms), Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics
	{
		struct TimelineComponent_eventGetTimelineLength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetTimelineLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get length of the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get length of the timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetTimelineLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::TimelineComponent_eventGetTimelineLength_Parms), Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetTimelineLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics
	{
		struct TimelineComponent_eventIsLooping_Parms
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
	void Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimelineComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimelineComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get whether we are looping or not */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether we are looping or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "IsLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::TimelineComponent_eventIsLooping_Parms), Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics
	{
		struct TimelineComponent_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimelineComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimelineComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get whether this timeline is playing or not. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether this timeline is playing or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::TimelineComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics
	{
		struct TimelineComponent_eventIsReversing_Parms
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
	void Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimelineComponent_eventIsReversing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimelineComponent_eventIsReversing_Parms), &Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get whether we are reversing or not */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether we are reversing or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "IsReversing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::TimelineComponent_eventIsReversing_Parms), Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsReversing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics
	{
		struct TimelineComponent_eventOnRep_Timeline_Parms
		{
			FTimeline OldTimeline;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldTimeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::NewProp_OldTimeline = { "OldTimeline", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventOnRep_Timeline_Parms, OldTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(nullptr, 0) }; // 3250140494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::NewProp_OldTimeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "OnRep_Timeline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::TimelineComponent_eventOnRep_Timeline_Parms), Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Start playback of timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Start playback of timeline from the start */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline from the start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "PlayFromStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_Reverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Start playback of timeline in reverse */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline in reverse" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "Reverse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_Reverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Start playback of timeline in reverse from the end */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline in reverse from the end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "ReverseFromEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics
	{
		struct TimelineComponent_eventSetFloatCurve_Parms
		{
			UCurveFloat* NewFloatCurve;
			FName FloatTrackName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFloatCurve;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FloatTrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_NewFloatCurve = { "NewFloatCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetFloatCurve_Parms, NewFloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_FloatTrackName = { "FloatTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetFloatCurve_Parms, FloatTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_NewFloatCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_FloatTrackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Update a certain float track's curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain float track's curve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetFloatCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::TimelineComponent_eventSetFloatCurve_Parms), Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetFloatCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics
	{
		struct TimelineComponent_eventSetIgnoreTimeDilation_Parms
		{
			bool bNewIgnoreTimeDilation;
		};
		static void NewProp_bNewIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIgnoreTimeDilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation_SetBit(void* Obj)
	{
		((TimelineComponent_eventSetIgnoreTimeDilation_Parms*)Obj)->bNewIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation = { "bNewIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimelineComponent_eventSetIgnoreTimeDilation_Parms), &Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Set whether to ignore time dilation. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set whether to ignore time dilation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetIgnoreTimeDilation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::TimelineComponent_eventSetIgnoreTimeDilation_Parms), Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics
	{
		struct TimelineComponent_eventSetLinearColorCurve_Parms
		{
			UCurveLinearColor* NewLinearColorCurve;
			FName LinearColorTrackName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLinearColorCurve;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LinearColorTrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_NewLinearColorCurve = { "NewLinearColorCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetLinearColorCurve_Parms, NewLinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_LinearColorTrackName = { "LinearColorTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetLinearColorCurve_Parms, LinearColorTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_NewLinearColorCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_LinearColorTrackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Update a certain linear color track's curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain linear color track's curve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetLinearColorCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::TimelineComponent_eventSetLinearColorCurve_Parms), Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics
	{
		struct TimelineComponent_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((TimelineComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimelineComponent_eventSetLooping_Parms), &Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** true means we would loop, false means we should not. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "true means we would loop, false means we should not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::TimelineComponent_eventSetLooping_Parms), Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics
	{
		struct TimelineComponent_eventSetNewTime_Parms
		{
			float NewTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetNewTime_Parms, NewTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Set the new playback position time to use */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set the new playback position time to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetNewTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::TimelineComponent_eventSetNewTime_Parms), Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetNewTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics
	{
		struct TimelineComponent_eventSetPlaybackPosition_Parms
		{
			float NewPosition;
			bool bFireEvents;
			bool bFireUpdate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
		static void NewProp_bFireEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEvents;
		static void NewProp_bFireUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetPlaybackPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit(void* Obj)
	{
		((TimelineComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents = { "bFireEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate_SetBit(void* Obj)
	{
		((TimelineComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate = { "bFireUpdate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_NewPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bFireUpdate" },
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Jump to a position in the timeline. \n\x09  * @param bFireEvents If true, event functions that are between current position and new playback position will fire. \n\x09  * @param bFireUpdate If true, the update output exec will fire after setting the new playback position.\n\x09 */" },
		{ "CPP_Default_bFireUpdate", "true" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Jump to a position in the timeline.\n@param bFireEvents If true, event functions that are between current position and new playback position will fire.\n@param bFireUpdate If true, the update output exec will fire after setting the new playback position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetPlaybackPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::TimelineComponent_eventSetPlaybackPosition_Parms), Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics
	{
		struct TimelineComponent_eventSetPlayRate_Parms
		{
			float NewRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::NewProp_NewRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Sets the new play rate for this timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Sets the new play rate for this timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::TimelineComponent_eventSetPlayRate_Parms), Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics
	{
		struct TimelineComponent_eventSetTimelineLength_Parms
		{
			float NewLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::NewProp_NewLength = { "NewLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetTimelineLength_Parms, NewLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::NewProp_NewLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Set length of the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set length of the timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetTimelineLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::TimelineComponent_eventSetTimelineLength_Parms), Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics
	{
		struct TimelineComponent_eventSetTimelineLengthMode_Parms
		{
			TEnumAsByte<ETimelineLengthMode> NewLengthMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewLengthMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::NewProp_NewLengthMode = { "NewLengthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetTimelineLengthMode_Parms, NewLengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(nullptr, 0) }; // 2372454209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::NewProp_NewLengthMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Sets the length mode of the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Sets the length mode of the timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetTimelineLengthMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::TimelineComponent_eventSetTimelineLengthMode_Parms), Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics
	{
		struct TimelineComponent_eventSetVectorCurve_Parms
		{
			UCurveVector* NewVectorCurve;
			FName VectorTrackName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVectorCurve;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VectorTrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_NewVectorCurve = { "NewVectorCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetVectorCurve_Parms, NewVectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_VectorTrackName = { "VectorTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetVectorCurve_Parms, VectorTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_NewVectorCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_VectorTrackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Update a certain vector track's curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain vector track's curve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetVectorCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::TimelineComponent_eventSetVectorCurve_Parms), Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetVectorCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Stop playback of timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Stop playback of timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimelineComponent);
	UClass* Z_Construct_UClass_UTimelineComponent_NoRegister()
	{
		return UTimelineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTimelineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TheTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimelineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimelineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation, "GetIgnoreTimeDilation" }, // 2980814187
		{ &Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition, "GetPlaybackPosition" }, // 3673473585
		{ &Z_Construct_UFunction_UTimelineComponent_GetPlayRate, "GetPlayRate" }, // 829875768
		{ &Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength, "GetScaledTimelineLength" }, // 2542779781
		{ &Z_Construct_UFunction_UTimelineComponent_GetTimelineLength, "GetTimelineLength" }, // 43846788
		{ &Z_Construct_UFunction_UTimelineComponent_IsLooping, "IsLooping" }, // 1209681365
		{ &Z_Construct_UFunction_UTimelineComponent_IsPlaying, "IsPlaying" }, // 4180198274
		{ &Z_Construct_UFunction_UTimelineComponent_IsReversing, "IsReversing" }, // 536898823
		{ &Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline, "OnRep_Timeline" }, // 3371093847
		{ &Z_Construct_UFunction_UTimelineComponent_Play, "Play" }, // 3061397684
		{ &Z_Construct_UFunction_UTimelineComponent_PlayFromStart, "PlayFromStart" }, // 2382377090
		{ &Z_Construct_UFunction_UTimelineComponent_Reverse, "Reverse" }, // 61870858
		{ &Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd, "ReverseFromEnd" }, // 1486721129
		{ &Z_Construct_UFunction_UTimelineComponent_SetFloatCurve, "SetFloatCurve" }, // 4131727918
		{ &Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation, "SetIgnoreTimeDilation" }, // 3991458118
		{ &Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve, "SetLinearColorCurve" }, // 2100441583
		{ &Z_Construct_UFunction_UTimelineComponent_SetLooping, "SetLooping" }, // 966249943
		{ &Z_Construct_UFunction_UTimelineComponent_SetNewTime, "SetNewTime" }, // 2227711510
		{ &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition, "SetPlaybackPosition" }, // 1647946407
		{ &Z_Construct_UFunction_UTimelineComponent_SetPlayRate, "SetPlayRate" }, // 971549178
		{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineLength, "SetTimelineLength" }, // 569570646
		{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode, "SetTimelineLengthMode" }, // 3981899098
		{ &Z_Construct_UFunction_UTimelineComponent_SetVectorCurve, "SetVectorCurve" }, // 2078886134
		{ &Z_Construct_UFunction_UTimelineComponent_Stop, "Stop" }, // 354872952
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * TimelineComponent holds a series of events, floats, vectors or colors with associated keyframes.\n * Events can be triggered at keyframes along the timeline. \n * Floats, vectors, and colors are interpolated between keyframes along the timeline.\n */" },
		{ "IncludePath", "Components/TimelineComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "TimelineComponent holds a series of events, floats, vectors or colors with associated keyframes.\nEvents can be triggered at keyframes along the timeline.\nFloats, vectors, and colors are interpolated between keyframes along the timeline." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline_MetaData[] = {
		{ "Comment", "/** The actual timeline structure */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "The actual timeline structure" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline = { "TheTimeline", "OnRep_Timeline", (EPropertyFlags)0x0040008100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineComponent, TheTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline_MetaData)) }; // 3250140494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Comment", "/** True if global time dilation should be ignored by this timeline, false otherwise. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "True if global time dilation should be ignored by this timeline, false otherwise." },
	};
#endif
	void Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UTimelineComponent*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTimelineComponent), &Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimelineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimelineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimelineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimelineComponent_Statics::ClassParams = {
		&UTimelineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimelineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTimelineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimelineComponent()
	{
		if (!Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton, Z_Construct_UClass_UTimelineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTimelineComponent>()
	{
		return UTimelineComponent::StaticClass();
	}

	void UTimelineComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TheTimeline(TEXT("TheTimeline"));

		const bool bIsValid = true
			&& Name_TheTimeline == ClassReps[(int32)ENetFields_Private::TheTimeline].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTimelineComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineComponent);
	UTimelineComponent::~UTimelineComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::EnumInfo[] = {
		{ ETimelineLengthMode_StaticEnum, TEXT("ETimelineLengthMode"), &Z_Registration_Info_UEnum_ETimelineLengthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2372454209U) },
		{ ETimelineDirection_StaticEnum, TEXT("ETimelineDirection"), &Z_Registration_Info_UEnum_ETimelineDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2361878139U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ScriptStructInfo[] = {
		{ FTimelineEventEntry::StaticStruct, Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewStructOps, TEXT("TimelineEventEntry"), &Z_Registration_Info_UScriptStruct_TimelineEventEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineEventEntry), 1231136402U) },
		{ FTimelineVectorTrack::StaticStruct, Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewStructOps, TEXT("TimelineVectorTrack"), &Z_Registration_Info_UScriptStruct_TimelineVectorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineVectorTrack), 783780170U) },
		{ FTimelineFloatTrack::StaticStruct, Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewStructOps, TEXT("TimelineFloatTrack"), &Z_Registration_Info_UScriptStruct_TimelineFloatTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineFloatTrack), 2966723885U) },
		{ FTimelineLinearColorTrack::StaticStruct, Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewStructOps, TEXT("TimelineLinearColorTrack"), &Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineLinearColorTrack), 1004742750U) },
		{ FTimeline::StaticStruct, Z_Construct_UScriptStruct_FTimeline_Statics::NewStructOps, TEXT("Timeline"), &Z_Registration_Info_UScriptStruct_Timeline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimeline), 3250140494U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimelineComponent, UTimelineComponent::StaticClass, TEXT("UTimelineComponent"), &Z_Registration_Info_UClass_UTimelineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimelineComponent), 1748143529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_2764339218(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
