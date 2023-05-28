// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraSimCacheFunctionLibrary.h"
#include "../Classes/NiagaraSimCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache();
	NIAGARA_API UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister();
	NIAGARA_API UFunction* Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics
	{
		struct AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms), &Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, nullptr, "OnCaptureComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms), Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAsyncNiagaraCaptureSimCache::FOnCaptureComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureComplete, bool bSuccess)
{
	struct AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms
	{
		bool bSuccess;
	};
	AsyncNiagaraCaptureSimCache_eventOnCaptureComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnCaptureComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheUntilComplete)
	{
		P_GET_OBJECT(UNiagaraSimCache,Z_Param_SimCache);
		P_GET_STRUCT(FNiagaraSimCacheCreateParameters,Z_Param_CreateParameters);
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
		P_GET_OBJECT_REF(UNiagaraSimCache,Z_Param_Out_OutSimCache);
		P_GET_PROPERTY(FIntProperty,Z_Param_CaptureRate);
		P_GET_UBOOL(Z_Param_bAdvanceSimulation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdvanceDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncNiagaraCaptureSimCache**)Z_Param__Result=UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheUntilComplete(Z_Param_SimCache,Z_Param_CreateParameters,Z_Param_NiagaraComponent,Z_Param_Out_OutSimCache,Z_Param_CaptureRate,Z_Param_bAdvanceSimulation,Z_Param_AdvanceDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheMultiFrame)
	{
		P_GET_OBJECT(UNiagaraSimCache,Z_Param_SimCache);
		P_GET_STRUCT(FNiagaraSimCacheCreateParameters,Z_Param_CreateParameters);
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
		P_GET_OBJECT_REF(UNiagaraSimCache,Z_Param_Out_OutSimCache);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumFrames);
		P_GET_PROPERTY(FIntProperty,Z_Param_CaptureRate);
		P_GET_UBOOL(Z_Param_bAdvanceSimulation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdvanceDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncNiagaraCaptureSimCache**)Z_Param__Result=UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheMultiFrame(Z_Param_SimCache,Z_Param_CreateParameters,Z_Param_NiagaraComponent,Z_Param_Out_OutSimCache,Z_Param_NumFrames,Z_Param_CaptureRate,Z_Param_bAdvanceSimulation,Z_Param_AdvanceDeltaTime);
		P_NATIVE_END;
	}
	void UAsyncNiagaraCaptureSimCache::StaticRegisterNativesUAsyncNiagaraCaptureSimCache()
	{
		UClass* Class = UAsyncNiagaraCaptureSimCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureNiagaraSimCacheMultiFrame", &UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheMultiFrame },
			{ "CaptureNiagaraSimCacheUntilComplete", &UAsyncNiagaraCaptureSimCache::execCaptureNiagaraSimCacheUntilComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics
	{
		struct AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms
		{
			UNiagaraSimCache* SimCache;
			FNiagaraSimCacheCreateParameters CreateParameters;
			UNiagaraComponent* NiagaraComponent;
			UNiagaraSimCache* OutSimCache;
			int32 NumFrames;
			int32 CaptureRate;
			bool bAdvanceSimulation;
			float AdvanceDeltaTime;
			UAsyncNiagaraCaptureSimCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSimCache;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureRate;
		static void NewProp_bAdvanceSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvanceSimulation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceDeltaTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(nullptr, 0) }; // 119681666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_OutSimCache = { "OutSimCache", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, OutSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, NumFrames), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_CaptureRate = { "CaptureRate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, CaptureRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_bAdvanceSimulation_SetBit(void* Obj)
	{
		((AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms*)Obj)->bAdvanceSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_bAdvanceSimulation = { "bAdvanceSimulation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms), &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_bAdvanceSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_AdvanceDeltaTime = { "AdvanceDeltaTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, AdvanceDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms, ReturnValue), Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_SimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_CreateParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NiagaraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_OutSimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_NumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_CaptureRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_bAdvanceSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_AdvanceDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CaptureRate, bAdvanceSimulation, AdvanceDeltaTime" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Capture multiple frames from the provided simulation into a SimCache until the simulation becomes inactive, completes or we hit the NumFrames limit.\n\x09""Capture occurs at the end of each frame with the first frame being this frame.\n\x09""CaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.\n\x09When AdvanceSimulation is true we will manually advance the simulation in a loop until we have captured the number of frames request, rather than reading from the component each frame.\n\x09*/" },
		{ "CPP_Default_AdvanceDeltaTime", "0.016660" },
		{ "CPP_Default_bAdvanceSimulation", "false" },
		{ "CPP_Default_CaptureRate", "1" },
		{ "CPP_Default_NumFrames", "16" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ToolTip", "Capture multiple frames from the provided simulation into a SimCache until the simulation becomes inactive, completes or we hit the NumFrames limit.\nCapture occurs at the end of each frame with the first frame being this frame.\nCaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.\nWhen AdvanceSimulation is true we will manually advance the simulation in a loop until we have captured the number of frames request, rather than reading from the component each frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, nullptr, "CaptureNiagaraSimCacheMultiFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheMultiFrame_Parms), Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics
	{
		struct AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms
		{
			UNiagaraSimCache* SimCache;
			FNiagaraSimCacheCreateParameters CreateParameters;
			UNiagaraComponent* NiagaraComponent;
			UNiagaraSimCache* OutSimCache;
			int32 CaptureRate;
			bool bAdvanceSimulation;
			float AdvanceDeltaTime;
			UAsyncNiagaraCaptureSimCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSimCache;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureRate;
		static void NewProp_bAdvanceSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvanceSimulation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceDeltaTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(nullptr, 0) }; // 119681666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_OutSimCache = { "OutSimCache", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, OutSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_CaptureRate = { "CaptureRate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, CaptureRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_bAdvanceSimulation_SetBit(void* Obj)
	{
		((AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms*)Obj)->bAdvanceSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_bAdvanceSimulation = { "bAdvanceSimulation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms), &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_bAdvanceSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_AdvanceDeltaTime = { "AdvanceDeltaTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, AdvanceDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms, ReturnValue), Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_SimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_CreateParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_NiagaraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_OutSimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_CaptureRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_bAdvanceSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_AdvanceDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CaptureRate, bAdvanceSimulation, AdvanceDeltaTime" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Capture frames from the provided simulation into a SimCache until the simulation becomes inactive or completes.\n\x09""Capture occurs at the end of each frame with the first frame being this frame.\n\x09""CaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.\n\x09When AdvanceSimulation is true we will manually advance the simulation until the capture is complete inside a loop, rather than reading from the component each frame.\n\x09*/" },
		{ "CPP_Default_AdvanceDeltaTime", "0.016660" },
		{ "CPP_Default_bAdvanceSimulation", "false" },
		{ "CPP_Default_CaptureRate", "1" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ToolTip", "Capture frames from the provided simulation into a SimCache until the simulation becomes inactive or completes.\nCapture occurs at the end of each frame with the first frame being this frame.\nCaptureRate allows you to reduce the rate of capture, i.e. a rate of 2 would capture frames 0, 2, 4, etc.\nWhen AdvanceSimulation is true we will manually advance the simulation until the capture is complete inside a loop, rather than reading from the component each frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, nullptr, "CaptureNiagaraSimCacheUntilComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::AsyncNiagaraCaptureSimCache_eventCaptureNiagaraSimCacheUntilComplete_Parms), Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncNiagaraCaptureSimCache);
	UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_NoRegister()
	{
		return UAsyncNiagaraCaptureSimCache::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSimCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureSimCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CaptureComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame, "CaptureNiagaraSimCacheMultiFrame" }, // 502708867
		{ &Z_Construct_UFunction_UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete, "CaptureNiagaraSimCacheUntilComplete" }, // 1501511435
		{ &Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature, "OnCaptureComplete__DelegateSignature" }, // 3185826065
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraSimCacheFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureSimCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureSimCache = { "CaptureSimCache", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncNiagaraCaptureSimCache, CaptureSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureSimCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureSimCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncNiagaraCaptureSimCache, CaptureComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComplete_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComplete = { "CaptureComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncNiagaraCaptureSimCache, CaptureComplete), Z_Construct_UDelegateFunction_UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComplete_MetaData)) }; // 3185826065
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureSimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::NewProp_CaptureComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncNiagaraCaptureSimCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::ClassParams = {
		&UAsyncNiagaraCaptureSimCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncNiagaraCaptureSimCache()
	{
		if (!Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton, Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UAsyncNiagaraCaptureSimCache>()
	{
		return UAsyncNiagaraCaptureSimCache::StaticClass();
	}
	UAsyncNiagaraCaptureSimCache::UAsyncNiagaraCaptureSimCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncNiagaraCaptureSimCache);
	UAsyncNiagaraCaptureSimCache::~UAsyncNiagaraCaptureSimCache() {}
	DEFINE_FUNCTION(UNiagaraSimCacheFunctionLibrary::execCreateNiagaraSimCache)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraSimCache**)Z_Param__Result=UNiagaraSimCacheFunctionLibrary::CreateNiagaraSimCache(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCacheFunctionLibrary::execCaptureNiagaraSimCacheImmediate)
	{
		P_GET_OBJECT(UNiagaraSimCache,Z_Param_SimCache);
		P_GET_STRUCT(FNiagaraSimCacheCreateParameters,Z_Param_CreateParameters);
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
		P_GET_OBJECT_REF(UNiagaraSimCache,Z_Param_Out_OutSimCache);
		P_GET_UBOOL(Z_Param_bAdvanceSimulation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdvanceDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNiagaraSimCacheFunctionLibrary::CaptureNiagaraSimCacheImmediate(Z_Param_SimCache,Z_Param_CreateParameters,Z_Param_NiagaraComponent,Z_Param_Out_OutSimCache,Z_Param_bAdvanceSimulation,Z_Param_AdvanceDeltaTime);
		P_NATIVE_END;
	}
	void UNiagaraSimCacheFunctionLibrary::StaticRegisterNativesUNiagaraSimCacheFunctionLibrary()
	{
		UClass* Class = UNiagaraSimCacheFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureNiagaraSimCacheImmediate", &UNiagaraSimCacheFunctionLibrary::execCaptureNiagaraSimCacheImmediate },
			{ "CreateNiagaraSimCache", &UNiagaraSimCacheFunctionLibrary::execCreateNiagaraSimCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics
	{
		struct NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms
		{
			UNiagaraSimCache* SimCache;
			FNiagaraSimCacheCreateParameters CreateParameters;
			UNiagaraComponent* NiagaraComponent;
			UNiagaraSimCache* OutSimCache;
			bool bAdvanceSimulation;
			float AdvanceDeltaTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSimCache;
		static void NewProp_bAdvanceSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvanceSimulation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceDeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(nullptr, 0) }; // 119681666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_OutSimCache = { "OutSimCache", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, OutSimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_bAdvanceSimulation_SetBit(void* Obj)
	{
		((NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms*)Obj)->bAdvanceSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_bAdvanceSimulation = { "bAdvanceSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms), &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_bAdvanceSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_AdvanceDeltaTime = { "AdvanceDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms, AdvanceDeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms), &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_SimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_CreateParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_NiagaraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_OutSimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_bAdvanceSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_AdvanceDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Captures the simulations current frame data into the SimCache.\n\x09This happens immediately so you may need to be careful with tick order of the component you are capturing from.\n\x09The return can be invalid if the component can not be captured for some reason (i.e. not active).\n\x09When AdvanceSimulation is true we will manually advance the simulation one frame using the provided AdvanceDeltaTime before capturing.\n\x09*/" },
		{ "CPP_Default_AdvanceDeltaTime", "0.016660" },
		{ "CPP_Default_bAdvanceSimulation", "false" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Captures the simulations current frame data into the SimCache.\nThis happens immediately so you may need to be careful with tick order of the component you are capturing from.\nThe return can be invalid if the component can not be captured for some reason (i.e. not active).\nWhen AdvanceSimulation is true we will manually advance the simulation one frame using the provided AdvanceDeltaTime before capturing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary, nullptr, "CaptureNiagaraSimCacheImmediate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::NiagaraSimCacheFunctionLibrary_eventCaptureNiagaraSimCacheImmediate_Parms), Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics
	{
		struct NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms
		{
			UObject* WorldContextObject;
			UNiagaraSimCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09""Captures the simulation cache object that can be captured into using the various API calls.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
		{ "ReturnDisplayName", "SimCache" },
		{ "ToolTip", "Captures the simulation cache object that can be captured into using the various API calls." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary, nullptr, "CreateNiagaraSimCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::NiagaraSimCacheFunctionLibrary_eventCreateNiagaraSimCache_Parms), Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimCacheFunctionLibrary);
	UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_NoRegister()
	{
		return UNiagaraSimCacheFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate, "CaptureNiagaraSimCacheImmediate" }, // 3464480185
		{ &Z_Construct_UFunction_UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache, "CreateNiagaraSimCache" }, // 2848650718
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraSimCacheFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimCacheFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::ClassParams = {
		&UNiagaraSimCacheFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimCacheFunctionLibrary>()
	{
		return UNiagaraSimCacheFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimCacheFunctionLibrary);
	UNiagaraSimCacheFunctionLibrary::~UNiagaraSimCacheFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncNiagaraCaptureSimCache, UAsyncNiagaraCaptureSimCache::StaticClass, TEXT("UAsyncNiagaraCaptureSimCache"), &Z_Registration_Info_UClass_UAsyncNiagaraCaptureSimCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncNiagaraCaptureSimCache), 642437838U) },
		{ Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary, UNiagaraSimCacheFunctionLibrary::StaticClass, TEXT("UNiagaraSimCacheFunctionLibrary"), &Z_Registration_Info_UClass_UNiagaraSimCacheFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimCacheFunctionLibrary), 3707348378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_119814717(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
