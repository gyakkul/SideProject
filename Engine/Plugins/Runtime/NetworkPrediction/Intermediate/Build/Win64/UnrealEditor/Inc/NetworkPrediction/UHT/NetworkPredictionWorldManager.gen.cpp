// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionWorldManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionWorldManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionWorldManager();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionWorldManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkPrediction();
// End Cross Module References
	void UNetworkPredictionWorldManager::StaticRegisterNativesUNetworkPredictionWorldManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPredictionWorldManager);
	UClass* Z_Construct_UClass_UNetworkPredictionWorldManager_NoRegister()
	{
		return UNetworkPredictionWorldManager::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkPredictionWorldManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicatedManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetworkPredictionWorldManager.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionWorldManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::NewProp_ReplicatedManager_MetaData[] = {
		{ "Comment", "// Server created, replicated manager (only used for centralized/system wide data replication)\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionWorldManager.h" },
		{ "ToolTip", "Server created, replicated manager (only used for centralized/system wide data replication)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::NewProp_ReplicatedManager = { "ReplicatedManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionWorldManager, ReplicatedManager), Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::NewProp_ReplicatedManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::NewProp_ReplicatedManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::NewProp_ReplicatedManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkPredictionWorldManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::ClassParams = {
		&UNetworkPredictionWorldManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkPredictionWorldManager()
	{
		if (!Z_Registration_Info_UClass_UNetworkPredictionWorldManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPredictionWorldManager.OuterSingleton, Z_Construct_UClass_UNetworkPredictionWorldManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetworkPredictionWorldManager.OuterSingleton;
	}
	template<> NETWORKPREDICTION_API UClass* StaticClass<UNetworkPredictionWorldManager>()
	{
		return UNetworkPredictionWorldManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPredictionWorldManager);
	UNetworkPredictionWorldManager::~UNetworkPredictionWorldManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkPredictionWorldManager, UNetworkPredictionWorldManager::StaticClass, TEXT("UNetworkPredictionWorldManager"), &Z_Registration_Info_UClass_UNetworkPredictionWorldManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPredictionWorldManager), 2778703259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_2124757131(TEXT("/Script/NetworkPrediction"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
