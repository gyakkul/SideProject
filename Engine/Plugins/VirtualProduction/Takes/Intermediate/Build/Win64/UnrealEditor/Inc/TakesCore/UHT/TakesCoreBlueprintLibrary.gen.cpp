// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakesCoreBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakesCoreBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakesCoreBlueprintLibrary();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakesCoreBlueprintLibrary_NoRegister();
	TAKESCORE_API UFunction* Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature();
	TAKESCORE_API UFunction* Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TakesCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics
	{
		struct TakesCoreBlueprintLibrary_eventOnTakeRecorderSlateChanged_Parms
		{
			FString Slate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::NewProp_Slate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::NewProp_Slate = { "Slate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventOnTakeRecorderSlateChanged_Parms, Slate), METADATA_PARAMS(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::NewProp_Slate_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::NewProp_Slate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::NewProp_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TakesCoreBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakesCoreBlueprintLibrary, nullptr, "OnTakeRecorderSlateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::TakesCoreBlueprintLibrary_eventOnTakeRecorderSlateChanged_Parms), Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UTakesCoreBlueprintLibrary::FOnTakeRecorderSlateChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderSlateChanged, const FString& Slate)
{
	struct TakesCoreBlueprintLibrary_eventOnTakeRecorderSlateChanged_Parms
	{
		FString Slate;
	};
	TakesCoreBlueprintLibrary_eventOnTakeRecorderSlateChanged_Parms Parms;
	Parms.Slate=Slate;
	OnTakeRecorderSlateChanged.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics
	{
		struct TakesCoreBlueprintLibrary_eventOnTakeRecorderTakeNumberChanged_Parms
		{
			int32 TakeNumber;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TakeNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::NewProp_TakeNumber = { "TakeNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventOnTakeRecorderTakeNumberChanged_Parms, TakeNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::NewProp_TakeNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TakesCoreBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakesCoreBlueprintLibrary, nullptr, "OnTakeRecorderTakeNumberChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::TakesCoreBlueprintLibrary_eventOnTakeRecorderTakeNumberChanged_Parms), Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UTakesCoreBlueprintLibrary::FOnTakeRecorderTakeNumberChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderTakeNumberChanged, int32 TakeNumber)
{
	struct TakesCoreBlueprintLibrary_eventOnTakeRecorderTakeNumberChanged_Parms
	{
		int32 TakeNumber;
	};
	TakesCoreBlueprintLibrary_eventOnTakeRecorderTakeNumberChanged_Parms Parms;
	Parms.TakeNumber=TakeNumber;
	OnTakeRecorderTakeNumberChanged.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTakesCoreBlueprintLibrary::execSetOnTakeRecorderTakeNumberChanged)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderTakeNumberChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakesCoreBlueprintLibrary::SetOnTakeRecorderTakeNumberChanged(FOnTakeRecorderTakeNumberChanged(Z_Param_OnTakeRecorderTakeNumberChanged));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakesCoreBlueprintLibrary::execSetOnTakeRecorderSlateChanged)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTakeRecorderSlateChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakesCoreBlueprintLibrary::SetOnTakeRecorderSlateChanged(FOnTakeRecorderSlateChanged(Z_Param_OnTakeRecorderSlateChanged));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakesCoreBlueprintLibrary::execFindTakes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Slate);
		P_GET_PROPERTY(FIntProperty,Z_Param_TakeNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=UTakesCoreBlueprintLibrary::FindTakes(Z_Param_Slate,Z_Param_TakeNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakesCoreBlueprintLibrary::execComputeNextTakeNumber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Slate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTakesCoreBlueprintLibrary::ComputeNextTakeNumber(Z_Param_Slate);
		P_NATIVE_END;
	}
	void UTakesCoreBlueprintLibrary::StaticRegisterNativesUTakesCoreBlueprintLibrary()
	{
		UClass* Class = UTakesCoreBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeNextTakeNumber", &UTakesCoreBlueprintLibrary::execComputeNextTakeNumber },
			{ "FindTakes", &UTakesCoreBlueprintLibrary::execFindTakes },
			{ "SetOnTakeRecorderSlateChanged", &UTakesCoreBlueprintLibrary::execSetOnTakeRecorderSlateChanged },
			{ "SetOnTakeRecorderTakeNumberChanged", &UTakesCoreBlueprintLibrary::execSetOnTakeRecorderTakeNumberChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics
	{
		struct TakesCoreBlueprintLibrary_eventComputeNextTakeNumber_Parms
		{
			FString Slate;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::NewProp_Slate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::NewProp_Slate = { "Slate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventComputeNextTakeNumber_Parms, Slate), METADATA_PARAMS(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::NewProp_Slate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::NewProp_Slate_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventComputeNextTakeNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::NewProp_Slate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Compute the next unused sequential take number for the specified slate\n\x09 */" },
		{ "ModuleRelativePath", "Public/TakesCoreBlueprintLibrary.h" },
		{ "ToolTip", "Compute the next unused sequential take number for the specified slate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakesCoreBlueprintLibrary, nullptr, "ComputeNextTakeNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::TakesCoreBlueprintLibrary_eventComputeNextTakeNumber_Parms), Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct TakesCoreBlueprintLibrary_eventFindTakes_Parms
		{
			FString Slate;
			int32 TakeNumber;
			TArray<FAssetData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TakeNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_Slate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_Slate = { "Slate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventFindTakes_Parms, Slate), METADATA_PARAMS(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_Slate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_Slate_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_TakeNumber = { "TakeNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventFindTakes_Parms, TakeNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventFindTakes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_Slate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_TakeNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Find all the existing takes that were recorded with the specified slate\n\x09 *\n\x09 * @param Slate        The slate to filter by\n\x09 * @param TakeNumber   The take number to filter by. <=0 denotes all takes\n\x09 */" },
		{ "CPP_Default_TakeNumber", "0" },
		{ "ModuleRelativePath", "Public/TakesCoreBlueprintLibrary.h" },
		{ "ToolTip", "Find all the existing takes that were recorded with the specified slate\n\n@param Slate        The slate to filter by\n@param TakeNumber   The take number to filter by. <=0 denotes all takes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakesCoreBlueprintLibrary, nullptr, "FindTakes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::TakesCoreBlueprintLibrary_eventFindTakes_Parms), Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics
	{
		struct TakesCoreBlueprintLibrary_eventSetOnTakeRecorderSlateChanged_Parms
		{
			FScriptDelegate OnTakeRecorderSlateChanged;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderSlateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::NewProp_OnTakeRecorderSlateChanged = { "OnTakeRecorderSlateChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventSetOnTakeRecorderSlateChanged_Parms, OnTakeRecorderSlateChanged), Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2384705429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::NewProp_OnTakeRecorderSlateChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called when the slate is changed. */" },
		{ "ModuleRelativePath", "Public/TakesCoreBlueprintLibrary.h" },
		{ "ToolTip", "Called when the slate is changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakesCoreBlueprintLibrary, nullptr, "SetOnTakeRecorderSlateChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::TakesCoreBlueprintLibrary_eventSetOnTakeRecorderSlateChanged_Parms), Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics
	{
		struct TakesCoreBlueprintLibrary_eventSetOnTakeRecorderTakeNumberChanged_Parms
		{
			FScriptDelegate OnTakeRecorderTakeNumberChanged;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTakeRecorderTakeNumberChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::NewProp_OnTakeRecorderTakeNumberChanged = { "OnTakeRecorderTakeNumberChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakesCoreBlueprintLibrary_eventSetOnTakeRecorderTakeNumberChanged_Parms, OnTakeRecorderTakeNumberChanged), Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4263612500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::NewProp_OnTakeRecorderTakeNumberChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Called when the take number is changed. */" },
		{ "ModuleRelativePath", "Public/TakesCoreBlueprintLibrary.h" },
		{ "ToolTip", "Called when the take number is changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakesCoreBlueprintLibrary, nullptr, "SetOnTakeRecorderTakeNumberChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::TakesCoreBlueprintLibrary_eventSetOnTakeRecorderTakeNumberChanged_Parms), Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakesCoreBlueprintLibrary);
	UClass* Z_Construct_UClass_UTakesCoreBlueprintLibrary_NoRegister()
	{
		return UTakesCoreBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakesCoreBlueprintLibrary_ComputeNextTakeNumber, "ComputeNextTakeNumber" }, // 394018783
		{ &Z_Construct_UFunction_UTakesCoreBlueprintLibrary_FindTakes, "FindTakes" }, // 723427085
		{ &Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderSlateChanged__DelegateSignature, "OnTakeRecorderSlateChanged__DelegateSignature" }, // 2384705429
		{ &Z_Construct_UDelegateFunction_UTakesCoreBlueprintLibrary_OnTakeRecorderTakeNumberChanged__DelegateSignature, "OnTakeRecorderTakeNumberChanged__DelegateSignature" }, // 4263612500
		{ &Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderSlateChanged, "SetOnTakeRecorderSlateChanged" }, // 2724358744
		{ &Z_Construct_UFunction_UTakesCoreBlueprintLibrary_SetOnTakeRecorderTakeNumberChanged, "SetOnTakeRecorderTakeNumberChanged" }, // 620723354
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TakesCoreBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TakesCoreBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakesCoreBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics::ClassParams = {
		&UTakesCoreBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakesCoreBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UTakesCoreBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakesCoreBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UTakesCoreBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakesCoreBlueprintLibrary.OuterSingleton;
	}
	template<> TAKESCORE_API UClass* StaticClass<UTakesCoreBlueprintLibrary>()
	{
		return UTakesCoreBlueprintLibrary::StaticClass();
	}
	UTakesCoreBlueprintLibrary::UTakesCoreBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakesCoreBlueprintLibrary);
	UTakesCoreBlueprintLibrary::~UTakesCoreBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakesCoreBlueprintLibrary, UTakesCoreBlueprintLibrary::StaticClass, TEXT("UTakesCoreBlueprintLibrary"), &Z_Registration_Info_UClass_UTakesCoreBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakesCoreBlueprintLibrary), 2693509154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_2745348979(TEXT("/Script/TakesCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakesCoreBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
