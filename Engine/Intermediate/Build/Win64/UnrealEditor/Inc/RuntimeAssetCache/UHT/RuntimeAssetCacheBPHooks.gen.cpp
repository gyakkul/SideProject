// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAssetCacheBPHooks.h"
#include "RuntimeAssetCacheInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAssetCacheBPHooks() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks_NoRegister();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister();
	RUNTIMEASSETCACHE_API UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature();
	RUNTIMEASSETCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FVoidPtrParam();
	UPackage* Z_Construct_UPackage__Script_RuntimeAssetCache();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeAssetCacheBPHooks::execPollAsynchronousCompletion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeAssetCacheBPHooks::PollAsynchronousCompletion(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBPHooks::execGetAsynchronousResults)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoidPtrParam*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetAsynchronousResults(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBPHooks::execWaitAsynchronousCompletion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeAssetCacheBPHooks::WaitAsynchronousCompletion(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBPHooks::execClearCache)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Bucket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeAssetCacheBPHooks::ClearCache(Z_Param_Bucket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBPHooks::execGetCacheSize)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Bucket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetCacheSize(Z_Param_Bucket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBPHooks::execGetAsynchronous)
	{
		P_GET_TINTERFACE(IRuntimeAssetCacheBuilder,Z_Param_CacheBuilder);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_CompletionDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetAsynchronous(Z_Param_CacheBuilder,FOnRuntimeAssetCacheAsyncComplete(Z_Param_Out_CompletionDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBPHooks::execGetSynchronous)
	{
		P_GET_TINTERFACE(IRuntimeAssetCacheBuilder,Z_Param_CacheBuilder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoidPtrParam*)Z_Param__Result=URuntimeAssetCacheBPHooks::GetSynchronous(Z_Param_CacheBuilder);
		P_NATIVE_END;
	}
	void URuntimeAssetCacheBPHooks::StaticRegisterNativesURuntimeAssetCacheBPHooks()
	{
		UClass* Class = URuntimeAssetCacheBPHooks::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCache", &URuntimeAssetCacheBPHooks::execClearCache },
			{ "GetAsynchronous", &URuntimeAssetCacheBPHooks::execGetAsynchronous },
			{ "GetAsynchronousResults", &URuntimeAssetCacheBPHooks::execGetAsynchronousResults },
			{ "GetCacheSize", &URuntimeAssetCacheBPHooks::execGetCacheSize },
			{ "GetSynchronous", &URuntimeAssetCacheBPHooks::execGetSynchronous },
			{ "PollAsynchronousCompletion", &URuntimeAssetCacheBPHooks::execPollAsynchronousCompletion },
			{ "WaitAsynchronousCompletion", &URuntimeAssetCacheBPHooks::execWaitAsynchronousCompletion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics
	{
		struct RuntimeAssetCacheBPHooks_eventClearCache_Parms
		{
			FName Bucket;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bucket;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::NewProp_Bucket = { "Bucket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventClearCache_Parms, Bucket), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeAssetCacheBPHooks_eventClearCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeAssetCacheBPHooks_eventClearCache_Parms), &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::NewProp_Bucket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBPHooks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBPHooks, nullptr, "ClearCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::RuntimeAssetCacheBPHooks_eventClearCache_Parms), Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics
	{
		struct RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms
		{
			TScriptInterface<IRuntimeAssetCacheBuilder> CacheBuilder;
			FScriptDelegate CompletionDelegate;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_CacheBuilder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_CompletionDelegate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_CacheBuilder = { "CacheBuilder", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms, CacheBuilder), Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_CompletionDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_CompletionDelegate = { "CompletionDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms, CompletionDelegate), Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_CompletionDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_CompletionDelegate_MetaData)) }; // 1805041406
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_CacheBuilder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_CompletionDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBPHooks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBPHooks, nullptr, "GetAsynchronous", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::RuntimeAssetCacheBPHooks_eventGetAsynchronous_Parms), Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics
	{
		struct RuntimeAssetCacheBPHooks_eventGetAsynchronousResults_Parms
		{
			int32 Handle;
			FVoidPtrParam ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetAsynchronousResults_Parms, Handle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetAsynchronousResults_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoidPtrParam, METADATA_PARAMS(nullptr, 0) }; // 1740488102
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBPHooks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBPHooks, nullptr, "GetAsynchronousResults", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::RuntimeAssetCacheBPHooks_eventGetAsynchronousResults_Parms), Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics
	{
		struct RuntimeAssetCacheBPHooks_eventGetCacheSize_Parms
		{
			FName Bucket;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bucket;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::NewProp_Bucket = { "Bucket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetCacheSize_Parms, Bucket), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetCacheSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::NewProp_Bucket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBPHooks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBPHooks, nullptr, "GetCacheSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::RuntimeAssetCacheBPHooks_eventGetCacheSize_Parms), Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics
	{
		struct RuntimeAssetCacheBPHooks_eventGetSynchronous_Parms
		{
			TScriptInterface<IRuntimeAssetCacheBuilder> CacheBuilder;
			FVoidPtrParam ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_CacheBuilder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::NewProp_CacheBuilder = { "CacheBuilder", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetSynchronous_Parms, CacheBuilder), Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventGetSynchronous_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoidPtrParam, METADATA_PARAMS(nullptr, 0) }; // 1740488102
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::NewProp_CacheBuilder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBPHooks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBPHooks, nullptr, "GetSynchronous", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::RuntimeAssetCacheBPHooks_eventGetSynchronous_Parms), Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics
	{
		struct RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms
		{
			int32 Handle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms, Handle), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms), &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBPHooks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBPHooks, nullptr, "PollAsynchronousCompletion", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::RuntimeAssetCacheBPHooks_eventPollAsynchronousCompletion_Parms), Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics
	{
		struct RuntimeAssetCacheBPHooks_eventWaitAsynchronousCompletion_Parms
		{
			int32 Handle;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBPHooks_eventWaitAsynchronousCompletion_Parms, Handle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBPHooks.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBPHooks, nullptr, "WaitAsynchronousCompletion", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::RuntimeAssetCacheBPHooks_eventWaitAsynchronousCompletion_Parms), Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeAssetCacheBPHooks);
	UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks_NoRegister()
	{
		return URuntimeAssetCacheBPHooks::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAssetCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_ClearCache, "ClearCache" }, // 3880364431
		{ &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronous, "GetAsynchronous" }, // 2116472683
		{ &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetAsynchronousResults, "GetAsynchronousResults" }, // 2583931233
		{ &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetCacheSize, "GetCacheSize" }, // 1614397086
		{ &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_GetSynchronous, "GetSynchronous" }, // 154281708
		{ &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_PollAsynchronousCompletion, "PollAsynchronousCompletion" }, // 1017570127
		{ &Z_Construct_UFunction_URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion, "WaitAsynchronousCompletion" }, // 3533430285
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RuntimeAssetCacheBPHooks.h" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBPHooks.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAssetCacheBPHooks>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics::ClassParams = {
		&URuntimeAssetCacheBPHooks::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeAssetCacheBPHooks()
	{
		if (!Z_Registration_Info_UClass_URuntimeAssetCacheBPHooks.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeAssetCacheBPHooks.OuterSingleton, Z_Construct_UClass_URuntimeAssetCacheBPHooks_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeAssetCacheBPHooks.OuterSingleton;
	}
	template<> RUNTIMEASSETCACHE_API UClass* StaticClass<URuntimeAssetCacheBPHooks>()
	{
		return URuntimeAssetCacheBPHooks::StaticClass();
	}
	URuntimeAssetCacheBPHooks::URuntimeAssetCacheBPHooks(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAssetCacheBPHooks);
	URuntimeAssetCacheBPHooks::~URuntimeAssetCacheBPHooks() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeAssetCacheBPHooks, URuntimeAssetCacheBPHooks::StaticClass, TEXT("URuntimeAssetCacheBPHooks"), &Z_Registration_Info_UClass_URuntimeAssetCacheBPHooks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeAssetCacheBPHooks), 1282894007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_1471331096(TEXT("/Script/RuntimeAssetCache"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBPHooks_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
