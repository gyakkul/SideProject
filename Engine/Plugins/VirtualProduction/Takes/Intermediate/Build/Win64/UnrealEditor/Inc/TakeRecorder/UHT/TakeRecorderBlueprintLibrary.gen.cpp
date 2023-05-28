// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Recorder/TakeRecorderBlueprintLibrary.h"
#include "MovieScene.h"
#include "Recorder/TakeRecorderParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorder_NoRegister();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderBlueprintLibrary();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderBlueprintLibrary_NoRegister();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderPanel_NoRegister();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature();
	TAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderParameters();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeMetaData_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSources_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakeRecorder();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder, nullptr, "OnTakeRecorderPanelChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTakeRecorderPanelChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderPanelChanged)
{
	OnTakeRecorderPanelChanged.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder, nullptr, "OnTakeRecorderPreInitialize__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTakeRecorderPreInitialize_DelegateWrapper(const FScriptDelegate& OnTakeRecorderPreInitialize)
{
	OnTakeRecorderPreInitialize.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder, nullptr, "OnTakeRecorderStarted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTakeRecorderStarted_DelegateWrapper(const FScriptDelegate& OnTakeRecorderStarted)
{
	OnTakeRecorderStarted.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder, nullptr, "OnTakeRecorderStopped__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTakeRecorderStopped_DelegateWrapper(const FScriptDelegate& OnTakeRecorderStopped)
{
	OnTakeRecorderStopped.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics
	{
		struct _Script_TakeRecorder_eventOnTakeRecorderFinished_Parms
		{
			ULevelSequence* SequenceAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::NewProp_SequenceAsset = { "SequenceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TakeRecorder_eventOnTakeRecorderFinished_Parms, SequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::NewProp_SequenceAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder, nullptr, "OnTakeRecorderFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::_Script_TakeRecorder_eventOnTakeRecorderFinished_Parms), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTakeRecorderFinished_DelegateWrapper(const FScriptDelegate& OnTakeRecorderFinished, ULevelSequence* SequenceAsset)
{
	struct _Script_TakeRecorder_eventOnTakeRecorderFinished_Parms
	{
		ULevelSequence* SequenceAsset;
	};
	_Script_TakeRecorder_eventOnTakeRecorderFinished_Parms Parms;
	Parms.SequenceAsset=SequenceAsset;
	OnTakeRecorderFinished.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder, nullptr, "OnTakeRecorderCancelled__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTakeRecorderCancelled_DelegateWrapper(const FScriptDelegate& OnTakeRecorderCancelled)
{
	OnTakeRecorderCancelled.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics
	{
		struct _Script_TakeRecorder_eventOnTakeRecorderMarkedFrameAdded_Parms
		{
			FMovieSceneMarkedFrame MarkedFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkedFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkedFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::NewProp_MarkedFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::NewProp_MarkedFrame = { "MarkedFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TakeRecorder_eventOnTakeRecorderMarkedFrameAdded_Parms, MarkedFrame), Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::NewProp_MarkedFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::NewProp_MarkedFrame_MetaData)) }; // 97916427
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::NewProp_MarkedFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder, nullptr, "OnTakeRecorderMarkedFrameAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::_Script_TakeRecorder_eventOnTakeRecorderMarkedFrameAdded_Parms), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTakeRecorderMarkedFrameAdded_DelegateWrapper(const FScriptDelegate& OnTakeRecorderMarkedFrameAdded, FMovieSceneMarkedFrame const& MarkedFrame)
{
	struct _Script_TakeRecorder_eventOnTakeRecorderMarkedFrameAdded_Parms
	{
		FMovieSceneMarkedFrame MarkedFrame;
	};
	_Script_TakeRecorder_eventOnTakeRecorderMarkedFrameAdded_Parms Parms;
	Parms.MarkedFrame=MarkedFrame;
	OnTakeRecorderMarkedFrameAdded.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderMarkedFrameAdded)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderMarkedFrameAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::SetOnTakeRecorderMarkedFrameAdded(FOnTakeRecorderMarkedFrameAdded(Z_Param_OnTakeRecorderMarkedFrameAdded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderCancelled)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderCancelled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::SetOnTakeRecorderCancelled(FOnTakeRecorderCancelled(Z_Param_OnTakeRecorderCancelled));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderFinished)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderFinished);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::SetOnTakeRecorderFinished(FOnTakeRecorderFinished(Z_Param_OnTakeRecorderFinished));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderStopped)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderStopped);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::SetOnTakeRecorderStopped(FOnTakeRecorderStopped(Z_Param_OnTakeRecorderStopped));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderStarted)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::SetOnTakeRecorderStarted(FOnTakeRecorderStarted(Z_Param_OnTakeRecorderStarted));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderPreInitialize)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderPreInitialize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::SetOnTakeRecorderPreInitialize(FOnTakeRecorderPreInitialize(Z_Param_OnTakeRecorderPreInitialize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderPanelChanged)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderPanelChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::SetOnTakeRecorderPanelChanged(FOnTakeRecorderPanelChanged(Z_Param_OnTakeRecorderPanelChanged));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execOpenTakeRecorderPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakeRecorderPanel**)Z_Param__Result=UTakeRecorderBlueprintLibrary::OpenTakeRecorderPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execGetTakeRecorderPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakeRecorderPanel**)Z_Param__Result=UTakeRecorderBlueprintLibrary::GetTakeRecorderPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execCancelRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::CancelRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execStopRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::StopRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execGetActiveRecorder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakeRecorder**)Z_Param__Result=UTakeRecorderBlueprintLibrary::GetActiveRecorder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTakeRecorderBlueprintLibrary::IsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execSetDefaultParameters)
	{
		P_GET_STRUCT_REF(FTakeRecorderParameters,Z_Param_Out_DefaultParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderBlueprintLibrary::SetDefaultParameters(Z_Param_Out_DefaultParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execGetDefaultParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTakeRecorderParameters*)Z_Param__Result=UTakeRecorderBlueprintLibrary::GetDefaultParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execStartRecording)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UTakeRecorderSources,Z_Param_Sources);
		P_GET_OBJECT(UTakeMetaData,Z_Param_MetaData);
		P_GET_STRUCT_REF(FTakeRecorderParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakeRecorder**)Z_Param__Result=UTakeRecorderBlueprintLibrary::StartRecording(Z_Param_LevelSequence,Z_Param_Sources,Z_Param_MetaData,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderBlueprintLibrary::execIsTakeRecorderEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTakeRecorderBlueprintLibrary::IsTakeRecorderEnabled();
		P_NATIVE_END;
	}
	void UTakeRecorderBlueprintLibrary::StaticRegisterNativesUTakeRecorderBlueprintLibrary()
	{
		UClass* Class = UTakeRecorderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelRecording", &UTakeRecorderBlueprintLibrary::execCancelRecording },
			{ "GetActiveRecorder", &UTakeRecorderBlueprintLibrary::execGetActiveRecorder },
			{ "GetDefaultParameters", &UTakeRecorderBlueprintLibrary::execGetDefaultParameters },
			{ "GetTakeRecorderPanel", &UTakeRecorderBlueprintLibrary::execGetTakeRecorderPanel },
			{ "IsRecording", &UTakeRecorderBlueprintLibrary::execIsRecording },
			{ "IsTakeRecorderEnabled", &UTakeRecorderBlueprintLibrary::execIsTakeRecorderEnabled },
			{ "OpenTakeRecorderPanel", &UTakeRecorderBlueprintLibrary::execOpenTakeRecorderPanel },
			{ "SetDefaultParameters", &UTakeRecorderBlueprintLibrary::execSetDefaultParameters },
			{ "SetOnTakeRecorderCancelled", &UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderCancelled },
			{ "SetOnTakeRecorderFinished", &UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderFinished },
			{ "SetOnTakeRecorderMarkedFrameAdded", &UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderMarkedFrameAdded },
			{ "SetOnTakeRecorderPanelChanged", &UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderPanelChanged },
			{ "SetOnTakeRecorderPreInitialize", &UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderPreInitialize },
			{ "SetOnTakeRecorderStarted", &UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderStarted },
			{ "SetOnTakeRecorderStopped", &UTakeRecorderBlueprintLibrary::execSetOnTakeRecorderStopped },
			{ "StartRecording", &UTakeRecorderBlueprintLibrary::execStartRecording },
			{ "StopRecording", &UTakeRecorderBlueprintLibrary::execStopRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_CancelRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_CancelRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Cancel recording if there is a recorder currently active\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Cancel recording if there is a recorder currently active" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_CancelRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "CancelRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_CancelRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_CancelRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_CancelRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_CancelRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventGetActiveRecorder_Parms
		{
			UTakeRecorder* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventGetActiveRecorder_Parms, ReturnValue), Z_Construct_UClass_UTakeRecorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Retrieve the currently active recorder, or None if there none are active\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Retrieve the currently active recorder, or None if there none are active" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "GetActiveRecorder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::TakeRecorderBlueprintLibrary_eventGetActiveRecorder_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventGetDefaultParameters_Parms
		{
			FTakeRecorderParameters ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventGetDefaultParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FTakeRecorderParameters, METADATA_PARAMS(nullptr, 0) }; // 110737924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Get the default recorder parameters according to the project and user settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Get the default recorder parameters according to the project and user settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "GetDefaultParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::TakeRecorderBlueprintLibrary_eventGetDefaultParameters_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventGetTakeRecorderPanel_Parms
		{
			UTakeRecorderPanel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventGetTakeRecorderPanel_Parms, ReturnValue), Z_Construct_UClass_UTakeRecorderPanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Get the currently open take recorder panel, if one is open\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Get the currently open take recorder panel, if one is open" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "GetTakeRecorderPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::TakeRecorderBlueprintLibrary_eventGetTakeRecorderPanel_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventIsRecording_Parms
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
	void Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TakeRecorderBlueprintLibrary_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeRecorderBlueprintLibrary_eventIsRecording_Parms), &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Check whether a recording is currently active\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Check whether a recording is currently active" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "IsRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::TakeRecorderBlueprintLibrary_eventIsRecording_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventIsTakeRecorderEnabled_Parms
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
	void Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TakeRecorderBlueprintLibrary_eventIsTakeRecorderEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeRecorderBlueprintLibrary_eventIsTakeRecorderEnabled_Parms), &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Is the Take Recorder enabled in the build\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Is the Take Recorder enabled in the build" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "IsTakeRecorderEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::TakeRecorderBlueprintLibrary_eventIsTakeRecorderEnabled_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventOpenTakeRecorderPanel_Parms
		{
			UTakeRecorderPanel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventOpenTakeRecorderPanel_Parms, ReturnValue), Z_Construct_UClass_UTakeRecorderPanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Get the currently open take recorder panel, if one is open, opening a new one if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Get the currently open take recorder panel, if one is open, opening a new one if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "OpenTakeRecorderPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::TakeRecorderBlueprintLibrary_eventOpenTakeRecorderPanel_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventSetDefaultParameters_Parms
		{
			FTakeRecorderParameters DefaultParameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::NewProp_DefaultParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::NewProp_DefaultParameters = { "DefaultParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventSetDefaultParameters_Parms, DefaultParameters), Z_Construct_UScriptStruct_FTakeRecorderParameters, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::NewProp_DefaultParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::NewProp_DefaultParameters_MetaData)) }; // 110737924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::NewProp_DefaultParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Set the default recorder parameters\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Set the default recorder parameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "SetDefaultParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::TakeRecorderBlueprintLibrary_eventSetDefaultParameters_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderCancelled_Parms
		{
			FScriptDelegate OnTakeRecorderCancelled;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderCancelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::NewProp_OnTakeRecorderCancelled = { "OnTakeRecorderCancelled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderCancelled_Parms, OnTakeRecorderCancelled), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3465820310
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::NewProp_OnTakeRecorderCancelled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called when take recording is cancelled. */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Called when take recording is cancelled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "SetOnTakeRecorderCancelled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderCancelled_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderFinished_Parms
		{
			FScriptDelegate OnTakeRecorderFinished;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::NewProp_OnTakeRecorderFinished = { "OnTakeRecorderFinished", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderFinished_Parms, OnTakeRecorderFinished), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3721973488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::NewProp_OnTakeRecorderFinished,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called when take recording finishes. */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Called when take recording finishes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "SetOnTakeRecorderFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderFinished_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderMarkedFrameAdded_Parms
		{
			FScriptDelegate OnTakeRecorderMarkedFrameAdded;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderMarkedFrameAdded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::NewProp_OnTakeRecorderMarkedFrameAdded = { "OnTakeRecorderMarkedFrameAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderMarkedFrameAdded_Parms, OnTakeRecorderMarkedFrameAdded), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1841148907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::NewProp_OnTakeRecorderMarkedFrameAdded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called when a marked frame is added. */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Called when a marked frame is added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "SetOnTakeRecorderMarkedFrameAdded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderMarkedFrameAdded_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderPanelChanged_Parms
		{
			FScriptDelegate OnTakeRecorderPanelChanged;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderPanelChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::NewProp_OnTakeRecorderPanelChanged = { "OnTakeRecorderPanelChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderPanelChanged_Parms, OnTakeRecorderPanelChanged), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1140876519
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::NewProp_OnTakeRecorderPanelChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called when a Take Panel is constructed or destroyed. */" },
		{ "DisplayName", "Set On Take Recorder Panel Changed" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Called when a Take Panel is constructed or destroyed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "SetOnTakeRecorderPanelChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderPanelChanged_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderPreInitialize_Parms
		{
			FScriptDelegate OnTakeRecorderPreInitialize;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderPreInitialize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::NewProp_OnTakeRecorderPreInitialize = { "OnTakeRecorderPreInitialize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderPreInitialize_Parms, OnTakeRecorderPreInitialize), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2184263200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::NewProp_OnTakeRecorderPreInitialize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called before initialization occurs (ie. when the recording button is pressed and before the countdown starts) */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Called before initialization occurs (ie. when the recording button is pressed and before the countdown starts)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "SetOnTakeRecorderPreInitialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderPreInitialize_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderStarted_Parms
		{
			FScriptDelegate OnTakeRecorderStarted;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::NewProp_OnTakeRecorderStarted = { "OnTakeRecorderStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderStarted_Parms, OnTakeRecorderStarted), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2114779803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::NewProp_OnTakeRecorderStarted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called when take recording starts. */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Called when take recording starts." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "SetOnTakeRecorderStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderStarted_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderStopped_Parms
		{
			FScriptDelegate OnTakeRecorderStopped;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderStopped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::NewProp_OnTakeRecorderStopped = { "OnTakeRecorderStopped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderStopped_Parms, OnTakeRecorderStopped), Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1294330611
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::NewProp_OnTakeRecorderStopped,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called when take recording is stopped. */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Called when take recording is stopped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "SetOnTakeRecorderStopped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::TakeRecorderBlueprintLibrary_eventSetOnTakeRecorderStopped_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics
	{
		struct TakeRecorderBlueprintLibrary_eventStartRecording_Parms
		{
			ULevelSequence* LevelSequence;
			UTakeRecorderSources* Sources;
			UTakeMetaData* MetaData;
			FTakeRecorderParameters Parameters;
			UTakeRecorder* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sources;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventStartRecording_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventStartRecording_Parms, Sources), Z_Construct_UClass_UTakeRecorderSources_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventStartRecording_Parms, MetaData), Z_Construct_UClass_UTakeMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventStartRecording_Parms, Parameters), Z_Construct_UScriptStruct_FTakeRecorderParameters, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_Parameters_MetaData)) }; // 110737924
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderBlueprintLibrary_eventStartRecording_Parms, ReturnValue), Z_Construct_UClass_UTakeRecorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_Sources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Start a new recording using the specified parameters. Will fail if a recording is currently in progress\n\x09 *\n\x09 * @param LevelSequence         The base level sequence to use for the recording. Will be played back during the recording and duplicated to create the starting point for the resulting asset.\n\x09 * @param Sources               The sources to use for the recording\n\x09 * @param MetaData              Meta-data pertaining to this recording, duplicated into the resulting recorded sequence\n\x09 * @param Parameters            Configurable parameters for this recorder instance\n\x09 * @return The recorder responsible for the recording, or None if a a recording could not be started\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Start a new recording using the specified parameters. Will fail if a recording is currently in progress\n\n@param LevelSequence         The base level sequence to use for the recording. Will be played back during the recording and duplicated to create the starting point for the resulting asset.\n@param Sources               The sources to use for the recording\n@param MetaData              Meta-data pertaining to this recording, duplicated into the resulting recorded sequence\n@param Parameters            Configurable parameters for this recorder instance\n@return The recorder responsible for the recording, or None if a a recording could not be started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "StartRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::TakeRecorderBlueprintLibrary_eventStartRecording_Parms), Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StopRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StopRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Stop recording if there is a recorder currently active\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Stop recording if there is a recorder currently active" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderBlueprintLibrary, nullptr, "StopRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StopRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StopRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StopRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StopRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderBlueprintLibrary);
	UClass* Z_Construct_UClass_UTakeRecorderBlueprintLibrary_NoRegister()
	{
		return UTakeRecorderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_CancelRecording, "CancelRecording" }, // 978991704
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetActiveRecorder, "GetActiveRecorder" }, // 1304923711
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetDefaultParameters, "GetDefaultParameters" }, // 3456677539
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_GetTakeRecorderPanel, "GetTakeRecorderPanel" }, // 1962574264
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsRecording, "IsRecording" }, // 2912587826
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_IsTakeRecorderEnabled, "IsTakeRecorderEnabled" }, // 2013610693
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_OpenTakeRecorderPanel, "OpenTakeRecorderPanel" }, // 608855998
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetDefaultParameters, "SetDefaultParameters" }, // 3090324098
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderCancelled, "SetOnTakeRecorderCancelled" }, // 602400061
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderFinished, "SetOnTakeRecorderFinished" }, // 3287345946
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderMarkedFrameAdded, "SetOnTakeRecorderMarkedFrameAdded" }, // 1200421287
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPanelChanged, "SetOnTakeRecorderPanelChanged" }, // 1168423856
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderPreInitialize, "SetOnTakeRecorderPreInitialize" }, // 2242289603
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStarted, "SetOnTakeRecorderStarted" }, // 4130264186
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_SetOnTakeRecorderStopped, "SetOnTakeRecorderStopped" }, // 1866339677
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StartRecording, "StartRecording" }, // 1151690679
		{ &Z_Construct_UFunction_UTakeRecorderBlueprintLibrary_StopRecording, "StopRecording" }, // 1513584971
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Recorder/TakeRecorderBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics::ClassParams = {
		&UTakeRecorderBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderBlueprintLibrary.OuterSingleton;
	}
	template<> TAKERECORDER_API UClass* StaticClass<UTakeRecorderBlueprintLibrary>()
	{
		return UTakeRecorderBlueprintLibrary::StaticClass();
	}
	UTakeRecorderBlueprintLibrary::UTakeRecorderBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderBlueprintLibrary);
	UTakeRecorderBlueprintLibrary::~UTakeRecorderBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderBlueprintLibrary, UTakeRecorderBlueprintLibrary::StaticClass, TEXT("UTakeRecorderBlueprintLibrary"), &Z_Registration_Info_UClass_UTakeRecorderBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderBlueprintLibrary), 2510268056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_3215952955(TEXT("/Script/TakeRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
