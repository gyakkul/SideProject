// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMPartitionInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMPartitionInstanceManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UISMPartitionInstanceManager();
	ENGINE_API UClass* Z_Construct_UClass_UISMPartitionInstanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UISMPartitionInstanceManagerProvider();
	ENGINE_API UClass* Z_Construct_UClass_UISMPartitionInstanceManagerProvider_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMClientInstanceManagerData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UISMPartitionInstanceManager::StaticRegisterNativesUISMPartitionInstanceManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMPartitionInstanceManager);
	UClass* Z_Construct_UClass_UISMPartitionInstanceManager_NoRegister()
	{
		return UISMPartitionInstanceManager::StaticClass();
	}
	struct Z_Construct_UClass_UISMPartitionInstanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISMPartitionInstanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMPartitionInstanceManager_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionInstanceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISMPartitionInstanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISMPartitionInstanceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMPartitionInstanceManager_Statics::ClassParams = {
		&UISMPartitionInstanceManager::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UISMPartitionInstanceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISMPartitionInstanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISMPartitionInstanceManager()
	{
		if (!Z_Registration_Info_UClass_UISMPartitionInstanceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMPartitionInstanceManager.OuterSingleton, Z_Construct_UClass_UISMPartitionInstanceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISMPartitionInstanceManager.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UISMPartitionInstanceManager>()
	{
		return UISMPartitionInstanceManager::StaticClass();
	}
	UISMPartitionInstanceManager::UISMPartitionInstanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISMPartitionInstanceManager);
	UISMPartitionInstanceManager::~UISMPartitionInstanceManager() {}
	void UISMPartitionInstanceManagerProvider::StaticRegisterNativesUISMPartitionInstanceManagerProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMPartitionInstanceManagerProvider);
	UClass* Z_Construct_UClass_UISMPartitionInstanceManagerProvider_NoRegister()
	{
		return UISMPartitionInstanceManagerProvider::StaticClass();
	}
	struct Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionInstanceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISMPartitionInstanceManagerProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics::ClassParams = {
		&UISMPartitionInstanceManagerProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISMPartitionInstanceManagerProvider()
	{
		if (!Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.OuterSingleton, Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UISMPartitionInstanceManagerProvider>()
	{
		return UISMPartitionInstanceManagerProvider::StaticClass();
	}
	UISMPartitionInstanceManagerProvider::UISMPartitionInstanceManagerProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISMPartitionInstanceManagerProvider);
	UISMPartitionInstanceManagerProvider::~UISMPartitionInstanceManagerProvider() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMClientInstanceManagerData;
class UScriptStruct* FISMClientInstanceManagerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMClientInstanceManagerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMClientInstanceManagerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMClientInstanceManagerData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMClientInstanceManagerData"));
	}
	return Z_Registration_Info_UScriptStruct_ISMClientInstanceManagerData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMClientInstanceManagerData>()
{
	return FISMClientInstanceManagerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionInstanceManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMClientInstanceManagerData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ISMClientInstanceManagerData",
		sizeof(FISMClientInstanceManagerData),
		alignof(FISMClientInstanceManagerData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMClientInstanceManagerData()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMClientInstanceManagerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMClientInstanceManagerData.InnerSingleton, Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMClientInstanceManagerData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_Statics::ScriptStructInfo[] = {
		{ FISMClientInstanceManagerData::StaticStruct, Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics::NewStructOps, TEXT("ISMClientInstanceManagerData"), &Z_Registration_Info_UScriptStruct_ISMClientInstanceManagerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMClientInstanceManagerData), 612431242U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISMPartitionInstanceManager, UISMPartitionInstanceManager::StaticClass, TEXT("UISMPartitionInstanceManager"), &Z_Registration_Info_UClass_UISMPartitionInstanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMPartitionInstanceManager), 986743953U) },
		{ Z_Construct_UClass_UISMPartitionInstanceManagerProvider, UISMPartitionInstanceManagerProvider::StaticClass, TEXT("UISMPartitionInstanceManagerProvider"), &Z_Registration_Info_UClass_UISMPartitionInstanceManagerProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMPartitionInstanceManagerProvider), 3041798090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_1949953226(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
