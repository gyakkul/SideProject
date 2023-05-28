// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAssetCacheInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAssetCacheInterface() {}
// Cross Module References
	RUNTIMEASSETCACHE_API UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature();
	RUNTIMEASSETCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FVoidPtrParam();
	UPackage* Z_Construct_UPackage__Script_RuntimeAssetCache();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoidPtrParam;
class UScriptStruct* FVoidPtrParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoidPtrParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoidPtrParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoidPtrParam, (UObject*)Z_Construct_UPackage__Script_RuntimeAssetCache(), TEXT("VoidPtrParam"));
	}
	return Z_Registration_Info_UScriptStruct_VoidPtrParam.OuterSingleton;
}
template<> RUNTIMEASSETCACHE_API UScriptStruct* StaticStruct<FVoidPtrParam>()
{
	return FVoidPtrParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoidPtrParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoidPtrParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Useful for passing around void* data and size\n*/" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheInterface.h" },
		{ "ToolTip", "Useful for passing around void* data and size" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoidPtrParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoidPtrParam>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoidPtrParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAssetCache,
		nullptr,
		&NewStructOps,
		"VoidPtrParam",
		sizeof(FVoidPtrParam),
		alignof(FVoidPtrParam),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoidPtrParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoidPtrParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoidPtrParam()
	{
		if (!Z_Registration_Info_UScriptStruct_VoidPtrParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoidPtrParam.InnerSingleton, Z_Construct_UScriptStruct_FVoidPtrParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoidPtrParam.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics
	{
		struct _Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms
		{
			int32 Handle;
			FVoidPtrParam Data;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms, Handle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms, Data), Z_Construct_UScriptStruct_FVoidPtrParam, METADATA_PARAMS(nullptr, 0) }; // 1740488102
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegates. */" },
		{ "ModuleRelativePath", "Public/RuntimeAssetCacheInterface.h" },
		{ "ToolTip", "Delegates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAssetCache, nullptr, "OnRuntimeAssetCacheAsyncComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::_Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms), Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAssetCache_OnRuntimeAssetCacheAsyncComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRuntimeAssetCacheAsyncComplete_DelegateWrapper(const FScriptDelegate& OnRuntimeAssetCacheAsyncComplete, int32 Handle, FVoidPtrParam Data)
{
	struct _Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms
	{
		int32 Handle;
		FVoidPtrParam Data;
	};
	_Script_RuntimeAssetCache_eventOnRuntimeAssetCacheAsyncComplete_Parms Parms;
	Parms.Handle=Handle;
	Parms.Data=Data;
	OnRuntimeAssetCacheAsyncComplete.ProcessDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheInterface_h_Statics::ScriptStructInfo[] = {
		{ FVoidPtrParam::StaticStruct, Z_Construct_UScriptStruct_FVoidPtrParam_Statics::NewStructOps, TEXT("VoidPtrParam"), &Z_Registration_Info_UScriptStruct_VoidPtrParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoidPtrParam), 1740488102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheInterface_h_709629195(TEXT("/Script/RuntimeAssetCache"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
