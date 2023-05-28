// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/LevelSequenceImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceImportTestFunctions() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_ULevelSequenceImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_ULevelSequenceImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(ULevelSequenceImportTestFunctions::execCheckSectionInterpolationMode)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_ExpectedInterpolationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=ULevelSequenceImportTestFunctions::CheckSectionInterpolationMode(Z_Param_LevelSequence,Z_Param_SectionIndex,ERichCurveInterpMode(Z_Param_ExpectedInterpolationMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceImportTestFunctions::execCheckSectionCount)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfSections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=ULevelSequenceImportTestFunctions::CheckSectionCount(Z_Param_LevelSequence,Z_Param_ExpectedNumberOfSections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceImportTestFunctions::execCheckSequenceLength)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedLevelSequenceLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=ULevelSequenceImportTestFunctions::CheckSequenceLength(Z_Param_LevelSequence,Z_Param_ExpectedLevelSequenceLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceImportTestFunctions::execCheckLevelSequenceCount)
	{
		P_GET_TARRAY_REF(ULevelSequence*,Z_Param_Out_LevelSequences);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfLevelSequences);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=ULevelSequenceImportTestFunctions::CheckLevelSequenceCount(Z_Param_Out_LevelSequences,Z_Param_ExpectedNumberOfLevelSequences);
		P_NATIVE_END;
	}
	void ULevelSequenceImportTestFunctions::StaticRegisterNativesULevelSequenceImportTestFunctions()
	{
		UClass* Class = ULevelSequenceImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckLevelSequenceCount", &ULevelSequenceImportTestFunctions::execCheckLevelSequenceCount },
			{ "CheckSectionCount", &ULevelSequenceImportTestFunctions::execCheckSectionCount },
			{ "CheckSectionInterpolationMode", &ULevelSequenceImportTestFunctions::execCheckSectionInterpolationMode },
			{ "CheckSequenceLength", &ULevelSequenceImportTestFunctions::execCheckSequenceLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics
	{
		struct LevelSequenceImportTestFunctions_eventCheckLevelSequenceCount_Parms
		{
			TArray<ULevelSequence*> LevelSequences;
			int32 ExpectedNumberOfLevelSequences;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelSequences;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfLevelSequences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_LevelSequences_Inner = { "LevelSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_LevelSequences_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_LevelSequences = { "LevelSequences", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckLevelSequenceCount_Parms, LevelSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_LevelSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_LevelSequences_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_ExpectedNumberOfLevelSequences = { "ExpectedNumberOfLevelSequences", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckLevelSequenceCount_Parms, ExpectedNumberOfLevelSequences), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckLevelSequenceCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_LevelSequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_LevelSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_ExpectedNumberOfLevelSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of level sequences are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelSequenceImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of level sequences are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceImportTestFunctions, nullptr, "CheckLevelSequenceCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::LevelSequenceImportTestFunctions_eventCheckLevelSequenceCount_Parms), Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics
	{
		struct LevelSequenceImportTestFunctions_eventCheckSectionCount_Parms
		{
			const ULevelSequence* LevelSequence;
			int32 ExpectedNumberOfSections;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfSections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSectionCount_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_LevelSequence_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_ExpectedNumberOfSections = { "ExpectedNumberOfSections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSectionCount_Parms, ExpectedNumberOfSections), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSectionCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_ExpectedNumberOfSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported level sequence has the expected number of sections */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelSequenceImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported level sequence has the expected number of sections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceImportTestFunctions, nullptr, "CheckSectionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::LevelSequenceImportTestFunctions_eventCheckSectionCount_Parms), Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics
	{
		struct LevelSequenceImportTestFunctions_eventCheckSectionInterpolationMode_Parms
		{
			const ULevelSequence* LevelSequence;
			int32 SectionIndex;
			TEnumAsByte<ERichCurveInterpMode> ExpectedInterpolationMode;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedInterpolationMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSectionInterpolationMode_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_LevelSequence_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSectionInterpolationMode_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_ExpectedInterpolationMode = { "ExpectedInterpolationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSectionInterpolationMode_Parms, ExpectedInterpolationMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(nullptr, 0) }; // 931686469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSectionInterpolationMode_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_ExpectedInterpolationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported level sequence has the expected interpolation mode for the given section */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelSequenceImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported level sequence has the expected interpolation mode for the given section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceImportTestFunctions, nullptr, "CheckSectionInterpolationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::LevelSequenceImportTestFunctions_eventCheckSectionInterpolationMode_Parms), Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics
	{
		struct LevelSequenceImportTestFunctions_eventCheckSequenceLength_Parms
		{
			const ULevelSequence* LevelSequence;
			float ExpectedLevelSequenceLength;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedLevelSequenceLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSequenceLength_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_LevelSequence_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_ExpectedLevelSequenceLength = { "ExpectedLevelSequenceLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSequenceLength_Parms, ExpectedLevelSequenceLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceImportTestFunctions_eventCheckSequenceLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_ExpectedLevelSequenceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the level sequence length (second) is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelSequenceImportTestFunctions.h" },
		{ "ToolTip", "Check whether the level sequence length (second) is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceImportTestFunctions, nullptr, "CheckSequenceLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::LevelSequenceImportTestFunctions_eventCheckSequenceLength_Parms), Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceImportTestFunctions);
	UClass* Z_Construct_UClass_ULevelSequenceImportTestFunctions_NoRegister()
	{
		return ULevelSequenceImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckLevelSequenceCount, "CheckLevelSequenceCount" }, // 1461400014
		{ &Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionCount, "CheckSectionCount" }, // 1972442682
		{ &Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSectionInterpolationMode, "CheckSectionInterpolationMode" }, // 1457045271
		{ &Z_Construct_UFunction_ULevelSequenceImportTestFunctions_CheckSequenceLength, "CheckSequenceLength" }, // 3662420951
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/LevelSequenceImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/LevelSequenceImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics::ClassParams = {
		&ULevelSequenceImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceImportTestFunctions.OuterSingleton, Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<ULevelSequenceImportTestFunctions>()
	{
		return ULevelSequenceImportTestFunctions::StaticClass();
	}
	ULevelSequenceImportTestFunctions::ULevelSequenceImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceImportTestFunctions);
	ULevelSequenceImportTestFunctions::~ULevelSequenceImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceImportTestFunctions, ULevelSequenceImportTestFunctions::StaticClass, TEXT("ULevelSequenceImportTestFunctions"), &Z_Registration_Info_UClass_ULevelSequenceImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceImportTestFunctions), 3394243083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_1927293956(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
