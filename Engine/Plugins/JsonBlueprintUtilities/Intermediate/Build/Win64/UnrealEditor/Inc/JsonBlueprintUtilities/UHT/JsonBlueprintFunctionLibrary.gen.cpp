// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonBlueprintFunctionLibrary.h"
#include "JsonObjectWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonBlueprintFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	JSONBLUEPRINTUTILITIES_API UClass* Z_Construct_UClass_UJsonBlueprintFunctionLibrary();
	JSONBLUEPRINTUTILITIES_API UClass* Z_Construct_UClass_UJsonBlueprintFunctionLibrary_NoRegister();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	UPackage* Z_Construct_UPackage__Script_JsonBlueprintUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UJsonBlueprintFunctionLibrary::execGetFieldNames)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_JsonObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FieldNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonBlueprintFunctionLibrary::GetFieldNames(Z_Param_Out_JsonObject,Z_Param_Out_FieldNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonBlueprintFunctionLibrary::execHasField)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonBlueprintFunctionLibrary::HasField(Z_Param_Out_JsonObject,Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonBlueprintFunctionLibrary::execToFile)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_JsonObject);
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonBlueprintFunctionLibrary::ToFile(Z_Param_Out_JsonObject,Z_Param_Out_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonBlueprintFunctionLibrary::execToString)
	{
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_JsonObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutJsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonBlueprintFunctionLibrary::ToString(Z_Param_Out_JsonObject,Z_Param_Out_OutJsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonBlueprintFunctionLibrary::execFromFile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_File);
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_OutJsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonBlueprintFunctionLibrary::FromFile(Z_Param_WorldContextObject,Z_Param_Out_File,Z_Param_Out_OutJsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonBlueprintFunctionLibrary::execFromString)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_OutJsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonBlueprintFunctionLibrary::FromString(Z_Param_WorldContextObject,Z_Param_JsonString,Z_Param_Out_OutJsonObject);
		P_NATIVE_END;
	}
	void UJsonBlueprintFunctionLibrary::StaticRegisterNativesUJsonBlueprintFunctionLibrary()
	{
		UClass* Class = UJsonBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FromFile", &UJsonBlueprintFunctionLibrary::execFromFile },
			{ "FromString", &UJsonBlueprintFunctionLibrary::execFromString },
			{ "GetField", &UJsonBlueprintFunctionLibrary::execGetField },
			{ "GetFieldNames", &UJsonBlueprintFunctionLibrary::execGetFieldNames },
			{ "HasField", &UJsonBlueprintFunctionLibrary::execHasField },
			{ "SetField", &UJsonBlueprintFunctionLibrary::execSetField },
			{ "StructToJsonString", &UJsonBlueprintFunctionLibrary::execStructToJsonString },
			{ "ToFile", &UJsonBlueprintFunctionLibrary::execToFile },
			{ "ToString", &UJsonBlueprintFunctionLibrary::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct JsonBlueprintFunctionLibrary_eventFromFile_Parms
		{
			UObject* WorldContextObject;
			FFilePath File;
			FJsonObjectWrapper OutJsonObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutJsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutJsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventFromFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventFromFile_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_OutJsonObject_MetaData[] = {
		{ "DisplayName", "JsonObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_OutJsonObject = { "OutJsonObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventFromFile_Parms, OutJsonObject), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_OutJsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_OutJsonObject_MetaData)) }; // 1979233586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventFromFile_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_OutJsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/** Creates a JsonObject from the provided Json file. */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Load Json from File" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Creates a JsonObject from the provided Json file." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "FromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::JsonBlueprintFunctionLibrary_eventFromFile_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics
	{
		struct JsonBlueprintFunctionLibrary_eventFromString_Parms
		{
			UObject* WorldContextObject;
			FString JsonString;
			FJsonObjectWrapper OutJsonObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutJsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutJsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventFromString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventFromString_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_OutJsonObject_MetaData[] = {
		{ "DisplayName", "JsonObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_OutJsonObject = { "OutJsonObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventFromString_Parms, OutJsonObject), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_OutJsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_OutJsonObject_MetaData)) }; // 1979233586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventFromString_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_OutJsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/** Creates a JsonObject from the provided Json string. */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Load Json from String" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Creates a JsonObject from the provided Json string." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "FromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::JsonBlueprintFunctionLibrary_eventFromString_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics
	{
		struct JsonBlueprintFunctionLibrary_eventGetField_Parms
		{
			FJsonObjectWrapper JsonObject;
			FString FieldName;
			int32 OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventGetField_Parms, JsonObject), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_JsonObject_MetaData)) }; // 1979233586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventGetField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_OutValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventGetField_Parms, OutValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_OutValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_OutValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventGetField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventGetField_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OutValue" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Json" },
		{ "Comment", "/** Gets the value of the specified field. */" },
		{ "CustomStructureParam", "OutValue" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets the value of the specified field." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "GetField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::JsonBlueprintFunctionLibrary_eventGetField_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics
	{
		struct JsonBlueprintFunctionLibrary_eventGetFieldNames_Parms
		{
			FJsonObjectWrapper JsonObject;
			TArray<FString> FieldNames;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventGetFieldNames_Parms, JsonObject), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_JsonObject_MetaData)) }; // 1979233586
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_FieldNames_Inner = { "FieldNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_FieldNames = { "FieldNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventGetFieldNames_Parms, FieldNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventGetFieldNames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventGetFieldNames_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_FieldNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_FieldNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/** Gets all field names on the JsonObject */" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets all field names on the JsonObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "GetFieldNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::JsonBlueprintFunctionLibrary_eventGetFieldNames_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics
	{
		struct JsonBlueprintFunctionLibrary_eventHasField_Parms
		{
			FJsonObjectWrapper JsonObject;
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventHasField_Parms, JsonObject), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_JsonObject_MetaData)) }; // 1979233586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventHasField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventHasField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventHasField_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/** Checks if the field exists on the object. */" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Checks if the field exists on the object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "HasField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::JsonBlueprintFunctionLibrary_eventHasField_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics
	{
		struct JsonBlueprintFunctionLibrary_eventSetField_Parms
		{
			FJsonObjectWrapper JsonObject;
			FString FieldName;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventSetField_Parms, JsonObject), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_JsonObject_MetaData)) }; // 1979233586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventSetField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventSetField_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventSetField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventSetField_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Value" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Json" },
		{ "Comment", "/** Adds (new) or sets (existing) the value of the specified field. */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Adds (new) or sets (existing) the value of the specified field." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "SetField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::JsonBlueprintFunctionLibrary_eventSetField_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics
	{
		struct JsonBlueprintFunctionLibrary_eventStructToJsonString_Parms
		{
			int32 Struct;
			FString OutJsonString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventStructToJsonString_Parms, Struct), METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_Struct_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventStructToJsonString_Parms, OutJsonString), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventStructToJsonString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventStructToJsonString_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_OutJsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Struct" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Json" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Convert Struct To Json String" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "StructToJsonString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::JsonBlueprintFunctionLibrary_eventStructToJsonString_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct JsonBlueprintFunctionLibrary_eventToFile_Parms
		{
			FJsonObjectWrapper JsonObject;
			FFilePath File;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventToFile_Parms, JsonObject), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_JsonObject_MetaData)) }; // 1979233586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventToFile_Parms, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventToFile_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/** Creates a file from the provided JsonObject. */" },
		{ "DisplayName", "Save Json to File" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Creates a file from the provided JsonObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "ToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::JsonBlueprintFunctionLibrary_eventToFile_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics
	{
		struct JsonBlueprintFunctionLibrary_eventToString_Parms
		{
			FJsonObjectWrapper JsonObject;
			FString OutJsonString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutJsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventToString_Parms, JsonObject), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_JsonObject_MetaData)) }; // 1979233586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_OutJsonString_MetaData[] = {
		{ "DisplayName", "String" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JsonBlueprintFunctionLibrary_eventToString_Parms, OutJsonString), METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_OutJsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_OutJsonString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonBlueprintFunctionLibrary_eventToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JsonBlueprintFunctionLibrary_eventToString_Parms), &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_OutJsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/** Creates a Json string from the provided JsonObject. */" },
		{ "DisplayName", "Get Json String" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Creates a Json string from the provided JsonObject." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonBlueprintFunctionLibrary, nullptr, "ToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::JsonBlueprintFunctionLibrary_eventToString_Parms), Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJsonBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UJsonBlueprintFunctionLibrary_NoRegister()
	{
		return UJsonBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonBlueprintUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromFile, "FromFile" }, // 1581561279
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_FromString, "FromString" }, // 754494381
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetField, "GetField" }, // 1650102013
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_GetFieldNames, "GetFieldNames" }, // 1072571836
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_HasField, "HasField" }, // 146756538
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_SetField, "SetField" }, // 340861803
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_StructToJsonString, "StructToJsonString" }, // 1822362832
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToFile, "ToFile" }, // 3657872464
		{ &Z_Construct_UFunction_UJsonBlueprintFunctionLibrary_ToString, "ToString" }, // 2131484952
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** */" },
		{ "IncludePath", "JsonBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/JsonBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics::ClassParams = {
		&UJsonBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UJsonBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJsonBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJsonBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> JSONBLUEPRINTUTILITIES_API UClass* StaticClass<UJsonBlueprintFunctionLibrary>()
	{
		return UJsonBlueprintFunctionLibrary::StaticClass();
	}
	UJsonBlueprintFunctionLibrary::UJsonBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonBlueprintFunctionLibrary);
	UJsonBlueprintFunctionLibrary::~UJsonBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJsonBlueprintFunctionLibrary, UJsonBlueprintFunctionLibrary::StaticClass, TEXT("UJsonBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UJsonBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJsonBlueprintFunctionLibrary), 2687710674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_1561079317(TEXT("/Script/JsonBlueprintUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
