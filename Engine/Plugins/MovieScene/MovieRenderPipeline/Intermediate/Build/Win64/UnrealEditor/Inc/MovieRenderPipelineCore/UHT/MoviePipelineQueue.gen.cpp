// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineQueue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorShot();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineSidecarCamera;
class UScriptStruct* FMoviePipelineSidecarCamera::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineSidecarCamera.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineSidecarCamera.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineSidecarCamera"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineSidecarCamera.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineSidecarCamera>()
{
	return FMoviePipelineSidecarCamera::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineSidecarCamera>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_BindingId_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_BindingId = { "BindingId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSidecarCamera, BindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_BindingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_BindingId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSidecarCamera, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_BindingId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineSidecarCamera",
		sizeof(FMoviePipelineSidecarCamera),
		alignof(FMoviePipelineSidecarCamera),
		Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineSidecarCamera.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineSidecarCamera.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineSidecarCamera.InnerSingleton;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execGetCameraName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InCameraIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCameraName(Z_Param_InCameraIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execShouldRender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldRender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execGetShotOverridePresetOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineShotConfig**)Z_Param__Result=P_THIS->GetShotOverridePresetOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execGetShotOverrideConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineShotConfig**)Z_Param__Result=P_THIS->GetShotOverrideConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execSetShotOverridePresetOrigin)
	{
		P_GET_OBJECT(UMoviePipelineShotConfig,Z_Param_InPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShotOverridePresetOrigin(Z_Param_InPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execSetShotOverrideConfiguration)
	{
		P_GET_OBJECT(UMoviePipelineShotConfig,Z_Param_InPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShotOverrideConfiguration(Z_Param_InPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execAllocateNewShotOverrideConfig)
	{
		P_GET_OBJECT(UClass,Z_Param_InConfigType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineShotConfig**)Z_Param__Result=P_THIS->AllocateNewShotOverrideConfig(Z_Param_InConfigType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execGetStatusProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStatusProgress_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execSetStatusProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusProgress_Implementation(Z_Param_InProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execGetStatusMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStatusMessage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorShot::execSetStatusMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusMessage_Implementation(Z_Param_InStatus);
		P_NATIVE_END;
	}
	struct MoviePipelineExecutorShot_eventGetStatusMessage_Parms
	{
		FString ReturnValue;
	};
	struct MoviePipelineExecutorShot_eventGetStatusProgress_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		MoviePipelineExecutorShot_eventGetStatusProgress_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MoviePipelineExecutorShot_eventSetStatusMessage_Parms
	{
		FString InStatus;
	};
	struct MoviePipelineExecutorShot_eventSetStatusProgress_Parms
	{
		float InProgress;
	};
	static FName NAME_UMoviePipelineExecutorShot_GetStatusMessage = FName(TEXT("GetStatusMessage"));
	FString UMoviePipelineExecutorShot::GetStatusMessage() const
	{
		MoviePipelineExecutorShot_eventGetStatusMessage_Parms Parms;
		const_cast<UMoviePipelineExecutorShot*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorShot_GetStatusMessage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorShot_GetStatusProgress = FName(TEXT("GetStatusProgress"));
	float UMoviePipelineExecutorShot::GetStatusProgress() const
	{
		MoviePipelineExecutorShot_eventGetStatusProgress_Parms Parms;
		const_cast<UMoviePipelineExecutorShot*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorShot_GetStatusProgress),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorShot_SetStatusMessage = FName(TEXT("SetStatusMessage"));
	void UMoviePipelineExecutorShot::SetStatusMessage(const FString& InStatus)
	{
		MoviePipelineExecutorShot_eventSetStatusMessage_Parms Parms;
		Parms.InStatus=InStatus;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorShot_SetStatusMessage),&Parms);
	}
	static FName NAME_UMoviePipelineExecutorShot_SetStatusProgress = FName(TEXT("SetStatusProgress"));
	void UMoviePipelineExecutorShot::SetStatusProgress(const float InProgress)
	{
		MoviePipelineExecutorShot_eventSetStatusProgress_Parms Parms;
		Parms.InProgress=InProgress;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorShot_SetStatusProgress),&Parms);
	}
	void UMoviePipelineExecutorShot::StaticRegisterNativesUMoviePipelineExecutorShot()
	{
		UClass* Class = UMoviePipelineExecutorShot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllocateNewShotOverrideConfig", &UMoviePipelineExecutorShot::execAllocateNewShotOverrideConfig },
			{ "GetCameraName", &UMoviePipelineExecutorShot::execGetCameraName },
			{ "GetShotOverrideConfiguration", &UMoviePipelineExecutorShot::execGetShotOverrideConfiguration },
			{ "GetShotOverridePresetOrigin", &UMoviePipelineExecutorShot::execGetShotOverridePresetOrigin },
			{ "GetStatusMessage", &UMoviePipelineExecutorShot::execGetStatusMessage },
			{ "GetStatusProgress", &UMoviePipelineExecutorShot::execGetStatusProgress },
			{ "SetShotOverrideConfiguration", &UMoviePipelineExecutorShot::execSetShotOverrideConfiguration },
			{ "SetShotOverridePresetOrigin", &UMoviePipelineExecutorShot::execSetShotOverridePresetOrigin },
			{ "SetStatusMessage", &UMoviePipelineExecutorShot::execSetStatusMessage },
			{ "SetStatusProgress", &UMoviePipelineExecutorShot::execSetStatusProgress },
			{ "ShouldRender", &UMoviePipelineExecutorShot::execShouldRender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics
	{
		struct MoviePipelineExecutorShot_eventAllocateNewShotOverrideConfig_Parms
		{
			TSubclassOf<UMoviePipelineShotConfig>  InConfigType;
			UMoviePipelineShotConfig* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InConfigType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::NewProp_InConfigType = { "InConfigType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventAllocateNewShotOverrideConfig_Parms, InConfigType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventAllocateNewShotOverrideConfig_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::NewProp_InConfigType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "DeterminesOutputType", "InConfigType" },
		{ "InConfigType", "/Script/MovieRenderPipelineCore.MoviePipelineShotConfig" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "AllocateNewShotOverrideConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::MoviePipelineExecutorShot_eventAllocateNewShotOverrideConfig_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics
	{
		struct MoviePipelineExecutorShot_eventGetCameraName_Parms
		{
			int32 InCameraIndex;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InCameraIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::NewProp_InCameraIndex = { "InCameraIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventGetCameraName_Parms, InCameraIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventGetCameraName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::NewProp_InCameraIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "GetCameraName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::MoviePipelineExecutorShot_eventGetCameraName_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics
	{
		struct MoviePipelineExecutorShot_eventGetShotOverrideConfiguration_Parms
		{
			UMoviePipelineShotConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventGetShotOverrideConfiguration_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "GetShotOverrideConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::MoviePipelineExecutorShot_eventGetShotOverrideConfiguration_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics
	{
		struct MoviePipelineExecutorShot_eventGetShotOverridePresetOrigin_Parms
		{
			UMoviePipelineShotConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventGetShotOverridePresetOrigin_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "GetShotOverridePresetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::MoviePipelineExecutorShot_eventGetShotOverridePresetOrigin_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventGetStatusMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the current status message for this shot. May be an empty string.\n\x09*\n\x09* For C++ implementations override `virtual FString GetStatusMessage_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def get_status_message(self):\n\x09*\x09\x09return ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Get the current status message for this shot. May be an empty string.\n\nFor C++ implementations override `virtual FString GetStatusMessage_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def get_status_message(self):\n              return ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "GetStatusMessage", nullptr, nullptr, sizeof(MoviePipelineExecutorShot_eventGetStatusMessage_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventGetStatusProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the current progress as last set by SetStatusProgress. 0 by default.\n\x09*\n\x09* For C++ implementations override `virtual float GetStatusProgress_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def get_status_progress(self):\n\x09*\x09\x09return ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Get the current progress as last set by SetStatusProgress. 0 by default.\n\nFor C++ implementations override `virtual float GetStatusProgress_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def get_status_progress(self):\n              return ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "GetStatusProgress", nullptr, nullptr, sizeof(MoviePipelineExecutorShot_eventGetStatusProgress_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics
	{
		struct MoviePipelineExecutorShot_eventSetShotOverrideConfiguration_Parms
		{
			UMoviePipelineShotConfig* InPreset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventSetShotOverrideConfiguration_Parms, InPreset), Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::NewProp_InPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "SetShotOverrideConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::MoviePipelineExecutorShot_eventSetShotOverrideConfiguration_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics
	{
		struct MoviePipelineExecutorShot_eventSetShotOverridePresetOrigin_Parms
		{
			UMoviePipelineShotConfig* InPreset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventSetShotOverridePresetOrigin_Parms, InPreset), Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::NewProp_InPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "SetShotOverridePresetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::MoviePipelineExecutorShot_eventSetShotOverridePresetOrigin_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStatus_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::NewProp_InStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::NewProp_InStatus = { "InStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventSetStatusMessage_Parms, InStatus), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::NewProp_InStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::NewProp_InStatus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::NewProp_InStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Set the status of this shot to the given value. This will be shown on the UI if progress\n\x09* is set to a value less than zero. If progress is > 0 then the progress bar will be shown\n\x09* on the UI instead. Progress and Status Message are cosmetic.\n\x09*\n\x09* For C++ implementations override `virtual void SetStatusMessage_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def set_status_message(self, inStatus):\n\x09*\n\x09* @param InStatus\x09The status message you wish the executor to have.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Set the status of this shot to the given value. This will be shown on the UI if progress\nis set to a value less than zero. If progress is > 0 then the progress bar will be shown\non the UI instead. Progress and Status Message are cosmetic.\n\nFor C++ implementations override `virtual void SetStatusMessage_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def set_status_message(self, inStatus):\n\n@param InStatus       The status message you wish the executor to have." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "SetStatusMessage", nullptr, nullptr, sizeof(MoviePipelineExecutorShot_eventSetStatusMessage_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::NewProp_InProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::NewProp_InProgress = { "InProgress", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorShot_eventSetStatusProgress_Parms, InProgress), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::NewProp_InProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::NewProp_InProgress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::NewProp_InProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Set the progress of this shot to the given value. If a positive value is provided\n\x09* the UI will show the progress bar, while a negative value will make the UI show the\n\x09* status message instead. Progress and Status Message are cosmetic and dependent on the\n\x09* executor to update. Similar to the UMoviePipelineExecutor::SetStatusProgress function,\n\x09* but at a per-job level basis instead.\n\x09*\n\x09* For C++ implementations override `virtual void SetStatusProgress_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def set_status_progress(self, inStatus):\n\x09*\n\x09* @param InProgress\x09The progress (0-1 range) the executor should have.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Set the progress of this shot to the given value. If a positive value is provided\nthe UI will show the progress bar, while a negative value will make the UI show the\nstatus message instead. Progress and Status Message are cosmetic and dependent on the\nexecutor to update. Similar to the UMoviePipelineExecutor::SetStatusProgress function,\nbut at a per-job level basis instead.\n\nFor C++ implementations override `virtual void SetStatusProgress_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def set_status_progress(self, inStatus):\n\n@param InProgress     The progress (0-1 range) the executor should have." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "SetStatusProgress", nullptr, nullptr, sizeof(MoviePipelineExecutorShot_eventSetStatusProgress_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics
	{
		struct MoviePipelineExecutorShot_eventShouldRender_Parms
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
	void Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineExecutorShot_eventShouldRender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorShot_eventShouldRender_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Returns whether this should should be rendered */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Returns whether this should should be rendered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorShot, nullptr, "ShouldRender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::MoviePipelineExecutorShot_eventShouldRender_Parms), Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineExecutorShot);
	UClass* Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister()
	{
		return UMoviePipelineExecutorShot::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineExecutorShot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OuterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InnerName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SidecarCameras_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SidecarCameras_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SidecarCameras;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatusMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotOverrideConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShotOverrideConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotOverridePresetOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShotOverridePresetOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig, "AllocateNewShotOverrideConfig" }, // 2703100340
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetCameraName, "GetCameraName" }, // 1469011326
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverrideConfiguration, "GetShotOverrideConfiguration" }, // 3667902694
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetShotOverridePresetOrigin, "GetShotOverridePresetOrigin" }, // 2828193141
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusMessage, "GetStatusMessage" }, // 2412303704
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_GetStatusProgress, "GetStatusProgress" }, // 1195805862
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverrideConfiguration, "SetShotOverrideConfiguration" }, // 3097029093
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetShotOverridePresetOrigin, "SetShotOverridePresetOrigin" }, // 1726432281
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusMessage, "SetStatusMessage" }, // 2614492589
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_SetStatusProgress, "SetStatusProgress" }, // 2946457930
		{ &Z_Construct_UFunction_UMoviePipelineExecutorShot_ShouldRender, "ShouldRender" }, // 1338297043
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This class represents a segment of work within the Executor Job. This should be owned\n* by the UMoviePipelineExecutorJob and can be created before the movie pipeline starts to\n* configure some aspects about the segment (such as disabling it). When the movie pipeline\n* starts, it will use the already existing ones, or generate new ones as needed.\n*/" },
		{ "IncludePath", "MoviePipelineQueue.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "This class represents a segment of work within the Executor Job. This should be owned\nby the UMoviePipelineExecutorJob and can be created before the movie pipeline starts to\nconfigure some aspects about the segment (such as disabling it). When the movie pipeline\nstarts, it will use the already existing ones, or generate new ones as needed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Does the user want to render this shot? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Does the user want to render this shot?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UMoviePipelineExecutorShot*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineExecutorShot), &Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_OuterName_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** The name of the shot section that contains this shot. Can be empty. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "The name of the shot section that contains this shot. Can be empty." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_OuterName = { "OuterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorShot, OuterName), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_OuterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_OuterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_InnerName_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** The name of the camera cut section that this shot represents. Can be empty. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "The name of the camera cut section that this shot represents. Can be empty." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_InnerName = { "InnerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorShot, InnerName), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_InnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_InnerName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_SidecarCameras_Inner = { "SidecarCameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera, METADATA_PARAMS(nullptr, 0) }; // 2133171837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_SidecarCameras_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** List of cameras to render for this shot. Only used if the setting flag is set in the Camera setting. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "List of cameras to render for this shot. Only used if the setting flag is set in the Camera setting." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_SidecarCameras = { "SidecarCameras", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorShot, SidecarCameras), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_SidecarCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_SidecarCameras_MetaData)) }; // 2133171837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_Progress_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorShot, Progress), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_StatusMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_StatusMessage = { "StatusMessage", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorShot, StatusMessage), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_StatusMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_StatusMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverrideConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverrideConfig = { "ShotOverrideConfig", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorShot, ShotOverrideConfig), Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverrideConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverrideConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverridePresetOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverridePresetOrigin = { "ShotOverridePresetOrigin", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorShot, ShotOverridePresetOrigin), Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverridePresetOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverridePresetOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_OuterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_InnerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_SidecarCameras_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_SidecarCameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_StatusMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverrideConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::NewProp_ShotOverridePresetOrigin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineExecutorShot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::ClassParams = {
		&UMoviePipelineExecutorShot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineExecutorShot()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineExecutorShot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineExecutorShot.OuterSingleton, Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineExecutorShot.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineExecutorShot>()
	{
		return UMoviePipelineExecutorShot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineExecutorShot);
	UMoviePipelineExecutorShot::~UMoviePipelineExecutorShot() {}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetSequence)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequence(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetConfiguration)
	{
		P_GET_OBJECT(UMoviePipelinePrimaryConfig,Z_Param_InPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfiguration(Z_Param_InPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execGetConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelinePrimaryConfig**)Z_Param__Result=P_THIS->GetConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execGetPresetOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelinePrimaryConfig**)Z_Param__Result=P_THIS->GetPresetOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetPresetOrigin)
	{
		P_GET_OBJECT(UMoviePipelinePrimaryConfig,Z_Param_InPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPresetOrigin(Z_Param_InPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execOnDuplicated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDuplicated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetIsEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsEnabled_Implementation(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execIsConsumed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConsumed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetConsumed)
	{
		P_GET_UBOOL(Z_Param_bInConsumed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConsumed_Implementation(Z_Param_bInConsumed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execGetStatusProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStatusProgress_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetStatusProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusProgress_Implementation(Z_Param_InProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execGetStatusMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStatusMessage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetStatusMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusMessage_Implementation(Z_Param_InStatus);
		P_NATIVE_END;
	}
	struct MoviePipelineExecutorJob_eventGetStatusMessage_Parms
	{
		FString ReturnValue;
	};
	struct MoviePipelineExecutorJob_eventGetStatusProgress_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		MoviePipelineExecutorJob_eventGetStatusProgress_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MoviePipelineExecutorJob_eventIsConsumed_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		MoviePipelineExecutorJob_eventIsConsumed_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct MoviePipelineExecutorJob_eventIsEnabled_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		MoviePipelineExecutorJob_eventIsEnabled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct MoviePipelineExecutorJob_eventSetConsumed_Parms
	{
		bool bInConsumed;
	};
	struct MoviePipelineExecutorJob_eventSetIsEnabled_Parms
	{
		bool bInEnabled;
	};
	struct MoviePipelineExecutorJob_eventSetStatusMessage_Parms
	{
		FString InStatus;
	};
	struct MoviePipelineExecutorJob_eventSetStatusProgress_Parms
	{
		float InProgress;
	};
	static FName NAME_UMoviePipelineExecutorJob_GetStatusMessage = FName(TEXT("GetStatusMessage"));
	FString UMoviePipelineExecutorJob::GetStatusMessage() const
	{
		MoviePipelineExecutorJob_eventGetStatusMessage_Parms Parms;
		const_cast<UMoviePipelineExecutorJob*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_GetStatusMessage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorJob_GetStatusProgress = FName(TEXT("GetStatusProgress"));
	float UMoviePipelineExecutorJob::GetStatusProgress() const
	{
		MoviePipelineExecutorJob_eventGetStatusProgress_Parms Parms;
		const_cast<UMoviePipelineExecutorJob*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_GetStatusProgress),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorJob_IsConsumed = FName(TEXT("IsConsumed"));
	bool UMoviePipelineExecutorJob::IsConsumed() const
	{
		MoviePipelineExecutorJob_eventIsConsumed_Parms Parms;
		const_cast<UMoviePipelineExecutorJob*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_IsConsumed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorJob_IsEnabled = FName(TEXT("IsEnabled"));
	bool UMoviePipelineExecutorJob::IsEnabled() const
	{
		MoviePipelineExecutorJob_eventIsEnabled_Parms Parms;
		const_cast<UMoviePipelineExecutorJob*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_IsEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorJob_OnDuplicated = FName(TEXT("OnDuplicated"));
	void UMoviePipelineExecutorJob::OnDuplicated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_OnDuplicated),NULL);
	}
	static FName NAME_UMoviePipelineExecutorJob_SetConsumed = FName(TEXT("SetConsumed"));
	void UMoviePipelineExecutorJob::SetConsumed(bool bInConsumed)
	{
		MoviePipelineExecutorJob_eventSetConsumed_Parms Parms;
		Parms.bInConsumed=bInConsumed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_SetConsumed),&Parms);
	}
	static FName NAME_UMoviePipelineExecutorJob_SetIsEnabled = FName(TEXT("SetIsEnabled"));
	void UMoviePipelineExecutorJob::SetIsEnabled(bool bInEnabled)
	{
		MoviePipelineExecutorJob_eventSetIsEnabled_Parms Parms;
		Parms.bInEnabled=bInEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_SetIsEnabled),&Parms);
	}
	static FName NAME_UMoviePipelineExecutorJob_SetStatusMessage = FName(TEXT("SetStatusMessage"));
	void UMoviePipelineExecutorJob::SetStatusMessage(const FString& InStatus)
	{
		MoviePipelineExecutorJob_eventSetStatusMessage_Parms Parms;
		Parms.InStatus=InStatus;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_SetStatusMessage),&Parms);
	}
	static FName NAME_UMoviePipelineExecutorJob_SetStatusProgress = FName(TEXT("SetStatusProgress"));
	void UMoviePipelineExecutorJob::SetStatusProgress(const float InProgress)
	{
		MoviePipelineExecutorJob_eventSetStatusProgress_Parms Parms;
		Parms.InProgress=InProgress;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorJob_SetStatusProgress),&Parms);
	}
	void UMoviePipelineExecutorJob::StaticRegisterNativesUMoviePipelineExecutorJob()
	{
		UClass* Class = UMoviePipelineExecutorJob::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConfiguration", &UMoviePipelineExecutorJob::execGetConfiguration },
			{ "GetPresetOrigin", &UMoviePipelineExecutorJob::execGetPresetOrigin },
			{ "GetStatusMessage", &UMoviePipelineExecutorJob::execGetStatusMessage },
			{ "GetStatusProgress", &UMoviePipelineExecutorJob::execGetStatusProgress },
			{ "IsConsumed", &UMoviePipelineExecutorJob::execIsConsumed },
			{ "IsEnabled", &UMoviePipelineExecutorJob::execIsEnabled },
			{ "OnDuplicated", &UMoviePipelineExecutorJob::execOnDuplicated },
			{ "SetConfiguration", &UMoviePipelineExecutorJob::execSetConfiguration },
			{ "SetConsumed", &UMoviePipelineExecutorJob::execSetConsumed },
			{ "SetIsEnabled", &UMoviePipelineExecutorJob::execSetIsEnabled },
			{ "SetPresetOrigin", &UMoviePipelineExecutorJob::execSetPresetOrigin },
			{ "SetSequence", &UMoviePipelineExecutorJob::execSetSequence },
			{ "SetStatusMessage", &UMoviePipelineExecutorJob::execSetStatusMessage },
			{ "SetStatusProgress", &UMoviePipelineExecutorJob::execSetStatusProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics
	{
		struct MoviePipelineExecutorJob_eventGetConfiguration_Parms
		{
			UMoviePipelinePrimaryConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventGetConfiguration_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09 * Gets the configuration for the job. This configuration is either standalone (not associated with any preset), or\n\x09 * contains a copy of the preset origin plus any modifications made on top of it. If the preset that this\n\x09 * configuration was originally based on no longer exists, this configuration will still be valid.\n\x09 * @see GetPresetOrigin()\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Gets the configuration for the job. This configuration is either standalone (not associated with any preset), or\ncontains a copy of the preset origin plus any modifications made on top of it. If the preset that this\nconfiguration was originally based on no longer exists, this configuration will still be valid.\n@see GetPresetOrigin()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "GetConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::MoviePipelineExecutorJob_eventGetConfiguration_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics
	{
		struct MoviePipelineExecutorJob_eventGetPresetOrigin_Parms
		{
			UMoviePipelinePrimaryConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventGetPresetOrigin_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09 * Gets the preset for this job, but only if the preset has not been modified. If it has been modified, or the preset\n\x09 * no longer exists, returns nullptr.\n\x09 * @see GetConfiguration()\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Gets the preset for this job, but only if the preset has not been modified. If it has been modified, or the preset\nno longer exists, returns nullptr.\n@see GetConfiguration()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "GetPresetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::MoviePipelineExecutorJob_eventGetPresetOrigin_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventGetStatusMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the current status message for this job. May be an empty string.\n\x09*\n\x09* For C++ implementations override `virtual FString GetStatusMessage_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def get_status_message(self):\n\x09*\x09\x09return ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Get the current status message for this job. May be an empty string.\n\nFor C++ implementations override `virtual FString GetStatusMessage_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def get_status_message(self):\n              return ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "GetStatusMessage", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventGetStatusMessage_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventGetStatusProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the current progress as last set by SetStatusProgress. 0 by default.\n\x09*\n\x09* For C++ implementations override `virtual float GetStatusProgress_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def get_status_progress(self):\n\x09*\x09\x09return ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Get the current progress as last set by SetStatusProgress. 0 by default.\n\nFor C++ implementations override `virtual float GetStatusProgress_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def get_status_progress(self):\n              return ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "GetStatusProgress", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventGetStatusProgress_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineExecutorJob_eventIsConsumed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorJob_eventIsConsumed_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Gets whether or not the job has been marked as being consumed. A consumed job is not editable\n\x09* in the UI and should not be submitted for rendering as it is either already finished or\n\x09* already in progress.\n\x09*\n\x09* For C++ implementations override `virtual bool IsConsumed_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def is_consumed(self):\n\x09*\x09\x09return ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Gets whether or not the job has been marked as being consumed. A consumed job is not editable\nin the UI and should not be submitted for rendering as it is either already finished or\nalready in progress.\n\nFor C++ implementations override `virtual bool IsConsumed_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def is_consumed(self):\n              return ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "IsConsumed", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventIsConsumed_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineExecutorJob_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorJob_eventIsEnabled_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Gets whether or not the job has been marked as being enabled. \n\x09*\n\x09* For C++ implementations override `virtual bool IsEnabled_Implementation() const override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def is_enabled(self):\n\x09*\x09\x09return ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Gets whether or not the job has been marked as being enabled.\n\nFor C++ implementations override `virtual bool IsEnabled_Implementation() const override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def is_enabled(self):\n              return ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "IsEnabled", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventIsEnabled_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Should be called to clear status and user data after duplication so that jobs stay\n\x09* unique and don't pick up ids or other unwanted behavior from the pareant job.\n\x09*\n\x09* For C++ implementations override `virtual bool OnDuplicated_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def on_duplicated(self):\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Should be called to clear status and user data after duplication so that jobs stay\nunique and don't pick up ids or other unwanted behavior from the pareant job.\n\nFor C++ implementations override `virtual bool OnDuplicated_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def on_duplicated(self):" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "OnDuplicated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics
	{
		struct MoviePipelineExecutorJob_eventSetConfiguration_Parms
		{
			UMoviePipelinePrimaryConfig* InPreset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventSetConfiguration_Parms, InPreset), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::NewProp_InPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::MoviePipelineExecutorJob_eventSetConfiguration_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInConsumed_MetaData[];
#endif
		static void NewProp_bInConsumed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInConsumed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::NewProp_bInConsumed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::NewProp_bInConsumed_SetBit(void* Obj)
	{
		((MoviePipelineExecutorJob_eventSetConsumed_Parms*)Obj)->bInConsumed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::NewProp_bInConsumed = { "bInConsumed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorJob_eventSetConsumed_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::NewProp_bInConsumed_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::NewProp_bInConsumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::NewProp_bInConsumed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::NewProp_bInConsumed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Set the job to be consumed. A consumed job is disabled in the UI and should not be\n\x09* submitted for rendering again. This allows jobs to be added to a queue, the queue\n\x09* submitted to a remote farm (consume the jobs) and then more jobs to be added and\n\x09* the second submission to the farm won't re-submit the already in-progress jobs.\n\x09*\n\x09* Jobs can be unconsumed when the render finishes to re-enable editing.\n\x09*\n\x09* For C++ implementations override `virtual void SetConsumed_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def set_consumed(self, isConsumed):\n\x09*\n\x09* @param bInConsumed\x09True if the job should be consumed and disabled for editing in the UI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Set the job to be consumed. A consumed job is disabled in the UI and should not be\nsubmitted for rendering again. This allows jobs to be added to a queue, the queue\nsubmitted to a remote farm (consume the jobs) and then more jobs to be added and\nthe second submission to the farm won't re-submit the already in-progress jobs.\n\nJobs can be unconsumed when the render finishes to re-enable editing.\n\nFor C++ implementations override `virtual void SetConsumed_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def set_consumed(self, isConsumed):\n\n@param bInConsumed    True if the job should be consumed and disabled for editing in the UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetConsumed", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventSetConsumed_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInEnabled_MetaData[];
#endif
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::NewProp_bInEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((MoviePipelineExecutorJob_eventSetIsEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorJob_eventSetIsEnabled_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::NewProp_bInEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::NewProp_bInEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Set the job to be enabled/disabled. This is exposed to the user in the Queue UI\n\x09* so they can disable a job after loading a queue to skip trying to run it.\n\x09*\n\x09* For C++ implementations override `virtual void SetIsEnabled_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def set_is_enabled(self, isEnabled):\n\x09*\n\x09* @param bInEnabled\x09True if the job should be enabled and rendered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Set the job to be enabled/disabled. This is exposed to the user in the Queue UI\nso they can disable a job after loading a queue to skip trying to run it.\n\nFor C++ implementations override `virtual void SetIsEnabled_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def set_is_enabled(self, isEnabled):\n\n@param bInEnabled     True if the job should be enabled and rendered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetIsEnabled", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventSetIsEnabled_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics
	{
		struct MoviePipelineExecutorJob_eventSetPresetOrigin_Parms
		{
			UMoviePipelinePrimaryConfig* InPreset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventSetPresetOrigin_Parms, InPreset), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::NewProp_InPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetPresetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::MoviePipelineExecutorJob_eventSetPresetOrigin_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct MoviePipelineExecutorJob_eventSetSequence_Parms
		{
			FSoftObjectPath InSequence;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventSetSequence_Parms, InSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::MoviePipelineExecutorJob_eventSetSequence_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStatus_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::NewProp_InStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::NewProp_InStatus = { "InStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventSetStatusMessage_Parms, InStatus), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::NewProp_InStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::NewProp_InStatus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::NewProp_InStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Set the status of this job to the given value. This will be shown on the UI if progress\n\x09* is set to a value less than zero. If progress is > 0 then the progress bar will be shown\n\x09* on the UI instead. Progress and Status Message are cosmetic and dependent on the\n\x09* executor to update. Similar to the UMoviePipelineExecutor::SetStatusMessage function,\n\x09* but at a per-job level basis instead. \n\x09*\n\x09* For C++ implementations override `virtual void SetStatusMessage_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def set_status_message(self, inStatus):\n\x09*\n\x09* @param InStatus\x09The status message you wish the executor to have.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Set the status of this job to the given value. This will be shown on the UI if progress\nis set to a value less than zero. If progress is > 0 then the progress bar will be shown\non the UI instead. Progress and Status Message are cosmetic and dependent on the\nexecutor to update. Similar to the UMoviePipelineExecutor::SetStatusMessage function,\nbut at a per-job level basis instead.\n\nFor C++ implementations override `virtual void SetStatusMessage_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def set_status_message(self, inStatus):\n\n@param InStatus       The status message you wish the executor to have." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetStatusMessage", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventSetStatusMessage_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::NewProp_InProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::NewProp_InProgress = { "InProgress", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorJob_eventSetStatusProgress_Parms, InProgress), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::NewProp_InProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::NewProp_InProgress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::NewProp_InProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Set the progress of this job to the given value. If a positive value is provided\n\x09* the UI will show the progress bar, while a negative value will make the UI show the \n\x09* status message instead. Progress and Status Message are cosmetic and dependent on the\n\x09* executor to update. Similar to the UMoviePipelineExecutor::SetStatusProgress function,\n\x09* but at a per-job level basis instead.\n\x09*\n\x09* For C++ implementations override `virtual void SetStatusProgress_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def set_status_progress(self, inProgress):\n\x09*\n\x09* @param InProgress\x09The progress (0-1 range) the executor should have.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Set the progress of this job to the given value. If a positive value is provided\nthe UI will show the progress bar, while a negative value will make the UI show the\nstatus message instead. Progress and Status Message are cosmetic and dependent on the\nexecutor to update. Similar to the UMoviePipelineExecutor::SetStatusProgress function,\nbut at a per-job level basis instead.\n\nFor C++ implementations override `virtual void SetStatusProgress_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def set_status_progress(self, inProgress):\n\n@param InProgress     The progress (0-1 range) the executor should have." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetStatusProgress", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventSetStatusProgress_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineExecutorJob);
	UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister()
	{
		return UMoviePipelineExecutorJob::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineExecutorJob_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JobName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotInfo_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShotInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShotInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatusMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StatusProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConsumed_MetaData[];
#endif
		static void NewProp_bIsConsumed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConsumed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PresetOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration, "GetConfiguration" }, // 1442624195
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin, "GetPresetOrigin" }, // 1417108023
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusMessage, "GetStatusMessage" }, // 3262006646
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetStatusProgress, "GetStatusProgress" }, // 1129941609
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_IsConsumed, "IsConsumed" }, // 960178321
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_IsEnabled, "IsEnabled" }, // 1507382859
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_OnDuplicated, "OnDuplicated" }, // 3975281958
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration, "SetConfiguration" }, // 259309453
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConsumed, "SetConsumed" }, // 2131353401
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetIsEnabled, "SetIsEnabled" }, // 11850313
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin, "SetPresetOrigin" }, // 3005800321
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetSequence, "SetSequence" }, // 657329457
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusMessage, "SetStatusMessage" }, // 4034029138
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetStatusProgress, "SetStatusProgress" }, // 1487900429
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A particular job within the Queue\n*/" },
		{ "IncludePath", "MoviePipelineQueue.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "A particular job within the Queue" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobName_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** (Optional) Name of the job. Shown on the default burn-in. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "(Optional) Name of the job. Shown on the default burn-in." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobName = { "JobName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, JobName), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence_MetaData[] = {
		{ "AllowedClasses", "/Script/LevelSequence.LevelSequence" },
		{ "BlueprintSetter", "SetSequence" },
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Which sequence should this job render? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Which sequence should this job render?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, Sequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Which map should this job render on */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Which map should this job render on" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, Map), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** (Optional) If left blank, will default to system username. Can be shown in burn in as a first point of contact about the content. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "(Optional) If left blank, will default to system username. Can be shown in burn in as a first point of contact about the content." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, Author), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** (Optional) If specified, will be shown in the burn in to allow users to keep track of notes about a render. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "(Optional) If specified, will be shown in the burn in to allow users to keep track of notes about a render." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, Comment), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo_Inner_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** (Optional) Shot specific information. If a shot is missing from this list it will assume to be enabled and will be rendered. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "(Optional) Shot specific information. If a shot is missing from this list it will assume to be enabled and will be rendered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo_Inner = { "ShotInfo", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** (Optional) Shot specific information. If a shot is missing from this list it will assume to be enabled and will be rendered. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "(Optional) Shot specific information. If a shot is missing from this list it will assume to be enabled and will be rendered." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo = { "ShotInfo", nullptr, (EPropertyFlags)0x001400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, ShotInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* Arbitrary data that can be associated with the job. Not used by default implementations, nor read.\n\x09* This can be used to attach third party metadata such as job ids from remote farms. \n\x09* Not shown in the user interface.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Arbitrary data that can be associated with the job. Not used by default implementations, nor read.\nThis can be used to attach third party metadata such as job ids from remote farms.\nNot shown in the user interface." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, UserData), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusMessage = { "StatusMessage", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, StatusMessage), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusProgress = { "StatusProgress", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, StatusProgress), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bIsConsumed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bIsConsumed_SetBit(void* Obj)
	{
		((UMoviePipelineExecutorJob*)Obj)->bIsConsumed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bIsConsumed = { "bIsConsumed", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineExecutorJob), &Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bIsConsumed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bIsConsumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bIsConsumed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration_MetaData[] = {
		{ "Comment", "/** \n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, Configuration), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin_MetaData[] = {
		{ "Comment", "/**\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin = { "PresetOrigin", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorJob, PresetOrigin), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether this job is enabled and should be rendered. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Whether this job is enabled and should be rendered." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UMoviePipelineExecutorJob*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineExecutorJob), &Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Comment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_ShotInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_UserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_StatusProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bIsConsumed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineExecutorJob>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::ClassParams = {
		&UMoviePipelineExecutorJob::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineExecutorJob()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineExecutorJob.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineExecutorJob.OuterSingleton, Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineExecutorJob.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineExecutorJob>()
	{
		return UMoviePipelineExecutorJob::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineExecutorJob);
	UMoviePipelineExecutorJob::~UMoviePipelineExecutorJob() {}
	DEFINE_FUNCTION(UMoviePipelineQueue::execSetJobIndex)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJobIndex(Z_Param_InJob,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execCopyFrom)
	{
		P_GET_OBJECT(UMoviePipelineQueue,Z_Param_InQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFrom(Z_Param_InQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execSetQueueOrigin)
	{
		P_GET_OBJECT(UMoviePipelineQueue,Z_Param_InConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQueueOrigin(Z_Param_InConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execGetQueueOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineQueue**)Z_Param__Result=P_THIS->GetQueueOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execGetJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineExecutorJob*>*)Z_Param__Result=P_THIS->GetJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execDuplicateJob)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorJob**)Z_Param__Result=P_THIS->DuplicateJob(Z_Param_InJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execDeleteAllJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAllJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execDeleteJob)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteJob(Z_Param_InJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execAllocateNewJob)
	{
		P_GET_OBJECT(UClass,Z_Param_InJobType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorJob**)Z_Param__Result=P_THIS->AllocateNewJob(Z_Param_InJobType);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMoviePipelineQueue::execSetIsDirty)
	{
		P_GET_UBOOL(Z_Param_bNewDirtyState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsDirty(Z_Param_bNewDirtyState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execIsDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDirty();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMoviePipelineQueue::StaticRegisterNativesUMoviePipelineQueue()
	{
		UClass* Class = UMoviePipelineQueue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllocateNewJob", &UMoviePipelineQueue::execAllocateNewJob },
			{ "CopyFrom", &UMoviePipelineQueue::execCopyFrom },
			{ "DeleteAllJobs", &UMoviePipelineQueue::execDeleteAllJobs },
			{ "DeleteJob", &UMoviePipelineQueue::execDeleteJob },
			{ "DuplicateJob", &UMoviePipelineQueue::execDuplicateJob },
			{ "GetJobs", &UMoviePipelineQueue::execGetJobs },
			{ "GetQueueOrigin", &UMoviePipelineQueue::execGetQueueOrigin },
#if WITH_EDITOR
			{ "IsDirty", &UMoviePipelineQueue::execIsDirty },
			{ "SetIsDirty", &UMoviePipelineQueue::execSetIsDirty },
#endif // WITH_EDITOR
			{ "SetJobIndex", &UMoviePipelineQueue::execSetJobIndex },
			{ "SetQueueOrigin", &UMoviePipelineQueue::execSetQueueOrigin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics
	{
		struct MoviePipelineQueue_eventAllocateNewJob_Parms
		{
			TSubclassOf<UMoviePipelineExecutorJob>  InJobType;
			UMoviePipelineExecutorJob* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InJobType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::NewProp_InJobType = { "InJobType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventAllocateNewJob_Parms, InJobType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventAllocateNewJob_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::NewProp_InJobType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09* Allocates a new Job in this Queue. The Queue owns the jobs for memory management purposes,\n\x09* and this will handle that for you. \n\x09*\n\x09* @param InJobType\x09Specify the specific Job type that should be created. Custom Executors can use custom Job types to allow the user to provide more information.\n\x09* @return\x09The created Executor job instance.\n\x09*/" },
		{ "DeterminesOutputType", "InClass" },
		{ "InJobType", "/Script/MovieRenderPipelineCore.MoviePipelineExecutorJob" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Allocates a new Job in this Queue. The Queue owns the jobs for memory management purposes,\nand this will handle that for you.\n\n@param InJobType      Specify the specific Job type that should be created. Custom Executors can use custom Job types to allow the user to provide more information.\n@return       The created Executor job instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "AllocateNewJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::MoviePipelineQueue_eventAllocateNewJob_Parms), Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics
	{
		struct MoviePipelineQueue_eventCopyFrom_Parms
		{
			UMoviePipelineQueue* InQueue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::NewProp_InQueue = { "InQueue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventCopyFrom_Parms, InQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::NewProp_InQueue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/** \n\x09* Replace the contents of this queue with a copy of the contents from another queue. \n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Replace the contents of this queue with a copy of the contents from another queue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "CopyFrom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::MoviePipelineQueue_eventCopyFrom_Parms), Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09* Delete all jobs from the Queue.\n\x09*/" },
		{ "Keywords", "Clear Empty" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Delete all jobs from the Queue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "DeleteAllJobs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics
	{
		struct MoviePipelineQueue_eventDeleteJob_Parms
		{
			UMoviePipelineExecutorJob* InJob;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventDeleteJob_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::NewProp_InJob,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09* Deletes the specified job from the Queue. \n\x09*\n\x09* @param InJob\x09The job to look for and delete. \n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Deletes the specified job from the Queue.\n\n@param InJob  The job to look for and delete." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "DeleteJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::MoviePipelineQueue_eventDeleteJob_Parms), Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics
	{
		struct MoviePipelineQueue_eventDuplicateJob_Parms
		{
			UMoviePipelineExecutorJob* InJob;
			UMoviePipelineExecutorJob* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventDuplicateJob_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventDuplicateJob_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::NewProp_InJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09* Duplicate the specific job and return the duplicate. Configurations are duplicated and not shared.\n\x09*\n\x09* @param InJob\x09The job to look for to duplicate.\n\x09* @return The duplicated instance or nullptr if a duplicate could not be made.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Duplicate the specific job and return the duplicate. Configurations are duplicated and not shared.\n\n@param InJob  The job to look for to duplicate.\n@return The duplicated instance or nullptr if a duplicate could not be made." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "DuplicateJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::MoviePipelineQueue_eventDuplicateJob_Parms), Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics
	{
		struct MoviePipelineQueue_eventGetJobs_Parms
		{
			TArray<UMoviePipelineExecutorJob*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventGetJobs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09* Get all of the Jobs contained in this Queue.\n\x09* @return The jobs contained by this queue.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Get all of the Jobs contained in this Queue.\n@return The jobs contained by this queue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "GetJobs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::MoviePipelineQueue_eventGetJobs_Parms), Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_GetJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics
	{
		struct MoviePipelineQueue_eventGetQueueOrigin_Parms
		{
			UMoviePipelineQueue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventGetQueueOrigin_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09 * Gets the queue that this queue was originally based on (if any). The origin will only be set on transient\n\x09 * queues; the origin will be nullptr for non-transient queues because the origin will be this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Gets the queue that this queue was originally based on (if any). The origin will only be set on transient\nqueues; the origin will be nullptr for non-transient queues because the origin will be this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "GetQueueOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::MoviePipelineQueue_eventGetQueueOrigin_Parms), Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics
	{
		struct MoviePipelineQueue_eventIsDirty_Parms
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
	void Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineQueue_eventIsDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineQueue_eventIsDirty_Parms), &Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09 * Gets the dirty state of this queue. Note that dirty state is only tracked when the editor is active.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Gets the dirty state of this queue. Note that dirty state is only tracked when the editor is active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "IsDirty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::MoviePipelineQueue_eventIsDirty_Parms), Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_IsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_IsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics
	{
		struct MoviePipelineQueue_eventSetIsDirty_Parms
		{
			bool bNewDirtyState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewDirtyState_MetaData[];
#endif
		static void NewProp_bNewDirtyState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDirtyState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::NewProp_bNewDirtyState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::NewProp_bNewDirtyState_SetBit(void* Obj)
	{
		((MoviePipelineQueue_eventSetIsDirty_Parms*)Obj)->bNewDirtyState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::NewProp_bNewDirtyState = { "bNewDirtyState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineQueue_eventSetIsDirty_Parms), &Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::NewProp_bNewDirtyState_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::NewProp_bNewDirtyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::NewProp_bNewDirtyState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::NewProp_bNewDirtyState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09 * Sets the dirty state of this queue. Generally the queue will correctly track the dirty state; however, there are\n\x09 * situations where a queue may need its dirty state reset (eg, it may be appropriate to reset the dirty state after\n\x09 * a call to CopyFrom(), depending on the use case).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Sets the dirty state of this queue. Generally the queue will correctly track the dirty state; however, there are\nsituations where a queue may need its dirty state reset (eg, it may be appropriate to reset the dirty state after\na call to CopyFrom(), depending on the use case)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "SetIsDirty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::MoviePipelineQueue_eventSetIsDirty_Parms), Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics
	{
		struct MoviePipelineQueue_eventSetJobIndex_Parms
		{
			UMoviePipelineExecutorJob* InJob;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventSetJobIndex_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventSetJobIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::NewProp_InJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/* Set the index of the given job */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Set the index of the given job" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "SetJobIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::MoviePipelineQueue_eventSetJobIndex_Parms), Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics
	{
		struct MoviePipelineQueue_eventSetQueueOrigin_Parms
		{
			UMoviePipelineQueue* InConfig;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueue_eventSetQueueOrigin_Parms, InConfig), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::NewProp_InConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "Comment", "/**\n\x09 * Sets the queue that this queue originated from (if any). The origin should only be set for transient queues.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Sets the queue that this queue originated from (if any). The origin should only be set for transient queues." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "SetQueueOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::MoviePipelineQueue_eventSetQueueOrigin_Parms), Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineQueue);
	UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister()
	{
		return UMoviePipelineQueue::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jobs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Jobs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jobs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Jobs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QueueOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineQueue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob, "AllocateNewJob" }, // 1120828399
		{ &Z_Construct_UFunction_UMoviePipelineQueue_CopyFrom, "CopyFrom" }, // 1743507295
		{ &Z_Construct_UFunction_UMoviePipelineQueue_DeleteAllJobs, "DeleteAllJobs" }, // 1171492241
		{ &Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob, "DeleteJob" }, // 3588042816
		{ &Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob, "DuplicateJob" }, // 1260837243
		{ &Z_Construct_UFunction_UMoviePipelineQueue_GetJobs, "GetJobs" }, // 1610499556
		{ &Z_Construct_UFunction_UMoviePipelineQueue_GetQueueOrigin, "GetQueueOrigin" }, // 996268651
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMoviePipelineQueue_IsDirty, "IsDirty" }, // 3972558048
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMoviePipelineQueue_SetIsDirty, "SetIsDirty" }, // 2905415920
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UMoviePipelineQueue_SetJobIndex, "SetJobIndex" }, // 457776378
		{ &Z_Construct_UFunction_UMoviePipelineQueue_SetQueueOrigin, "SetQueueOrigin" }, // 3101673715
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A queue is a list of jobs that have been executed, are executing and are waiting to be executed. These can be saved\n* to specific assets to allow \n*/" },
		{ "IncludePath", "MoviePipelineQueue.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "A queue is a list of jobs that have been executed, are executing and are waiting to be executed. These can be saved\nto specific assets to allow" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_Inner = { "Jobs", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs = { "Jobs", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineQueue, Jobs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_QueueOrigin_MetaData[] = {
		{ "Comment", "/* The queue that this queue originated from. Helpful for determining the source of the queue when this queue is transient. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "The queue that this queue originated from. Helpful for determining the source of the queue when this queue is transient." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_QueueOrigin = { "QueueOrigin", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineQueue, QueueOrigin), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_QueueOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_QueueOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_QueueOrigin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineQueue_Statics::ClassParams = {
		&UMoviePipelineQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineQueue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueue_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineQueue()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineQueue.OuterSingleton, Z_Construct_UClass_UMoviePipelineQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineQueue.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineQueue>()
	{
		return UMoviePipelineQueue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineQueue);
	UMoviePipelineQueue::~UMoviePipelineQueue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_Statics::ScriptStructInfo[] = {
		{ FMoviePipelineSidecarCamera::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics::NewStructOps, TEXT("MoviePipelineSidecarCamera"), &Z_Registration_Info_UScriptStruct_MoviePipelineSidecarCamera, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineSidecarCamera), 2133171837U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineExecutorShot, UMoviePipelineExecutorShot::StaticClass, TEXT("UMoviePipelineExecutorShot"), &Z_Registration_Info_UClass_UMoviePipelineExecutorShot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineExecutorShot), 773267886U) },
		{ Z_Construct_UClass_UMoviePipelineExecutorJob, UMoviePipelineExecutorJob::StaticClass, TEXT("UMoviePipelineExecutorJob"), &Z_Registration_Info_UClass_UMoviePipelineExecutorJob, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineExecutorJob), 2511188425U) },
		{ Z_Construct_UClass_UMoviePipelineQueue, UMoviePipelineQueue::StaticClass, TEXT("UMoviePipelineQueue"), &Z_Registration_Info_UClass_UMoviePipelineQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineQueue), 4161243754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_4223879208(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
