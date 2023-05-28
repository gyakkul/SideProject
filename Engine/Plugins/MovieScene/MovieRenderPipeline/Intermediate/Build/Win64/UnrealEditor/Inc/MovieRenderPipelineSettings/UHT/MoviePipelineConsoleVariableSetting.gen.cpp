// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineConsoleVariableSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineConsoleVariableSetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister();
	MOVIERENDERPIPELINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineConsoleVariableEntry;
class UScriptStruct* FMoviePipelineConsoleVariableEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineConsoleVariableEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineConsoleVariableEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineSettings(), TEXT("MoviePipelineConsoleVariableEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineConsoleVariableEntry.OuterSingleton;
}
template<> MOVIERENDERPIPELINESETTINGS_API UScriptStruct* StaticStruct<FMoviePipelineConsoleVariableEntry>()
{
	return FMoviePipelineConsoleVariableEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a console variable override within the Console Variable setting.\n */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "Represents a console variable override within the Console Variable setting." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineConsoleVariableEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* The name of the console variable. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "The name of the console variable." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineConsoleVariableEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* The value of the console variable. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "The value of the console variable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineConsoleVariableEntry, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Enable state. If disabled, this cvar entry will be ignored when resolving the final value of the cvar. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "Enable state. If disabled, this cvar entry will be ignored when resolving the final value of the cvar." },
	};
