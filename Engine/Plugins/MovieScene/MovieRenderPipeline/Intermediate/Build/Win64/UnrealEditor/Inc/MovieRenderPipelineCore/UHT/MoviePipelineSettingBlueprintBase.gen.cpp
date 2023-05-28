// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineSettingBlueprintBase.h"
#include "MovieRenderPipelineDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineSettingBlueprintBase() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineFormatArgs();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineSetting_BlueprintBase::execReceiveGetFormatArguments)
	{
		P_GET_STRUCT_REF(FMoviePipelineFormatArgs,Z_Param_Out_InOutFormatArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMoviePipelineFormatArgs*)Z_Param__Result=P_THIS->ReceiveGetFormatArguments_Implementation(Z_Param_Out_InOutFormatArgs);
		P_NATIVE_END;
	}
	struct MoviePipelineSetting_BlueprintBase_eventReceiveGetFooterText_Parms
	{
		UMoviePipelineExecutorJob* InJob;
		FText ReturnValue;
	};
	struct MoviePipelineSetting_BlueprintBase_eventReceiveGetFormatArguments_Parms
	{
		FMoviePipelineFormatArgs InOutFormatArgs;
		FMoviePipelineFormatArgs ReturnValue;
	};
	struct MoviePipelineSetting_BlueprintBase_eventReceiveSetupForPipelineImpl_Parms
	{
		UMoviePipeline* InPipeline;
	};
	struct MoviePipelineSetting_BlueprintBase_eventReceiveTeardownForPipelineImpl_Parms
	{
		UMoviePipeline* InPipeline;
	};
	static FName NAME_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame = FName(TEXT("OnEngineTickBeginFrame"));
	void UMoviePipelineSetting_BlueprintBase::OnEngineTickBeginFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame),NULL);
	}
#if WITH_EDITOR
	static FName NAME_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText = FName(TEXT("ReceiveGetFooterText"));
	FText UMoviePipelineSetting_BlueprintBase::ReceiveGetFooterText(UMoviePipelineExecutorJob* InJob) const
	{
		MoviePipelineSetting_BlueprintBase_eventReceiveGetFooterText_Parms Parms;
		Parms.InJob=InJob;
		const_cast<UMoviePipelineSetting_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText),&Parms);
		return Parms.ReturnValue;
	}
