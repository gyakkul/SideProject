// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAssetCacheBuilders.h"
#include "RuntimeAssetCacheInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAssetCacheBuilders() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_UExampleTextureCacheBuilder();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_UExampleTextureCacheBuilder_NoRegister();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase();
	RUNTIMEASSETCACHE_API UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister();
	RUNTIMEASSETCACHE_API UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature();
	RUNTIMEASSETCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FVoidPtrParam();
	UPackage* Z_Construct_UPackage__Script_RuntimeAssetCache();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics
	{
		struct _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms
		{
			URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder;
			bool Success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedAssetBuilder;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::NewProp_CachedAssetBuilder = { "CachedAssetBuilder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms, CachedAssetBuilder), Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms), &Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::NewProp_CachedAssetBuilder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAssetCache, nullptr, "OnAssetCacheComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::_Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms), Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAssetCacheComplete_DelegateWrapper(const FScriptDelegate& OnAssetCacheComplete, URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder, bool Success)
{
	struct _Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms
	{
		URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder;
		bool Success;
	};
	_Script_RuntimeAssetCache_eventOnAssetCacheComplete_Parms Parms;
	Parms.CachedAssetBuilder=CachedAssetBuilder;
	Parms.Success=Success ? true : false;
	OnAssetCacheComplete.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(URuntimeAssetCacheBuilder_ObjectBase::execSaveNewAssetToCache)
	{
		P_GET_OBJECT(UObject,Z_Param_NewAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveNewAssetToCache(Z_Param_NewAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBuilder_ObjectBase::execOnAssetCacheMiss)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAssetCacheMiss_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBuilder_ObjectBase::execGetFromCacheAsyncComplete)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Handle);
		P_GET_STRUCT(FVoidPtrParam,Z_Param_DataPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFromCacheAsyncComplete(Z_Param_Handle,Z_Param_DataPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAssetCacheBuilder_ObjectBase::execGetFromCacheAsync)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFromCacheAsync(FOnAssetCacheComplete(Z_Param_Out_OnComplete));
		P_NATIVE_END;
	}
	static FName NAME_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss = FName(TEXT("OnAssetCacheMiss"));
	void URuntimeAssetCacheBuilder_ObjectBase::OnAssetCacheMiss()
	{
		ProcessEvent(FindFunctionChecked(NAME_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss),NULL);
	}
	void URuntimeAssetCacheBuilder_ObjectBase::StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase()
	{
		UClass* Class = URuntimeAssetCacheBuilder_ObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFromCacheAsync", &URuntimeAssetCacheBuilder_ObjectBase::execGetFromCacheAsync },
			{ "GetFromCacheAsyncComplete", &URuntimeAssetCacheBuilder_ObjectBase::execGetFromCacheAsyncComplete },
			{ "OnAssetCacheMiss", &URuntimeAssetCacheBuilder_ObjectBase::execOnAssetCacheMiss },
			{ "SaveNewAssetToCache", &URuntimeAssetCacheBuilder_ObjectBase::execSaveNewAssetToCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics
	{
		struct RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsync_Parms
		{
			FScriptDelegate OnComplete;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsync_Parms, OnComplete), Z_Construct_UDelegateFunction_RuntimeAssetCache_OnAssetCacheComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::NewProp_OnComplete_MetaData)) }; // 539236640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::NewProp_OnComplete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "Comment", "/**\n\x09 * Call this to get the asset named AssetName from the runtime asset cache.\n\x09 * If the asset does not exist on disk, then OnAssetCacheMiss will be called.\n\x09 * Implement OnAssetCacheMiss in order to create the asset that you want cached.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
		{ "ToolTip", "Call this to get the asset named AssetName from the runtime asset cache.\nIf the asset does not exist on disk, then OnAssetCacheMiss will be called.\nImplement OnAssetCacheMiss in order to create the asset that you want cached." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase, nullptr, "GetFromCacheAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsync_Parms), Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics
	{
		struct RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsyncComplete_Parms
		{
			int32 Handle;
			FVoidPtrParam DataPtr;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsyncComplete_Parms, Handle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::NewProp_DataPtr = { "DataPtr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsyncComplete_Parms, DataPtr), Z_Construct_UScriptStruct_FVoidPtrParam, METADATA_PARAMS(nullptr, 0) }; // 1740488102
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::NewProp_DataPtr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase, nullptr, "GetFromCacheAsyncComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::RuntimeAssetCacheBuilder_ObjectBase_eventGetFromCacheAsyncComplete_Parms), Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "Comment", "/**\n\x09 * When you get OnAssetCacheMiss you need to load/create the asset that is missing.\n\x09 * Call SaveNewAssetToCache after you're finished creating the asset to save it back into the cache for next time.\n\x09 * This will then trigger OnAssetCacheComplete like normal, so you don't need additional code to handle it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
		{ "ToolTip", "When you get OnAssetCacheMiss you need to load/create the asset that is missing.\nCall SaveNewAssetToCache after you're finished creating the asset to save it back into the cache for next time.\nThis will then trigger OnAssetCacheComplete like normal, so you don't need additional code to handle it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase, nullptr, "OnAssetCacheMiss", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics
	{
		struct RuntimeAssetCacheBuilder_ObjectBase_eventSaveNewAssetToCache_Parms
		{
			UObject* NewAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeAssetCacheBuilder_ObjectBase_eventSaveNewAssetToCache_Parms, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::NewProp_NewAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "Comment", "/**\n\x09 * Call SaveNewAssetToCache to save an asset back into the cache for next time.\n\x09 * This will then trigger OnAssetCacheComplete like normal, so you don't need additional code to handle it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
		{ "ToolTip", "Call SaveNewAssetToCache to save an asset back into the cache for next time.\nThis will then trigger OnAssetCacheComplete like normal, so you don't need additional code to handle it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase, nullptr, "SaveNewAssetToCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::RuntimeAssetCacheBuilder_ObjectBase_eventSaveNewAssetToCache_Parms), Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeAssetCacheBuilder_ObjectBase);
	UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_NoRegister()
	{
		return URuntimeAssetCacheBuilder_ObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAssetCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync, "GetFromCacheAsync" }, // 3063044538
		{ &Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete, "GetFromCacheAsyncComplete" }, // 2954243992
		{ &Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss, "OnAssetCacheMiss" }, // 1447752017
		{ &Z_Construct_UFunction_URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache, "SaveNewAssetToCache" }, // 3809270613
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RuntimeAssetCacheBuilders.h" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetVersion_MetaData[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "Comment", "/** The asset version. Changing this will force a new version of the asset to get cached. */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
		{ "ToolTip", "The asset version. Changing this will force a new version of the asset to get cached." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetVersion = { "AssetVersion", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeAssetCacheBuilder_ObjectBase, AssetVersion), METADATA_PARAMS(Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "RuntimeAssetCache" },
		{ "Comment", "/** The name of the asset. This should be unique per asset, and is used to look it up from the cache. This should be something that can be known without having Asset in memory (so we can look it up in the cache). */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
		{ "ToolTip", "The name of the asset. This should be unique per asset, and is used to look it up from the cache. This should be something that can be known without having Asset in memory (so we can look it up in the cache)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeAssetCacheBuilder_ObjectBase, AssetName), METADATA_PARAMS(Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::NewProp_AssetName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URuntimeAssetCacheBuilder_NoRegister, (int32)VTABLE_OFFSET(URuntimeAssetCacheBuilder_ObjectBase, IRuntimeAssetCacheBuilder), false },  // 2867644281
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAssetCacheBuilder_ObjectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::ClassParams = {
		&URuntimeAssetCacheBuilder_ObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase()
	{
		if (!Z_Registration_Info_UClass_URuntimeAssetCacheBuilder_ObjectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeAssetCacheBuilder_ObjectBase.OuterSingleton, Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeAssetCacheBuilder_ObjectBase.OuterSingleton;
	}
	template<> RUNTIMEASSETCACHE_API UClass* StaticClass<URuntimeAssetCacheBuilder_ObjectBase>()
	{
		return URuntimeAssetCacheBuilder_ObjectBase::StaticClass();
	}
	URuntimeAssetCacheBuilder_ObjectBase::URuntimeAssetCacheBuilder_ObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAssetCacheBuilder_ObjectBase);
	URuntimeAssetCacheBuilder_ObjectBase::~URuntimeAssetCacheBuilder_ObjectBase() {}
	void UExampleTextureCacheBuilder::StaticRegisterNativesUExampleTextureCacheBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExampleTextureCacheBuilder);
	UClass* Z_Construct_UClass_UExampleTextureCacheBuilder_NoRegister()
	{
		return UExampleTextureCacheBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UExampleTextureCacheBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAssetCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RuntimeAssetCacheBuilders.h" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheBuilders.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExampleTextureCacheBuilder, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleTextureCacheBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::ClassParams = {
		&UExampleTextureCacheBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExampleTextureCacheBuilder()
	{
		if (!Z_Registration_Info_UClass_UExampleTextureCacheBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExampleTextureCacheBuilder.OuterSingleton, Z_Construct_UClass_UExampleTextureCacheBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExampleTextureCacheBuilder.OuterSingleton;
	}
	template<> RUNTIMEASSETCACHE_API UClass* StaticClass<UExampleTextureCacheBuilder>()
	{
		return UExampleTextureCacheBuilder::StaticClass();
	}
	UExampleTextureCacheBuilder::UExampleTextureCacheBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleTextureCacheBuilder);
	UExampleTextureCacheBuilder::~UExampleTextureCacheBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase, URuntimeAssetCacheBuilder_ObjectBase::StaticClass, TEXT("URuntimeAssetCacheBuilder_ObjectBase"), &Z_Registration_Info_UClass_URuntimeAssetCacheBuilder_ObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeAssetCacheBuilder_ObjectBase), 820231034U) },
		{ Z_Construct_UClass_UExampleTextureCacheBuilder, UExampleTextureCacheBuilder::StaticClass, TEXT("UExampleTextureCacheBuilder"), &Z_Registration_Info_UClass_UExampleTextureCacheBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExampleTextureCacheBuilder), 2084031338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_3336889900(TEXT("/Script/RuntimeAssetCache"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
