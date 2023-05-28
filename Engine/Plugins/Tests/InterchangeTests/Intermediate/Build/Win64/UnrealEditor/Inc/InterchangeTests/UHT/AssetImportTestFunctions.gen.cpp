// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/AssetImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetImportTestFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UAssetImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UAssetImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(UAssetImportTestFunctions::execCheckMetadataValue)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedMetadataKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedMetadataValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAssetImportTestFunctions::CheckMetadataValue(Z_Param_Object,Z_Param_ExpectedMetadataKey,Z_Param_ExpectedMetadataValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetImportTestFunctions::execCheckMetadataExist)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedMetadataKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAssetImportTestFunctions::CheckMetadataExist(Z_Param_Object,Z_Param_ExpectedMetadataKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetImportTestFunctions::execCheckImportedMetadataCount)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfMetadataForThisObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UAssetImportTestFunctions::CheckImportedMetadataCount(Z_Param_Object,Z_Param_ExpectedNumberOfMetadataForThisObject);
		P_NATIVE_END;
	}
	void UAssetImportTestFunctions::StaticRegisterNativesUAssetImportTestFunctions()
	{
		UClass* Class = UAssetImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckImportedMetadataCount", &UAssetImportTestFunctions::execCheckImportedMetadataCount },
			{ "CheckMetadataExist", &UAssetImportTestFunctions::execCheckMetadataExist },
			{ "CheckMetadataValue", &UAssetImportTestFunctions::execCheckMetadataValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics
	{
		struct AssetImportTestFunctions_eventCheckImportedMetadataCount_Parms
		{
			const UObject* Object;
			int32 ExpectedNumberOfMetadataForThisObject;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedNumberOfMetadataForThisObject_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfMetadataForThisObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckImportedMetadataCount_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_ExpectedNumberOfMetadataForThisObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_ExpectedNumberOfMetadataForThisObject = { "ExpectedNumberOfMetadataForThisObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckImportedMetadataCount_Parms, ExpectedNumberOfMetadataForThisObject), METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_ExpectedNumberOfMetadataForThisObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_ExpectedNumberOfMetadataForThisObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckImportedMetadataCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_ExpectedNumberOfMetadataForThisObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of metadata for the object are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AssetImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of metadata for the object are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportTestFunctions, nullptr, "CheckImportedMetadataCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::AssetImportTestFunctions_eventCheckImportedMetadataCount_Parms), Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics
	{
		struct AssetImportTestFunctions_eventCheckMetadataExist_Parms
		{
			const UObject* Object;
			FString ExpectedMetadataKey;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedMetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedMetadataKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckMetadataExist_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_ExpectedMetadataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_ExpectedMetadataKey = { "ExpectedMetadataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckMetadataExist_Parms, ExpectedMetadataKey), METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_ExpectedMetadataKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_ExpectedMetadataKey_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckMetadataExist_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_ExpectedMetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Check whether the expected object metadata key exist.\n\x09 * @Param ExpectedMetadataKey - The object metadata key to pass to the package to retrieve the metadata value\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AssetImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected object metadata key exist.\n@Param ExpectedMetadataKey - The object metadata key to pass to the package to retrieve the metadata value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportTestFunctions, nullptr, "CheckMetadataExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::AssetImportTestFunctions_eventCheckMetadataExist_Parms), Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics
	{
		struct AssetImportTestFunctions_eventCheckMetadataValue_Parms
		{
			const UObject* Object;
			FString ExpectedMetadataKey;
			FString ExpectedMetadataValue;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedMetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedMetadataKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedMetadataValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedMetadataValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckMetadataValue_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataKey = { "ExpectedMetadataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckMetadataValue_Parms, ExpectedMetadataKey), METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataValue = { "ExpectedMetadataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckMetadataValue_Parms, ExpectedMetadataValue), METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetImportTestFunctions_eventCheckMetadataValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ExpectedMetadataValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Check whether the expected object metadata value is imported.\n\x09 * @Param ExpectedMetadataKey - The object metadata key to pass to the package to retrieve the metadata value\n\x09 * @Param ExpectedMetadataValue - The value to compare the object metadata query with the metadata key\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AssetImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected object metadata value is imported.\n@Param ExpectedMetadataKey - The object metadata key to pass to the package to retrieve the metadata value\n@Param ExpectedMetadataValue - The value to compare the object metadata query with the metadata key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportTestFunctions, nullptr, "CheckMetadataValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::AssetImportTestFunctions_eventCheckMetadataValue_Parms), Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetImportTestFunctions);
	UClass* Z_Construct_UClass_UAssetImportTestFunctions_NoRegister()
	{
		return UAssetImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UAssetImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetImportTestFunctions_CheckImportedMetadataCount, "CheckImportedMetadataCount" }, // 772080874
		{ &Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataExist, "CheckMetadataExist" }, // 2976926974
		{ &Z_Construct_UFunction_UAssetImportTestFunctions_CheckMetadataValue, "CheckMetadataValue" }, // 3836560233
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/AssetImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/AssetImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetImportTestFunctions_Statics::ClassParams = {
		&UAssetImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_UAssetImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetImportTestFunctions.OuterSingleton, Z_Construct_UClass_UAssetImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UAssetImportTestFunctions>()
	{
		return UAssetImportTestFunctions::StaticClass();
	}
	UAssetImportTestFunctions::UAssetImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetImportTestFunctions);
	UAssetImportTestFunctions::~UAssetImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetImportTestFunctions, UAssetImportTestFunctions::StaticClass, TEXT("UAssetImportTestFunctions"), &Z_Registration_Info_UClass_UAssetImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetImportTestFunctions), 3514641602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_2828430130(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
