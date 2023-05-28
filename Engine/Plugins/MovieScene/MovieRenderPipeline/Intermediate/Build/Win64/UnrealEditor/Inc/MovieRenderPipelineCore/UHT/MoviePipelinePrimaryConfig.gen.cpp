// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelinePrimaryConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelinePrimaryConfig() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineConfigBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelinePrimaryConfig::execGetEffectiveFrameRate)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetEffectiveFrameRate(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelinePrimaryConfig::execGetAllSettings)
	{
		P_GET_UBOOL(Z_Param_bIncludeDisabledSettings);
		P_GET_UBOOL(Z_Param_bIncludeTransientSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineSetting*>*)Z_Param__Result=P_THIS->GetAllSettings(Z_Param_bIncludeDisabledSettings,Z_Param_bIncludeTransientSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelinePrimaryConfig::execGetTransientSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineSetting*>*)Z_Param__Result=P_THIS->GetTransientSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelinePrimaryConfig::execInitializeTransientSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTransientSettings();
		P_NATIVE_END;
	}
	void UMoviePipelinePrimaryConfig::StaticRegisterNativesUMoviePipelinePrimaryConfig()
	{
		UClass* Class = UMoviePipelinePrimaryConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllSettings", &UMoviePipelinePrimaryConfig::execGetAllSettings },
			{ "GetEffectiveFrameRate", &UMoviePipelinePrimaryConfig::execGetEffectiveFrameRate },
			{ "GetTransientSettings", &UMoviePipelinePrimaryConfig::execGetTransientSettings },
			{ "InitializeTransientSettings", &UMoviePipelinePrimaryConfig::execInitializeTransientSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics
	{
		struct MoviePipelinePrimaryConfig_eventGetAllSettings_Parms
		{
			bool bIncludeDisabledSettings;
			bool bIncludeTransientSettings;
			TArray<UMoviePipelineSetting*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeDisabledSettings_MetaData[];
#endif
		static void NewProp_bIncludeDisabledSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDisabledSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeTransientSettings_MetaData[];
#endif
		static void NewProp_bIncludeTransientSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeTransientSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeDisabledSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeDisabledSettings_SetBit(void* Obj)
	{
		((MoviePipelinePrimaryConfig_eventGetAllSettings_Parms*)Obj)->bIncludeDisabledSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeDisabledSettings = { "bIncludeDisabledSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelinePrimaryConfig_eventGetAllSettings_Parms), &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeDisabledSettings_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeDisabledSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeDisabledSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeTransientSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeTransientSettings_SetBit(void* Obj)
	{
		((MoviePipelinePrimaryConfig_eventGetAllSettings_Parms*)Obj)->bIncludeTransientSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeTransientSettings = { "bIncludeTransientSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelinePrimaryConfig_eventGetAllSettings_Parms), &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeTransientSettings_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeTransientSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeTransientSettings_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelinePrimaryConfig_eventGetAllSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeDisabledSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_bIncludeTransientSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "CPP_Default_bIncludeDisabledSettings", "false" },
		{ "CPP_Default_bIncludeTransientSettings", "false" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePrimaryConfig, nullptr, "GetAllSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::MoviePipelinePrimaryConfig_eventGetAllSettings_Parms), Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MoviePipelinePrimaryConfig_eventGetEffectiveFrameRate_Parms
		{
			const ULevelSequence* InSequence;
			FFrameRate ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelinePrimaryConfig_eventGetEffectiveFrameRate_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelinePrimaryConfig_eventGetEffectiveFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Returns the frame rate override from the Primary Configuration (if any) or the Sequence frame rate if no override is specified.\n\x09* This should be treated as the actual output framerate of the overall Pipeline.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
		{ "ToolTip", "Returns the frame rate override from the Primary Configuration (if any) or the Sequence frame rate if no override is specified.\nThis should be treated as the actual output framerate of the overall Pipeline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePrimaryConfig, nullptr, "GetEffectiveFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::MoviePipelinePrimaryConfig_eventGetEffectiveFrameRate_Parms), Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics
	{
		struct MoviePipelinePrimaryConfig_eventGetTransientSettings_Parms
		{
			TArray<UMoviePipelineSetting*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelinePrimaryConfig_eventGetTransientSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePrimaryConfig, nullptr, "GetTransientSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::MoviePipelinePrimaryConfig_eventGetTransientSettings_Parms), Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Initializes a single instance of every setting so that even non-user-configured settings have a chance to apply their default values. Does nothing if they're already instanced for this configuration. */" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
		{ "ToolTip", "Initializes a single instance of every setting so that even non-user-configured settings have a chance to apply their default values. Does nothing if they're already instanced for this configuration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePrimaryConfig, nullptr, "InitializeTransientSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelinePrimaryConfig);
	UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister()
	{
		return UMoviePipelinePrimaryConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerShotConfigMapping_ValueProp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerShotConfigMapping_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerShotConfigMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerShotConfigMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerShotConfigMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSetting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputSetting;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransientSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransientSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetAllSettings, "GetAllSettings" }, // 3321234350
		{ &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetEffectiveFrameRate, "GetEffectiveFrameRate" }, // 989885330
		{ &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_GetTransientSettings, "GetTransientSettings" }, // 169980851
		{ &Z_Construct_UFunction_UMoviePipelinePrimaryConfig_InitializeTransientSettings, "InitializeTransientSettings" }, // 394286524
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This class describes the main configuration for a Movie Render Pipeline.\n* Only settings that apply to the entire output should be stored here,\n* anything that is changed on a per-shot basis should be stored inside of \n* UMovieRenderShotConfig instead.\n*\n* THIS CLASS SHOULD BE IMMUTABLE ONCE PASSED TO THE PIPELINE FOR PROCESSING.\n* (Otherwise you will be modifying the instance that exists in the UI)\n*/" },
		{ "IncludePath", "MoviePipelinePrimaryConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
		{ "ToolTip", "This class describes the main configuration for a Movie Render Pipeline.\nOnly settings that apply to the entire output should be stored here,\nanything that is changed on a per-shot basis should be stored inside of\nUMovieRenderShotConfig instead.\n\nTHIS CLASS SHOULD BE IMMUTABLE ONCE PASSED TO THE PIPELINE FOR PROCESSING.\n(Otherwise you will be modifying the instance that exists in the UI)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_ValueProp_MetaData[] = {
		{ "Comment", "/** A mapping of Shot Name -> Shot Config to use for rendering specific shots with specific configs. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
		{ "ToolTip", "A mapping of Shot Name -> Shot Config to use for rendering specific shots with specific configs." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_ValueProp = { "PerShotConfigMapping", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_ValueProp_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_Key_KeyProp = { "PerShotConfigMapping_Key", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_MetaData[] = {
		{ "Comment", "/** A mapping of Shot Name -> Shot Config to use for rendering specific shots with specific configs. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
		{ "ToolTip", "A mapping of Shot Name -> Shot Config to use for rendering specific shots with specific configs." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping = { "PerShotConfigMapping", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePrimaryConfig, PerShotConfigMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_OutputSetting_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_OutputSetting = { "OutputSetting", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePrimaryConfig, OutputSetting), Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_OutputSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_OutputSetting_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_TransientSettings_Inner = { "TransientSettings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_TransientSettings_MetaData[] = {
		{ "Comment", "/** An array of settings that are available in the engine and have not been edited by the user. */" },
		{ "ModuleRelativePath", "Public/MoviePipelinePrimaryConfig.h" },
		{ "ToolTip", "An array of settings that are available in the engine and have not been edited by the user." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_TransientSettings = { "TransientSettings", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePrimaryConfig, TransientSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_TransientSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_TransientSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_PerShotConfigMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_OutputSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_TransientSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::NewProp_TransientSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelinePrimaryConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::ClassParams = {
		&UMoviePipelinePrimaryConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.OuterSingleton, Z_Construct_UClass_UMoviePipelinePrimaryConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelinePrimaryConfig>()
	{
		return UMoviePipelinePrimaryConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelinePrimaryConfig);
	UMoviePipelinePrimaryConfig::~UMoviePipelinePrimaryConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePrimaryConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePrimaryConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelinePrimaryConfig, UMoviePipelinePrimaryConfig::StaticClass, TEXT("UMoviePipelinePrimaryConfig"), &Z_Registration_Info_UClass_UMoviePipelinePrimaryConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelinePrimaryConfig), 2231508987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePrimaryConfig_h_3321995713(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePrimaryConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePrimaryConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