#endif // WITH_EDITOR
	static FName NAME_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments = FName(TEXT("ReceiveGetFormatArguments"));
	FMoviePipelineFormatArgs UMoviePipelineSetting_BlueprintBase::ReceiveGetFormatArguments(FMoviePipelineFormatArgs& InOutFormatArgs) const
	{
		MoviePipelineSetting_BlueprintBase_eventReceiveGetFormatArguments_Parms Parms;
		Parms.InOutFormatArgs=InOutFormatArgs;
		const_cast<UMoviePipelineSetting_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments),&Parms);
		InOutFormatArgs=Parms.InOutFormatArgs;
		return Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl = FName(TEXT("ReceiveSetupForPipelineImpl"));
	void UMoviePipelineSetting_BlueprintBase::ReceiveSetupForPipelineImpl(UMoviePipeline* InPipeline)
	{
		MoviePipelineSetting_BlueprintBase_eventReceiveSetupForPipelineImpl_Parms Parms;
		Parms.InPipeline=InPipeline;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl),&Parms);
	}
	static FName NAME_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl = FName(TEXT("ReceiveTeardownForPipelineImpl"));
	void UMoviePipelineSetting_BlueprintBase::ReceiveTeardownForPipelineImpl(UMoviePipeline* InPipeline)
	{
		MoviePipelineSetting_BlueprintBase_eventReceiveTeardownForPipelineImpl_Parms Parms;
		Parms.InPipeline=InPipeline;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl),&Parms);
	}
	void UMoviePipelineSetting_BlueprintBase::StaticRegisterNativesUMoviePipelineSetting_BlueprintBase()
	{
		UClass* Class = UMoviePipelineSetting_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveGetFormatArguments", &UMoviePipelineSetting_BlueprintBase::execReceiveGetFormatArguments },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Tick\n" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
		{ "ToolTip", "Tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase, nullptr, "OnEngineTickBeginFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_BlueprintBase_eventReceiveGetFooterText_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_BlueprintBase_eventReceiveGetFooterText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::NewProp_InJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "GetFooterText" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase, nullptr, "ReceiveGetFooterText", nullptr, nullptr, sizeof(MoviePipelineSetting_BlueprintBase_eventReceiveGetFooterText_Parms), Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x68020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutFormatArgs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::NewProp_InOutFormatArgs = { "InOutFormatArgs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_BlueprintBase_eventReceiveGetFormatArguments_Parms, InOutFormatArgs), Z_Construct_UScriptStruct_FMoviePipelineFormatArgs, METADATA_PARAMS(nullptr, 0) }; // 335077819
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_BlueprintBase_eventReceiveGetFormatArguments_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoviePipelineFormatArgs, METADATA_PARAMS(nullptr, 0) }; // 335077819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::NewProp_InOutFormatArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "GetFormatArgumentsAndMetadata" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase, nullptr, "ReceiveGetFormatArguments", nullptr, nullptr, sizeof(MoviePipelineSetting_BlueprintBase_eventReceiveGetFormatArguments_Parms), Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::NewProp_InPipeline = { "InPipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_BlueprintBase_eventReceiveSetupForPipelineImpl_Parms, InPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::NewProp_InPipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "SetupForPipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase, nullptr, "ReceiveSetupForPipelineImpl", nullptr, nullptr, sizeof(MoviePipelineSetting_BlueprintBase_eventReceiveSetupForPipelineImpl_Parms), Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::NewProp_InPipeline = { "InPipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineSetting_BlueprintBase_eventReceiveTeardownForPipelineImpl_Parms, InPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::NewProp_InPipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "TeardownForPipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase, nullptr, "ReceiveTeardownForPipelineImpl", nullptr, nullptr, sizeof(MoviePipelineSetting_BlueprintBase_eventReceiveTeardownForPipelineImpl_Parms), Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineSetting_BlueprintBase);
	UClass* Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_NoRegister()
	{
		return UMoviePipelineSetting_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CategoryText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidOnPrimary_MetaData[];
#endif
		static void NewProp_bIsValidOnPrimary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidOnPrimary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidOnShots_MetaData[];
#endif
		static void NewProp_bIsValidOnShots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidOnShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeDisabled_MetaData[];
#endif
		static void NewProp_bCanBeDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeDisabled;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidOnMaster_MetaData[];
#endif
		static void NewProp_bIsValidOnMaster_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidOnMaster;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame, "OnEngineTickBeginFrame" }, // 4051452362
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFooterText, "ReceiveGetFooterText" }, // 263787064
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments, "ReceiveGetFormatArguments" }, // 283438756
		{ &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl, "ReceiveSetupForPipelineImpl" }, // 3227943720
		{ &Z_Construct_UFunction_UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl, "ReceiveTeardownForPipelineImpl" }, // 3567081081
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A base class for all Movie Render Pipeline settings which can be implemented in Blueprints. This features\n* a slightly different API than the regular UMoviePipelineSetting to make the Blueprint integration nicer\n* without breaking the C++ API backwards compatibility.\n*/" },
		{ "IncludePath", "MoviePipelineSettingBlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
		{ "ToolTip", "A base class for all Movie Render Pipeline settings which can be implemented in Blueprints. This features\na slightly different API than the regular UMoviePipelineSetting to make the Blueprint integration nicer\nwithout breaking the C++ API backwards compatibility." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_CategoryText_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_CategoryText = { "CategoryText", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineSetting_BlueprintBase, CategoryText), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_CategoryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_CategoryText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnPrimary_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnPrimary_SetBit(void* Obj)
	{
		((UMoviePipelineSetting_BlueprintBase*)Obj)->bIsValidOnPrimary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnPrimary = { "bIsValidOnPrimary", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineSetting_BlueprintBase), &Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnPrimary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnPrimary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnPrimary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnShots_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnShots_SetBit(void* Obj)
	{
		((UMoviePipelineSetting_BlueprintBase*)Obj)->bIsValidOnShots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnShots = { "bIsValidOnShots", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineSetting_BlueprintBase), &Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnShots_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnShots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bCanBeDisabled_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bCanBeDisabled_SetBit(void* Obj)
	{
		((UMoviePipelineSetting_BlueprintBase*)Obj)->bCanBeDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bCanBeDisabled = { "bCanBeDisabled", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineSetting_BlueprintBase), &Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bCanBeDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bCanBeDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bCanBeDisabled_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnMaster_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineSettingBlueprintBase.h" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnMaster_SetBit(void* Obj)
	{
		((UMoviePipelineSetting_BlueprintBase*)Obj)->bIsValidOnMaster_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnMaster = { "bIsValidOnMaster", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineSetting_BlueprintBase), &Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnMaster_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnMaster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnMaster_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_CategoryText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnPrimary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bCanBeDisabled,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::NewProp_bIsValidOnMaster,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineSetting_BlueprintBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::ClassParams = {
		&UMoviePipelineSetting_BlueprintBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineSetting_BlueprintBase>()
	{
		return UMoviePipelineSetting_BlueprintBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineSetting_BlueprintBase);
	UMoviePipelineSetting_BlueprintBase::~UMoviePipelineSetting_BlueprintBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineSetting_BlueprintBase, UMoviePipelineSetting_BlueprintBase::StaticClass, TEXT("UMoviePipelineSetting_BlueprintBase"), &Z_Registration_Info_UClass_UMoviePipelineSetting_BlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineSetting_BlueprintBase), 2693849268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_1072182051(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineSettingBlueprintBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
