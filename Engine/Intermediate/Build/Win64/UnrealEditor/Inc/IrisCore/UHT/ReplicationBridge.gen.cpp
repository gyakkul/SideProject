// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/ReplicationBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationBridge() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UReplicationBridge();
	IRISCORE_API UClass* Z_Construct_UClass_UReplicationBridge_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UReplicationBridge::StaticRegisterNativesUReplicationBridge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationBridge);
	UClass* Z_Construct_UClass_UReplicationBridge_NoRegister()
	{
		return UReplicationBridge::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationBridge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/ReplicationBridge.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ReplicationBridge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationBridge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationBridge_Statics::ClassParams = {
		&UReplicationBridge::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationBridge()
	{
		if (!Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton, Z_Construct_UClass_UReplicationBridge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationBridge.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UReplicationBridge>()
	{
		return UReplicationBridge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationBridge);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationBridge, UReplicationBridge::StaticClass, TEXT("UReplicationBridge"), &Z_Registration_Info_UClass_UReplicationBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationBridge), 1869547446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_1540502677(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ReplicationBridge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
