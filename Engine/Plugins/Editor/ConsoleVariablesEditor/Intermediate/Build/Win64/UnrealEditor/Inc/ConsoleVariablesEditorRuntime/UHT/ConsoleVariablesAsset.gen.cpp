// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleVariablesAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleVariablesAsset() {}
// Cross Module References
	CONSOLEVARIABLESEDITORRUNTIME_API UClass* Z_Construct_UClass_UConsoleVariablesAsset();
	CONSOLEVARIABLESEDITORRUNTIME_API UClass* Z_Construct_UClass_UConsoleVariablesAsset_NoRegister();
	CONSOLEVARIABLESEDITORRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchCase();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	UPackage* Z_Construct_UPackage__Script_ConsoleVariablesEditorRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConsoleVariablesEditorAssetSaveData;
class UScriptStruct* FConsoleVariablesEditorAssetSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConsoleVariablesEditorAssetSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConsoleVariablesEditorAssetSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditorRuntime(), TEXT("ConsoleVariablesEditorAssetSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ConsoleVariablesEditorAssetSaveData.OuterSingleton;
}
template<> CONSOLEVARIABLESEDITORRUNTIME_API UScriptStruct* StaticStruct<FConsoleVariablesEditorAssetSaveData>()
{
	return FConsoleVariablesEditorAssetSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandValueAsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandValueAsString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckedState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckedState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data that will be serialized with this asset */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Data that will be serialized with this asset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsoleVariablesEditorAssetSaveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConsoleVariablesEditorAssetSaveData, CommandName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandValueAsString_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandValueAsString = { "CommandValueAsString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConsoleVariablesEditorAssetSaveData, CommandValueAsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandValueAsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandValueAsString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CheckedState_MetaData[] = {
		{ "Comment", "/** If Undetermined, we can assume this data was not previously saved */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "If Undetermined, we can assume this data was not previously saved" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CheckedState = { "CheckedState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConsoleVariablesEditorAssetSaveData, CheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CheckedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CheckedState_MetaData)) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CommandValueAsString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CheckedState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewProp_CheckedState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditorRuntime,
		nullptr,
		&NewStructOps,
		"ConsoleVariablesEditorAssetSaveData",
		sizeof(FConsoleVariablesEditorAssetSaveData),
		alignof(FConsoleVariablesEditorAssetSaveData),
		Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConsoleVariablesEditorAssetSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConsoleVariablesEditorAssetSaveData.InnerSingleton, Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConsoleVariablesEditorAssetSaveData.InnerSingleton;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execCopyFrom)
	{
		P_GET_OBJECT(UConsoleVariablesAsset,Z_Param_InAssetToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFrom(Z_Param_InAssetToCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execRemoveConsoleVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InCommandString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveConsoleVariable(Z_Param_InCommandString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execAddOrSetConsoleObjectSavedData)
	{
		P_GET_STRUCT_REF(FConsoleVariablesEditorAssetSaveData,Z_Param_Out_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrSetConsoleObjectSavedData(Z_Param_Out_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execFindSavedDataByCommandString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InCommandString);
		P_GET_STRUCT_REF(FConsoleVariablesEditorAssetSaveData,Z_Param_Out_OutValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_SearchCase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSavedDataByCommandString(Z_Param_InCommandString,Z_Param_Out_OutValue,ESearchCase::Type(Z_Param_SearchCase));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execGetSavedCommandsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSavedCommandsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execReplaceSavedCommands)
	{
		P_GET_TARRAY_REF(FConsoleVariablesEditorAssetSaveData,Z_Param_Out_Replacement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceSavedCommands(Z_Param_Out_Replacement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execExecuteSavedCommands)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bOnlyIncludeChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteSavedCommands(Z_Param_WorldContextObject,Z_Param_bOnlyIncludeChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execGetSavedCommandsAsCommaSeparatedString)
	{
		P_GET_UBOOL(Z_Param_bOnlyIncludeChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSavedCommandsAsCommaSeparatedString(Z_Param_bOnlyIncludeChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execGetSavedCommandsAsStringArray)
	{
		P_GET_UBOOL(Z_Param_bOnlyIncludeChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSavedCommandsAsStringArray(Z_Param_bOnlyIncludeChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execGetSavedCommands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FConsoleVariablesEditorAssetSaveData>*)Z_Param__Result=P_THIS->GetSavedCommands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execGetVariableCollectionDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVariableCollectionDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleVariablesAsset::execSetVariableCollectionDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableCollectionDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableCollectionDescription(Z_Param_InVariableCollectionDescription);
		P_NATIVE_END;
	}
	void UConsoleVariablesAsset::StaticRegisterNativesUConsoleVariablesAsset()
	{
		UClass* Class = UConsoleVariablesAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrSetConsoleObjectSavedData", &UConsoleVariablesAsset::execAddOrSetConsoleObjectSavedData },
			{ "CopyFrom", &UConsoleVariablesAsset::execCopyFrom },
			{ "ExecuteSavedCommands", &UConsoleVariablesAsset::execExecuteSavedCommands },
			{ "FindSavedDataByCommandString", &UConsoleVariablesAsset::execFindSavedDataByCommandString },
			{ "GetSavedCommands", &UConsoleVariablesAsset::execGetSavedCommands },
			{ "GetSavedCommandsAsCommaSeparatedString", &UConsoleVariablesAsset::execGetSavedCommandsAsCommaSeparatedString },
			{ "GetSavedCommandsAsStringArray", &UConsoleVariablesAsset::execGetSavedCommandsAsStringArray },
			{ "GetSavedCommandsCount", &UConsoleVariablesAsset::execGetSavedCommandsCount },
			{ "GetVariableCollectionDescription", &UConsoleVariablesAsset::execGetVariableCollectionDescription },
			{ "RemoveConsoleVariable", &UConsoleVariablesAsset::execRemoveConsoleVariable },
			{ "ReplaceSavedCommands", &UConsoleVariablesAsset::execReplaceSavedCommands },
			{ "SetVariableCollectionDescription", &UConsoleVariablesAsset::execSetVariableCollectionDescription },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics
	{
		struct ConsoleVariablesAsset_eventAddOrSetConsoleObjectSavedData_Parms
		{
			FConsoleVariablesEditorAssetSaveData InData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventAddOrSetConsoleObjectSavedData_Parms, InData), Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::NewProp_InData_MetaData)) }; // 1027599552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Set the value of a saved console variable if the name matches; add a new console variable to the list if a match is not found. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Set the value of a saved console variable if the name matches; add a new console variable to the list if a match is not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "AddOrSetConsoleObjectSavedData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::ConsoleVariablesAsset_eventAddOrSetConsoleObjectSavedData_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics
	{
		struct ConsoleVariablesAsset_eventCopyFrom_Parms
		{
			const UConsoleVariablesAsset* InAssetToCopy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAssetToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::NewProp_InAssetToCopy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::NewProp_InAssetToCopy = { "InAssetToCopy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventCopyFrom_Parms, InAssetToCopy), Z_Construct_UClass_UConsoleVariablesAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::NewProp_InAssetToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::NewProp_InAssetToCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::NewProp_InAssetToCopy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Copy data from input asset to this asset */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Copy data from input asset to this asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "CopyFrom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::ConsoleVariablesAsset_eventCopyFrom_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics
	{
		struct ConsoleVariablesAsset_eventExecuteSavedCommands_Parms
		{
			UObject* WorldContextObject;
			bool bOnlyIncludeChecked;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bOnlyIncludeChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIncludeChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventExecuteSavedCommands_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::NewProp_bOnlyIncludeChecked_SetBit(void* Obj)
	{
		((ConsoleVariablesAsset_eventExecuteSavedCommands_Parms*)Obj)->bOnlyIncludeChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::NewProp_bOnlyIncludeChecked = { "bOnlyIncludeChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesAsset_eventExecuteSavedCommands_Parms), &Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::NewProp_bOnlyIncludeChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::NewProp_bOnlyIncludeChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Executes all saved commands in this asset, optionally only including those with a Checked checkstate in the UI.\n\x09 * @param bOnlyIncludeChecked If true, only commands and variables with a Checked checkstate in the Console Variables Editor UI will be included. Otherwise, all will be included. \n\x09 */" },
		{ "CPP_Default_bOnlyIncludeChecked", "false" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Executes all saved commands in this asset, optionally only including those with a Checked checkstate in the UI.\n@param bOnlyIncludeChecked If true, only commands and variables with a Checked checkstate in the Console Variables Editor UI will be included. Otherwise, all will be included." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "ExecuteSavedCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::ConsoleVariablesAsset_eventExecuteSavedCommands_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics
	{
		struct ConsoleVariablesAsset_eventFindSavedDataByCommandString_Parms
		{
			FString InCommandString;
			FConsoleVariablesEditorAssetSaveData OutValue;
			TEnumAsByte<ESearchCase::Type> SearchCase;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCommandString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCommandString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchCase_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchCase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_InCommandString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_InCommandString = { "InCommandString", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventFindSavedDataByCommandString_Parms, InCommandString), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_InCommandString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_InCommandString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventFindSavedDataByCommandString_Parms, OutValue), Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData, METADATA_PARAMS(nullptr, 0) }; // 1027599552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_SearchCase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_SearchCase = { "SearchCase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventFindSavedDataByCommandString_Parms, SearchCase), Z_Construct_UEnum_CoreUObject_ESearchCase, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_SearchCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_SearchCase_MetaData)) }; // 1578437248
	void Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesAsset_eventFindSavedDataByCommandString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesAsset_eventFindSavedDataByCommandString_Parms), &Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_InCommandString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_SearchCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Outputs the FConsoleVariablesEditorAssetSaveData matching InCommand. Returns whether a match was found. Case sensitive. */" },
		{ "CPP_Default_SearchCase", "IgnoreCase" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Outputs the FConsoleVariablesEditorAssetSaveData matching InCommand. Returns whether a match was found. Case sensitive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "FindSavedDataByCommandString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::ConsoleVariablesAsset_eventFindSavedDataByCommandString_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics
	{
		struct ConsoleVariablesAsset_eventGetSavedCommands_Parms
		{
			TArray<FConsoleVariablesEditorAssetSaveData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData, METADATA_PARAMS(nullptr, 0) }; // 1027599552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventGetSavedCommands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::NewProp_ReturnValue_MetaData)) }; // 1027599552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Returns the saved list of console variable information such as the variable name, the type and the value of the variable at the time the asset was saved. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Returns the saved list of console variable information such as the variable name, the type and the value of the variable at the time the asset was saved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "GetSavedCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::ConsoleVariablesAsset_eventGetSavedCommands_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics
	{
		struct ConsoleVariablesAsset_eventGetSavedCommandsAsCommaSeparatedString_Parms
		{
			bool bOnlyIncludeChecked;
			FString ReturnValue;
		};
		static void NewProp_bOnlyIncludeChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIncludeChecked;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::NewProp_bOnlyIncludeChecked_SetBit(void* Obj)
	{
		((ConsoleVariablesAsset_eventGetSavedCommandsAsCommaSeparatedString_Parms*)Obj)->bOnlyIncludeChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::NewProp_bOnlyIncludeChecked = { "bOnlyIncludeChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesAsset_eventGetSavedCommandsAsCommaSeparatedString_Parms), &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::NewProp_bOnlyIncludeChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventGetSavedCommandsAsCommaSeparatedString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::NewProp_bOnlyIncludeChecked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Returns the saved list of console variables as a concatenated comma-separated string. Useful for passing commands and variables to a command line.\n\x09 * @param bOnlyIncludeChecked If true, only commands and variables with a Checked checkstate in the Console Variables Editor UI will be included. Otherwise, all will be included. \n\x09 */" },
		{ "CPP_Default_bOnlyIncludeChecked", "false" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Returns the saved list of console variables as a concatenated comma-separated string. Useful for passing commands and variables to a command line.\n@param bOnlyIncludeChecked If true, only commands and variables with a Checked checkstate in the Console Variables Editor UI will be included. Otherwise, all will be included." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "GetSavedCommandsAsCommaSeparatedString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::ConsoleVariablesAsset_eventGetSavedCommandsAsCommaSeparatedString_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics
	{
		struct ConsoleVariablesAsset_eventGetSavedCommandsAsStringArray_Parms
		{
			bool bOnlyIncludeChecked;
			TArray<FString> ReturnValue;
		};
		static void NewProp_bOnlyIncludeChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIncludeChecked;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::NewProp_bOnlyIncludeChecked_SetBit(void* Obj)
	{
		((ConsoleVariablesAsset_eventGetSavedCommandsAsStringArray_Parms*)Obj)->bOnlyIncludeChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::NewProp_bOnlyIncludeChecked = { "bOnlyIncludeChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesAsset_eventGetSavedCommandsAsStringArray_Parms), &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::NewProp_bOnlyIncludeChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventGetSavedCommandsAsStringArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::NewProp_bOnlyIncludeChecked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Returns the saved list of console variables as an array of FString.\n\x09 * @param bOnlyIncludeChecked If true, only commands and variables with a Checked checkstate in the Console Variables Editor UI will be included. Otherwise, all will be included. \n\x09 */" },
		{ "CPP_Default_bOnlyIncludeChecked", "false" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Returns the saved list of console variables as an array of FString.\n@param bOnlyIncludeChecked If true, only commands and variables with a Checked checkstate in the Console Variables Editor UI will be included. Otherwise, all will be included." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "GetSavedCommandsAsStringArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::ConsoleVariablesAsset_eventGetSavedCommandsAsStringArray_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics
	{
		struct ConsoleVariablesAsset_eventGetSavedCommandsCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventGetSavedCommandsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Returns how many console variables are serialized in this asset */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Returns how many console variables are serialized in this asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "GetSavedCommandsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::ConsoleVariablesAsset_eventGetSavedCommandsCount_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics
	{
		struct ConsoleVariablesAsset_eventGetVariableCollectionDescription_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventGetVariableCollectionDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "GetVariableCollectionDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::ConsoleVariablesAsset_eventGetVariableCollectionDescription_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics
	{
		struct ConsoleVariablesAsset_eventRemoveConsoleVariable_Parms
		{
			FString InCommandString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCommandString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InCommandString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_InCommandString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_InCommandString = { "InCommandString", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventRemoveConsoleVariable_Parms, InCommandString), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_InCommandString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_InCommandString_MetaData)) };
	void Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleVariablesAsset_eventRemoveConsoleVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConsoleVariablesAsset_eventRemoveConsoleVariable_Parms), &Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_InCommandString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Returns true if the element was found and successfully removed. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Returns true if the element was found and successfully removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "RemoveConsoleVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::ConsoleVariablesAsset_eventRemoveConsoleVariable_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics
	{
		struct ConsoleVariablesAsset_eventReplaceSavedCommands_Parms
		{
			TArray<FConsoleVariablesEditorAssetSaveData> Replacement;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Replacement_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Replacement_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Replacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::NewProp_Replacement_Inner = { "Replacement", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData, METADATA_PARAMS(nullptr, 0) }; // 1027599552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::NewProp_Replacement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::NewProp_Replacement = { "Replacement", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventReplaceSavedCommands_Parms, Replacement), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::NewProp_Replacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::NewProp_Replacement_MetaData)) }; // 1027599552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::NewProp_Replacement_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::NewProp_Replacement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Asset" },
		{ "Comment", "/** Completely replaces the saved data with new saved data */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Completely replaces the saved data with new saved data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "ReplaceSavedCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::ConsoleVariablesAsset_eventReplaceSavedCommands_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics
	{
		struct ConsoleVariablesAsset_eventSetVariableCollectionDescription_Parms
		{
			FString InVariableCollectionDescription;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableCollectionDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableCollectionDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::NewProp_InVariableCollectionDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::NewProp_InVariableCollectionDescription = { "InVariableCollectionDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsoleVariablesAsset_eventSetVariableCollectionDescription_Parms, InVariableCollectionDescription), METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::NewProp_InVariableCollectionDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::NewProp_InVariableCollectionDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::NewProp_InVariableCollectionDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/** Sets a description for this variable collection. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "Sets a description for this variable collection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleVariablesAsset, nullptr, "SetVariableCollectionDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::ConsoleVariablesAsset_eventSetVariableCollectionDescription_Parms), Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsoleVariablesAsset);
	UClass* Z_Construct_UClass_UConsoleVariablesAsset_NoRegister()
	{
		return UConsoleVariablesAsset::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleVariablesAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableCollectionDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableCollectionDescription;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleVariablesAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditorRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConsoleVariablesAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData, "AddOrSetConsoleObjectSavedData" }, // 3485220448
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_CopyFrom, "CopyFrom" }, // 771883735
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_ExecuteSavedCommands, "ExecuteSavedCommands" }, // 1767518494
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_FindSavedDataByCommandString, "FindSavedDataByCommandString" }, // 388192169
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommands, "GetSavedCommands" }, // 3230988585
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString, "GetSavedCommandsAsCommaSeparatedString" }, // 3442926890
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsAsStringArray, "GetSavedCommandsAsStringArray" }, // 1459394761
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_GetSavedCommandsCount, "GetSavedCommandsCount" }, // 4113828924
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_GetVariableCollectionDescription, "GetVariableCollectionDescription" }, // 1479132869
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_RemoveConsoleVariable, "RemoveConsoleVariable" }, // 1198009942
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_ReplaceSavedCommands, "ReplaceSavedCommands" }, // 2889381862
		{ &Z_Construct_UFunction_UConsoleVariablesAsset_SetVariableCollectionDescription, "SetVariableCollectionDescription" }, // 439588441
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariablesAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An asset used to track collections of console variables that can be recalled and edited using the Console Variables Editor. */" },
		{ "IncludePath", "ConsoleVariablesAsset.h" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "An asset used to track collections of console variables that can be recalled and edited using the Console Variables Editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_VariableCollectionDescription_MetaData[] = {
		{ "BlueprintGetter", "GetVariableCollectionDescription" },
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/* User defined description of the variable collection */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "User defined description of the variable collection" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_VariableCollectionDescription = { "VariableCollectionDescription", nullptr, (EPropertyFlags)0x0040010000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleVariablesAsset, VariableCollectionDescription), METADATA_PARAMS(Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_VariableCollectionDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_VariableCollectionDescription_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_SavedCommands_Inner = { "SavedCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData, METADATA_PARAMS(nullptr, 0) }; // 1027599552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_SavedCommands_MetaData[] = {
		{ "Comment", "/** A saved list of console variable information such as the variable name, the type and the value of the variable at the time the asset was saved. */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesAsset.h" },
		{ "ToolTip", "A saved list of console variable information such as the variable name, the type and the value of the variable at the time the asset was saved." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_SavedCommands = { "SavedCommands", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleVariablesAsset, SavedCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_SavedCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_SavedCommands_MetaData)) }; // 1027599552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleVariablesAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_VariableCollectionDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_SavedCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariablesAsset_Statics::NewProp_SavedCommands,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UConsoleVariablesAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister, (int32)VTABLE_OFFSET(UConsoleVariablesAsset, IMovieSceneConsoleVariableTrackInterface), false },  // 755196591
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleVariablesAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleVariablesAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsoleVariablesAsset_Statics::ClassParams = {
		&UConsoleVariablesAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConsoleVariablesAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleVariablesAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleVariablesAsset()
	{
		if (!Z_Registration_Info_UClass_UConsoleVariablesAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsoleVariablesAsset.OuterSingleton, Z_Construct_UClass_UConsoleVariablesAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConsoleVariablesAsset.OuterSingleton;
	}
	template<> CONSOLEVARIABLESEDITORRUNTIME_API UClass* StaticClass<UConsoleVariablesAsset>()
	{
		return UConsoleVariablesAsset::StaticClass();
	}
	UConsoleVariablesAsset::UConsoleVariablesAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleVariablesAsset);
	UConsoleVariablesAsset::~UConsoleVariablesAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_Statics::ScriptStructInfo[] = {
		{ FConsoleVariablesEditorAssetSaveData::StaticStruct, Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics::NewStructOps, TEXT("ConsoleVariablesEditorAssetSaveData"), &Z_Registration_Info_UScriptStruct_ConsoleVariablesEditorAssetSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConsoleVariablesEditorAssetSaveData), 1027599552U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConsoleVariablesAsset, UConsoleVariablesAsset::StaticClass, TEXT("UConsoleVariablesAsset"), &Z_Registration_Info_UClass_UConsoleVariablesAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsoleVariablesAsset), 718472568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_1710812450(TEXT("/Script/ConsoleVariablesEditorRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
