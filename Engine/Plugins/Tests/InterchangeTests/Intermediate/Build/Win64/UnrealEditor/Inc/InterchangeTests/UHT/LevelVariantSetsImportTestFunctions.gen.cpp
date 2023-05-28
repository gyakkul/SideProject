// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/LevelVariantSetsImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSetsImportTestFunctions() {}
// Cross Module References
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_ULevelVariantSetsImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULevelVariantSetsImportTestFunctions::execCheckBindingsCount)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_LevelVariantSets);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=ULevelVariantSetsImportTestFunctions::CheckBindingsCount(Z_Param_LevelVariantSets,Z_Param_VariantSetName,Z_Param_VariantName,Z_Param_ExpectedNumberOfBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelVariantSetsImportTestFunctions::execCheckVariantsCount)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_LevelVariantSets);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfVariants);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=ULevelVariantSetsImportTestFunctions::CheckVariantsCount(Z_Param_LevelVariantSets,Z_Param_VariantSetName,Z_Param_ExpectedNumberOfVariants);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelVariantSetsImportTestFunctions::execCheckVariantSetsCount)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_LevelVariantSets);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfVariantSets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=ULevelVariantSetsImportTestFunctions::CheckVariantSetsCount(Z_Param_LevelVariantSets,Z_Param_ExpectedNumberOfVariantSets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelVariantSetsImportTestFunctions::execCheckLevelVariantSetsCount)
	{
		P_GET_TARRAY_REF(ULevelVariantSets*,Z_Param_Out_LevelVariantSetsAssets);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfLevelVariantSets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=ULevelVariantSetsImportTestFunctions::CheckLevelVariantSetsCount(Z_Param_Out_LevelVariantSetsAssets,Z_Param_ExpectedNumberOfLevelVariantSets);
		P_NATIVE_END;
	}
	void ULevelVariantSetsImportTestFunctions::StaticRegisterNativesULevelVariantSetsImportTestFunctions()
	{
		UClass* Class = ULevelVariantSetsImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckBindingsCount", &ULevelVariantSetsImportTestFunctions::execCheckBindingsCount },
			{ "CheckLevelVariantSetsCount", &ULevelVariantSetsImportTestFunctions::execCheckLevelVariantSetsCount },
			{ "CheckVariantsCount", &ULevelVariantSetsImportTestFunctions::execCheckVariantsCount },
			{ "CheckVariantSetsCount", &ULevelVariantSetsImportTestFunctions::execCheckVariantSetsCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics
	{
		struct LevelVariantSetsImportTestFunctions_eventCheckBindingsCount_Parms
		{
			ULevelVariantSets* LevelVariantSets;
			FString VariantSetName;
			FString VariantName;
			int32 ExpectedNumberOfBindings;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfBindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckBindingsCount_Parms, LevelVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantSetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckBindingsCount_Parms, VariantSetName), METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantSetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckBindingsCount_Parms, VariantName), METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_ExpectedNumberOfBindings = { "ExpectedNumberOfBindings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckBindingsCount_Parms, ExpectedNumberOfBindings), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckBindingsCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_LevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_VariantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_ExpectedNumberOfBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported LevelVariantSets has the expected number of bindings for the given variant in the given set */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelVariantSetsImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported LevelVariantSets has the expected number of bindings for the given variant in the given set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSetsImportTestFunctions, nullptr, "CheckBindingsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::LevelVariantSetsImportTestFunctions_eventCheckBindingsCount_Parms), Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics
	{
		struct LevelVariantSetsImportTestFunctions_eventCheckLevelVariantSetsCount_Parms
		{
			TArray<ULevelVariantSets*> LevelVariantSetsAssets;
			int32 ExpectedNumberOfLevelVariantSets;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSetsAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelVariantSetsAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelVariantSetsAssets;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfLevelVariantSets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_LevelVariantSetsAssets_Inner = { "LevelVariantSetsAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_LevelVariantSetsAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_LevelVariantSetsAssets = { "LevelVariantSetsAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckLevelVariantSetsCount_Parms, LevelVariantSetsAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_LevelVariantSetsAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_LevelVariantSetsAssets_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_ExpectedNumberOfLevelVariantSets = { "ExpectedNumberOfLevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckLevelVariantSetsCount_Parms, ExpectedNumberOfLevelVariantSets), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckLevelVariantSetsCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_LevelVariantSetsAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_LevelVariantSetsAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_ExpectedNumberOfLevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of LevelVariantSets are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelVariantSetsImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of LevelVariantSets are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSetsImportTestFunctions, nullptr, "CheckLevelVariantSetsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::LevelVariantSetsImportTestFunctions_eventCheckLevelVariantSetsCount_Parms), Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics
	{
		struct LevelVariantSetsImportTestFunctions_eventCheckVariantsCount_Parms
		{
			ULevelVariantSets* LevelVariantSets;
			FString VariantSetName;
			int32 ExpectedNumberOfVariants;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfVariants;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckVariantsCount_Parms, LevelVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_VariantSetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckVariantsCount_Parms, VariantSetName), METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_VariantSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_VariantSetName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_ExpectedNumberOfVariants = { "ExpectedNumberOfVariants", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckVariantsCount_Parms, ExpectedNumberOfVariants), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckVariantsCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_LevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_VariantSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_ExpectedNumberOfVariants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported LevelVariantSets has the expected number of variants for the given variant set */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelVariantSetsImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported LevelVariantSets has the expected number of variants for the given variant set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSetsImportTestFunctions, nullptr, "CheckVariantsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::LevelVariantSetsImportTestFunctions_eventCheckVariantsCount_Parms), Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics
	{
		struct LevelVariantSetsImportTestFunctions_eventCheckVariantSetsCount_Parms
		{
			ULevelVariantSets* LevelVariantSets;
			int32 ExpectedNumberOfVariantSets;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSets;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfVariantSets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckVariantSetsCount_Parms, LevelVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::NewProp_ExpectedNumberOfVariantSets = { "ExpectedNumberOfVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckVariantSetsCount_Parms, ExpectedNumberOfVariantSets), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsImportTestFunctions_eventCheckVariantSetsCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::NewProp_LevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::NewProp_ExpectedNumberOfVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported LevelVariantSets has the expected number of variant sets */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelVariantSetsImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported LevelVariantSets has the expected number of variant sets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSetsImportTestFunctions, nullptr, "CheckVariantSetsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::LevelVariantSetsImportTestFunctions_eventCheckVariantSetsCount_Parms), Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelVariantSetsImportTestFunctions);
	UClass* Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_NoRegister()
	{
		return ULevelVariantSetsImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckBindingsCount, "CheckBindingsCount" }, // 2765933705
		{ &Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckLevelVariantSetsCount, "CheckLevelVariantSetsCount" }, // 2499498690
		{ &Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantsCount, "CheckVariantsCount" }, // 3666573138
		{ &Z_Construct_UFunction_ULevelVariantSetsImportTestFunctions_CheckVariantSetsCount, "CheckVariantSetsCount" }, // 1771990719
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/LevelVariantSetsImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelVariantSetsImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelVariantSetsImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics::ClassParams = {
		&ULevelVariantSetsImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelVariantSetsImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_ULevelVariantSetsImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelVariantSetsImportTestFunctions.OuterSingleton, Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelVariantSetsImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<ULevelVariantSetsImportTestFunctions>()
	{
		return ULevelVariantSetsImportTestFunctions::StaticClass();
	}
	ULevelVariantSetsImportTestFunctions::ULevelVariantSetsImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelVariantSetsImportTestFunctions);
	ULevelVariantSetsImportTestFunctions::~ULevelVariantSetsImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelVariantSetsImportTestFunctions, ULevelVariantSetsImportTestFunctions::StaticClass, TEXT("ULevelVariantSetsImportTestFunctions"), &Z_Registration_Info_UClass_ULevelVariantSetsImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelVariantSetsImportTestFunctions), 4170125248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_3041545029(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
