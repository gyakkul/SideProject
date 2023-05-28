// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionReplicatedManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionReplicatedManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_ANetworkPredictionReplicatedManager();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FSharedPackageMap();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FSharedPackageMapItem();
	UPackage* Z_Construct_UPackage__Script_NetworkPrediction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SharedPackageMapItem;
class UScriptStruct* FSharedPackageMapItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SharedPackageMapItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SharedPackageMapItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedPackageMapItem, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("SharedPackageMapItem"));
	}
	return Z_Registration_Info_UScriptStruct_SharedPackageMapItem.OuterSingleton;
}
template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<FSharedPackageMapItem>()
{
	return FSharedPackageMapItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This is a replicated \"manager\" for network prediction. Its purpose is only to replicate system-wide data that is not bound to an actor.\n// Currently this is only to house a \"mini packagemap\" which allows stable shared indices that map to a small set of uobjects to be.\n// UPackageMap can assign per-client net indices which invalidates sharing as well as forces 32 bit guis. this is a more specialzed case\n// where we want to replicate IDs as btyes.\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionReplicatedManager.h" },
		{ "ToolTip", "This is a replicated \"manager\" for network prediction. Its purpose is only to replicate system-wide data that is not bound to an actor.\nCurrently this is only to house a \"mini packagemap\" which allows stable shared indices that map to a small set of uobjects to be.\nUPackageMap can assign per-client net indices which invalidates sharing as well as forces 32 bit guis. this is a more specialzed case\nwhere we want to replicate IDs as btyes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedPackageMapItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::NewProp_SoftPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionReplicatedManager.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::NewProp_SoftPtr = { "SoftPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSharedPackageMapItem, SoftPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::NewProp_SoftPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::NewProp_SoftPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::NewProp_SoftPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		&NewStructOps,
		"SharedPackageMapItem",
		sizeof(FSharedPackageMapItem),
		alignof(FSharedPackageMapItem),
		Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedPackageMapItem()
	{
		if (!Z_Registration_Info_UScriptStruct_SharedPackageMapItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SharedPackageMapItem.InnerSingleton, Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SharedPackageMapItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SharedPackageMap;
class UScriptStruct* FSharedPackageMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SharedPackageMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SharedPackageMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedPackageMap, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("SharedPackageMap"));
	}
	return Z_Registration_Info_UScriptStruct_SharedPackageMap.OuterSingleton;
}
template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<FSharedPackageMap>()
{
	return FSharedPackageMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSharedPackageMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedPackageMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionReplicatedManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedPackageMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSharedPackageMapItem, METADATA_PARAMS(nullptr, 0) }; // 2590204482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionReplicatedManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSharedPackageMap, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewProp_Items_MetaData)) }; // 2590204482
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedPackageMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedPackageMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		&NewStructOps,
		"SharedPackageMap",
		sizeof(FSharedPackageMap),
		alignof(FSharedPackageMap),
		Z_Construct_UScriptStruct_FSharedPackageMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedPackageMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedPackageMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedPackageMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedPackageMap()
	{
		if (!Z_Registration_Info_UScriptStruct_SharedPackageMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SharedPackageMap.InnerSingleton, Z_Construct_UScriptStruct_FSharedPackageMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SharedPackageMap.InnerSingleton;
	}
	void ANetworkPredictionReplicatedManager::StaticRegisterNativesANetworkPredictionReplicatedManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkPredictionReplicatedManager);
	UClass* Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister()
	{
		return ANetworkPredictionReplicatedManager::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedPackageMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedPackageMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetworkPredictionReplicatedManager.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionReplicatedManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::NewProp_SharedPackageMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionReplicatedManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::NewProp_SharedPackageMap = { "SharedPackageMap", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetworkPredictionReplicatedManager, SharedPackageMap), Z_Construct_UScriptStruct_FSharedPackageMap, METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::NewProp_SharedPackageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::NewProp_SharedPackageMap_MetaData)) }; // 4287329222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::NewProp_SharedPackageMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkPredictionReplicatedManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::ClassParams = {
		&ANetworkPredictionReplicatedManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkPredictionReplicatedManager()
	{
		if (!Z_Registration_Info_UClass_ANetworkPredictionReplicatedManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkPredictionReplicatedManager.OuterSingleton, Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetworkPredictionReplicatedManager.OuterSingleton;
	}
	template<> NETWORKPREDICTION_API UClass* StaticClass<ANetworkPredictionReplicatedManager>()
	{
		return ANetworkPredictionReplicatedManager::StaticClass();
	}

	void ANetworkPredictionReplicatedManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SharedPackageMap(TEXT("SharedPackageMap"));

		const bool bIsValid = true
			&& Name_SharedPackageMap == ClassReps[(int32)ENetFields_Private::SharedPackageMap].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetworkPredictionReplicatedManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkPredictionReplicatedManager);
	ANetworkPredictionReplicatedManager::~ANetworkPredictionReplicatedManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_Statics::ScriptStructInfo[] = {
		{ FSharedPackageMapItem::StaticStruct, Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics::NewStructOps, TEXT("SharedPackageMapItem"), &Z_Registration_Info_UScriptStruct_SharedPackageMapItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedPackageMapItem), 2590204482U) },
		{ FSharedPackageMap::StaticStruct, Z_Construct_UScriptStruct_FSharedPackageMap_Statics::NewStructOps, TEXT("SharedPackageMap"), &Z_Registration_Info_UScriptStruct_SharedPackageMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedPackageMap), 4287329222U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkPredictionReplicatedManager, ANetworkPredictionReplicatedManager::StaticClass, TEXT("ANetworkPredictionReplicatedManager"), &Z_Registration_Info_UClass_ANetworkPredictionReplicatedManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkPredictionReplicatedManager), 3500343610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_4220225868(TEXT("/Script/NetworkPrediction"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
