// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneSequencePlayer.h"
#include "Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequencePlaybackSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequencePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePositionType();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdatePositionMethod();
	MOVIESCENE_API UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieScene, nullptr, "OnMovieSceneSequencePlayerEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMovieSceneSequencePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMovieSceneSequencePlayerEvent)
{
	OnMovieSceneSequencePlayerEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdatePositionMethod;
	static UEnum* EUpdatePositionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EUpdatePositionMethod"));
		}
		return Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EUpdatePositionMethod>()
	{
		return EUpdatePositionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enumerators[] = {
		{ "EUpdatePositionMethod::Play", (int64)EUpdatePositionMethod::Play },
		{ "EUpdatePositionMethod::Jump", (int64)EUpdatePositionMethod::Jump },
		{ "EUpdatePositionMethod::Scrub", (int64)EUpdatePositionMethod::Scrub },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum used to define how to update to a particular time\n */" },
		{ "Jump.Comment", "/** Jump to a specified position (without triggering events in between), using the current player status */" },
		{ "Jump.Name", "EUpdatePositionMethod::Jump" },
		{ "Jump.ToolTip", "Jump to a specified position (without triggering events in between), using the current player status" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "Play.Comment", "/** Update from the current position to a specified position (including triggering events), using the current player status */" },
		{ "Play.Name", "EUpdatePositionMethod::Play" },
		{ "Play.ToolTip", "Update from the current position to a specified position (including triggering events), using the current player status" },
		{ "Scrub.Comment", "/** Jump to a specified position, temporarily using EMovieScenePlayerStatus::Scrubbing */" },
		{ "Scrub.Name", "EUpdatePositionMethod::Scrub" },
		{ "Scrub.ToolTip", "Jump to a specified position, temporarily using EMovieScenePlayerStatus::Scrubbing" },
		{ "ToolTip", "Enum used to define how to update to a particular time" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EUpdatePositionMethod",
		"EUpdatePositionMethod",
		Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EUpdatePositionMethod()
	{
		if (!Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton, Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties;
class UScriptStruct* FMovieSceneSequenceReplProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceReplProperties"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceReplProperties>()
{
	return FMovieSceneSequenceReplProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownStatus_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastKnownStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownNumLoops_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastKnownNumLoops;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties that are broadcast from server->clients for time/state synchronization\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Properties that are broadcast from server->clients for time/state synchronization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceReplProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition_MetaData[] = {
		{ "Comment", "/** The last known position of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known position of the sequence on the server" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition = { "LastKnownPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus_MetaData[] = {
		{ "Comment", "/** The last known playback status of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known playback status of the sequence on the server" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus = { "LastKnownStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownStatus), Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus_MetaData)) }; // 1555802701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops_MetaData[] = {
		{ "Comment", "/** The last known number of loops of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known number of loops of the sequence on the server" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops = { "LastKnownNumLoops", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownNumLoops), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceReplProperties",
		sizeof(FMovieSceneSequenceReplProperties),
		alignof(FMovieSceneSequenceReplProperties),
		Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieScenePositionType;
	static UEnum* EMovieScenePositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePositionType, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieScenePositionType"));
		}
		return Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieScenePositionType>()
	{
		return EMovieScenePositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enumerators[] = {
		{ "EMovieScenePositionType::Frame", (int64)EMovieScenePositionType::Frame },
		{ "EMovieScenePositionType::Time", (int64)EMovieScenePositionType::Time },
		{ "EMovieScenePositionType::MarkedFrame", (int64)EMovieScenePositionType::MarkedFrame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Frame.Name", "EMovieScenePositionType::Frame" },
		{ "MarkedFrame.Name", "EMovieScenePositionType::MarkedFrame" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "Time.Name", "EMovieScenePositionType::Time" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EMovieScenePositionType",
		"EMovieScenePositionType",
		Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePositionType()
	{
		if (!Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams;
class UScriptStruct* FMovieSceneSequencePlaybackParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlaybackParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequencePlaybackParams>()
{
	return FMovieSceneSequencePlaybackParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkedFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkedFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PositionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasJumped_MetaData[];
#endif
		static void NewProp_bHasJumped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasJumped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlaybackParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::Frame" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, Frame), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::Time" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "unit", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::MarkedFrame" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame = { "MarkedFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, MarkedFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType = { "PositionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, PositionType), Z_Construct_UEnum_MovieScene_EMovieScenePositionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_MetaData)) }; // 206213922
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod = { "UpdateMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, UpdateMethod), Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_MetaData)) }; // 62040046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackParams*)Obj)->bHasJumped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped = { "bHasJumped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneSequencePlaybackParams), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequencePlaybackParams",
		sizeof(FMovieSceneSequencePlaybackParams),
		alignof(FMovieSceneSequencePlaybackParams),
		Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams;
class UScriptStruct* FMovieSceneSequencePlayToParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlayToParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequencePlayToParams>()
{
	return FMovieSceneSequencePlayToParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExclusive_MetaData[];
#endif
		static void NewProp_bExclusive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExclusive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlayToParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Should the PlayTo time be considered exclusive? Defaults to true as end frames in Sequencer are exclusive by default. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Should the PlayTo time be considered exclusive? Defaults to true as end frames in Sequencer are exclusive by default." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlayToParams*)Obj)->bExclusive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive = { "bExclusive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneSequencePlayToParams), &Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequencePlayToParams",
		sizeof(FMovieSceneSequencePlayToParams),
		alignof(FMovieSceneSequencePlayToParams),
		Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRPC_OnFinishPlaybackEvent)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_StoppedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPC_OnFinishPlaybackEvent_Implementation(Z_Param_StoppedTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRPC_OnStopEvent)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_StoppedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPC_OnStopEvent_Implementation(Z_Param_StoppedTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRPC_ExplicitServerUpdateEvent)
	{
		P_GET_ENUM(EUpdatePositionMethod,Z_Param_Method);
		P_GET_STRUCT(FFrameTime,Z_Param_RelevantTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod(Z_Param_Method),Z_Param_RelevantTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetSequenceName)
	{
		P_GET_UBOOL(Z_Param_bAddClientInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSequenceName(Z_Param_bAddClientInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetObjectBindings)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->GetObjectBindings(Z_Param_InObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetBoundObjects)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoundObjects(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetDisableCameraCuts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisableCameraCuts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetDisableCameraCuts)
	{
		P_GET_UBOOL(Z_Param_bInDisableCameraCuts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableCameraCuts(Z_Param_bInDisableCameraCuts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReversed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execJumpToMarkedFrame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JumpToMarkedFrame(Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrubToMarkedFrame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ScrubToMarkedFrame(Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayToMarkedFrame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayToMarkedFrame(Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execJumpToSeconds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToSeconds(Z_Param_TimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrubToSeconds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrubToSeconds(Z_Param_TimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayToSeconds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayToSeconds(Z_Param_TimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execJumpToFrame)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToFrame(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrubToFrame)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrubToFrame(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayToFrame)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayToFrame(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRestoreState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetPlaybackPosition)
	{
		P_GET_STRUCT(FMovieSceneSequencePlaybackParams,Z_Param_PlaybackParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackPosition(Z_Param_PlaybackParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayTo)
	{
		P_GET_STRUCT(FMovieSceneSequencePlaybackParams,Z_Param_PlaybackParams);
		P_GET_STRUCT(FMovieSceneSequencePlayToParams,Z_Param_PlayToParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTo(Z_Param_PlaybackParams,Z_Param_PlayToParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetTimeRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeRange(Z_Param_StartTime,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetFrameRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
		P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRange(Z_Param_StartFrame,Z_Param_Duration,Z_Param_SubFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRemoveWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetWeight)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeight(Z_Param_InWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetEndTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetEndTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetStartTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetStartTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetFrameRate)
	{
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRate(Z_Param_FrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetFrameDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrameDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGoToEndAndStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToEndAndStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execStopAtCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAtCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrub)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Scrub();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayLooping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLooping(Z_Param_NumLoops);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execChangePlaybackDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePlaybackDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	struct MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms
	{
		EUpdatePositionMethod Method;
		FFrameTime RelevantTime;
	};
	struct MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms
	{
		FFrameTime StoppedTime;
	};
	struct MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms
	{
		FFrameTime StoppedTime;
	};
	static FName NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent = FName(TEXT("RPC_ExplicitServerUpdateEvent"));
	void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime)
	{
		MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms Parms;
		Parms.Method=Method;
		Parms.RelevantTime=RelevantTime;
		ProcessEvent(FindFunctionChecked(NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent),&Parms);
	}
	static FName NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent = FName(TEXT("RPC_OnFinishPlaybackEvent"));
	void UMovieSceneSequencePlayer::RPC_OnFinishPlaybackEvent(FFrameTime StoppedTime)
	{
		MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms Parms;
		Parms.StoppedTime=StoppedTime;
		ProcessEvent(FindFunctionChecked(NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent),&Parms);
	}
	static FName NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent = FName(TEXT("RPC_OnStopEvent"));
	void UMovieSceneSequencePlayer::RPC_OnStopEvent(FFrameTime StoppedTime)
	{
		MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms Parms;
		Parms.StoppedTime=StoppedTime;
		ProcessEvent(FindFunctionChecked(NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent),&Parms);
	}
	void UMovieSceneSequencePlayer::StaticRegisterNativesUMovieSceneSequencePlayer()
	{
		UClass* Class = UMovieSceneSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePlaybackDirection", &UMovieSceneSequencePlayer::execChangePlaybackDirection },
			{ "GetBoundObjects", &UMovieSceneSequencePlayer::execGetBoundObjects },
			{ "GetCurrentTime", &UMovieSceneSequencePlayer::execGetCurrentTime },
			{ "GetDisableCameraCuts", &UMovieSceneSequencePlayer::execGetDisableCameraCuts },
			{ "GetDuration", &UMovieSceneSequencePlayer::execGetDuration },
			{ "GetEndTime", &UMovieSceneSequencePlayer::execGetEndTime },
			{ "GetFrameDuration", &UMovieSceneSequencePlayer::execGetFrameDuration },
			{ "GetFrameRate", &UMovieSceneSequencePlayer::execGetFrameRate },
			{ "GetObjectBindings", &UMovieSceneSequencePlayer::execGetObjectBindings },
			{ "GetPlayRate", &UMovieSceneSequencePlayer::execGetPlayRate },
			{ "GetSequence", &UMovieSceneSequencePlayer::execGetSequence },
			{ "GetSequenceName", &UMovieSceneSequencePlayer::execGetSequenceName },
			{ "GetStartTime", &UMovieSceneSequencePlayer::execGetStartTime },
			{ "GoToEndAndStop", &UMovieSceneSequencePlayer::execGoToEndAndStop },
			{ "IsPaused", &UMovieSceneSequencePlayer::execIsPaused },
			{ "IsPlaying", &UMovieSceneSequencePlayer::execIsPlaying },
			{ "IsReversed", &UMovieSceneSequencePlayer::execIsReversed },
			{ "JumpToFrame", &UMovieSceneSequencePlayer::execJumpToFrame },
			{ "JumpToMarkedFrame", &UMovieSceneSequencePlayer::execJumpToMarkedFrame },
			{ "JumpToSeconds", &UMovieSceneSequencePlayer::execJumpToSeconds },
			{ "Pause", &UMovieSceneSequencePlayer::execPause },
			{ "Play", &UMovieSceneSequencePlayer::execPlay },
			{ "PlayLooping", &UMovieSceneSequencePlayer::execPlayLooping },
			{ "PlayReverse", &UMovieSceneSequencePlayer::execPlayReverse },
			{ "PlayTo", &UMovieSceneSequencePlayer::execPlayTo },
			{ "PlayToFrame", &UMovieSceneSequencePlayer::execPlayToFrame },
			{ "PlayToMarkedFrame", &UMovieSceneSequencePlayer::execPlayToMarkedFrame },
			{ "PlayToSeconds", &UMovieSceneSequencePlayer::execPlayToSeconds },
			{ "RemoveWeight", &UMovieSceneSequencePlayer::execRemoveWeight },
			{ "RestoreState", &UMovieSceneSequencePlayer::execRestoreState },
			{ "RPC_ExplicitServerUpdateEvent", &UMovieSceneSequencePlayer::execRPC_ExplicitServerUpdateEvent },
			{ "RPC_OnFinishPlaybackEvent", &UMovieSceneSequencePlayer::execRPC_OnFinishPlaybackEvent },
			{ "RPC_OnStopEvent", &UMovieSceneSequencePlayer::execRPC_OnStopEvent },
			{ "Scrub", &UMovieSceneSequencePlayer::execScrub },
			{ "ScrubToFrame", &UMovieSceneSequencePlayer::execScrubToFrame },
			{ "ScrubToMarkedFrame", &UMovieSceneSequencePlayer::execScrubToMarkedFrame },
			{ "ScrubToSeconds", &UMovieSceneSequencePlayer::execScrubToSeconds },
			{ "SetDisableCameraCuts", &UMovieSceneSequencePlayer::execSetDisableCameraCuts },
			{ "SetFrameRange", &UMovieSceneSequencePlayer::execSetFrameRange },
			{ "SetFrameRate", &UMovieSceneSequencePlayer::execSetFrameRate },
			{ "SetPlaybackPosition", &UMovieSceneSequencePlayer::execSetPlaybackPosition },
			{ "SetPlayRate", &UMovieSceneSequencePlayer::execSetPlayRate },
			{ "SetTimeRange", &UMovieSceneSequencePlayer::execSetTimeRange },
			{ "SetWeight", &UMovieSceneSequencePlayer::execSetWeight },
			{ "Stop", &UMovieSceneSequencePlayer::execStop },
			{ "StopAtCurrentTime", &UMovieSceneSequencePlayer::execStopAtCurrentTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Changes the direction of playback (go in reverse if it was going forward, or vice versa) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Changes the direction of playback (go in reverse if it was going forward, or vice versa)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ChangePlaybackDirection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics
	{
		struct MovieSceneSequencePlayer_eventGetBoundObjects_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetBoundObjects_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Retrieve all objects currently bound to the specified binding identifier */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Retrieve all objects currently bound to the specified binding identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetBoundObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::MovieSceneSequencePlayer_eventGetBoundObjects_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct MovieSceneSequencePlayer_eventGetCurrentTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetCurrentTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the current playback position\n\x09 * @return The current playback position\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the current playback position\n@return The current playback position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetCurrentTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::MovieSceneSequencePlayer_eventGetCurrentTime_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics
	{
		struct MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms
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
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Set whether to disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set whether to disable camera cuts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetDisableCameraCuts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct MovieSceneSequencePlayer_eventGetDuration_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the total duration of the sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the total duration of the sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::MovieSceneSequencePlayer_eventGetDuration_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct MovieSceneSequencePlayer_eventGetEndTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetEndTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the offset within the level sequence to finish playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the offset within the level sequence to finish playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetEndTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::MovieSceneSequencePlayer_eventGetEndTime_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics
	{
		struct MovieSceneSequencePlayer_eventGetFrameDuration_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetFrameDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get this sequence's duration in frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get this sequence's duration in frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetFrameDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::MovieSceneSequencePlayer_eventGetFrameDuration_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequencePlayer_eventGetFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get this sequence's display rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get this sequence's display rate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::MovieSceneSequencePlayer_eventGetFrameRate_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics
	{
		struct MovieSceneSequencePlayer_eventGetObjectBindings_Parms
		{
			UObject* InObject;
			TArray<FMovieSceneObjectBindingID> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetObjectBindings_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetObjectBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Get the object bindings for the requested object */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the object bindings for the requested object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetObjectBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::MovieSceneSequencePlayer_eventGetObjectBindings_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics
	{
		struct MovieSceneSequencePlayer_eventGetPlayRate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Get the playback rate of this player. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the playback rate of this player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::MovieSceneSequencePlayer_eventGetPlayRate_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics
	{
		struct MovieSceneSequencePlayer_eventGetSequence_Parms
		{
			UMovieSceneSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Access the sequence this player is playing\n\x09 * @return the sequence currently assigned to this player\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Access the sequence this player is playing\n@return the sequence currently assigned to this player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::MovieSceneSequencePlayer_eventGetSequence_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics
	{
		struct MovieSceneSequencePlayer_eventGetSequenceName_Parms
		{
			bool bAddClientInfo;
			FString ReturnValue;
		};
		static void NewProp_bAddClientInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddClientInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_bAddClientInfo_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventGetSequenceName_Parms*)Obj)->bAddClientInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_bAddClientInfo = { "bAddClientInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventGetSequenceName_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_bAddClientInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetSequenceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_bAddClientInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the name of the sequence this player is playing\n\x09 * @param bAddClientInfo  If true, add client index if running as a client\n\x09 * @return the name of the sequence, or None if no sequence is set\n\x09 */" },
		{ "CPP_Default_bAddClientInfo", "false" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the name of the sequence this player is playing\n@param bAddClientInfo  If true, add client index if running as a client\n@return the name of the sequence, or None if no sequence is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetSequenceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::MovieSceneSequencePlayer_eventGetSequenceName_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct MovieSceneSequencePlayer_eventGetStartTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetStartTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the offset within the level sequence to start playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the offset within the level sequence to start playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetStartTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::MovieSceneSequencePlayer_eventGetStartTime_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Go to end of the sequence and stop. Adheres to 'When Finished' section rules." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GoToEndAndStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics
	{
		struct MovieSceneSequencePlayer_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether the sequence is paused. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether the sequence is paused." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::MovieSceneSequencePlayer_eventIsPaused_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics
	{
		struct MovieSceneSequencePlayer_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether the sequence is actively playing. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether the sequence is actively playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::MovieSceneSequencePlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics
	{
		struct MovieSceneSequencePlayer_eventIsReversed_Parms
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
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventIsReversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsReversed_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether playback is reversed. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether playback is reversed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsReversed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::MovieSceneSequencePlayer_eventIsReversed_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneSequencePlayer_eventJumpToFrame_Parms
		{
			FFrameTime NewPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventJumpToFrame_Parms, NewPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "JumpToFrame is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Jump To (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "JumpToFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::MovieSceneSequencePlayer_eventJumpToFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics
	{
		struct MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms
		{
			FString InLabel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "JumpToMarkedFrame is deprecated, use SetPlaybackPosition." },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "JumpToMarkedFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics
	{
		struct MovieSceneSequencePlayer_eventJumpToSeconds_Parms
		{
			float TimeInSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventJumpToSeconds_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "JumpToSeconds is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Jump To (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "JumpToSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::MovieSceneSequencePlayer_eventJumpToSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Pause playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Pause playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Start playback forwards from the current time cursor position, using the current play rate. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Start playback forwards from the current time cursor position, using the current play rate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics
	{
		struct MovieSceneSequencePlayer_eventPlayLooping_Parms
		{
			int32 NumLoops;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayLooping_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::NewProp_NumLoops,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Start playback from the current time cursor position, looping the specified number of times.\n\x09 * @param NumLoops - The number of loops to play. -1 indicates infinite looping.\n\x09 */" },
		{ "CPP_Default_NumLoops", "-1" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Start playback from the current time cursor position, looping the specified number of times.\n@param NumLoops - The number of loops to play. -1 indicates infinite looping." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::MovieSceneSequencePlayer_eventPlayLooping_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Reverse playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Reverse playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayReverse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics
	{
		struct MovieSceneSequencePlayer_eventPlayTo_Parms
		{
			FMovieSceneSequencePlaybackParams PlaybackParams;
			FMovieSceneSequencePlayToParams PlayToParams;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayToParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlaybackParams = { "PlaybackParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayTo_Parms, PlaybackParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, METADATA_PARAMS(nullptr, 0) }; // 1666297068
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlayToParams = { "PlayToParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayTo_Parms, PlayToParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams, METADATA_PARAMS(nullptr, 0) }; // 1974251985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlaybackParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlayToParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Play from the current position to the requested position and pause. If requested position is before the current position, \n\x09 * playback will be reversed. Playback to the requested position will be cancelled if Stop() or Pause() is invoked during this \n\x09 * playback.\n\x09 *\n\x09 * @param PlaybackParams The position settings (ie. the position to play to)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Play from the current position to the requested position and pause. If requested position is before the current position,\nplayback will be reversed. Playback to the requested position will be cancelled if Stop() or Pause() is invoked during this\nplayback.\n\n@param PlaybackParams The position settings (ie. the position to play to)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::MovieSceneSequencePlayer_eventPlayTo_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneSequencePlayer_eventPlayToFrame_Parms
		{
			FFrameTime NewPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayToFrame_Parms, NewPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PlayToFrame is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Play To (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayToFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::MovieSceneSequencePlayer_eventPlayToFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics
	{
		struct MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms
		{
			FString InLabel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PlayToMarkedFrame is deprecated, use SetPlaybackPosition." },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayToMarkedFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics
	{
		struct MovieSceneSequencePlayer_eventPlayToSeconds_Parms
		{
			float TimeInSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayToSeconds_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PlayToSeconds is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Play To (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayToSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::MovieSceneSequencePlayer_eventPlayToSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Removes a previously assigned weight\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Removes a previously assigned weight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RemoveWeight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Restore any changes made by this player to their original state\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Restore any changes made by this player to their original state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RestoreState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelevantTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms, Method), Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, METADATA_PARAMS(nullptr, 0) }; // 62040046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_RelevantTime = { "RelevantTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms, RelevantTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_RelevantTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server whenever an explicit change in time has occurred through one of the (Play|Jump|Scrub)To methods\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Called on the server whenever an explicit change in time has occurred through one of the (Play|Jump|Scrub)To methods" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RPC_ExplicitServerUpdateEvent", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoppedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::NewProp_StoppedTime = { "StoppedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms, StoppedTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::NewProp_StoppedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server when playback has reached the end. Could lead to stopping or pausing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Called on the server when playback has reached the end. Could lead to stopping or pausing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RPC_OnFinishPlaybackEvent", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoppedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::NewProp_StoppedTime = { "StoppedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms, StoppedTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::NewProp_StoppedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server when Stop() is called in order to differentiate Stops from Pauses.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Called on the server when Stop() is called in order to differentiate Stops from Pauses." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RPC_OnStopEvent", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Scrub playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Scrub playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Scrub", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneSequencePlayer_eventScrubToFrame_Parms
		{
			FFrameTime NewPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventScrubToFrame_Parms, NewPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ScrubToFrame is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Scrub To (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ScrubToFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::MovieSceneSequencePlayer_eventScrubToFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics
	{
		struct MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms
		{
			FString InLabel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ScrubToMarkedFrame is deprecated, use SetPlaybackPosition." },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ScrubToMarkedFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics
	{
		struct MovieSceneSequencePlayer_eventScrubToSeconds_Parms
		{
			float TimeInSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventScrubToSeconds_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ScrubToSeconds is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Scrub To (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ScrubToSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::MovieSceneSequencePlayer_eventScrubToSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics
	{
		struct MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms
		{
			bool bInDisableCameraCuts;
		};
		static void NewProp_bInDisableCameraCuts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDisableCameraCuts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms*)Obj)->bInDisableCameraCuts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts = { "bInDisableCameraCuts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Set whether to disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set whether to disable camera cuts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetDisableCameraCuts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics
	{
		struct MovieSceneSequencePlayer_eventSetFrameRange_Parms
		{
			int32 StartFrame;
			int32 Duration;
			float SubFrames;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, StartFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_SubFrames = { "SubFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, SubFrames), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_SubFrames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the valid play range for this sequence, determined by a starting frame number (in this sequence player's plaback frame), and a number of frames duration\n\x09 *\n\x09 * @param StartFrame      The frame number to start playing back the sequence\n\x09 * @param Duration        The number of frames to play\n\x09 */" },
		{ "CPP_Default_SubFrames", "0.000000" },
		{ "DisplayName", "Set Play Range (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the valid play range for this sequence, determined by a starting frame number (in this sequence player's plaback frame), and a number of frames duration\n\n@param StartFrame      The frame number to start playing back the sequence\n@param Duration        The number of frames to play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetFrameRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::MovieSceneSequencePlayer_eventSetFrameRange_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequencePlayer_eventSetFrameRate_Parms
		{
			FFrameRate FrameRate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRate_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::NewProp_FrameRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the frame-rate that this player should play with, making all frame numbers in the specified time-space\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the frame-rate that this player should play with, making all frame numbers in the specified time-space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::MovieSceneSequencePlayer_eventSetFrameRate_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics
	{
		struct MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms
		{
			FMovieSceneSequencePlaybackParams PlaybackParams;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::NewProp_PlaybackParams = { "PlaybackParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms, PlaybackParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, METADATA_PARAMS(nullptr, 0) }; // 1666297068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::NewProp_PlaybackParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the current time of the player by evaluating from the current time to the specified time, as if the sequence is playing. \n\x09 * Triggers events that lie within the evaluated range. Does not alter the persistent playback status of the player (IsPlaying).\n\x09 *\n\x09 * @param PlaybackParams The position settings (ie. the position to set playback to)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the current time of the player by evaluating from the current time to the specified time, as if the sequence is playing.\nTriggers events that lie within the evaluated range. Does not alter the persistent playback status of the player (IsPlaying).\n\n@param PlaybackParams The position settings (ie. the position to set playback to)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetPlaybackPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics
	{
		struct MovieSceneSequencePlayer_eventSetPlayRate_Parms
		{
			float PlayRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlayRate_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the playback rate of this player. Negative values will play the animation in reverse.\n\x09 * @param PlayRate - The new rate of playback for the animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the playback rate of this player. Negative values will play the animation in reverse.\n@param PlayRate - The new rate of playback for the animation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::MovieSceneSequencePlayer_eventSetPlayRate_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics
	{
		struct MovieSceneSequencePlayer_eventSetTimeRange_Parms
		{
			float StartTime;
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetTimeRange_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetTimeRange_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the valid play range for this sequence, determined by a starting time  and a duration (in seconds)\n\x09 *\n\x09 * @param StartTime       The time to start playing back the sequence in seconds\n\x09 * @param Duration        The length to play for\n\x09 */" },
		{ "DisplayName", "Set Play Range (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the valid play range for this sequence, determined by a starting time  and a duration (in seconds)\n\n@param StartTime       The time to start playing back the sequence in seconds\n@param Duration        The length to play for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetTimeRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::MovieSceneSequencePlayer_eventSetTimeRange_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics
	{
		struct MovieSceneSequencePlayer_eventSetWeight_Parms
		{
			double InWeight;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetWeight_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set a manual weight to be multiplied with all blendable elements within this sequence\n\x09 * @note: It is recommended that a weight between 0 and 1 is supplied, though this is not enforced\n\x09 * @note: It is recommended that either FMovieSceneSequencePlaybackSettings::DynamicWeighting should be true for this player or the asset it's playing back should be set to enable dynamic weight to avoid undesirable behavior\n\x09 *\n\x09 * @param InWeight    The weight to suuply to all elements in this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set a manual weight to be multiplied with all blendable elements within this sequence\n@note: It is recommended that a weight between 0 and 1 is supplied, though this is not enforced\n@note: It is recommended that either FMovieSceneSequencePlaybackSettings::DynamicWeighting should be true for this player or the asset it's playing back should be set to enable dynamic weight to avoid undesirable behavior\n\n@param InWeight    The weight to suuply to all elements in this sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::MovieSceneSequencePlayer_eventSetWeight_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Stop playback without moving the cursor. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Stop playback without moving the cursor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "StopAtCurrentTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequencePlayer);
	UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister()
	{
		return UMovieSceneSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Observer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlay_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayReverse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPause_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[];
#endif
		static void NewProp_bReversePlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DurationFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationSubFrames_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSubFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumLoops_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumLoops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTemplateInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTemplateInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetSyncProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetSyncProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackClient_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_PlaybackClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TickManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection, "ChangePlaybackDirection" }, // 3675578780
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects, "GetBoundObjects" }, // 686366370
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime, "GetCurrentTime" }, // 2570956625
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts, "GetDisableCameraCuts" }, // 4038447951
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration, "GetDuration" }, // 3031883741
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime, "GetEndTime" }, // 3388354572
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration, "GetFrameDuration" }, // 3668670741
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate, "GetFrameRate" }, // 2305722802
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings, "GetObjectBindings" }, // 3408681685
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate, "GetPlayRate" }, // 1281680929
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence, "GetSequence" }, // 2324326989
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName, "GetSequenceName" }, // 2333487570
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime, "GetStartTime" }, // 1987605367
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop, "GoToEndAndStop" }, // 3316376594
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused, "IsPaused" }, // 736907039
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying, "IsPlaying" }, // 2361769883
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed, "IsReversed" }, // 3247034239
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame, "JumpToFrame" }, // 4275202493
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame, "JumpToMarkedFrame" }, // 3349491451
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds, "JumpToSeconds" }, // 2654920900
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause, "Pause" }, // 2674234668
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Play, "Play" }, // 3546063151
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping, "PlayLooping" }, // 1626966809
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse, "PlayReverse" }, // 2267113985
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo, "PlayTo" }, // 2677228130
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame, "PlayToFrame" }, // 25102249
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame, "PlayToMarkedFrame" }, // 3730910329
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds, "PlayToSeconds" }, // 3156204561
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight, "RemoveWeight" }, // 2538512946
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState, "RestoreState" }, // 3037534900
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent, "RPC_ExplicitServerUpdateEvent" }, // 3335085795
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent, "RPC_OnFinishPlaybackEvent" }, // 273848234
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent, "RPC_OnStopEvent" }, // 2132640177
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub, "Scrub" }, // 1370149464
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame, "ScrubToFrame" }, // 3542945911
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame, "ScrubToMarkedFrame" }, // 2594940778
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds, "ScrubToSeconds" }, // 1538712420
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts, "SetDisableCameraCuts" }, // 772009341
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange, "SetFrameRange" }, // 504487823
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate, "SetFrameRate" }, // 219026151
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition, "SetPlaybackPosition" }, // 2335567164
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate, "SetPlayRate" }, // 2562632308
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange, "SetTimeRange" }, // 2773016573
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight, "SetWeight" }, // 4058510970
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop, "Stop" }, // 2940719294
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime, "StopAtCurrentTime" }, // 4076651797
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract class that provides consistent player behaviour for various animation players\n */" },
		{ "IncludePath", "MovieSceneSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract class that provides consistent player behaviour for various animation players" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Observer_MetaData[] = {
		{ "Comment", "/** Obeserver interface used for controlling whether the effects of this sequence can be seen even when it is playing back. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Obeserver interface used for controlling whether the effects of this sequence can be seen even when it is playing back." },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, Observer), Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Observer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is played */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is played" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay = { "OnPlay", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPlay), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay_MetaData)) }; // 3757877558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is played in reverse */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is played in reverse" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse = { "OnPlayReverse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPlayReverse), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse_MetaData)) }; // 3757877558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is stopped */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is stopped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnStop), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop_MetaData)) }; // 3757877558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is paused */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is paused" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause = { "OnPause", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPause), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause_MetaData)) }; // 3757877558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player finishes naturally (without explicitly calling stop) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player finishes naturally (without explicitly calling stop)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnFinished), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished_MetaData)) }; // 3757877558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status_MetaData[] = {
		{ "Comment", "/** Movie player status. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Movie player status." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, Status), Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status_MetaData)) }; // 1555802701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_MetaData[] = {
		{ "Comment", "/** Whether we're currently playing in reverse. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Whether we're currently playing in reverse." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
	{
		((UMovieSceneSequencePlayer*)Obj)->bReversePlayback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMovieSceneSequencePlayer), &Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "Comment", "/** The sequence to play back */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The sequence to play back" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** Time (in playback frames) at which to start playing the sequence (defaults to the lower bound of the sequence's play range) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Time (in playback frames) at which to start playing the sequence (defaults to the lower bound of the sequence's play range)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, StartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames_MetaData[] = {
		{ "Comment", "/** Time (in playback frames) at which to stop playing the sequence (defaults to the upper bound of the sequence's play range) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Time (in playback frames) at which to stop playing the sequence (defaults to the upper bound of the sequence's play range)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames = { "DurationFrames", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, DurationFrames), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames = { "DurationSubFrames", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, DurationSubFrames), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops_MetaData[] = {
		{ "Comment", "/** The number of times we have looped in the current playback */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The number of times we have looped in the current playback" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops = { "CurrentNumLoops", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, CurrentNumLoops), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Comment", "/** Specific playback settings for the animation. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Specific playback settings for the animation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings_MetaData)) }; // 2544210146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData[] = {
		{ "Comment", "/** The root template instance we're evaluating */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The root template instance we're evaluating" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance = { "RootTemplateInstance", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, RootTemplateInstance), Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData)) }; // 4282407389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps_MetaData[] = {
		{ "Comment", "/** Replicated playback status and current time that are replicated to clients */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Replicated playback status and current time that are replicated to clients" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps = { "NetSyncProps", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, NetSyncProps), Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps_MetaData)) }; // 2296913450
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient_MetaData[] = {
		{ "Comment", "/** External client pointer in charge of playing back this sequence */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "External client pointer in charge of playing back this sequence" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient = { "PlaybackClient", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackClient), Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager_MetaData[] = {
		{ "Comment", "/** Global tick manager, held here to keep it alive while world sequences are in play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Global tick manager, held here to keep it alive while world sequences are in play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager = { "TickManager", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSequencePlayer, TickManager), Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSequencePlayer, IMovieSceneSequenceTickManagerClient), false },  // 162673887
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequencePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::ClassParams = {
		&UMovieSceneSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequencePlayer()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton, Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequencePlayer>()
	{
		return UMovieSceneSequencePlayer::StaticClass();
	}

	void UMovieSceneSequencePlayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Observer(TEXT("Observer"));
		static const FName Name_bReversePlayback(TEXT("bReversePlayback"));
		static const FName Name_StartTime(TEXT("StartTime"));
		static const FName Name_DurationFrames(TEXT("DurationFrames"));
		static const FName Name_DurationSubFrames(TEXT("DurationSubFrames"));
		static const FName Name_PlaybackSettings(TEXT("PlaybackSettings"));
		static const FName Name_NetSyncProps(TEXT("NetSyncProps"));

		const bool bIsValid = true
			&& Name_Observer == ClassReps[(int32)ENetFields_Private::Observer].Property->GetFName()
			&& Name_bReversePlayback == ClassReps[(int32)ENetFields_Private::bReversePlayback].Property->GetFName()
			&& Name_StartTime == ClassReps[(int32)ENetFields_Private::StartTime].Property->GetFName()
			&& Name_DurationFrames == ClassReps[(int32)ENetFields_Private::DurationFrames].Property->GetFName()
			&& Name_DurationSubFrames == ClassReps[(int32)ENetFields_Private::DurationSubFrames].Property->GetFName()
			&& Name_PlaybackSettings == ClassReps[(int32)ENetFields_Private::PlaybackSettings].Property->GetFName()
			&& Name_NetSyncProps == ClassReps[(int32)ENetFields_Private::NetSyncProps].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMovieSceneSequencePlayer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequencePlayer);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::EnumInfo[] = {
		{ EUpdatePositionMethod_StaticEnum, TEXT("EUpdatePositionMethod"), &Z_Registration_Info_UEnum_EUpdatePositionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 62040046U) },
		{ EMovieScenePositionType_StaticEnum, TEXT("EMovieScenePositionType"), &Z_Registration_Info_UEnum_EMovieScenePositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 206213922U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSequenceReplProperties::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewStructOps, TEXT("MovieSceneSequenceReplProperties"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceReplProperties), 2296913450U) },
		{ FMovieSceneSequencePlaybackParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewStructOps, TEXT("MovieSceneSequencePlaybackParams"), &Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequencePlaybackParams), 1666297068U) },
		{ FMovieSceneSequencePlayToParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewStructOps, TEXT("MovieSceneSequencePlayToParams"), &Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequencePlayToParams), 1974251985U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequencePlayer, UMovieSceneSequencePlayer::StaticClass, TEXT("UMovieSceneSequencePlayer"), &Z_Registration_Info_UClass_UMovieSceneSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequencePlayer), 2273039798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_1795888291(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
