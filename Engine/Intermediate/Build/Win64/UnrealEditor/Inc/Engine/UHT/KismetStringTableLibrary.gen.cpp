// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/KismetStringTableLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetStringTableLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetStringTableLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetStringTableLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetMetaDataIdsFromStringTableEntry)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry(Z_Param_TableId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetKeysFromStringTable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UKismetStringTableLibrary::GetKeysFromStringTable(Z_Param_TableId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetRegisteredStringTables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UKismetStringTableLibrary::GetRegisteredStringTables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetTableEntryMetaData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FNameProperty,Z_Param_MetaDataId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableEntryMetaData(Z_Param_TableId,Z_Param_Key,Z_Param_MetaDataId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetTableEntrySourceString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableEntrySourceString(Z_Param_TableId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execGetTableNamespace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetStringTableLibrary::GetTableNamespace(Z_Param_TableId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execIsRegisteredTableEntry)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetStringTableLibrary::IsRegisteredTableEntry(Z_Param_TableId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetStringTableLibrary::execIsRegisteredTableId)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetStringTableLibrary::IsRegisteredTableId(Z_Param_TableId);
		P_NATIVE_END;
	}
	void UKismetStringTableLibrary::StaticRegisterNativesUKismetStringTableLibrary()
	{
		UClass* Class = UKismetStringTableLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeysFromStringTable", &UKismetStringTableLibrary::execGetKeysFromStringTable },
			{ "GetMetaDataIdsFromStringTableEntry", &UKismetStringTableLibrary::execGetMetaDataIdsFromStringTableEntry },
			{ "GetRegisteredStringTables", &UKismetStringTableLibrary::execGetRegisteredStringTables },
			{ "GetTableEntryMetaData", &UKismetStringTableLibrary::execGetTableEntryMetaData },
			{ "GetTableEntrySourceString", &UKismetStringTableLibrary::execGetTableEntrySourceString },
			{ "GetTableNamespace", &UKismetStringTableLibrary::execGetTableNamespace },
			{ "IsRegisteredTableEntry", &UKismetStringTableLibrary::execIsRegisteredTableEntry },
			{ "IsRegisteredTableId", &UKismetStringTableLibrary::execIsRegisteredTableId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics
	{
		struct KismetStringTableLibrary_eventGetKeysFromStringTable_Parms
		{
			FName TableId;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetKeysFromStringTable_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetKeysFromStringTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_TableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns an array of all keys within the given string table */" },
		{ "DisplayName", "Get Keys from String Table" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns an array of all keys within the given string table" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetKeysFromStringTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::KismetStringTableLibrary_eventGetKeysFromStringTable_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics
	{
		struct KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms
		{
			FName TableId;
			FString Key;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TableId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_TableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns an array of all meta-data IDs within the given string table entry */" },
		{ "DisplayName", "Get Meta-Data IDs from String Table Entry" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns an array of all meta-data IDs within the given string table entry" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetMetaDataIdsFromStringTableEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::KismetStringTableLibrary_eventGetMetaDataIdsFromStringTableEntry_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics
	{
		struct KismetStringTableLibrary_eventGetRegisteredStringTables_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetRegisteredStringTables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns an array of all registered string table IDs */" },
		{ "DisplayName", "Get Registered String Tables" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns an array of all registered string table IDs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetRegisteredStringTables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::KismetStringTableLibrary_eventGetRegisteredStringTables_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics
	{
		struct KismetStringTableLibrary_eventGetTableEntryMetaData_Parms
		{
			FName TableId;
			FString Key;
			FName MetaDataId;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TableId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetaDataId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId = { "MetaDataId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, MetaDataId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntryMetaData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_TableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_MetaDataId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns the specified meta-data of the given string table entry (or an empty string). */" },
		{ "DisplayName", "Get String Table Entry Meta-Data" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns the specified meta-data of the given string table entry (or an empty string)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetTableEntryMetaData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::KismetStringTableLibrary_eventGetTableEntryMetaData_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics
	{
		struct KismetStringTableLibrary_eventGetTableEntrySourceString_Parms
		{
			FName TableId;
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TableId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableEntrySourceString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_TableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns the source string of the given string table entry (or an empty string). */" },
		{ "DisplayName", "Get String Table Entry Source String" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns the source string of the given string table entry (or an empty string)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetTableEntrySourceString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::KismetStringTableLibrary_eventGetTableEntrySourceString_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics
	{
		struct KismetStringTableLibrary_eventGetTableNamespace_Parms
		{
			FName TableId;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableNamespace_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventGetTableNamespace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_TableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns the namespace of the given string table. */" },
		{ "DisplayName", "Get String Table Namespace" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns the namespace of the given string table." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "GetTableNamespace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::KismetStringTableLibrary_eventGetTableNamespace_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics
	{
		struct KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms
		{
			FName TableId;
			FString Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TableId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms), &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_TableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns true if the given table ID corresponds to a registered string table, and that table has. */" },
		{ "DisplayName", "Is String Table Entry Registered" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns true if the given table ID corresponds to a registered string table, and that table has." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "IsRegisteredTableEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::KismetStringTableLibrary_eventIsRegisteredTableEntry_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics
	{
		struct KismetStringTableLibrary_eventIsRegisteredTableId_Parms
		{
			FName TableId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TableId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetStringTableLibrary_eventIsRegisteredTableId_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId_MetaData)) };
	void Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetStringTableLibrary_eventIsRegisteredTableId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetStringTableLibrary_eventIsRegisteredTableId_Parms), &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_TableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|String Table" },
		{ "Comment", "/** Returns true if the given table ID corresponds to a registered string table. */" },
		{ "DisplayName", "Is String Table Registered" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ToolTip", "Returns true if the given table ID corresponds to a registered string table." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetStringTableLibrary, nullptr, "IsRegisteredTableId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::KismetStringTableLibrary_eventIsRegisteredTableId_Parms), Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetStringTableLibrary);
	UClass* Z_Construct_UClass_UKismetStringTableLibrary_NoRegister()
	{
		return UKismetStringTableLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetStringTableLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetStringTableLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetStringTableLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetKeysFromStringTable, "GetKeysFromStringTable" }, // 1404561500
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry, "GetMetaDataIdsFromStringTableEntry" }, // 3078033995
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetRegisteredStringTables, "GetRegisteredStringTables" }, // 2073465242
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntryMetaData, "GetTableEntryMetaData" }, // 2439929866
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableEntrySourceString, "GetTableEntrySourceString" }, // 3140531264
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_GetTableNamespace, "GetTableNamespace" }, // 2569784999
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableEntry, "IsRegisteredTableEntry" }, // 3591165587
		{ &Z_Construct_UFunction_UKismetStringTableLibrary_IsRegisteredTableId, "IsRegisteredTableId" }, // 2719017986
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetStringTableLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetStringTableLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetStringTableLibrary.h" },
		{ "ScriptName", "StringTableLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetStringTableLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetStringTableLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetStringTableLibrary_Statics::ClassParams = {
		&UKismetStringTableLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKismetStringTableLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetStringTableLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetStringTableLibrary()
	{
		if (!Z_Registration_Info_UClass_UKismetStringTableLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetStringTableLibrary.OuterSingleton, Z_Construct_UClass_UKismetStringTableLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKismetStringTableLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UKismetStringTableLibrary>()
	{
		return UKismetStringTableLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetStringTableLibrary);
	UKismetStringTableLibrary::~UKismetStringTableLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKismetStringTableLibrary, UKismetStringTableLibrary::StaticClass, TEXT("UKismetStringTableLibrary"), &Z_Registration_Info_UClass_UKismetStringTableLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetStringTableLibrary), 2537044244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_1244806672(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetStringTableLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
