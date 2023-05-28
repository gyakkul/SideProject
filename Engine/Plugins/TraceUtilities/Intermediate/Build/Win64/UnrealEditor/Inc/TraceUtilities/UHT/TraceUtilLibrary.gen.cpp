// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraceUtilLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceUtilLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TRACEUTILITIES_API UClass* Z_Construct_UClass_UTraceUtilLibrary();
	TRACEUTILITIES_API UClass* Z_Construct_UClass_UTraceUtilLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TraceUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UTraceUtilLibrary::execTraceMarkRegionEnd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTraceUtilLibrary::TraceMarkRegionEnd(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execTraceMarkRegionStart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTraceUtilLibrary::TraceMarkRegionStart(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execTraceBookmark)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTraceUtilLibrary::TraceBookmark(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execGetAllChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UTraceUtilLibrary::GetAllChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execGetEnabledChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UTraceUtilLibrary::GetEnabledChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execIsChannelEnabled)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtilLibrary::IsChannelEnabled(Z_Param_ChannelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execToggleChannel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ChannelName);
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtilLibrary::ToggleChannel(Z_Param_ChannelName,Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execIsTracing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtilLibrary::IsTracing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execResumeTracing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtilLibrary::ResumeTracing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execPauseTracing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtilLibrary::PauseTracing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execStopTracing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtilLibrary::StopTracing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execStartTraceSendTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Channels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtilLibrary::StartTraceSendTo(Z_Param_Target,Z_Param_Out_Channels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtilLibrary::execStartTraceToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Channels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtilLibrary::StartTraceToFile(Z_Param_FileName,Z_Param_Out_Channels);
		P_NATIVE_END;
	}
	void UTraceUtilLibrary::StaticRegisterNativesUTraceUtilLibrary()
	{
		UClass* Class = UTraceUtilLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllChannels", &UTraceUtilLibrary::execGetAllChannels },
			{ "GetEnabledChannels", &UTraceUtilLibrary::execGetEnabledChannels },
			{ "IsChannelEnabled", &UTraceUtilLibrary::execIsChannelEnabled },
			{ "IsTracing", &UTraceUtilLibrary::execIsTracing },
			{ "PauseTracing", &UTraceUtilLibrary::execPauseTracing },
			{ "ResumeTracing", &UTraceUtilLibrary::execResumeTracing },
			{ "StartTraceSendTo", &UTraceUtilLibrary::execStartTraceSendTo },
			{ "StartTraceToFile", &UTraceUtilLibrary::execStartTraceToFile },
			{ "StopTracing", &UTraceUtilLibrary::execStopTracing },
			{ "ToggleChannel", &UTraceUtilLibrary::execToggleChannel },
			{ "TraceBookmark", &UTraceUtilLibrary::execTraceBookmark },
			{ "TraceMarkRegionEnd", &UTraceUtilLibrary::execTraceMarkRegionEnd },
			{ "TraceMarkRegionStart", &UTraceUtilLibrary::execTraceMarkRegionStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics
	{
		struct TraceUtilLibrary_eventGetAllChannels_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventGetAllChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "GetAllChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::TraceUtilLibrary_eventGetAllChannels_Parms), Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics
	{
		struct TraceUtilLibrary_eventGetEnabledChannels_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventGetEnabledChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "GetEnabledChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::TraceUtilLibrary_eventGetEnabledChannels_Parms), Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics
	{
		struct TraceUtilLibrary_eventIsChannelEnabled_Parms
		{
			FString ChannelName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ChannelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventIsChannelEnabled_Parms, ChannelName), METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ChannelName_MetaData)) };
	void Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventIsChannelEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventIsChannelEnabled_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "IsChannelEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::TraceUtilLibrary_eventIsChannelEnabled_Parms), Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics
	{
		struct TraceUtilLibrary_eventIsTracing_Parms
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
	void Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventIsTracing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventIsTracing_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "IsTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::TraceUtilLibrary_eventIsTracing_Parms), Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_IsTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics
	{
		struct TraceUtilLibrary_eventPauseTracing_Parms
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
	void Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventPauseTracing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventPauseTracing_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "PauseTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::TraceUtilLibrary_eventPauseTracing_Parms), Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics
	{
		struct TraceUtilLibrary_eventResumeTracing_Parms
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
	void Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventResumeTracing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventResumeTracing_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "ResumeTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::TraceUtilLibrary_eventResumeTracing_Parms), Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics
	{
		struct TraceUtilLibrary_eventStartTraceSendTo_Parms
		{
			FString Target;
			TArray<FString> Channels;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Channels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventStartTraceSendTo_Parms, Target), METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Channels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventStartTraceSendTo_Parms, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Channels_MetaData)) };
	void Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventStartTraceSendTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventStartTraceSendTo_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Channels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_Channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "StartTraceSendTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::TraceUtilLibrary_eventStartTraceSendTo_Parms), Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics
	{
		struct TraceUtilLibrary_eventStartTraceToFile_Parms
		{
			FString FileName;
			TArray<FString> Channels;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Channels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventStartTraceToFile_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_Channels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventStartTraceToFile_Parms, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_Channels_MetaData)) };
	void Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventStartTraceToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventStartTraceToFile_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_Channels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_Channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "StartTraceToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::TraceUtilLibrary_eventStartTraceToFile_Parms), Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics
	{
		struct TraceUtilLibrary_eventStopTracing_Parms
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
	void Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventStopTracing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventStopTracing_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "StopTracing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::TraceUtilLibrary_eventStopTracing_Parms), Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_StopTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics
	{
		struct TraceUtilLibrary_eventToggleChannel_Parms
		{
			FString ChannelName;
			bool enabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChannelName;
		static void NewProp_enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ChannelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventToggleChannel_Parms, ChannelName), METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ChannelName_MetaData)) };
	void Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventToggleChannel_Parms*)Obj)->enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventToggleChannel_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtilLibrary_eventToggleChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtilLibrary_eventToggleChannel_Parms), &Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "ToggleChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::TraceUtilLibrary_eventToggleChannel_Parms), Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics
	{
		struct TraceUtilLibrary_eventTraceBookmark_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventTraceBookmark_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "TraceBookmark", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::TraceUtilLibrary_eventTraceBookmark_Parms), Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics
	{
		struct TraceUtilLibrary_eventTraceMarkRegionEnd_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventTraceMarkRegionEnd_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "Comment", "/**\n\x09 * Traces a \"RegionEnd:Name\" bookmark, where Name is defined through the Name parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
		{ "ToolTip", "Traces a \"RegionEnd:Name\" bookmark, where Name is defined through the Name parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "TraceMarkRegionEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::TraceUtilLibrary_eventTraceMarkRegionEnd_Parms), Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics
	{
		struct TraceUtilLibrary_eventTraceMarkRegionStart_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtilLibrary_eventTraceMarkRegionStart_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf | Insights Trace" },
		{ "Comment", "/**\n     * Traces a \"RegionStart:Name\" bookmark, where Name is defined through the Name parameter.\n     */" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
		{ "ToolTip", "Traces a \"RegionStart:Name\" bookmark, where Name is defined through the Name parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtilLibrary, nullptr, "TraceMarkRegionStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::TraceUtilLibrary_eventTraceMarkRegionStart_Parms), Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceUtilLibrary);
	UClass* Z_Construct_UClass_UTraceUtilLibrary_NoRegister()
	{
		return UTraceUtilLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTraceUtilLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTraceUtilLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TraceUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTraceUtilLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels, "GetAllChannels" }, // 3075347412
		{ &Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels, "GetEnabledChannels" }, // 1293358495
		{ &Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled, "IsChannelEnabled" }, // 3000444098
		{ &Z_Construct_UFunction_UTraceUtilLibrary_IsTracing, "IsTracing" }, // 1202548764
		{ &Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing, "PauseTracing" }, // 2311825954
		{ &Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing, "ResumeTracing" }, // 1090233118
		{ &Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo, "StartTraceSendTo" }, // 4256739415
		{ &Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile, "StartTraceToFile" }, // 3117083946
		{ &Z_Construct_UFunction_UTraceUtilLibrary_StopTracing, "StopTracing" }, // 1342102273
		{ &Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel, "ToggleChannel" }, // 1798400058
		{ &Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark, "TraceBookmark" }, // 3324490058
		{ &Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd, "TraceMarkRegionEnd" }, // 2701867
		{ &Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart, "TraceMarkRegionStart" }, // 1530392511
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceUtilLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TraceUtilLibrary.h" },
		{ "ModuleRelativePath", "Public/TraceUtilLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTraceUtilLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceUtilLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceUtilLibrary_Statics::ClassParams = {
		&UTraceUtilLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTraceUtilLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceUtilLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTraceUtilLibrary()
	{
		if (!Z_Registration_Info_UClass_UTraceUtilLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceUtilLibrary.OuterSingleton, Z_Construct_UClass_UTraceUtilLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTraceUtilLibrary.OuterSingleton;
	}
	template<> TRACEUTILITIES_API UClass* StaticClass<UTraceUtilLibrary>()
	{
		return UTraceUtilLibrary::StaticClass();
	}
	UTraceUtilLibrary::UTraceUtilLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceUtilLibrary);
	UTraceUtilLibrary::~UTraceUtilLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTraceUtilLibrary, UTraceUtilLibrary::StaticClass, TEXT("UTraceUtilLibrary"), &Z_Registration_Info_UClass_UTraceUtilLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceUtilLibrary), 245674014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_1284801657(TEXT("/Script/TraceUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