#endif
	void Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FMoviePipelineConsoleVariableEntry*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMoviePipelineConsoleVariableEntry), &Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewProp_bIsEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
		nullptr,
		&NewStructOps,
		"MoviePipelineConsoleVariableEntry",
		sizeof(FMoviePipelineConsoleVariableEntry),
		alignof(FMoviePipelineConsoleVariableEntry),
		Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineConsoleVariableEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineConsoleVariableEntry.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineConsoleVariableEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UMoviePipelineConsoleVariableSetting::execUpdateConsoleVariableEnableState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateConsoleVariableEnableState(Z_Param_Name,Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConsoleVariableSetting::execAddConsoleVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddConsoleVariable(Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConsoleVariableSetting::execAddOrUpdateConsoleVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddOrUpdateConsoleVariable(Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConsoleVariableSetting::execRemoveConsoleVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bRemoveAllInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveConsoleVariable(Z_Param_Name,Z_Param_bRemoveAllInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConsoleVariableSetting::execGetConsoleVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMoviePipelineConsoleVariableEntry>*)Z_Param__Result=P_THIS->GetConsoleVariables();
		P_NATIVE_END;
	}
	void UMoviePipelineConsoleVariableSetting::StaticRegisterNativesUMoviePipelineConsoleVariableSetting()
	{
		UClass* Class = UMoviePipelineConsoleVariableSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddConsoleVariable", &UMoviePipelineConsoleVariableSetting::execAddConsoleVariable },
			{ "AddOrUpdateConsoleVariable", &UMoviePipelineConsoleVariableSetting::execAddOrUpdateConsoleVariable },
			{ "GetConsoleVariables", &UMoviePipelineConsoleVariableSetting::execGetConsoleVariables },
			{ "RemoveConsoleVariable", &UMoviePipelineConsoleVariableSetting::execRemoveConsoleVariable },
			{ "UpdateConsoleVariableEnableState", &UMoviePipelineConsoleVariableSetting::execUpdateConsoleVariableEnableState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics
	{
		struct MoviePipelineConsoleVariableSetting_eventAddConsoleVariable_Parms
		{
			FString Name;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConsoleVariableSetting_eventAddConsoleVariable_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConsoleVariableSetting_eventAddConsoleVariable_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineConsoleVariableSetting_eventAddConsoleVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConsoleVariableSetting_eventAddConsoleVariable_Parms), &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Adds a console variable override with the given name and value, and will add a duplicate if one with the provided\n\x09 * name already exists. Returns true if the operation was successful, else false.\n\x09 * @see AddOrUpdateConsoleVariable()\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "Adds a console variable override with the given name and value, and will add a duplicate if one with the provided\nname already exists. Returns true if the operation was successful, else false.\n@see AddOrUpdateConsoleVariable()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConsoleVariableSetting, nullptr, "AddConsoleVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::MoviePipelineConsoleVariableSetting_eventAddConsoleVariable_Parms), Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics
	{
		struct MoviePipelineConsoleVariableSetting_eventAddOrUpdateConsoleVariable_Parms
		{
			FString Name;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConsoleVariableSetting_eventAddOrUpdateConsoleVariable_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConsoleVariableSetting_eventAddOrUpdateConsoleVariable_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineConsoleVariableSetting_eventAddOrUpdateConsoleVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConsoleVariableSetting_eventAddOrUpdateConsoleVariable_Parms), &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Adds a console variable override with the given name and value if one does not already exist. If the console\n\x09 * variable with the given name already exists, its value will be updated (the last one will be updated if there are\n\x09 * duplicates with the same name). Returns true if the operation was successful, else false.\n\x09 * @see AddConsoleVariable()\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "Adds a console variable override with the given name and value if one does not already exist. If the console\nvariable with the given name already exists, its value will be updated (the last one will be updated if there are\nduplicates with the same name). Returns true if the operation was successful, else false.\n@see AddConsoleVariable()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConsoleVariableSetting, nullptr, "AddOrUpdateConsoleVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::MoviePipelineConsoleVariableSetting_eventAddOrUpdateConsoleVariable_Parms), Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics
	{
		struct MoviePipelineConsoleVariableSetting_eventGetConsoleVariables_Parms
		{
			TArray<FMoviePipelineConsoleVariableEntry> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry, METADATA_PARAMS(nullptr, 0) }; // 3807879443
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConsoleVariableSetting_eventGetConsoleVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3807879443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Gets a copy of all console variable overrides. These are not meant to be changed; use the mutator methods if\n\x09 * console variables need to be updated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "Gets a copy of all console variable overrides. These are not meant to be changed; use the mutator methods if\nconsole variables need to be updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConsoleVariableSetting, nullptr, "GetConsoleVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::MoviePipelineConsoleVariableSetting_eventGetConsoleVariables_Parms), Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics
	{
		struct MoviePipelineConsoleVariableSetting_eventRemoveConsoleVariable_Parms
		{
			FString Name;
			bool bRemoveAllInstances;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveAllInstances_MetaData[];
#endif
		static void NewProp_bRemoveAllInstances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveAllInstances;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConsoleVariableSetting_eventRemoveConsoleVariable_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_bRemoveAllInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_bRemoveAllInstances_SetBit(void* Obj)
	{
		((MoviePipelineConsoleVariableSetting_eventRemoveConsoleVariable_Parms*)Obj)->bRemoveAllInstances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_bRemoveAllInstances = { "bRemoveAllInstances", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConsoleVariableSetting_eventRemoveConsoleVariable_Parms), &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_bRemoveAllInstances_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_bRemoveAllInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_bRemoveAllInstances_MetaData)) };
	void Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineConsoleVariableSetting_eventRemoveConsoleVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConsoleVariableSetting_eventRemoveConsoleVariable_Parms), &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_bRemoveAllInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Removes the console variable override with the specified name. If more than one with the same name exists, the\n\x09 * last one will be removed. Returns true if at least one console variable was removed, else false.\n\x09 * @param bRemoveAllInstances Remove all console variables overrides with the given name (not just the last one)\n\x09 */" },
		{ "CPP_Default_bRemoveAllInstances", "false" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "Removes the console variable override with the specified name. If more than one with the same name exists, the\nlast one will be removed. Returns true if at least one console variable was removed, else false.\n@param bRemoveAllInstances Remove all console variables overrides with the given name (not just the last one)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConsoleVariableSetting, nullptr, "RemoveConsoleVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::MoviePipelineConsoleVariableSetting_eventRemoveConsoleVariable_Parms), Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics
	{
		struct MoviePipelineConsoleVariableSetting_eventUpdateConsoleVariableEnableState_Parms
		{
			FString Name;
			bool bIsEnabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConsoleVariableSetting_eventUpdateConsoleVariableEnableState_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((MoviePipelineConsoleVariableSetting_eventUpdateConsoleVariableEnableState_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConsoleVariableSetting_eventUpdateConsoleVariableEnableState_Parms), &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_bIsEnabled_MetaData)) };
	void Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineConsoleVariableSetting_eventUpdateConsoleVariableEnableState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConsoleVariableSetting_eventUpdateConsoleVariableEnableState_Parms), &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Updates the enable state of the console variable override with the provided name. If there are duplicate cvars\n\x09 * with the same name, the last one with the provided name will be updated. Returns true if the operation was\n\x09 * successful, else false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "Updates the enable state of the console variable override with the provided name. If there are duplicate cvars\nwith the same name, the last one with the provided name will be updated. Returns true if the operation was\nsuccessful, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConsoleVariableSetting, nullptr, "UpdateConsoleVariableEnableState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::MoviePipelineConsoleVariableSetting_eventUpdateConsoleVariableEnableState_Parms), Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineConsoleVariableSetting);
	UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister()
	{
		return UMoviePipelineConsoleVariableSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ConsoleVariablePresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleVariablePresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsoleVariablePresets;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConsoleVariables_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConsoleVariables_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleVariables_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ConsoleVariables;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartConsoleCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartConsoleCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartConsoleCommands;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EndConsoleCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndConsoleCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EndConsoleCommands;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CVars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CVars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CVars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddConsoleVariable, "AddConsoleVariable" }, // 805721811
		{ &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable, "AddOrUpdateConsoleVariable" }, // 1096818987
		{ &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_GetConsoleVariables, "GetConsoleVariables" }, // 3455190110
		{ &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable, "RemoveConsoleVariable" }, // 96032989
		{ &Z_Construct_UFunction_UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState, "UpdateConsoleVariableEnableState" }, // 1670694543
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineConsoleVariableSetting.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariablePresets_Inner = { "ConsoleVariablePresets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariablePresets_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * An array of presets from the Console Variables Editor. The preset cvars will be applied (in the order they are\n\x09 * specified) before any of the cvars in \"Console Variables\". In other words, cvars in \"Console Variables\" will\n\x09 * take precedence over the cvars coming from these presets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "An array of presets from the Console Variables Editor. The preset cvars will be applied (in the order they are\nspecified) before any of the cvars in \"Console Variables\". In other words, cvars in \"Console Variables\" will\ntake precedence over the cvars coming from these presets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariablePresets = { "ConsoleVariablePresets", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineConsoleVariableSetting, ConsoleVariablePresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariablePresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariablePresets_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_ValueProp = { "ConsoleVariables", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_Key_KeyProp = { "ConsoleVariables_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "ConsoleVariables has been deprecated. Please use the console variable getters/setters (GetConsoleVariables(), RemoveConsoleVariable(), AddOrUpdateConsoleVariable(), and UpdateConsoleVariableEnableState()) instead. If scripting modifies ConsoleVariables, MRQ must be run in PIE to ensure changes are migrated." },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables = { "ConsoleVariables", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineConsoleVariableSetting, ConsoleVariables_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_Inner = { "StartConsoleCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09* An array of console commands to execute when this shot is started. If you need to restore the value \n\x09* after the shot, add a matching entry in the EndConsoleCommands array. Because they are commands\n\x09* and not values we cannot save the preivous value automatically.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "An array of console commands to execute when this shot is started. If you need to restore the value\nafter the shot, add a matching entry in the EndConsoleCommands array. Because they are commands\nand not values we cannot save the preivous value automatically." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands = { "StartConsoleCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineConsoleVariableSetting, StartConsoleCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_Inner = { "EndConsoleCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09* An array of console commands to execute when this shot is finished. Used to restore changes made by\n\x09* StartConsoleCommands.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "An array of console commands to execute when this shot is finished. Used to restore changes made by\nStartConsoleCommands." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands = { "EndConsoleCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineConsoleVariableSetting, EndConsoleCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_CVars_Inner = { "CVars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry, METADATA_PARAMS(nullptr, 0) }; // 3807879443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_CVars_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * An array of console variable overrides which are applied during render and reverted after the render completes.\n\x09 */" },
		{ "DisplayAfter", "ConsoleVariablePresets" },
		{ "DisplayName", "Console Variables" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ScriptNoExport", "" },
		{ "ToolTip", "An array of console variable overrides which are applied during render and reverted after the render completes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_CVars = { "CVars", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineConsoleVariableSetting, CVars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_CVars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_CVars_MetaData)) }; // 3807879443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariablePresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariablePresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_CVars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_CVars,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineConsoleVariableSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::ClassParams = {
		&UMoviePipelineConsoleVariableSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINESETTINGS_API UClass* StaticClass<UMoviePipelineConsoleVariableSetting>()
	{
		return UMoviePipelineConsoleVariableSetting::StaticClass();
	}
	UMoviePipelineConsoleVariableSetting::UMoviePipelineConsoleVariableSetting() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineConsoleVariableSetting);
	UMoviePipelineConsoleVariableSetting::~UMoviePipelineConsoleVariableSetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_Statics::ScriptStructInfo[] = {
		{ FMoviePipelineConsoleVariableEntry::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics::NewStructOps, TEXT("MoviePipelineConsoleVariableEntry"), &Z_Registration_Info_UScriptStruct_MoviePipelineConsoleVariableEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineConsoleVariableEntry), 3807879443U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineConsoleVariableSetting, UMoviePipelineConsoleVariableSetting::StaticClass, TEXT("UMoviePipelineConsoleVariableSetting"), &Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineConsoleVariableSetting), 1708219527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_3830636286(TEXT("/Script/MovieRenderPipelineSettings"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
