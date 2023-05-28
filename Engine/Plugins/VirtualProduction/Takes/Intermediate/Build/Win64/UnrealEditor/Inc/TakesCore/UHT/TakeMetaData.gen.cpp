// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeMetaData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceMetaData_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeMetaData();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeMetaData_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakePreset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakesCore();
// End Cross Module References
	DEFINE_FUNCTION(UTakeMetaData::execSetFrameRateFromTimecode)
	{
		P_GET_UBOOL(Z_Param_InFromTimecode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRateFromTimecode(Z_Param_InFromTimecode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetLevelOrigin)
	{
		P_GET_OBJECT(ULevel,Z_Param_InLevelOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelOrigin(Z_Param_InLevelOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetPresetOrigin)
	{
		P_GET_OBJECT(UTakePreset,Z_Param_InPresetOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPresetOrigin(Z_Param_InPresetOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDescription(Z_Param_InDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetFrameRate)
	{
		P_GET_STRUCT(FFrameRate,Z_Param_InFrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRate(Z_Param_InFrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetDuration)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDuration(Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetTimecodeOut)
	{
		P_GET_STRUCT(FTimecode,Z_Param_InTimecodeOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimecodeOut(Z_Param_InTimecodeOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetTimecodeIn)
	{
		P_GET_STRUCT(FTimecode,Z_Param_InTimecodeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimecodeIn(Z_Param_InTimecodeIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetTimestamp)
	{
		P_GET_STRUCT(FDateTime,Z_Param_InTimestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimestamp(Z_Param_InTimestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetTakeNumber)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InTakeNumber);
		P_GET_UBOOL(Z_Param_bEmitChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTakeNumber(Z_Param_InTakeNumber,Z_Param_bEmitChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execSetSlate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSlate);
		P_GET_UBOOL(Z_Param_bEmitChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlate(Z_Param_InSlate,Z_Param_bEmitChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGenerateAssetPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathFormatString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateAssetPath(Z_Param_PathFormatString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetFrameRateFromTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFrameRateFromTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetLevelOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevel**)Z_Param__Result=P_THIS->GetLevelOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetLevelPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLevelPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetPresetOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakePreset**)Z_Param__Result=P_THIS->GetPresetOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetTimecodeOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetTimecodeOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetTimecodeIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetTimecodeIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetTakeNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTakeNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execGetSlate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSlate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execRecorded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Recorded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaData::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	void UTakeMetaData::StaticRegisterNativesUTakeMetaData()
	{
		UClass* Class = UTakeMetaData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateAssetPath", &UTakeMetaData::execGenerateAssetPath },
			{ "GetDescription", &UTakeMetaData::execGetDescription },
			{ "GetDuration", &UTakeMetaData::execGetDuration },
			{ "GetFrameRate", &UTakeMetaData::execGetFrameRate },
			{ "GetFrameRateFromTimecode", &UTakeMetaData::execGetFrameRateFromTimecode },
			{ "GetLevelOrigin", &UTakeMetaData::execGetLevelOrigin },
			{ "GetLevelPath", &UTakeMetaData::execGetLevelPath },
			{ "GetPresetOrigin", &UTakeMetaData::execGetPresetOrigin },
			{ "GetSlate", &UTakeMetaData::execGetSlate },
			{ "GetTakeNumber", &UTakeMetaData::execGetTakeNumber },
			{ "GetTimecodeIn", &UTakeMetaData::execGetTimecodeIn },
			{ "GetTimecodeOut", &UTakeMetaData::execGetTimecodeOut },
			{ "GetTimestamp", &UTakeMetaData::execGetTimestamp },
			{ "IsLocked", &UTakeMetaData::execIsLocked },
			{ "Lock", &UTakeMetaData::execLock },
			{ "Recorded", &UTakeMetaData::execRecorded },
			{ "SetDescription", &UTakeMetaData::execSetDescription },
			{ "SetDuration", &UTakeMetaData::execSetDuration },
			{ "SetFrameRate", &UTakeMetaData::execSetFrameRate },
			{ "SetFrameRateFromTimecode", &UTakeMetaData::execSetFrameRateFromTimecode },
			{ "SetLevelOrigin", &UTakeMetaData::execSetLevelOrigin },
			{ "SetPresetOrigin", &UTakeMetaData::execSetPresetOrigin },
			{ "SetSlate", &UTakeMetaData::execSetSlate },
			{ "SetTakeNumber", &UTakeMetaData::execSetTakeNumber },
			{ "SetTimecodeIn", &UTakeMetaData::execSetTimecodeIn },
			{ "SetTimecodeOut", &UTakeMetaData::execSetTimecodeOut },
			{ "SetTimestamp", &UTakeMetaData::execSetTimestamp },
			{ "Unlock", &UTakeMetaData::execUnlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics
	{
		struct TakeMetaData_eventGenerateAssetPath_Parms
		{
			FString PathFormatString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathFormatString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathFormatString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::NewProp_PathFormatString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::NewProp_PathFormatString = { "PathFormatString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGenerateAssetPath_Parms, PathFormatString), METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::NewProp_PathFormatString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::NewProp_PathFormatString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGenerateAssetPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::NewProp_PathFormatString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Generate the desired asset path for this take meta-data\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Generate the desired asset path for this take meta-data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GenerateAssetPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::TakeMetaData_eventGenerateAssetPath_Parms), Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics
	{
		struct TakeMetaData_eventGetDescription_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The user-provided description for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The user-provided description for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::TakeMetaData_eventGetDescription_Parms), Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct TakeMetaData_eventGetDuration_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The duration for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The duration for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::TakeMetaData_eventGetDuration_Parms), Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TakeMetaData_eventGetFrameRate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The frame-rate for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The frame-rate for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::TakeMetaData_eventGetFrameRate_Parms), Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics
	{
		struct TakeMetaData_eventGetFrameRateFromTimecode_Parms
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
	void Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TakeMetaData_eventGetFrameRateFromTimecode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeMetaData_eventGetFrameRateFromTimecode_Parms), &Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09*  @return Get if we get frame rate from time code\n\x09*/" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return Get if we get frame rate from time code" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetFrameRateFromTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::TakeMetaData_eventGetFrameRateFromTimecode_Parms), Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics
	{
		struct TakeMetaData_eventGetLevelOrigin_Parms
		{
			ULevel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetLevelOrigin_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The Map used to create this recording\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The Map used to create this recording" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetLevelOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::TakeMetaData_eventGetLevelOrigin_Parms), Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics
	{
		struct TakeMetaData_eventGetLevelPath_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetLevelPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The AssetPath of the Level used to create a Recorded Level Sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The AssetPath of the Level used to create a Recorded Level Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetLevelPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::TakeMetaData_eventGetLevelPath_Parms), Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetLevelPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetLevelPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics
	{
		struct TakeMetaData_eventGetPresetOrigin_Parms
		{
			UTakePreset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetPresetOrigin_Parms, ReturnValue), Z_Construct_UClass_UTakePreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The preset on which the take was originally based\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The preset on which the take was originally based" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetPresetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::TakeMetaData_eventGetPresetOrigin_Parms), Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics
	{
		struct TakeMetaData_eventGetSlate_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetSlate_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The slate for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The slate for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetSlate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::TakeMetaData_eventGetSlate_Parms), Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetSlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetSlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics
	{
		struct TakeMetaData_eventGetTakeNumber_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetTakeNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The take number for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The take number for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetTakeNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::TakeMetaData_eventGetTakeNumber_Parms), Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetTakeNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetTakeNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TakeMetaData_eventGetTimecodeIn_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetTimecodeIn_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The timecode in for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The timecode in for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetTimecodeIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::TakeMetaData_eventGetTimecodeIn_Parms), Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TakeMetaData_eventGetTimecodeOut_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetTimecodeOut_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The timecode out for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The timecode out for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetTimecodeOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::TakeMetaData_eventGetTimecodeOut_Parms), Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics
	{
		struct TakeMetaData_eventGetTimestamp_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventGetTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * @return The timestamp for this take\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "@return The timestamp for this take" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "GetTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::TakeMetaData_eventGetTimestamp_Parms), Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_GetTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_GetTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics
	{
		struct TakeMetaData_eventIsLocked_Parms
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
	void Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TakeMetaData_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeMetaData_eventIsLocked_Parms), &Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Check whether this take is locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Check whether this take is locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "IsLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::TakeMetaData_eventIsLocked_Parms), Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_Lock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_Lock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Lock this take, causing it to become read-only\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Lock this take, causing it to become read-only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "Lock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_Lock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_Lock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_Recorded_Statics
	{
		struct TakeMetaData_eventRecorded_Parms
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
	void Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TakeMetaData_eventRecorded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeMetaData_eventRecorded_Parms), &Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Check if this take was recorded (as opposed\n\x09 * to being setup for recording)\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Check if this take was recorded (as opposed\nto being setup for recording)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "Recorded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::TakeMetaData_eventRecorded_Parms), Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_Recorded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_Recorded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics
	{
		struct TakeMetaData_eventSetDescription_Parms
		{
			FString InDescription;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::NewProp_InDescription = { "InDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetDescription_Parms, InDescription), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::NewProp_InDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set this take's user-provided description\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set this take's user-provided description\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::TakeMetaData_eventSetDescription_Parms), Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct TakeMetaData_eventSetDuration_Parms
		{
			FFrameTime InDuration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetDuration_Parms, InDuration), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set this take's duration\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set this take's duration\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::TakeMetaData_eventSetDuration_Parms), Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TakeMetaData_eventSetFrameRate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetFrameRate_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set this take's frame-rate\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set this take's frame-rate\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::TakeMetaData_eventSetFrameRate_Parms), Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics
	{
		struct TakeMetaData_eventSetFrameRateFromTimecode_Parms
		{
			bool InFromTimecode;
		};
		static void NewProp_InFromTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InFromTimecode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::NewProp_InFromTimecode_SetBit(void* Obj)
	{
		((TakeMetaData_eventSetFrameRateFromTimecode_Parms*)Obj)->InFromTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::NewProp_InFromTimecode = { "InFromTimecode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeMetaData_eventSetFrameRateFromTimecode_Parms), &Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::NewProp_InFromTimecode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::NewProp_InFromTimecode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09*  Set if we get frame rate from time code\n\x09*/" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set if we get frame rate from time code" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetFrameRateFromTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::TakeMetaData_eventSetFrameRateFromTimecode_Parms), Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics
	{
		struct TakeMetaData_eventSetLevelOrigin_Parms
		{
			ULevel* InLevelOrigin;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevelOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::NewProp_InLevelOrigin = { "InLevelOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetLevelOrigin_Parms, InLevelOrigin), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::NewProp_InLevelOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 *  Set the map used to create this recording\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set the map used to create this recording" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetLevelOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::TakeMetaData_eventSetLevelOrigin_Parms), Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics
	{
		struct TakeMetaData_eventSetPresetOrigin_Parms
		{
			UTakePreset* InPresetOrigin;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPresetOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::NewProp_InPresetOrigin = { "InPresetOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetPresetOrigin_Parms, InPresetOrigin), Z_Construct_UClass_UTakePreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::NewProp_InPresetOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set the preset on which the take is based\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set the preset on which the take is based\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetPresetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::TakeMetaData_eventSetPresetOrigin_Parms), Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics
	{
		struct TakeMetaData_eventSetSlate_Parms
		{
			FString InSlate;
			bool bEmitChanged;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSlate;
		static void NewProp_bEmitChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::NewProp_InSlate = { "InSlate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetSlate_Parms, InSlate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::NewProp_bEmitChanged_SetBit(void* Obj)
	{
		((TakeMetaData_eventSetSlate_Parms*)Obj)->bEmitChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::NewProp_bEmitChanged = { "bEmitChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeMetaData_eventSetSlate_Parms), &Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::NewProp_bEmitChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::NewProp_InSlate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::NewProp_bEmitChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set the slate for this take and reset its take number to 1\n\x09 * @param bEmitChanged Whether or not to send a slate changed event\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "CPP_Default_bEmitChanged", "true" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set the slate for this take and reset its take number to 1\n@param bEmitChanged Whether or not to send a slate changed event\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetSlate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::TakeMetaData_eventSetSlate_Parms), Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetSlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetSlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics
	{
		struct TakeMetaData_eventSetTakeNumber_Parms
		{
			int32 InTakeNumber;
			bool bEmitChanged;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTakeNumber;
		static void NewProp_bEmitChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::NewProp_InTakeNumber = { "InTakeNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetTakeNumber_Parms, InTakeNumber), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::NewProp_bEmitChanged_SetBit(void* Obj)
	{
		((TakeMetaData_eventSetTakeNumber_Parms*)Obj)->bEmitChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::NewProp_bEmitChanged = { "bEmitChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TakeMetaData_eventSetTakeNumber_Parms), &Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::NewProp_bEmitChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::NewProp_InTakeNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::NewProp_bEmitChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set this take's take number. Take numbers are always clamped to be >= 1.\n\x09 * @param bEmitChanged Whether or not to send a take number changed event\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "CPP_Default_bEmitChanged", "true" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set this take's take number. Take numbers are always clamped to be >= 1.\n@param bEmitChanged Whether or not to send a take number changed event\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetTakeNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::TakeMetaData_eventSetTakeNumber_Parms), Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetTakeNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetTakeNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TakeMetaData_eventSetTimecodeIn_Parms
		{
			FTimecode InTimecodeIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTimecodeIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::NewProp_InTimecodeIn = { "InTimecodeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetTimecodeIn_Parms, InTimecodeIn), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::NewProp_InTimecodeIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set this take's timecode in\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set this take's timecode in\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetTimecodeIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::TakeMetaData_eventSetTimecodeIn_Parms), Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TakeMetaData_eventSetTimecodeOut_Parms
		{
			FTimecode InTimecodeOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTimecodeOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::NewProp_InTimecodeOut = { "InTimecodeOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetTimecodeOut_Parms, InTimecodeOut), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::NewProp_InTimecodeOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set this take's timecode out\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set this take's timecode out\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetTimecodeOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::TakeMetaData_eventSetTimecodeOut_Parms), Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics
	{
		struct TakeMetaData_eventSetTimestamp_Parms
		{
			FDateTime InTimestamp;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTimestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::NewProp_InTimestamp = { "InTimestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeMetaData_eventSetTimestamp_Parms, InTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::NewProp_InTimestamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Set this take's timestamp\n\x09 * @note: Only valid for takes that have not been locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Set this take's timestamp\n@note: Only valid for takes that have not been locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "SetTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::TakeMetaData_eventSetTimestamp_Parms), Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_SetTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_SetTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaData_Unlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaData_Unlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take" },
		{ "Comment", "/**\n\x09 * Unlock this take if it is read-only, allowing it to be modified once again\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Unlock this take if it is read-only, allowing it to be modified once again" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaData_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaData, nullptr, "Unlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeMetaData_Unlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaData_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeMetaData_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaData_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeMetaData);
	UClass* Z_Construct_UClass_UTakeMetaData_NoRegister()
	{
		return UTakeMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UTakeMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TakeNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PresetOrigin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelOrigin;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFrameRateFromTimecode_MetaData[];
#endif
		static void NewProp_bFrameRateFromTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrameRateFromTimecode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeMetaData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeMetaData_GenerateAssetPath, "GenerateAssetPath" }, // 2724691349
		{ &Z_Construct_UFunction_UTakeMetaData_GetDescription, "GetDescription" }, // 660464797
		{ &Z_Construct_UFunction_UTakeMetaData_GetDuration, "GetDuration" }, // 1368519384
		{ &Z_Construct_UFunction_UTakeMetaData_GetFrameRate, "GetFrameRate" }, // 3084917178
		{ &Z_Construct_UFunction_UTakeMetaData_GetFrameRateFromTimecode, "GetFrameRateFromTimecode" }, // 3960927461
		{ &Z_Construct_UFunction_UTakeMetaData_GetLevelOrigin, "GetLevelOrigin" }, // 3559997525
		{ &Z_Construct_UFunction_UTakeMetaData_GetLevelPath, "GetLevelPath" }, // 449881464
		{ &Z_Construct_UFunction_UTakeMetaData_GetPresetOrigin, "GetPresetOrigin" }, // 3222469970
		{ &Z_Construct_UFunction_UTakeMetaData_GetSlate, "GetSlate" }, // 2255358990
		{ &Z_Construct_UFunction_UTakeMetaData_GetTakeNumber, "GetTakeNumber" }, // 1940827234
		{ &Z_Construct_UFunction_UTakeMetaData_GetTimecodeIn, "GetTimecodeIn" }, // 2179982041
		{ &Z_Construct_UFunction_UTakeMetaData_GetTimecodeOut, "GetTimecodeOut" }, // 1672264799
		{ &Z_Construct_UFunction_UTakeMetaData_GetTimestamp, "GetTimestamp" }, // 4259311705
		{ &Z_Construct_UFunction_UTakeMetaData_IsLocked, "IsLocked" }, // 3355836834
		{ &Z_Construct_UFunction_UTakeMetaData_Lock, "Lock" }, // 1286412637
		{ &Z_Construct_UFunction_UTakeMetaData_Recorded, "Recorded" }, // 2632568422
		{ &Z_Construct_UFunction_UTakeMetaData_SetDescription, "SetDescription" }, // 3428896289
		{ &Z_Construct_UFunction_UTakeMetaData_SetDuration, "SetDuration" }, // 4223599509
		{ &Z_Construct_UFunction_UTakeMetaData_SetFrameRate, "SetFrameRate" }, // 881435818
		{ &Z_Construct_UFunction_UTakeMetaData_SetFrameRateFromTimecode, "SetFrameRateFromTimecode" }, // 3927507295
		{ &Z_Construct_UFunction_UTakeMetaData_SetLevelOrigin, "SetLevelOrigin" }, // 3584878721
		{ &Z_Construct_UFunction_UTakeMetaData_SetPresetOrigin, "SetPresetOrigin" }, // 2250967881
		{ &Z_Construct_UFunction_UTakeMetaData_SetSlate, "SetSlate" }, // 681765292
		{ &Z_Construct_UFunction_UTakeMetaData_SetTakeNumber, "SetTakeNumber" }, // 3751743157
		{ &Z_Construct_UFunction_UTakeMetaData_SetTimecodeIn, "SetTimecodeIn" }, // 207785184
		{ &Z_Construct_UFunction_UTakeMetaData_SetTimecodeOut, "SetTimecodeOut" }, // 1070889341
		{ &Z_Construct_UFunction_UTakeMetaData_SetTimestamp, "SetTimestamp" }, // 3701351715
		{ &Z_Construct_UFunction_UTakeMetaData_Unlock, "Unlock" }, // 1384809605
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Take meta-data that is stored on ULevelSequence assets that are recorded through the Take Recorder.\n * Meta-data is retrieved through ULevelSequence::FindMetaData<UTakeMetaData>()\n */" },
		{ "IncludePath", "TakeMetaData.h" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Take meta-data that is stored on ULevelSequence assets that are recorded through the Take Recorder.\nMeta-data is retrieved through ULevelSequence::FindMetaData<UTakeMetaData>()" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Comment", "/** Whether the take is locked */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Whether the take is locked" },
	};
#endif
	void Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((UTakeMetaData*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeMetaData), &Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Slate_MetaData[] = {
		{ "Comment", "/** The user-provided slate information for the take */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The user-provided slate information for the take" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Slate = { "Slate", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, Slate), METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Slate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Slate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TakeNumber_MetaData[] = {
		{ "Comment", "/** The take number */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The take number" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TakeNumber = { "TakeNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, TakeNumber), METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TakeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TakeNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Comment", "/** The timestamp at which the take was initiated */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The timestamp at which the take was initiated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeIn_MetaData[] = {
		{ "Comment", "/** The timecode at the start of recording */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The timecode at the start of recording" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeIn = { "TimecodeIn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, TimecodeIn), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeOut_MetaData[] = {
		{ "Comment", "/** The timecode at the end of recording */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The timecode at the end of recording" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeOut = { "TimecodeOut", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, TimecodeOut), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Duration_MetaData[] = {
		{ "Comment", "/** The desired duration for the take */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The desired duration for the take" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, Duration), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Comment", "/** The frame rate the take was recorded at */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The frame rate the take was recorded at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Description_MetaData[] = {
		{ "Comment", "/** A user-provided description for the take */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "A user-provided description for the take" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, Description), METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_PresetOrigin_MetaData[] = {
		{ "Comment", "/** The preset that the take was based off */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The preset that the take was based off" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_PresetOrigin = { "PresetOrigin", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, PresetOrigin), Z_Construct_UClass_UTakePreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_PresetOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_PresetOrigin_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_LevelOrigin_MetaData[] = {
		{ "Comment", "/** The level map used to create this recording */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "The level map used to create this recording" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_LevelOrigin = { "LevelOrigin", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeMetaData, LevelOrigin), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_LevelOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_LevelOrigin_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bFrameRateFromTimecode_MetaData[] = {
		{ "Comment", "/** Whether or not we get or frame rate from Timecode, default to true */" },
		{ "ModuleRelativePath", "Public/TakeMetaData.h" },
		{ "ToolTip", "Whether or not we get or frame rate from Timecode, default to true" },
	};
#endif
	void Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bFrameRateFromTimecode_SetBit(void* Obj)
	{
		((UTakeMetaData*)Obj)->bFrameRateFromTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bFrameRateFromTimecode = { "bFrameRateFromTimecode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeMetaData), &Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bFrameRateFromTimecode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bFrameRateFromTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bFrameRateFromTimecode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bIsLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Slate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TakeNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_TimecodeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_PresetOrigin,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_LevelOrigin,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeMetaData_Statics::NewProp_bFrameRateFromTimecode,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTakeMetaData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULevelSequenceMetaData_NoRegister, (int32)VTABLE_OFFSET(UTakeMetaData, ILevelSequenceMetaData), false },  // 3332512596
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeMetaData_Statics::ClassParams = {
		&UTakeMetaData::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTakeMetaData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeMetaData()
	{
		if (!Z_Registration_Info_UClass_UTakeMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeMetaData.OuterSingleton, Z_Construct_UClass_UTakeMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeMetaData.OuterSingleton;
	}
	template<> TAKESCORE_API UClass* StaticClass<UTakeMetaData>()
	{
		return UTakeMetaData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeMetaData);
	UTakeMetaData::~UTakeMetaData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeMetaData, UTakeMetaData::StaticClass, TEXT("UTakeMetaData"), &Z_Registration_Info_UClass_UTakeMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeMetaData), 2570243746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_2471688332(TEXT("/Script/TakesCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
