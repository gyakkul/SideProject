// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Private/AsyncActionLoadPrimaryAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionLoadPrimaryAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAsyncActionLoadPrimaryAssetBase::StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionLoadPrimaryAssetBase);
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class of all asset manager load calls */" },
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Base class of all asset manager load calls" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAssetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.OuterSingleton, Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncActionLoadPrimaryAssetBase>()
	{
		return UAsyncActionLoadPrimaryAssetBase::StaticClass();
	}
	UAsyncActionLoadPrimaryAssetBase::UAsyncActionLoadPrimaryAssetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetBase);
	UAsyncActionLoadPrimaryAssetBase::~UAsyncActionLoadPrimaryAssetBase() {}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPrimaryAssetLoaded_Parms
		{
			UObject* Loaded;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Loaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetLoaded_Parms, Loaded), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnPrimaryAssetLoaded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::_Script_Engine_eventOnPrimaryAssetLoaded_Parms), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPrimaryAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetLoaded, UObject* Loaded)
{
	struct _Script_Engine_eventOnPrimaryAssetLoaded_Parms
	{
		UObject* Loaded;
	};
	_Script_Engine_eventOnPrimaryAssetLoaded_Parms Parms;
	Parms.Loaded=Loaded;
	OnPrimaryAssetLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncActionLoadPrimaryAsset::execAsyncLoadPrimaryAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAsset);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LoadBundles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionLoadPrimaryAsset**)Z_Param__Result=UAsyncActionLoadPrimaryAsset::AsyncLoadPrimaryAsset(Z_Param_WorldContextObject,Z_Param_PrimaryAsset,Z_Param_Out_LoadBundles);
		P_NATIVE_END;
	}
	void UAsyncActionLoadPrimaryAsset::StaticRegisterNativesUAsyncActionLoadPrimaryAsset()
	{
		UClass* Class = UAsyncActionLoadPrimaryAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAsset", &UAsyncActionLoadPrimaryAsset::execAsyncLoadPrimaryAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics
	{
		struct AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms
		{
			UObject* WorldContextObject;
			FPrimaryAssetId PrimaryAsset;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAsset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadBundles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_PrimaryAsset = { "PrimaryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, PrimaryAsset), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_Inner = { "LoadBundles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles = { "LoadBundles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, LoadBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_PrimaryAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoadBundles" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "Comment", "/** \n\x09 * Load a primary asset object into memory, this will cause it to stay loaded until it is explicitly unloaded.\n\x09 * The completed event will happen when the load succeeds or fails, you should cast the Loaded object to verify it is the correct type.\n\x09 * If LoadBundles is specified, those bundles are loaded along with the asset.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Load a primary asset object into memory, this will cause it to stay loaded until it is explicitly unloaded.\nThe completed event will happen when the load succeeds or fails, you should cast the Loaded object to verify it is the correct type.\nIf LoadBundles is specified, those bundles are loaded along with the asset." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAsset, nullptr, "AsyncLoadPrimaryAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms), Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionLoadPrimaryAsset);
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister()
	{
		return UAsyncActionLoadPrimaryAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset, "AsyncLoadPrimaryAsset" }, // 3687228585
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAsset, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed_MetaData)) }; // 3337261974
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.OuterSingleton, Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncActionLoadPrimaryAsset>()
	{
		return UAsyncActionLoadPrimaryAsset::StaticClass();
	}
	UAsyncActionLoadPrimaryAsset::UAsyncActionLoadPrimaryAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAsset);
	UAsyncActionLoadPrimaryAsset::~UAsyncActionLoadPrimaryAsset() {}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPrimaryAssetClassLoaded_Parms
		{
			TSubclassOf<UObject>  Loaded;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Loaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetClassLoaded_Parms, Loaded), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnPrimaryAssetClassLoaded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::_Script_Engine_eventOnPrimaryAssetClassLoaded_Parms), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPrimaryAssetClassLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetClassLoaded, TSubclassOf<UObject>  Loaded)
{
	struct _Script_Engine_eventOnPrimaryAssetClassLoaded_Parms
	{
		TSubclassOf<UObject>  Loaded;
	};
	_Script_Engine_eventOnPrimaryAssetClassLoaded_Parms Parms;
	Parms.Loaded=Loaded;
	OnPrimaryAssetClassLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncActionLoadPrimaryAssetClass::execAsyncLoadPrimaryAssetClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_PrimaryAsset);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LoadBundles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionLoadPrimaryAssetClass**)Z_Param__Result=UAsyncActionLoadPrimaryAssetClass::AsyncLoadPrimaryAssetClass(Z_Param_WorldContextObject,Z_Param_PrimaryAsset,Z_Param_Out_LoadBundles);
		P_NATIVE_END;
	}
	void UAsyncActionLoadPrimaryAssetClass::StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetClass", &UAsyncActionLoadPrimaryAssetClass::execAsyncLoadPrimaryAssetClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics
	{
		struct AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms
		{
			UObject* WorldContextObject;
			FPrimaryAssetId PrimaryAsset;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetClass* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAsset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadBundles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_PrimaryAsset = { "PrimaryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, PrimaryAsset), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_Inner = { "LoadBundles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles = { "LoadBundles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, LoadBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_PrimaryAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoadBundles" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "Comment", "/**\n\x09 * Load a primary asset class  into memory, this will cause it to stay loaded until it is explicitly unloaded.\n\x09 * The completed event will happen when the load succeeds or fails, you should cast the Loaded class to verify it is the correct type.\n\x09 * If LoadBundles is specified, those bundles are loaded along with the asset.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Load a primary asset class  into memory, this will cause it to stay loaded until it is explicitly unloaded.\nThe completed event will happen when the load succeeds or fails, you should cast the Loaded class to verify it is the correct type.\nIf LoadBundles is specified, those bundles are loaded along with the asset." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass, nullptr, "AsyncLoadPrimaryAssetClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms), Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionLoadPrimaryAssetClass);
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetClass::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass, "AsyncLoadPrimaryAssetClass" }, // 2206263018
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetClass, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed_MetaData)) }; // 3659802328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAssetClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.OuterSingleton, Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncActionLoadPrimaryAssetClass>()
	{
		return UAsyncActionLoadPrimaryAssetClass::StaticClass();
	}
	UAsyncActionLoadPrimaryAssetClass::UAsyncActionLoadPrimaryAssetClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetClass);
	UAsyncActionLoadPrimaryAssetClass::~UAsyncActionLoadPrimaryAssetClass() {}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPrimaryAssetListLoaded_Parms
		{
			TArray<UObject*> Loaded;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Loaded_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loaded_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Loaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_Inner = { "Loaded", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetListLoaded_Parms, Loaded), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnPrimaryAssetListLoaded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::_Script_Engine_eventOnPrimaryAssetListLoaded_Parms), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPrimaryAssetListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetListLoaded, TArray<UObject*> const& Loaded)
{
	struct _Script_Engine_eventOnPrimaryAssetListLoaded_Parms
	{
		TArray<UObject*> Loaded;
	};
	_Script_Engine_eventOnPrimaryAssetListLoaded_Parms Parms;
	Parms.Loaded=Loaded;
	OnPrimaryAssetListLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncActionLoadPrimaryAssetList::execAsyncLoadPrimaryAssetList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_PrimaryAssetList);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LoadBundles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionLoadPrimaryAssetList**)Z_Param__Result=UAsyncActionLoadPrimaryAssetList::AsyncLoadPrimaryAssetList(Z_Param_WorldContextObject,Z_Param_Out_PrimaryAssetList,Z_Param_Out_LoadBundles);
		P_NATIVE_END;
	}
	void UAsyncActionLoadPrimaryAssetList::StaticRegisterNativesUAsyncActionLoadPrimaryAssetList()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetList", &UAsyncActionLoadPrimaryAssetList::execAsyncLoadPrimaryAssetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics
	{
		struct AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms
		{
			UObject* WorldContextObject;
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetList* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadBundles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_Inner = { "PrimaryAssetList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList = { "PrimaryAssetList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, PrimaryAssetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_Inner = { "LoadBundles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles = { "LoadBundles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, LoadBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoadBundles" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "Comment", "/**\n\x09 * Load a list of primary asset objects into memory, this will cause them to stay loaded until explicitly unloaded.\n\x09 * The completed event will happen when the load succeeds or fails, and the Loaded list will contain all of the requested assets found at completion.\n\x09 * If LoadBundles is specified, those bundles are loaded along with the assets.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Load a list of primary asset objects into memory, this will cause them to stay loaded until explicitly unloaded.\nThe completed event will happen when the load succeeds or fails, and the Loaded list will contain all of the requested assets found at completion.\nIf LoadBundles is specified, those bundles are loaded along with the assets." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList, nullptr, "AsyncLoadPrimaryAssetList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms), Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionLoadPrimaryAssetList);
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetList::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList, "AsyncLoadPrimaryAssetList" }, // 2508864326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetList, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed_MetaData)) }; // 2396891278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAssetList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.OuterSingleton, Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncActionLoadPrimaryAssetList>()
	{
		return UAsyncActionLoadPrimaryAssetList::StaticClass();
	}
	UAsyncActionLoadPrimaryAssetList::UAsyncActionLoadPrimaryAssetList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetList);
	UAsyncActionLoadPrimaryAssetList::~UAsyncActionLoadPrimaryAssetList() {}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms
		{
			TArray<TSubclassOf<UObject> > Loaded;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Loaded_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loaded_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Loaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_Inner = { "Loaded", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms, Loaded), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnPrimaryAssetClassListLoaded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::_Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPrimaryAssetClassListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetClassListLoaded, TArray<TSubclassOf<UObject> > const& Loaded)
{
	struct _Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms
	{
		TArray<TSubclassOf<UObject> > Loaded;
	};
	_Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms Parms;
	Parms.Loaded=Loaded;
	OnPrimaryAssetClassListLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncActionLoadPrimaryAssetClassList::execAsyncLoadPrimaryAssetClassList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_PrimaryAssetList);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LoadBundles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionLoadPrimaryAssetClassList**)Z_Param__Result=UAsyncActionLoadPrimaryAssetClassList::AsyncLoadPrimaryAssetClassList(Z_Param_WorldContextObject,Z_Param_Out_PrimaryAssetList,Z_Param_Out_LoadBundles);
		P_NATIVE_END;
	}
	void UAsyncActionLoadPrimaryAssetClassList::StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetClassList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetClassList", &UAsyncActionLoadPrimaryAssetClassList::execAsyncLoadPrimaryAssetClassList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics
	{
		struct AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms
		{
			UObject* WorldContextObject;
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetClassList* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadBundles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_Inner = { "PrimaryAssetList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList = { "PrimaryAssetList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, PrimaryAssetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_Inner = { "LoadBundles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles = { "LoadBundles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, LoadBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoadBundles" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "Comment", "/**\n\x09 * Load a list of primary asset classes into memory, this will cause them to stay loaded until explicitly unloaded.\n\x09 * The completed event will happen when the load succeeds or fails, and the Loaded list will contain all of the requested classes found at completion.\n\x09 * If LoadBundles is specified, those bundles are loaded along with the assets.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Load a list of primary asset classes into memory, this will cause them to stay loaded until explicitly unloaded.\nThe completed event will happen when the load succeeds or fails, and the Loaded list will contain all of the requested classes found at completion.\nIf LoadBundles is specified, those bundles are loaded along with the assets." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList, nullptr, "AsyncLoadPrimaryAssetClassList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms), Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionLoadPrimaryAssetClassList);
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetClassList::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList, "AsyncLoadPrimaryAssetClassList" }, // 481731541
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetClassList, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed_MetaData)) }; // 507605228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetClassList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAssetClassList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.OuterSingleton, Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncActionLoadPrimaryAssetClassList>()
	{
		return UAsyncActionLoadPrimaryAssetClassList::StaticClass();
	}
	UAsyncActionLoadPrimaryAssetClassList::UAsyncActionLoadPrimaryAssetClassList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetClassList);
	UAsyncActionLoadPrimaryAssetClassList::~UAsyncActionLoadPrimaryAssetClassList() {}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnPrimaryAssetBundlesChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPrimaryAssetBundlesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetBundlesChanged)
{
	OnPrimaryAssetBundlesChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForPrimaryAssetList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FPrimaryAssetId,Z_Param_Out_PrimaryAssetList);
		P_GET_TARRAY_REF(FName,Z_Param_Out_AddBundles);
		P_GET_TARRAY_REF(FName,Z_Param_Out_RemoveBundles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionChangePrimaryAssetBundles**)Z_Param__Result=UAsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForPrimaryAssetList(Z_Param_WorldContextObject,Z_Param_Out_PrimaryAssetList,Z_Param_Out_AddBundles,Z_Param_Out_RemoveBundles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForMatchingPrimaryAssets)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FName,Z_Param_Out_NewBundles);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OldBundles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionChangePrimaryAssetBundles**)Z_Param__Result=UAsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForMatchingPrimaryAssets(Z_Param_WorldContextObject,Z_Param_Out_NewBundles,Z_Param_Out_OldBundles);
		P_NATIVE_END;
	}
	void UAsyncActionChangePrimaryAssetBundles::StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles()
	{
		UClass* Class = UAsyncActionChangePrimaryAssetBundles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncChangeBundleStateForMatchingPrimaryAssets", &UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForMatchingPrimaryAssets },
			{ "AsyncChangeBundleStateForPrimaryAssetList", &UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForPrimaryAssetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics
	{
		struct AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms
		{
			UObject* WorldContextObject;
			TArray<FName> NewBundles;
			TArray<FName> OldBundles;
			UAsyncActionChangePrimaryAssetBundles* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewBundles;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OldBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OldBundles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_Inner = { "NewBundles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles = { "NewBundles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, NewBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_Inner = { "OldBundles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles = { "OldBundles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, OldBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "Comment", "/**\n\x09 * Change the bundle state of all assets that match OldBundles to instead contain NewBundles.\n\x09 * This will not change the loaded status of primary assets but will load or unload secondary assets based on the bundles.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Change the bundle state of all assets that match OldBundles to instead contain NewBundles.\nThis will not change the loaded status of primary assets but will load or unload secondary assets based on the bundles." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, nullptr, "AsyncChangeBundleStateForMatchingPrimaryAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms), Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics
	{
		struct AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms
		{
			UObject* WorldContextObject;
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> AddBundles;
			TArray<FName> RemoveBundles;
			UAsyncActionChangePrimaryAssetBundles* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AddBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddBundles;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RemoveBundles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveBundles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoveBundles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_Inner = { "PrimaryAssetList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList = { "PrimaryAssetList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, PrimaryAssetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_Inner = { "AddBundles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles = { "AddBundles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, AddBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_Inner = { "RemoveBundles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles = { "RemoveBundles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, RemoveBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "Comment", "/**\n\x09 * Change the bundle state of specific assets in PrimaryAssetList. \n\x09 * AddBundles are added to the final state and RemoveBundles are removed, an empty array will make no change.\n\x09 * This will not change the loaded status of primary assets but will load or unload secondary assets based on the bundles.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Change the bundle state of specific assets in PrimaryAssetList.\nAddBundles are added to the final state and RemoveBundles are removed, an empty array will make no change.\nThis will not change the loaded status of primary assets but will load or unload secondary assets based on the bundles." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, nullptr, "AsyncChangeBundleStateForPrimaryAssetList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms), Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionChangePrimaryAssetBundles);
	UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister()
	{
		return UAsyncActionChangePrimaryAssetBundles::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets, "AsyncChangeBundleStateForMatchingPrimaryAssets" }, // 3055256942
		{ &Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList, "AsyncChangeBundleStateForPrimaryAssetList" }, // 2984387084
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionChangePrimaryAssetBundles, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed_MetaData)) }; // 4055785006
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionChangePrimaryAssetBundles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::ClassParams = {
		&UAsyncActionChangePrimaryAssetBundles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.OuterSingleton, Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncActionChangePrimaryAssetBundles>()
	{
		return UAsyncActionChangePrimaryAssetBundles::StaticClass();
	}
	UAsyncActionChangePrimaryAssetBundles::UAsyncActionChangePrimaryAssetBundles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionChangePrimaryAssetBundles);
	UAsyncActionChangePrimaryAssetBundles::~UAsyncActionChangePrimaryAssetBundles() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase, UAsyncActionLoadPrimaryAssetBase::StaticClass, TEXT("UAsyncActionLoadPrimaryAssetBase"), &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionLoadPrimaryAssetBase), 2557466210U) },
		{ Z_Construct_UClass_UAsyncActionLoadPrimaryAsset, UAsyncActionLoadPrimaryAsset::StaticClass, TEXT("UAsyncActionLoadPrimaryAsset"), &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionLoadPrimaryAsset), 321058766U) },
		{ Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass, UAsyncActionLoadPrimaryAssetClass::StaticClass, TEXT("UAsyncActionLoadPrimaryAssetClass"), &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionLoadPrimaryAssetClass), 2099485828U) },
		{ Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList, UAsyncActionLoadPrimaryAssetList::StaticClass, TEXT("UAsyncActionLoadPrimaryAssetList"), &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionLoadPrimaryAssetList), 2537523335U) },
		{ Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList, UAsyncActionLoadPrimaryAssetClassList::StaticClass, TEXT("UAsyncActionLoadPrimaryAssetClassList"), &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionLoadPrimaryAssetClassList), 34276790U) },
		{ Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, UAsyncActionChangePrimaryAssetBundles::StaticClass, TEXT("UAsyncActionChangePrimaryAssetBundles"), &Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionChangePrimaryAssetBundles), 4291340599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_3804316480(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
