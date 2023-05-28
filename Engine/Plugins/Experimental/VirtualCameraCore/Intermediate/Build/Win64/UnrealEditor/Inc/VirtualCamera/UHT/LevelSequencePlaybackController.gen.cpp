// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/LevelSequencePlaybackController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequencePlaybackController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_ULevelSequencePlaybackController();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_ULevelSequencePlaybackController_NoRegister();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceData;
class UScriptStruct* FLevelSequenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceData, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("LevelSequenceData"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceData.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FLevelSequenceData>()
{
	return FLevelSequenceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastEdited_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastEdited;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "Level Sequence Info" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceData, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Level Sequence Info" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_LastEdited_MetaData[] = {
		{ "Category", "Level Sequence Info" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_LastEdited = { "LastEdited", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceData, LastEdited), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_LastEdited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_LastEdited_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewProp_LastEdited,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"LevelSequenceData",
		sizeof(FLevelSequenceData),
		alignof(FLevelSequenceData),
		Z_Construct_UScriptStruct_FLevelSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceData()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceData.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceData.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execClearActiveLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActiveLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execSetActiveLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InNewLevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetActiveLevelSequence(Z_Param_InNewLevelSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execStopLevelSequencePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLevelSequencePlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execPlayLevelSequenceReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLevelSequenceReverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execPlayLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execPauseLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execIsSequencePlaybackActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSequencePlaybackActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execJumpToPlaybackPosition)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InFrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToPlaybackPosition(Z_Param_Out_InFrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetCurrentSequencePlaybackTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetCurrentSequencePlaybackTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetCurrentSequencePlaybackPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=P_THIS->GetCurrentSequencePlaybackPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetCurrentSequenceDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetCurrentSequenceDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetCurrentSequencePlaybackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetCurrentSequencePlaybackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetCurrentSequencePlaybackStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetCurrentSequencePlaybackStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execSetSequencerLockedToCameraCut)
	{
		P_GET_UBOOL(Z_Param_bLockView);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequencerLockedToCameraCut(Z_Param_bLockView);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execIsSequencerLockedToCameraCut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSequencerLockedToCameraCut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetCurrentSequenceFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetCurrentSequenceFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetActiveLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetActiveLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetActiveLevelSequenceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActiveLevelSequenceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlaybackController::execGetLevelSequences)
	{
		P_GET_TARRAY_REF(FLevelSequenceData,Z_Param_Out_OutLevelSequenceNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLevelSequences(Z_Param_Out_OutLevelSequenceNames);
		P_NATIVE_END;
	}
	void ULevelSequencePlaybackController::StaticRegisterNativesULevelSequencePlaybackController()
	{
		UClass* Class = ULevelSequencePlaybackController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearActiveLevelSequence", &ULevelSequencePlaybackController::execClearActiveLevelSequence },
			{ "GetActiveLevelSequence", &ULevelSequencePlaybackController::execGetActiveLevelSequence },
			{ "GetActiveLevelSequenceName", &ULevelSequencePlaybackController::execGetActiveLevelSequenceName },
			{ "GetCurrentSequenceDuration", &ULevelSequencePlaybackController::execGetCurrentSequenceDuration },
			{ "GetCurrentSequenceFrameRate", &ULevelSequencePlaybackController::execGetCurrentSequenceFrameRate },
			{ "GetCurrentSequencePlaybackEnd", &ULevelSequencePlaybackController::execGetCurrentSequencePlaybackEnd },
			{ "GetCurrentSequencePlaybackPosition", &ULevelSequencePlaybackController::execGetCurrentSequencePlaybackPosition },
			{ "GetCurrentSequencePlaybackStart", &ULevelSequencePlaybackController::execGetCurrentSequencePlaybackStart },
			{ "GetCurrentSequencePlaybackTimecode", &ULevelSequencePlaybackController::execGetCurrentSequencePlaybackTimecode },
			{ "GetLevelSequences", &ULevelSequencePlaybackController::execGetLevelSequences },
			{ "IsSequencePlaybackActive", &ULevelSequencePlaybackController::execIsSequencePlaybackActive },
			{ "IsSequencerLockedToCameraCut", &ULevelSequencePlaybackController::execIsSequencerLockedToCameraCut },
			{ "JumpToPlaybackPosition", &ULevelSequencePlaybackController::execJumpToPlaybackPosition },
			{ "PauseLevelSequence", &ULevelSequencePlaybackController::execPauseLevelSequence },
			{ "PlayLevelSequence", &ULevelSequencePlaybackController::execPlayLevelSequence },
			{ "PlayLevelSequenceReverse", &ULevelSequencePlaybackController::execPlayLevelSequenceReverse },
			{ "SetActiveLevelSequence", &ULevelSequencePlaybackController::execSetActiveLevelSequence },
			{ "SetSequencerLockedToCameraCut", &ULevelSequencePlaybackController::execSetSequencerLockedToCameraCut },
			{ "StopLevelSequencePlay", &ULevelSequencePlaybackController::execStopLevelSequencePlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_ClearActiveLevelSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_ClearActiveLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Clears the current level sequence player, needed when recording clean takes of something.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Clears the current level sequence player, needed when recording clean takes of something." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_ClearActiveLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "ClearActiveLevelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_ClearActiveLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_ClearActiveLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_ClearActiveLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_ClearActiveLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics
	{
		struct LevelSequencePlaybackController_eventGetActiveLevelSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetActiveLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return the currently selected LevelSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return the currently selected LevelSequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetActiveLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::LevelSequencePlaybackController_eventGetActiveLevelSequence_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics
	{
		struct LevelSequencePlaybackController_eventGetActiveLevelSequenceName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetActiveLevelSequenceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return the name of the currently selected sequence; returns empty string if no selected sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return the name of the currently selected sequence; returns empty string if no selected sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetActiveLevelSequenceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::LevelSequencePlaybackController_eventGetActiveLevelSequenceName_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics
	{
		struct LevelSequencePlaybackController_eventGetCurrentSequenceDuration_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetCurrentSequenceDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return the duration of the sequence in FrameNumber\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return the duration of the sequence in FrameNumber" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetCurrentSequenceDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::LevelSequencePlaybackController_eventGetCurrentSequenceDuration_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct LevelSequencePlaybackController_eventGetCurrentSequenceFrameRate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetCurrentSequenceFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return the FrameRate of the currently loaded sequence FrameRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return the FrameRate of the currently loaded sequence FrameRate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetCurrentSequenceFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::LevelSequencePlaybackController_eventGetCurrentSequenceFrameRate_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics
	{
		struct LevelSequencePlaybackController_eventGetCurrentSequencePlaybackEnd_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetCurrentSequencePlaybackEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return The FrameNumber of the sequence's end.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return The FrameNumber of the sequence's end." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetCurrentSequencePlaybackEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::LevelSequencePlaybackController_eventGetCurrentSequencePlaybackEnd_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct LevelSequencePlaybackController_eventGetCurrentSequencePlaybackPosition_Parms
		{
			FFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetCurrentSequencePlaybackPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return the current FrameTime of the sequence playback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return the current FrameTime of the sequence playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetCurrentSequencePlaybackPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::LevelSequencePlaybackController_eventGetCurrentSequencePlaybackPosition_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics
	{
		struct LevelSequencePlaybackController_eventGetCurrentSequencePlaybackStart_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetCurrentSequencePlaybackStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return The FrameNumber of the sequence's start.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return The FrameNumber of the sequence's start." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetCurrentSequencePlaybackStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::LevelSequencePlaybackController_eventGetCurrentSequencePlaybackStart_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct LevelSequencePlaybackController_eventGetCurrentSequencePlaybackTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetCurrentSequencePlaybackTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return The current Timecode of the sequence playback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return The current Timecode of the sequence playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetCurrentSequencePlaybackTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::LevelSequencePlaybackController_eventGetCurrentSequencePlaybackTimecode_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics
	{
		struct LevelSequencePlaybackController_eventGetLevelSequences_Parms
		{
			TArray<FLevelSequenceData> OutLevelSequenceNames;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutLevelSequenceNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLevelSequenceNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::NewProp_OutLevelSequenceNames_Inner = { "OutLevelSequenceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelSequenceData, METADATA_PARAMS(nullptr, 0) }; // 3757659897
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::NewProp_OutLevelSequenceNames = { "OutLevelSequenceNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventGetLevelSequences_Parms, OutLevelSequenceNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3757659897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::NewProp_OutLevelSequenceNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::NewProp_OutLevelSequenceNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Returns the names of each level sequence actor that is present in the level.\n\x09 * @param &OutLevelSequenceNames - UponReturn, array will contain all level sequence names.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Returns the names of each level sequence actor that is present in the level.\n@param &OutLevelSequenceNames - UponReturn, array will contain all level sequence names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "GetLevelSequences", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::LevelSequencePlaybackController_eventGetLevelSequences_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics
	{
		struct LevelSequencePlaybackController_eventIsSequencePlaybackActive_Parms
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
	void Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequencePlaybackController_eventIsSequencePlaybackActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequencePlaybackController_eventIsSequencePlaybackActive_Parms), &Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return true if a valid LevelSequence is being played.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return true if a valid LevelSequence is being played." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "IsSequencePlaybackActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::LevelSequencePlaybackController_eventIsSequencePlaybackActive_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics
	{
		struct LevelSequencePlaybackController_eventIsSequencerLockedToCameraCut_Parms
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
	void Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequencePlaybackController_eventIsSequencerLockedToCameraCut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequencePlaybackController_eventIsSequencerLockedToCameraCut_Parms), &Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * @return true if the active Sequencer is locked to camera cut\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "@return true if the active Sequencer is locked to camera cut" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "IsSequencerLockedToCameraCut", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::LevelSequencePlaybackController_eventIsSequencerLockedToCameraCut_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics
	{
		struct LevelSequencePlaybackController_eventJumpToPlaybackPosition_Parms
		{
			FFrameNumber InFrameNumber;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventJumpToPlaybackPosition_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Moves the current sequence to a desired playback position\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Moves the current sequence to a desired playback position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "JumpToPlaybackPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::LevelSequencePlaybackController_eventJumpToPlaybackPosition_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_PauseLevelSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_PauseLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Pause the currently active sequence \n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Pause the currently active sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_PauseLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "PauseLevelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_PauseLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_PauseLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_PauseLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_PauseLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Starts playing the currently active sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Starts playing the currently active sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "PlayLevelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequenceReverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequenceReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Starts playing the currently active sequence in reverse\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Starts playing the currently active sequence in reverse" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequenceReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "PlayLevelSequenceReverse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequenceReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequenceReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequenceReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequenceReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics
	{
		struct LevelSequencePlaybackController_eventSetActiveLevelSequence_Parms
		{
			ULevelSequence* InNewLevelSequence;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewLevelSequence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::NewProp_InNewLevelSequence = { "InNewLevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlaybackController_eventSetActiveLevelSequence_Parms, InNewLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequencePlaybackController_eventSetActiveLevelSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequencePlaybackController_eventSetActiveLevelSequence_Parms), &Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::NewProp_InNewLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Changes the active level sequence to a new level sequence.\n\x09 * @param InNewLevelSequence - The LevelSequence to select\n\x09 * @return true if a valid LevelSequence was passed and sequencer was successfully found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Changes the active level sequence to a new level sequence.\n@param InNewLevelSequence - The LevelSequence to select\n@return true if a valid LevelSequence was passed and sequencer was successfully found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "SetActiveLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::LevelSequencePlaybackController_eventSetActiveLevelSequence_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics
	{
		struct LevelSequencePlaybackController_eventSetSequencerLockedToCameraCut_Parms
		{
			bool bLockView;
		};
		static void NewProp_bLockView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::NewProp_bLockView_SetBit(void* Obj)
	{
		((LevelSequencePlaybackController_eventSetSequencerLockedToCameraCut_Parms*)Obj)->bLockView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::NewProp_bLockView = { "bLockView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequencePlaybackController_eventSetSequencerLockedToCameraCut_Parms), &Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::NewProp_bLockView_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::NewProp_bLockView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Sets the current Sequencer perspective to be locked to camera cut\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Sets the current Sequencer perspective to be locked to camera cut" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "SetSequencerLockedToCameraCut", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::LevelSequencePlaybackController_eventSetSequencerLockedToCameraCut_Parms), Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlaybackController_StopLevelSequencePlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlaybackController_StopLevelSequencePlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer | Playback" },
		{ "Comment", "/**\n\x09 * Stops playing the currently active sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "Stops playing the currently active sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlaybackController_StopLevelSequencePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlaybackController, nullptr, "StopLevelSequencePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlaybackController_StopLevelSequencePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlaybackController_StopLevelSequencePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlaybackController_StopLevelSequencePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlaybackController_StopLevelSequencePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequencePlaybackController);
	UClass* Z_Construct_UClass_ULevelSequencePlaybackController_NoRegister()
	{
		return ULevelSequencePlaybackController::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequencePlaybackController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveLevelSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequencePlaybackController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequencePlaybackController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_ClearActiveLevelSequence, "ClearActiveLevelSequence" }, // 1322525502
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequence, "GetActiveLevelSequence" }, // 3637557759
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetActiveLevelSequenceName, "GetActiveLevelSequenceName" }, // 423436514
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceDuration, "GetCurrentSequenceDuration" }, // 2743730092
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequenceFrameRate, "GetCurrentSequenceFrameRate" }, // 2015796747
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackEnd, "GetCurrentSequencePlaybackEnd" }, // 560100523
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackPosition, "GetCurrentSequencePlaybackPosition" }, // 742172981
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackStart, "GetCurrentSequencePlaybackStart" }, // 3385071224
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetCurrentSequencePlaybackTimecode, "GetCurrentSequencePlaybackTimecode" }, // 3851208779
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_GetLevelSequences, "GetLevelSequences" }, // 829175941
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencePlaybackActive, "IsSequencePlaybackActive" }, // 654579767
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_IsSequencerLockedToCameraCut, "IsSequencerLockedToCameraCut" }, // 2685682920
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_JumpToPlaybackPosition, "JumpToPlaybackPosition" }, // 1236402023
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_PauseLevelSequence, "PauseLevelSequence" }, // 3938769924
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequence, "PlayLevelSequence" }, // 2395034879
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_PlayLevelSequenceReverse, "PlayLevelSequenceReverse" }, // 2592188034
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_SetActiveLevelSequence, "SetActiveLevelSequence" }, // 1511285317
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_SetSequencerLockedToCameraCut, "SetSequencerLockedToCameraCut" }, // 2973534956
		{ &Z_Construct_UFunction_ULevelSequencePlaybackController_StopLevelSequencePlay, "StopLevelSequencePlay" }, // 2968959977
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlaybackController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequence/LevelSequencePlaybackController.h" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlaybackController_Statics::NewProp_ActiveLevelSequence_MetaData[] = {
		{ "Comment", "/** The sequence to play back */" },
		{ "ModuleRelativePath", "Public/LevelSequence/LevelSequencePlaybackController.h" },
		{ "ToolTip", "The sequence to play back" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSequencePlaybackController_Statics::NewProp_ActiveLevelSequence = { "ActiveLevelSequence", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequencePlaybackController, ActiveLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlaybackController_Statics::NewProp_ActiveLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlaybackController_Statics::NewProp_ActiveLevelSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequencePlaybackController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequencePlaybackController_Statics::NewProp_ActiveLevelSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequencePlaybackController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequencePlaybackController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequencePlaybackController_Statics::ClassParams = {
		&ULevelSequencePlaybackController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequencePlaybackController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlaybackController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlaybackController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlaybackController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequencePlaybackController()
	{
		if (!Z_Registration_Info_UClass_ULevelSequencePlaybackController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequencePlaybackController.OuterSingleton, Z_Construct_UClass_ULevelSequencePlaybackController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequencePlaybackController.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<ULevelSequencePlaybackController>()
	{
		return ULevelSequencePlaybackController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequencePlaybackController);
	ULevelSequencePlaybackController::~ULevelSequencePlaybackController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_Statics::ScriptStructInfo[] = {
		{ FLevelSequenceData::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceData_Statics::NewStructOps, TEXT("LevelSequenceData"), &Z_Registration_Info_UScriptStruct_LevelSequenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceData), 3757659897U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequencePlaybackController, ULevelSequencePlaybackController::StaticClass, TEXT("ULevelSequencePlaybackController"), &Z_Registration_Info_UClass_ULevelSequencePlaybackController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequencePlaybackController), 790542143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_1006157863(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
