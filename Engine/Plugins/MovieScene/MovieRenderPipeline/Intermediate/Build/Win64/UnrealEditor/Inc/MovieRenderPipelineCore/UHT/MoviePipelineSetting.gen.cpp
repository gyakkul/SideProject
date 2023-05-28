// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineSetting() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineSetting::execSetIsEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsEnabled(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineSetting::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineSetting::execBuildNewProcessCommandLineArgs)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InOutUnrealURLParams);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InOutCommandLineArgs);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InOutDeviceProfileCvars);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InOutExecCmds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildNewProcessCommandLineArgs(Z_Param_Out_InOutUnrealURLParams,Z_Param_Out_InOutCommandLineArgs,Z_Param_Out_InOutDeviceProfileCvars,Z_Param_Out_InOutExecCmds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineSetting::execBuildNewProcessCommandLine)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InOutUnrealURLParams);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InOutCommandLineArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildNewProcessCommandLine(Z_Param_Out_InOutUnrealURLParams,Z_Param_Out_InOutCommandLineArgs);
		P_NATIVE_END;
	}
	void UMoviePipelineSetting::StaticRegisterNativesUMoviePipelineSetting()
	{
		UClass* Class = UMoviePipelineSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildNewProcessCommandLine", &UMoviePipelineSetting::execBuildNewProcessCommandLine },
			{ "BuildNewProcessCommandLineArgs", &UMoviePipelineSetting::execBuildNewProcessCommandLineArgs },
			{ "IsEnabled", &UMoviePipelineSetting::execIsEnabled },
			{ "SetIsEnabled", &UMoviePipelineSetting::execSetIsEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics
	{
		struct MoviePipelineSetting_eventBuildNewProcessCommandLine_Parms
		{
			FString InOutUnrealURLParams;
			FString InOutCommandLineArgs;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOutUnrealURLParams;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOutCommandLineArgs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::NewProp_InOutUnrealURLParams = { "InOutUnrealURLParams", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_eventBuildNewProcessCommandLine_Parms, InOutUnrealURLParams), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::NewProp_InOutCommandLineArgs = { "InOutCommandLineArgs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_eventBuildNewProcessCommandLine_Parms, InOutCommandLineArgs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::NewProp_InOutUnrealURLParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::NewProp_InOutCommandLineArgs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting, nullptr, "BuildNewProcessCommandLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::MoviePipelineSetting_eventBuildNewProcessCommandLine_Parms), Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics
	{
		struct MoviePipelineSetting_eventBuildNewProcessCommandLineArgs_Parms
		{
			TArray<FString> InOutUnrealURLParams;
			TArray<FString> InOutCommandLineArgs;
			TArray<FString> InOutDeviceProfileCvars;
			TArray<FString> InOutExecCmds;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOutUnrealURLParams_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutUnrealURLParams;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOutCommandLineArgs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutCommandLineArgs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOutDeviceProfileCvars_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutDeviceProfileCvars;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOutExecCmds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutExecCmds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutUnrealURLParams_Inner = { "InOutUnrealURLParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutUnrealURLParams = { "InOutUnrealURLParams", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_eventBuildNewProcessCommandLineArgs_Parms, InOutUnrealURLParams), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutCommandLineArgs_Inner = { "InOutCommandLineArgs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutCommandLineArgs = { "InOutCommandLineArgs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_eventBuildNewProcessCommandLineArgs_Parms, InOutCommandLineArgs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutDeviceProfileCvars_Inner = { "InOutDeviceProfileCvars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutDeviceProfileCvars = { "InOutDeviceProfileCvars", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_eventBuildNewProcessCommandLineArgs_Parms, InOutDeviceProfileCvars), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutExecCmds_Inner = { "InOutExecCmds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutExecCmds = { "InOutExecCmds", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_eventBuildNewProcessCommandLineArgs_Parms, InOutExecCmds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutUnrealURLParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutUnrealURLParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutCommandLineArgs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutCommandLineArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutDeviceProfileCvars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutDeviceProfileCvars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutExecCmds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::NewProp_InOutExecCmds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting, nullptr, "BuildNewProcessCommandLineArgs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::MoviePipelineSetting_eventBuildNewProcessCommandLineArgs_Parms), Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics
	{
		struct MoviePipelineSetting_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineSetting_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineSetting_eventIsEnabled_Parms), &Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Is this setting enabled by the user in the UI? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
		{ "ToolTip", "Is this setting enabled by the user in the UI?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::MoviePipelineSetting_eventIsEnabled_Parms), Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics
	{
		struct MoviePipelineSetting_eventSetIsEnabled_Parms
		{
			bool bInEnabled;
		};
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((MoviePipelineSetting_eventSetIsEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineSetting_eventSetIsEnabled_Parms), &Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting, nullptr, "SetIsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::MoviePipelineSetting_eventSetIsEnabled_Parms), Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineSetting);
	UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister()
	{
		return UMoviePipelineSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLine, "BuildNewProcessCommandLine" }, // 1763207027
		{ &Z_Construct_UFunction_UMoviePipelineSetting_BuildNewProcessCommandLineArgs, "BuildNewProcessCommandLineArgs" }, // 722082840
		{ &Z_Construct_UFunction_UMoviePipelineSetting_IsEnabled, "IsEnabled" }, // 3066392607
		{ &Z_Construct_UFunction_UMoviePipelineSetting_SetIsEnabled, "SetIsEnabled" }, // 1031565910
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A base class for all Movie Render Pipeline settings.\n*/" },
		{ "IncludePath", "MoviePipelineSetting.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
		{ "ToolTip", "A base class for all Movie Render Pipeline settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline = { "CachedPipeline", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineSetting, CachedPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Is this setting currently enabled? Disabled settings are like they never existed. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
		{ "ToolTip", "Is this setting currently enabled? Disabled settings are like they never existed." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UMoviePipelineSetting*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineSetting), &Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineSetting_Statics::ClassParams = {
		&UMoviePipelineSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineSetting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineSetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineSetting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineSetting>()
	{
		return UMoviePipelineSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineSetting);
	UMoviePipelineSetting::~UMoviePipelineSetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineSetting, UMoviePipelineSetting::StaticClass, TEXT("UMoviePipelineSetting"), &Z_Registration_Info_UClass_UMoviePipelineSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineSetting), 3154394736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_536038562(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
