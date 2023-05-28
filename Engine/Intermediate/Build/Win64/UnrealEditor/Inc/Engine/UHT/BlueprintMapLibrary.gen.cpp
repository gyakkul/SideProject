// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintMapLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBlueprintMapLibrary::StaticRegisterNativesUBlueprintMapLibrary()
	{
		UClass* Class = UBlueprintMapLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Map_Add", &UBlueprintMapLibrary::execMap_Add },
			{ "Map_Clear", &UBlueprintMapLibrary::execMap_Clear },
			{ "Map_Contains", &UBlueprintMapLibrary::execMap_Contains },
			{ "Map_Find", &UBlueprintMapLibrary::execMap_Find },
			{ "Map_IsEmpty", &UBlueprintMapLibrary::execMap_IsEmpty },
			{ "Map_IsNotEmpty", &UBlueprintMapLibrary::execMap_IsNotEmpty },
			{ "Map_Keys", &UBlueprintMapLibrary::execMap_Keys },
			{ "Map_Length", &UBlueprintMapLibrary::execMap_Length },
			{ "Map_Remove", &UBlueprintMapLibrary::execMap_Remove },
			{ "Map_Values", &UBlueprintMapLibrary::execMap_Values },
			{ "SetMapPropertyByName", &UBlueprintMapLibrary::execSetMapPropertyByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics
	{
		struct BlueprintMapLibrary_eventMap_Add_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key, Value" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Adds a key and value to the map. If something already uses the provided key it will be overwritten with the new value.\n\x09 * After calling Key is guaranteed to be associated with Value until a subsequent mutation of the Map.\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to add the key and value to\n\x09 * @param\x09Key\x09\x09\x09\x09The key that will be used to look the value up\n\x09 * @param\x09Value\x09\x09\x09The value to be retrieved later\n\x09 */" },
		{ "CompactNodeTitle", "ADD" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Adds a key and value to the map. If something already uses the provided key it will be overwritten with the new value.\nAfter calling Key is guaranteed to be associated with Value until a subsequent mutation of the Map.\n\n@param       TargetMap               The map to add the key and value to\n@param       Key                             The key that will be used to look the value up\n@param       Value                   The value to be retrieved later" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::BlueprintMapLibrary_eventMap_Add_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics
	{
		struct BlueprintMapLibrary_eventMap_Clear_Parms
		{
			TMap<int32,int32> TargetMap;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Clear_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Clears a map of all entries, resetting it to empty\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to clear\n\x09 */" },
		{ "CompactNodeTitle", "CLEAR" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Clear" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Clears a map of all entries, resetting it to empty\n\n@param       TargetMap               The map to clear" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Clear", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::BlueprintMapLibrary_eventMap_Clear_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics
	{
		struct BlueprintMapLibrary_eventMap_Contains_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Contains_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Contains_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMapLibrary_eventMap_Contains_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_Contains_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Checks whether key is in a provided Map\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to perform the lookup on\n\x09 * @param\x09Key\x09\x09\x09\x09The key that will be used to lookup\n\x09 * @return\x09True if an item was found (False indicates nothing in the map uses the provided key)\n\x09 */" },
		{ "CompactNodeTitle", "CONTAINS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Contains" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Checks whether key is in a provided Map\n\n@param       TargetMap               The map to perform the lookup on\n@param       Key                             The key that will be used to lookup\n@return      True if an item was found (False indicates nothing in the map uses the provided key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Contains", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::BlueprintMapLibrary_eventMap_Contains_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics
	{
		struct BlueprintMapLibrary_eventMap_Find_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			int32 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMapLibrary_eventMap_Find_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_Find_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key, Value" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Finds the value associated with the provided Key\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to perform the lookup on\n\x09 * @param\x09Key\x09\x09\x09\x09The key that will be used to look the value up\n\x09 * @param\x09Value\x09\x09\x09The value associated with the key, default constructed if key was not found\n\x09 * @return\x09True if an item was found (False indicates nothing in the map uses the provided key)\n\x09 */" },
		{ "CompactNodeTitle", "FIND" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Find" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Finds the value associated with the provided Key\n\n@param       TargetMap               The map to perform the lookup on\n@param       Key                             The key that will be used to look the value up\n@param       Value                   The value associated with the key, default constructed if key was not found\n@return      True if an item was found (False indicates nothing in the map uses the provided key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Find", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::BlueprintMapLibrary_eventMap_Find_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics
	{
		struct BlueprintMapLibrary_eventMap_IsEmpty_Parms
		{
			TMap<int32,int32> TargetMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_IsEmpty_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_MetaData)) };
	void Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMapLibrary_eventMap_IsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_IsEmpty_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Map" },
		{ "Comment", "/**\n\x09 * Check if the map does not have any entires\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to check\n\x09 * @return\x09""A boolean indicating if the map has any entires\n\x09 */" },
		{ "CompactNodeTitle", "IS EMPTY" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Is Empty" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Check if the map does not have any entires\n\n@param       TargetMap               The map to check\n@return      A boolean indicating if the map has any entires" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_IsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::BlueprintMapLibrary_eventMap_IsEmpty_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics
	{
		struct BlueprintMapLibrary_eventMap_IsNotEmpty_Parms
		{
			TMap<int32,int32> TargetMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_IsNotEmpty_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_MetaData)) };
	void Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMapLibrary_eventMap_IsNotEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_IsNotEmpty_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Map" },
		{ "Comment", "/**\n\x09 * Check if the map has any entries\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to check\n\x09 * @return\x09""A boolean indicating if the map has any entires\n\x09 */" },
		{ "CompactNodeTitle", "IS NOT EMPTY" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Is Not Empty" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Check if the map has any entries\n\n@param       TargetMap               The map to check\n@return      A boolean indicating if the map has any entires" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_IsNotEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::BlueprintMapLibrary_eventMap_IsNotEmpty_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics
	{
		struct BlueprintMapLibrary_eventMap_Keys_Parms
		{
			TMap<int32,int32> TargetMap;
			TArray<int32> Keys;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Keys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Keys_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Keys_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Keys" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Outputs an array of all keys present in the map\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to get the list of keys from\n\x09 * @param\x09Keys\x09\x09\x09""All keys present in the map\n\x09 */" },
		{ "CompactNodeTitle", "KEYS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Keys" },
		{ "MapKeyParam", "Keys" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Outputs an array of all keys present in the map\n\n@param       TargetMap               The map to get the list of keys from\n@param       Keys                    All keys present in the map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Keys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::BlueprintMapLibrary_eventMap_Keys_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics
	{
		struct BlueprintMapLibrary_eventMap_Length_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Length_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Length_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Determines the number of entries in a provided Map\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map in question\n\x09 * @return\x09The number of entries in the map\n\x09 */" },
		{ "CompactNodeTitle", "LENGTH" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Length" },
		{ "Keywords", "num size count" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Determines the number of entries in a provided Map\n\n@param       TargetMap               The map in question\n@return      The number of entries in the map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Length", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::BlueprintMapLibrary_eventMap_Length_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics
	{
		struct BlueprintMapLibrary_eventMap_Remove_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Remove_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Remove_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMapLibrary_eventMap_Remove_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMapLibrary_eventMap_Remove_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Removes a key and its associated value from the map.\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to remove the key and its associated value from\n\x09 * @param\x09Key\x09\x09\x09\x09The key that will be used to look the value up\n\x09 * @return\x09True if an item was removed (False indicates nothing in the map uses the provided key)\n\x09 */" },
		{ "CompactNodeTitle", "REMOVE" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Remove" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Removes a key and its associated value from the map.\n\n@param       TargetMap               The map to remove the key and its associated value from\n@param       Key                             The key that will be used to look the value up\n@return      True if an item was removed (False indicates nothing in the map uses the provided key)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Remove", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::BlueprintMapLibrary_eventMap_Remove_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics
	{
		struct BlueprintMapLibrary_eventMap_Values_Parms
		{
			TMap<int32,int32> TargetMap;
			TArray<int32> Values;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_ValueProp = { "TargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_Key_KeyProp = { "TargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap = { "TargetMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Values_Parms, TargetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Values_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Values" },
		{ "Category", "Utilities|Map" },
		{ "Comment", "/** \n\x09 * Outputs an array of all values present in the map\n\x09 *\n\x09 * @param\x09TargetMap\x09\x09The map to get the list of values from\n\x09 * @param\x09Values\x09\x09\x09""All values present in the map\n\x09 */" },
		{ "CompactNodeTitle", "VALUES" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Values" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Values" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Outputs an array of all values present in the map\n\n@param       TargetMap               The map to get the list of values from\n@param       Values                  All values present in the map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "Map_Values", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::BlueprintMapLibrary_eventMap_Values_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics
	{
		struct BlueprintMapLibrary_eventSetMapPropertyByName_Parms
		{
			UObject* Object;
			FName PropertyName;
			TMap<int32,int32> Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_ValueProp = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_Key_KeyProp = { "Value_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, Value), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** \n\x09* Not exposed to users. Supports setting a map property on an object by name.\n\x09*/" },
		{ "CustomThunk", "true" },
		{ "MapParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Not exposed to users. Supports setting a map property on an object by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, nullptr, "SetMapPropertyByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::BlueprintMapLibrary_eventSetMapPropertyByName_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintMapLibrary);
	UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister()
	{
		return UBlueprintMapLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintMapLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintMapLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintMapLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add, "Map_Add" }, // 454088776
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear, "Map_Clear" }, // 2894701509
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains, "Map_Contains" }, // 4231222787
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find, "Map_Find" }, // 1631654787
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsEmpty, "Map_IsEmpty" }, // 2824742425
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_IsNotEmpty, "Map_IsNotEmpty" }, // 3456078363
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys, "Map_Keys" }, // 1587145962
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length, "Map_Length" }, // 1570218318
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove, "Map_Remove" }, // 2613830522
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values, "Map_Values" }, // 984155921
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName, "SetMapPropertyByName" }, // 2089296021
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintMapLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/BlueprintMapLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintMapLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintMapLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintMapLibrary_Statics::ClassParams = {
		&UBlueprintMapLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintMapLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintMapLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintMapLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintMapLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintMapLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlueprintMapLibrary>()
	{
		return UBlueprintMapLibrary::StaticClass();
	}
	UBlueprintMapLibrary::UBlueprintMapLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintMapLibrary);
	UBlueprintMapLibrary::~UBlueprintMapLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintMapLibrary, UBlueprintMapLibrary::StaticClass, TEXT("UBlueprintMapLibrary"), &Z_Registration_Info_UClass_UBlueprintMapLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintMapLibrary), 3741469513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_495990022(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
