// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/TargetingSystem/TargetingSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayTargetingSystem/Types/TargetingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSubsystem();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSubsystem_NoRegister();
	TARGETINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingSourceContext();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UTargetingSubsystem::execGetTargetingResults)
	{
		P_GET_STRUCT(FTargetingRequestHandle,Z_Param_TargetingHandle);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutTargets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargetingResults(Z_Param_TargetingHandle,Z_Param_Out_OutTargets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSubsystem::execGetTargetingResultsActors)
	{
		P_GET_STRUCT(FTargetingRequestHandle,Z_Param_TargetingHandle);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Targets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargetingResultsActors(Z_Param_TargetingHandle,Z_Param_Out_Targets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSubsystem::execGetTargetingSourceContext)
	{
		P_GET_STRUCT(FTargetingRequestHandle,Z_Param_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetingSourceContext*)Z_Param__Result=P_THIS->GetTargetingSourceContext(Z_Param_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSubsystem::execStartAsyncTargetingRequest)
	{
		P_GET_OBJECT(UTargetingPreset,Z_Param_TargetingPreset);
		P_GET_STRUCT_REF(FTargetingSourceContext,Z_Param_Out_InSourceContext);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_CompletionDynamicDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetingRequestHandle*)Z_Param__Result=P_THIS->StartAsyncTargetingRequest(Z_Param_TargetingPreset,Z_Param_Out_InSourceContext,FTargetingRequestDynamicDelegate(Z_Param_CompletionDynamicDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSubsystem::execRemoveAsyncTargetingRequestWithHandle)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAsyncTargetingRequestWithHandle(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSubsystem::execExecuteTargetingRequest)
	{
		P_GET_OBJECT(UTargetingPreset,Z_Param_TargetingPreset);
		P_GET_STRUCT_REF(FTargetingSourceContext,Z_Param_Out_InSourceContext);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_CompletionDynamicDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteTargetingRequest(Z_Param_TargetingPreset,Z_Param_Out_InSourceContext,FTargetingRequestDynamicDelegate(Z_Param_CompletionDynamicDelegate));
		P_NATIVE_END;
	}
	void UTargetingSubsystem::StaticRegisterNativesUTargetingSubsystem()
	{
		UClass* Class = UTargetingSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteTargetingRequest", &UTargetingSubsystem::execExecuteTargetingRequest },
			{ "GetTargetingResults", &UTargetingSubsystem::execGetTargetingResults },
			{ "GetTargetingResultsActors", &UTargetingSubsystem::execGetTargetingResultsActors },
			{ "GetTargetingSourceContext", &UTargetingSubsystem::execGetTargetingSourceContext },
			{ "RemoveAsyncTargetingRequestWithHandle", &UTargetingSubsystem::execRemoveAsyncTargetingRequestWithHandle },
			{ "StartAsyncTargetingRequest", &UTargetingSubsystem::execStartAsyncTargetingRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics
	{
		struct TargetingSubsystem_eventExecuteTargetingRequest_Parms
		{
			const UTargetingPreset* TargetingPreset;
			FTargetingSourceContext InSourceContext;
			FScriptDelegate CompletionDynamicDelegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSourceContext;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_CompletionDynamicDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_TargetingPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventExecuteTargetingRequest_Parms, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_TargetingPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_TargetingPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_InSourceContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_InSourceContext = { "InSourceContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventExecuteTargetingRequest_Parms, InSourceContext), Z_Construct_UScriptStruct_FTargetingSourceContext, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_InSourceContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_InSourceContext_MetaData)) }; // 871442416
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_CompletionDynamicDelegate = { "CompletionDynamicDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventExecuteTargetingRequest_Parms, CompletionDynamicDelegate), Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2354339958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_TargetingPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_InSourceContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::NewProp_CompletionDynamicDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay Targeting | Instant Request" },
		{ "Comment", "/** Method to execute an immediate targeting request based on a gameplay targeting preset.*/" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ToolTip", "Method to execute an immediate targeting request based on a gameplay targeting preset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSubsystem, nullptr, "ExecuteTargetingRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::TargetingSubsystem_eventExecuteTargetingRequest_Parms), Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics
	{
		struct TargetingSubsystem_eventGetTargetingResults_Parms
		{
			FTargetingRequestHandle TargetingHandle;
			TArray<FHitResult> OutTargets;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventGetTargetingResults_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::NewProp_OutTargets_Inner = { "OutTargets", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::NewProp_OutTargets = { "OutTargets", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventGetTargetingResults_Parms, OutTargets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::NewProp_OutTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::NewProp_OutTargets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting System | Targeting Results" },
		{ "Comment", "/** Helper method to get the set of hit results for a given targeting handle */" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ToolTip", "Helper method to get the set of hit results for a given targeting handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSubsystem, nullptr, "GetTargetingResults", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::TargetingSubsystem_eventGetTargetingResults_Parms), Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics
	{
		struct TargetingSubsystem_eventGetTargetingResultsActors_Parms
		{
			FTargetingRequestHandle TargetingHandle;
			TArray<AActor*> Targets;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventGetTargetingResultsActors_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventGetTargetingResultsActors_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::NewProp_Targets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting System | Targeting Results" },
		{ "Comment", "/** Method to get the actor targets from a given targeting request handle */" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ToolTip", "Method to get the actor targets from a given targeting request handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSubsystem, nullptr, "GetTargetingResultsActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::TargetingSubsystem_eventGetTargetingResultsActors_Parms), Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics
	{
		struct TargetingSubsystem_eventGetTargetingSourceContext_Parms
		{
			FTargetingRequestHandle TargetingHandle;
			FTargetingSourceContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventGetTargetingSourceContext_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventGetTargetingSourceContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetingSourceContext, METADATA_PARAMS(nullptr, 0) }; // 871442416
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting System | Targeting Types" },
		{ "Comment", "/** Returns the targeting source context for the targeting request handle */" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ToolTip", "Returns the targeting source context for the targeting request handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSubsystem, nullptr, "GetTargetingSourceContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::TargetingSubsystem_eventGetTargetingSourceContext_Parms), Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics
	{
		struct TargetingSubsystem_eventRemoveAsyncTargetingRequestWithHandle_Parms
		{
			FTargetingRequestHandle TargetingHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventRemoveAsyncTargetingRequestWithHandle_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::NewProp_TargetingHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay Targeting | Async Request" },
		{ "Comment", "/** Method to remove an async targeting request with a given targeting handle */" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ToolTip", "Method to remove an async targeting request with a given targeting handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSubsystem, nullptr, "RemoveAsyncTargetingRequestWithHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::TargetingSubsystem_eventRemoveAsyncTargetingRequestWithHandle_Parms), Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics
	{
		struct TargetingSubsystem_eventStartAsyncTargetingRequest_Parms
		{
			const UTargetingPreset* TargetingPreset;
			FTargetingSourceContext InSourceContext;
			FScriptDelegate CompletionDynamicDelegate;
			FTargetingRequestHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSourceContext;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_CompletionDynamicDelegate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_TargetingPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventStartAsyncTargetingRequest_Parms, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_TargetingPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_TargetingPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_InSourceContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_InSourceContext = { "InSourceContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventStartAsyncTargetingRequest_Parms, InSourceContext), Z_Construct_UScriptStruct_FTargetingSourceContext, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_InSourceContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_InSourceContext_MetaData)) }; // 871442416
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_CompletionDynamicDelegate = { "CompletionDynamicDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventStartAsyncTargetingRequest_Parms, CompletionDynamicDelegate), Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2354339958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSubsystem_eventStartAsyncTargetingRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_TargetingPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_InSourceContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_CompletionDynamicDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay Targeting | Async Request" },
		{ "Comment", "/** Method to queue an async targeting request based on a gameplay targeting preset. */" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ToolTip", "Method to queue an async targeting request based on a gameplay targeting preset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSubsystem, nullptr, "StartAsyncTargetingRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::TargetingSubsystem_eventStartAsyncTargetingRequest_Parms), Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingSubsystem);
	UClass* Z_Construct_UClass_UTargetingSubsystem_NoRegister()
	{
		return UTargetingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsyncTargetingRequests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncTargetingRequests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncTargetingRequests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetingSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetingSubsystem_ExecuteTargetingRequest, "ExecuteTargetingRequest" }, // 2371093748
		{ &Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResults, "GetTargetingResults" }, // 3053439627
		{ &Z_Construct_UFunction_UTargetingSubsystem_GetTargetingResultsActors, "GetTargetingResultsActors" }, // 3072635534
		{ &Z_Construct_UFunction_UTargetingSubsystem_GetTargetingSourceContext, "GetTargetingSourceContext" }, // 2300343217
		{ &Z_Construct_UFunction_UTargetingSubsystem_RemoveAsyncTargetingRequestWithHandle, "RemoveAsyncTargetingRequestWithHandle" }, // 2371293327
		{ &Z_Construct_UFunction_UTargetingSubsystem_StartAsyncTargetingRequest, "StartAsyncTargetingRequest" }, // 3591066333
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@class UTargetingSubsystem\n*\n*\x09The Targeting Subsystem is the entry point for users to initiate targeting requests.\n*\n*\x09The entry point to the system is the target request handle. The handle is used to interface with\n*\x09the targeting data stores. Data stores are templated classes around generic data structs that the\n*\x09system and tasks use to accomplish a targeting request.\n*\n*\x09The targeting system has 3 mandatory data stores and 1 required for async targeting request. These\n*\x09""data stores are required to be set up before the system can properly run a targeting request. The \n*\x09mandatory 3 data stores are FTargetingRequestData, FTargetingTaskSet, and FTargetingSourceContext.\n*\x09""FTargetingAsyncTaskData is implicitly setup when an async targeting request is initiated.\n*\n*\x09Users can do all the pieces manually in C++ by setting up the required data stores themselves, \n*\x09or, to have it a bit more automated, the user can use the APIs that utilize UTargetingPreset data asset. \n*\n*\x09""For immediate targeting requests users will call the Execute methods. These functions perform all the\n*\x09tasks till completion. The system will not go latent.\n*\n*\x09""For async targeting requests users will call the Start Async methods. The system will queue up a targeting\n*\x09request and as each task is processed the system can run through all the tasks to completion or stop processing\n*\x09until the next frame while it waits for a task to complete.\n* \n*\x09Note about Targeting Handles, when a targeting handle is created it will not implicitly release the handle.\n*\x09It is up to the creator to either grab a Async Task Data or Immediate Task Data and set a flag indicating \n*\x09the system should do it for them after the callback fires, or it is up to the user to release the handle\n*\x09when they are done with it.\n*/" },
		{ "DisplayName", "Targeting Subsystem" },
		{ "IncludePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ToolTip", "@class UTargetingSubsystem\n\nThe Targeting Subsystem is the entry point for users to initiate targeting requests.\n\nThe entry point to the system is the target request handle. The handle is used to interface with\nthe targeting data stores. Data stores are templated classes around generic data structs that the\nsystem and tasks use to accomplish a targeting request.\n\nThe targeting system has 3 mandatory data stores and 1 required for async targeting request. These\ndata stores are required to be set up before the system can properly run a targeting request. The\nmandatory 3 data stores are FTargetingRequestData, FTargetingTaskSet, and FTargetingSourceContext.\nFTargetingAsyncTaskData is implicitly setup when an async targeting request is initiated.\n\nUsers can do all the pieces manually in C++ by setting up the required data stores themselves,\nor, to have it a bit more automated, the user can use the APIs that utilize UTargetingPreset data asset.\n\nFor immediate targeting requests users will call the Execute methods. These functions perform all the\ntasks till completion. The system will not go latent.\n\nFor async targeting requests users will call the Start Async methods. The system will queue up a targeting\nrequest and as each task is processed the system can run through all the tasks to completion or stop processing\nuntil the next frame while it waits for a task to complete.\n\nNote about Targeting Handles, when a targeting handle is created it will not implicitly release the handle.\nIt is up to the creator to either grab a Async Task Data or Immediate Task Data and set a flag indicating\nthe system should do it for them after the callback fires, or it is up to the user to release the handle\nwhen they are done with it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSubsystem_Statics::NewProp_AsyncTargetingRequests_Inner = { "AsyncTargetingRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSubsystem_Statics::NewProp_AsyncTargetingRequests_MetaData[] = {
		{ "Comment", "/** The set of target requests queued up for async processing */" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingSubsystem.h" },
		{ "ToolTip", "The set of target requests queued up for async processing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingSubsystem_Statics::NewProp_AsyncTargetingRequests = { "AsyncTargetingRequests", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSubsystem, AsyncTargetingRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetingSubsystem_Statics::NewProp_AsyncTargetingRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSubsystem_Statics::NewProp_AsyncTargetingRequests_MetaData)) }; // 951213696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSubsystem_Statics::NewProp_AsyncTargetingRequests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSubsystem_Statics::NewProp_AsyncTargetingRequests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingSubsystem_Statics::ClassParams = {
		&UTargetingSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetingSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSubsystem_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTargetingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingSubsystem.OuterSingleton, Z_Construct_UClass_UTargetingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingSubsystem.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingSubsystem>()
	{
		return UTargetingSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingSubsystem);
	UTargetingSubsystem::~UTargetingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingSubsystem, UTargetingSubsystem::StaticClass, TEXT("UTargetingSubsystem"), &Z_Registration_Info_UClass_UTargetingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingSubsystem), 802324946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_1173241438(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
