// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Recorder/TakeRecorderPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderPanel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderPanel();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderPanel_NoRegister();
	TAKERECORDER_API UEnum* Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeMetaData_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakePreset_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSources_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakeRecorder();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETakeRecorderPanelMode;
	static UEnum* ETakeRecorderPanelMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETakeRecorderPanelMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETakeRecorderPanelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode, (UObject*)Z_Construct_UPackage__Script_TakeRecorder(), TEXT("ETakeRecorderPanelMode"));
		}
		return Z_Registration_Info_UEnum_ETakeRecorderPanelMode.OuterSingleton;
	}
	template<> TAKERECORDER_API UEnum* StaticEnum<ETakeRecorderPanelMode>()
	{
		return ETakeRecorderPanelMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics::Enumerators[] = {
		{ "ETakeRecorderPanelMode::NewRecording", (int64)ETakeRecorderPanelMode::NewRecording },
		{ "ETakeRecorderPanelMode::RecordingInto", (int64)ETakeRecorderPanelMode::RecordingInto },
		{ "ETakeRecorderPanelMode::EditingPreset", (int64)ETakeRecorderPanelMode::EditingPreset },
		{ "ETakeRecorderPanelMode::ReviewingRecording", (int64)ETakeRecorderPanelMode::ReviewingRecording },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics::Enum_MetaDataParams[] = {
		{ "EditingPreset.Comment", "/** The panel is editing a Take Preset asset */" },
		{ "EditingPreset.Name", "ETakeRecorderPanelMode::EditingPreset" },
		{ "EditingPreset.ToolTip", "The panel is editing a Take Preset asset" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "NewRecording.Comment", "/** The panel is setting up a new recording */" },
		{ "NewRecording.Name", "ETakeRecorderPanelMode::NewRecording" },
		{ "NewRecording.ToolTip", "The panel is setting up a new recording" },
		{ "RecordingInto.Comment", "/** The panel is setting up recording into an existing level sequence */" },
		{ "RecordingInto.Name", "ETakeRecorderPanelMode::RecordingInto" },
		{ "RecordingInto.ToolTip", "The panel is setting up recording into an existing level sequence" },
		{ "ReviewingRecording.Comment", "/** The panel is reviewing a previously recorded take */" },
		{ "ReviewingRecording.Name", "ETakeRecorderPanelMode::ReviewingRecording" },
		{ "ReviewingRecording.ToolTip", "The panel is reviewing a previously recorded take" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder,
		nullptr,
		"ETakeRecorderPanelMode",
		"ETakeRecorderPanelMode",
		Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode()
	{
		if (!Z_Registration_Info_UEnum_ETakeRecorderPanelMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETakeRecorderPanelMode.InnerSingleton, Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETakeRecorderPanelMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execCanStartRecording)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutErrorText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartRecording(Z_Param_Out_OutErrorText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execStopRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execStartRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execGetSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakeRecorderSources**)Z_Param__Result=P_THIS->GetSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execSetFrameRateFromTimecode)
	{
		P_GET_UBOOL(Z_Param_bInFromTimecode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRateFromTimecode(Z_Param_bInFromTimecode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execSetFrameRate)
	{
		P_GET_STRUCT(FFrameRate,Z_Param_InFrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRate(Z_Param_InFrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execGetTakeMetaData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakeMetaData**)Z_Param__Result=P_THIS->GetTakeMetaData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execGetLastRecordedLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetLastRecordedLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execGetLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execClearPendingTake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPendingTake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execNewTake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewTake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execSetupForViewing)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequenceAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupForViewing(Z_Param_LevelSequenceAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execSetupForEditing)
	{
		P_GET_OBJECT(UTakePreset,Z_Param_TakePreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupForEditing(Z_Param_TakePreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execSetupForRecordingInto_LevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequenceAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupForRecordingInto_LevelSequence(Z_Param_LevelSequenceAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execSetupForRecording_LevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequenceAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupForRecording_LevelSequence(Z_Param_LevelSequenceAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execSetupForRecording_TakePreset)
	{
		P_GET_OBJECT(UTakePreset,Z_Param_TakePresetAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupForRecording_TakePreset(Z_Param_TakePresetAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderPanel::execGetMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETakeRecorderPanelMode*)Z_Param__Result=P_THIS->GetMode();
		P_NATIVE_END;
	}
	void UTakeRecorderPanel::StaticRegisterNativesUTakeRecorderPanel()
	{
		UClass* Class = UTakeRecorderPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartRecording", &UTakeRecorderPanel::execCanStartRecording },
			{ "ClearPendingTake", &UTakeRecorderPanel::execClearPendingTake },
			{ "GetFrameRate", &UTakeRecorderPanel::execGetFrameRate },
			{ "GetLastRecordedLevelSequence", &UTakeRecorderPanel::execGetLastRecordedLevelSequence },
			{ "GetLevelSequence", &UTakeRecorderPanel::execGetLevelSequence },
			{ "GetMode", &UTakeRecorderPanel::execGetMode },
			{ "GetSources", &UTakeRecorderPanel::execGetSources },
			{ "GetTakeMetaData", &UTakeRecorderPanel::execGetTakeMetaData },
			{ "NewTake", &UTakeRecorderPanel::execNewTake },
			{ "SetFrameRate", &UTakeRecorderPanel::execSetFrameRate },
			{ "SetFrameRateFromTimecode", &UTakeRecorderPanel::execSetFrameRateFromTimecode },
			{ "SetupForEditing", &UTakeRecorderPanel::execSetupForEditing },
			{ "SetupForRecording_LevelSequence", &UTakeRecorderPanel::execSetupForRecording_LevelSequence },
			{ "SetupForRecording_TakePreset", &UTakeRecorderPanel::execSetupForRecording_TakePreset },
			{ "SetupForRecordingInto_LevelSequence", &UTakeRecorderPanel::execSetupForRecordingInto_LevelSequence },
			{ "SetupForViewing", &UTakeRecorderPanel::execSetupForViewing },
			{ "StartRecording", &UTakeRecorderPanel::execStartRecording },
			{ "StopRecording", &UTakeRecorderPanel::execStopRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics
	{
		struct TakeRecorderPanel_eventCanStartRecording_Parms
		{
			FText OutErrorText;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutErrorText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::NewProp_OutErrorText = { "OutErrorText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventCanStartRecording_Parms, OutErrorText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TakeRecorderPanel_eventCanStartRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeRecorderPanel_eventCanStartRecording_Parms), &Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::NewProp_OutErrorText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Whether the panel is ready to start recording\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Whether the panel is ready to start recording" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "CanStartRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::TakeRecorderPanel_eventCanStartRecording_Parms), Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_ClearPendingTake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_ClearPendingTake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/*\n\x09 * Clear the pending take level sequence\n\x09 */" },
		{ "DisplayName", "Clear Pending Take" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "* Clear the pending take level sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_ClearPendingTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "ClearPendingTake", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_ClearPendingTake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_ClearPendingTake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_ClearPendingTake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_ClearPendingTake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TakeRecorderPanel_eventGetFrameRate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Access the frame rate for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Access the frame rate for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::TakeRecorderPanel_eventGetFrameRate_Parms), Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics
	{
		struct TakeRecorderPanel_eventGetLastRecordedLevelSequence_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventGetLastRecordedLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Access the last level sequence that was recorded\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Access the last level sequence that was recorded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "GetLastRecordedLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::TakeRecorderPanel_eventGetLastRecordedLevelSequence_Parms), Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics
	{
		struct TakeRecorderPanel_eventGetLevelSequence_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventGetLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Access the level sequence for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Access the level sequence for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "GetLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::TakeRecorderPanel_eventGetLevelSequence_Parms), Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics
	{
		struct TakeRecorderPanel_eventGetMode_Parms
		{
			ETakeRecorderPanelMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventGetMode_Parms, ReturnValue), Z_Construct_UEnum_TakeRecorder_ETakeRecorderPanelMode, METADATA_PARAMS(nullptr, 0) }; // 2396594083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Get the mode that the panel is currently in\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Get the mode that the panel is currently in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "GetMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::TakeRecorderPanel_eventGetMode_Parms), Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_GetMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_GetMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics
	{
		struct TakeRecorderPanel_eventGetSources_Parms
		{
			UTakeRecorderSources* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventGetSources_Parms, ReturnValue), Z_Construct_UClass_UTakeRecorderSources_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Access the sources that are to be (or were) used for recording this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Access the sources that are to be (or were) used for recording this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "GetSources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::TakeRecorderPanel_eventGetSources_Parms), Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_GetSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_GetSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics
	{
		struct TakeRecorderPanel_eventGetTakeMetaData_Parms
		{
			UTakeMetaData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventGetTakeMetaData_Parms, ReturnValue), Z_Construct_UClass_UTakeMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Access take meta data for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Access take meta data for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "GetTakeMetaData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::TakeRecorderPanel_eventGetTakeMetaData_Parms), Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_NewTake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_NewTake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use ClearPendingTake instead" },
		{ "DisplayName", "New Take" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_NewTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "NewTake", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_NewTake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_NewTake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_NewTake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_NewTake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TakeRecorderPanel_eventSetFrameRate_Parms
		{
			FFrameRate InFrameRate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventSetFrameRate_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09* Set the frame rate for this take\n\x09*/" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Set the frame rate for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "SetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::TakeRecorderPanel_eventSetFrameRate_Parms), Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics
	{
		struct TakeRecorderPanel_eventSetFrameRateFromTimecode_Parms
		{
			bool bInFromTimecode;
		};
		static void NewProp_bInFromTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInFromTimecode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::NewProp_bInFromTimecode_SetBit(void* Obj)
	{
		((TakeRecorderPanel_eventSetFrameRateFromTimecode_Parms*)Obj)->bInFromTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::NewProp_bInFromTimecode = { "bInFromTimecode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeRecorderPanel_eventSetFrameRateFromTimecode_Parms), &Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::NewProp_bInFromTimecode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::NewProp_bInFromTimecode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09* Set if the frame rate is set from the Timecode frame rate\n\x09*/" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Set if the frame rate is set from the Timecode frame rate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "SetFrameRateFromTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::TakeRecorderPanel_eventSetFrameRateFromTimecode_Parms), Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics
	{
		struct TakeRecorderPanel_eventSetupForEditing_Parms
		{
			UTakePreset* TakePreset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TakePreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::NewProp_TakePreset = { "TakePreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventSetupForEditing_Parms, TakePreset), Z_Construct_UClass_UTakePreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::NewProp_TakePreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Setup this panel as an editor for the specified take preset asset.\n\x09 */" },
		{ "DisplayName", "Set Mode (Editing Take Preset)" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Setup this panel as an editor for the specified take preset asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "SetupForEditing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::TakeRecorderPanel_eventSetupForEditing_Parms), Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics
	{
		struct TakeRecorderPanel_eventSetupForRecording_LevelSequence_Parms
		{
			ULevelSequence* LevelSequenceAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::NewProp_LevelSequenceAsset = { "LevelSequenceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventSetupForRecording_LevelSequence_Parms, LevelSequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::NewProp_LevelSequenceAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Setup this panel such that it is ready to start recording using the specified\n\x09 * level sequence asset as a template for the recording.\n\x09 */" },
		{ "DisplayName", "Set Mode (Recording w/ Level Sequence)" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Setup this panel such that it is ready to start recording using the specified\nlevel sequence asset as a template for the recording." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "SetupForRecording_LevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::TakeRecorderPanel_eventSetupForRecording_LevelSequence_Parms), Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics
	{
		struct TakeRecorderPanel_eventSetupForRecording_TakePreset_Parms
		{
			UTakePreset* TakePresetAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TakePresetAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::NewProp_TakePresetAsset = { "TakePresetAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventSetupForRecording_TakePreset_Parms, TakePresetAsset), Z_Construct_UClass_UTakePreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::NewProp_TakePresetAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Setup this panel such that it is ready to start recording using the specified\n\x09 * take preset as a template for the recording.\n\x09 */" },
		{ "DisplayName", "Set Mode (Recording w/ Take Preset)" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Setup this panel such that it is ready to start recording using the specified\ntake preset as a template for the recording." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "SetupForRecording_TakePreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::TakeRecorderPanel_eventSetupForRecording_TakePreset_Parms), Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics
	{
		struct TakeRecorderPanel_eventSetupForRecordingInto_LevelSequence_Parms
		{
			ULevelSequence* LevelSequenceAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::NewProp_LevelSequenceAsset = { "LevelSequenceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventSetupForRecordingInto_LevelSequence_Parms, LevelSequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::NewProp_LevelSequenceAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Setup this panel such that it is ready to start recording using the specified\n\x09 * level sequence asset to record into.\n\x09 */" },
		{ "DisplayName", "Set Mode (Recording into Level Sequence)" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Setup this panel such that it is ready to start recording using the specified\nlevel sequence asset to record into." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "SetupForRecordingInto_LevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::TakeRecorderPanel_eventSetupForRecordingInto_LevelSequence_Parms), Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics
	{
		struct TakeRecorderPanel_eventSetupForViewing_Parms
		{
			ULevelSequence* LevelSequenceAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::NewProp_LevelSequenceAsset = { "LevelSequenceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderPanel_eventSetupForViewing_Parms, LevelSequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::NewProp_LevelSequenceAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Setup this panel as a viewer for a previously recorded take.\n\x09 */" },
		{ "DisplayName", "Set Mode (Read-Only Level Sequence)" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Setup this panel as a viewer for a previously recorded take." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "SetupForViewing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::TakeRecorderPanel_eventSetupForViewing_Parms), Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_StartRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Start recording with the current take\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Start recording with the current take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "StartRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_StartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderPanel_StopRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderPanel_StopRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder|Panel" },
		{ "Comment", "/**\n\x09 * Stop recording with the current take\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Stop recording with the current take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderPanel_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderPanel, nullptr, "StopRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderPanel_StopRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderPanel_StopRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderPanel_StopRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderPanel_StopRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderPanel);
	UClass* Z_Construct_UClass_UTakeRecorderPanel_NoRegister()
	{
		return UTakeRecorderPanel::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeRecorderPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeRecorderPanel_CanStartRecording, "CanStartRecording" }, // 2987407152
		{ &Z_Construct_UFunction_UTakeRecorderPanel_ClearPendingTake, "ClearPendingTake" }, // 2692301127
		{ &Z_Construct_UFunction_UTakeRecorderPanel_GetFrameRate, "GetFrameRate" }, // 3152352466
		{ &Z_Construct_UFunction_UTakeRecorderPanel_GetLastRecordedLevelSequence, "GetLastRecordedLevelSequence" }, // 3327009359
		{ &Z_Construct_UFunction_UTakeRecorderPanel_GetLevelSequence, "GetLevelSequence" }, // 1486940899
		{ &Z_Construct_UFunction_UTakeRecorderPanel_GetMode, "GetMode" }, // 751421751
		{ &Z_Construct_UFunction_UTakeRecorderPanel_GetSources, "GetSources" }, // 2886577911
		{ &Z_Construct_UFunction_UTakeRecorderPanel_GetTakeMetaData, "GetTakeMetaData" }, // 3015143224
		{ &Z_Construct_UFunction_UTakeRecorderPanel_NewTake, "NewTake" }, // 3330153359
		{ &Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRate, "SetFrameRate" }, // 3392427897
		{ &Z_Construct_UFunction_UTakeRecorderPanel_SetFrameRateFromTimecode, "SetFrameRateFromTimecode" }, // 3532163592
		{ &Z_Construct_UFunction_UTakeRecorderPanel_SetupForEditing, "SetupForEditing" }, // 1178274138
		{ &Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_LevelSequence, "SetupForRecording_LevelSequence" }, // 2907422360
		{ &Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecording_TakePreset, "SetupForRecording_TakePreset" }, // 4176708880
		{ &Z_Construct_UFunction_UTakeRecorderPanel_SetupForRecordingInto_LevelSequence, "SetupForRecordingInto_LevelSequence" }, // 2897119795
		{ &Z_Construct_UFunction_UTakeRecorderPanel_SetupForViewing, "SetupForViewing" }, // 1330419062
		{ &Z_Construct_UFunction_UTakeRecorderPanel_StartRecording, "StartRecording" }, // 3074185969
		{ &Z_Construct_UFunction_UTakeRecorderPanel_StopRecording, "StopRecording" }, // 3319644130
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderPanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Take recorder UI panel interop object\n */" },
		{ "IncludePath", "Recorder/TakeRecorderPanel.h" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorderPanel.h" },
		{ "ToolTip", "Take recorder UI panel interop object" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderPanel_Statics::ClassParams = {
		&UTakeRecorderPanel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderPanel()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderPanel.OuterSingleton, Z_Construct_UClass_UTakeRecorderPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderPanel.OuterSingleton;
	}
	template<> TAKERECORDER_API UClass* StaticClass<UTakeRecorderPanel>()
	{
		return UTakeRecorderPanel::StaticClass();
	}
	UTakeRecorderPanel::UTakeRecorderPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderPanel);
	UTakeRecorderPanel::~UTakeRecorderPanel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_Statics::EnumInfo[] = {
		{ ETakeRecorderPanelMode_StaticEnum, TEXT("ETakeRecorderPanelMode"), &Z_Registration_Info_UEnum_ETakeRecorderPanelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2396594083U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderPanel, UTakeRecorderPanel::StaticClass, TEXT("UTakeRecorderPanel"), &Z_Registration_Info_UClass_UTakeRecorderPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderPanel), 772807707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_1315273727(TEXT("/Script/TakeRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
